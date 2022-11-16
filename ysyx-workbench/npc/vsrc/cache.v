module cache (
    input clk,
    input rst,

    input [31:0]    inst_addr,
    input           inst_en,
    output [31:0]   inst_data,
    
    input           mem_stop,
    output          stop_all,
    input [31:0]    ext_data_addr,
    input [7:0]     ext_data_be,
    input           ext_data_wen,  
    input [63:0]    ext_data_write_data,
     
    output [63:0]   ext_cache_read_data,
// the following will be replaced by AXI
    output [511:0]   inst_in_data,
    output [31:0]   inst_read_addr,
    output          inst_read_req,

    output [1023:0]  ext_in_data,
    output [31:0]   ext_read_addr,
    output [31:0]   ext_write_addr,
    //output [1023:0] ext_out_data,
    output          ext_write_req,
    output          ext_read_req,
    input           inst_fence_i,

    output [3:0]    AWID,     
    output [31:0]   AWADDR,    
    output [7:0]    AWLEN,            
    output [2:0]    AWSIZE,             
    output [1:0]    AWBURST,           
    output          AWVALID,            
    
    input           AWREADY,           
    // w
    output [63:0]   WDATA,    
    output [7:0]    WSTRB,
    output          WLAST,            
    output          WVALID,          
    input           WREADY,            
    // b
    input  [3:0]    BID,     
    input  [1:0]    BRESP,          
    input           BVALID,        
    
    output          BREADY,  

    output  [31:0]  ARADDR,   
    output  [7:0]   ARLEN,          
    output  [2:0]   ARSIZE,            
    output  [1:0]   ARBURST,            
    output          ARVALID,     

    input           ARREADY,           
    // r

    input   [3:0]   RID,
    input   [63:0]  RDATA,   
    input   [1:0]   RRESP,                 
    input           RLAST,               
    input           RVALID,  

    output          RREADY,      
    output  [3:0]   ARID
);
wire read_shortcut_icache;
wire read_shortcut_dcache;
wire dcache_ready;
wire icache_ready;
wire icache_busy;
wire dcache_busy = (ext_read_req &&  (wdata_buffer_addr != ext_read_addr ) )|
                 //   (read_state != `READ_STATE_FREE && AXI_read_target == 2'b10)|
                    ( write_state != `WRITE_STATE_FREE);
assign icache_busy = read_state != `READ_STATE_FREE && AXI_read_target == 2'd1 ;  // overlap decache 
assign stop_all =   (read_state  != `READ_STATE_FREE) | dcache_busy;
/* rules :
ext_req has higher priority
if ext_write_req                stop icache 
if ext_req    && inst_req       stop icache
if inst_req already read data   disable dcache busy
all read and write              stop all

 */
Icache Icache
(
    .clk(clk),
    .rst(rst),
    .mem_stop(mem_stop),
    .dcache_busy(dcache_busy),
    .icache_valid(RVALID),
    .inst_in_data_32(RDATA),
    .inst_in_data_shortcut(wdata_buffer_data[511:0]),
    .inst_addr(inst_addr),
    .inst_en(inst_en),
    //input data_in_ready,
    .icache_ready(icache_ready),
    .read_shortcut(read_shortcut_icache),
    .inst_read_addr(inst_read_addr),
    .inst_read_req(inst_read_req),
    .inst_out_data(inst_data)
);
wire ext_en;
assign ext_en =  ext_data_be != 8'd0;
//wire dcache_write_ready;
wire [1023:0] ext_out_write_data;
Dcache Dcache
(
    .clk(clk),
    .rst(rst),

    .inst_fence_i(inst_fence_i),
    .icache_busy(icache_busy),
    .ext_in_addr(ext_data_addr),
    .ext_data_be(ext_data_be),        
    .ext_en(ext_en),             //read enable
    .ext_wen(ext_data_wen),            //write enable
    .ext_in_write_data(ext_data_write_data),   //in cpu write data
    //input data_in_ready,
    // .dcache_write_busy(dcache_write_busy),
    // .dcache_read_busy(dcache_read_busy),
    .dcache_ready(dcache_ready),
  //  .dcache_write_ready(dcache_write_ready),
    .read_shortcut_dcache(read_shortcut_dcache),
    .ext_in_read_data(ext_in_data),   //mem to cache data
    .dcache_valid(RVALID),
    .ext_in_data_64(RDATA),
    .ext_out_read_data(ext_cache_read_data),      //cpu read date

    .ext_out_write_data(ext_out_write_data),           //cache to mem data
    .ext_out_write_addr(ext_write_addr),     //cache to mem write addr
    .ext_out_read_addr(ext_read_addr),      //cache to mem read addr
    .ext_write_req(ext_write_req),          //cache to mem write enable
    .ext_read_req(ext_read_req)            //cache to mem read enable  caution: write enable could be called meanwhile read enable

);
reg [1023:0] rdata_buffer_data;
reg [31:0] AXI_read_addr;
reg [2:0] read_state;
reg [3:0] read_index;
reg [2:0] AXI_read_size; 
reg [1:0] AXI_read_target;
wire read_req;
assign read_req =   ((inst_read_req &&  (wdata_buffer_addr != inst_addr )) |
                    (ext_read_req &&  (wdata_buffer_addr != ext_read_addr ))) &&
                    write_state != `WRITE_STATE_WAIT_RESP;  // keep write and read symmetry
assign read_shortcut_icache = wdata_buffer_addr == inst_addr;
assign read_shortcut_dcache = wdata_buffer_addr == ext_read_addr;
always @(posedge clk) begin
    if(rst) begin
        rdata_buffer_data <= 1024'd0;
        AXI_read_addr <= 32'd0;
        read_index <= 4'd0;
        AXI_read_size <= 3'd0;
        AXI_read_target <= 2'd0;
    end
    else if(read_req && read_state==`READ_STATE_FREE) begin
        AXI_read_addr <=    
                            ext_read_req &&~read_shortcut_dcache   ? ext_read_addr:
                            inst_read_req &&~read_shortcut_icache  ? inst_read_addr:
                            32'd0;
        AXI_read_size <=    
                            ext_read_req &&~read_shortcut_dcache    ? 3'd3 :
                            inst_read_req &&~read_shortcut_icache   ? 3'd2 :
                            3'd0;
        AXI_read_target <=  
                            ext_read_req &&~read_shortcut_dcache    ? 2'd2:
                            inst_read_req &&~read_shortcut_icache   ? 2'd1:
                            2'd0;
    end
    else if(read_state == `READ_STATE_RECEIVE_DATA && RVALID) begin
        if(AXI_read_target == 2'd2) begin
            rdata_buffer_data[({6'd0,read_index}+10'd1)*64-1-:64] <= RDATA;
        end
        else if(AXI_read_target == 2'd1) begin
            rdata_buffer_data[({6'd0,read_index}+10'd1)*32-1-:32] <= read_index[0] == 0? RDATA[31:0] :RDATA[63:32];
        end
        read_index <= read_index + 4'd1;
    end
end
//assign dcache_write_ready = write_state == `WRITE_STATE__DATA && RVALID && ;
assign ARADDR = AXI_read_addr;
assign ARLEN = 8'd15;
assign ARSIZE = AXI_read_size;
assign ARBURST = 2'd01;
assign ARVALID = read_state == `READ_STATE_LOAD_ADDR;
assign ARID = 4'd0;
assign  RREADY = read_state ==  `READ_STATE_RECEIVE_DATA;


assign icache_ready = AXI_read_target == 2'd1 && RVALID && RLAST && read_state == `READ_STATE_RECEIVE_DATA;
assign inst_in_data = inst_read_req && (inst_addr == wdata_buffer_addr)? wdata_buffer_data[511:0] :{RDATA[63:32],rdata_buffer_data[479:0]};

assign dcache_ready = AXI_read_target == 2'd2 && RVALID && RLAST && read_state == `READ_STATE_RECEIVE_DATA;
assign ext_in_data = ext_read_req && (ext_read_addr == wdata_buffer_addr) ? wdata_buffer_data:{RDATA,rdata_buffer_data[959:0]};


always @(posedge clk) begin
    if(rst) begin
        read_state <= 3'd0;
    end
    else begin
        case(read_state) 
            `READ_STATE_FREE:
                if(read_req)
                    read_state <= `READ_STATE_LOAD_ADDR;
            `READ_STATE_LOAD_ADDR:
                if(ARREADY)
                    read_state <= `READ_STATE_RECEIVE_DATA;
            `READ_STATE_RECEIVE_DATA:
                if(RVALID && RLAST)    
                    read_state <= `READ_STATE_FREE;
        endcase
    end
end



// not a typical FSM
// write the first data when load addr
reg [1023:0] wdata_buffer_data;
reg [31:0] wdata_buffer_addr;
reg [63:0] AXI_write_data;
reg [31:0] AXI_write_addr;
reg [3:0] write_index;
reg [3:0] write_state;
always @(posedge clk) begin
    if(rst) begin 
        write_state <=4'd0;
    end
    else
    begin
        case(write_state)
            `WRITE_STATE_FREE:
                if(ext_write_req)
                    write_state <= `WRITE_STATE_LOAD_ADDR;
                else ;
            `WRITE_STATE_LOAD_ADDR:
                if(AWREADY && WREADY)
                    write_state <= `WRITE_STATE_SEND_DATA;
                else ;
            `WRITE_STATE_SEND_DATA:
                if(WREADY && write_index == 4'd15)
                    write_state <= `WRITE_STATE_WAIT_RESP;
                else ;
            `WRITE_STATE_WAIT_RESP:
                if(BVALID)
                    write_state <= `WRITE_STATE_FREE;
                else ;
            default: write_state <= `WRITE_STATE_FREE;
        endcase
    end
end

always @(posedge clk) begin
    if(rst) begin
        wdata_buffer_data <= 1024'd0;
        wdata_buffer_addr <= 32'd0;
        write_index <= 4'd0;
        AXI_write_addr <= 32'd0;
        AXI_write_data <= 64'd0;
    end
    else if(ext_write_req && write_state == `WRITE_STATE_FREE) begin
        wdata_buffer_data <= ext_out_write_data;
        wdata_buffer_addr <= ext_write_addr;
        AXI_write_addr <= ext_write_addr;
       // AXI_write_data <= ext_out_write_data[63-:64];
        write_index <= 4'd0;
    end
    else if(write_state == `WRITE_STATE_SEND_DATA && WREADY) begin
        write_index <= write_index + 4'd1;
    end
end
assign AWID = 4'd0;
assign AWADDR = AXI_write_addr;
assign AWLEN = 8'd15;
assign AWSIZE = 3'd3;
assign AWBURST = 2'd01;
assign AWVALID = write_state == `WRITE_STATE_LOAD_ADDR;

assign WDATA = wdata_buffer_data[({6'd0,write_index}+1)*64-1-:64] ;
assign WSTRB = 8'hff; //WSTRB ??? 
assign WLAST = write_index == 4'd15;
assign WVALID = write_state == `WRITE_STATE_SEND_DATA ;  //there is some problem

assign BREADY = write_state == `WRITE_STATE_WAIT_RESP;

endmodule