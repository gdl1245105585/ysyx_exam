
`include "defines.vh"

module my_cpu(
    input wire clk,  
    input wire rst,

    input int_time,


    // output wire [31:0] inst_in_data0,
    // output wire [31:0] inst_in_data1,
    // output wire [31:0] inst_in_data2,
    // output wire [31:0] inst_in_data3,
    // output wire [31:0] inst_in_data4,
    // output wire [31:0] inst_in_data5,
    // output wire [31:0] inst_in_data6,
    // output wire [31:0] inst_in_data7,
    // output wire [31:0] inst_in_data8,
    // output wire [31:0] inst_in_data9,
    // output wire [31:0] inst_in_data10,
    // output wire [31:0] inst_in_data11,
    // output wire [31:0] inst_in_data12,
    // output wire [31:0] inst_in_data13,
    // output wire [31:0] inst_in_data14,
    // output wire [31:0] inst_in_data15,
    output wire inst_read_req,


    // output wire [63:0] ext_out_data0,
    // output wire [63:0] ext_out_data1,
    // output wire [63:0] ext_out_data2,
    // output wire [63:0] ext_out_data3,
    // output wire [63:0] ext_out_data4,
    // output wire [63:0] ext_out_data5,
    // output wire [63:0] ext_out_data6,
    // output wire [63:0] ext_out_data7,
    // output wire [63:0] ext_out_data8,
    // output wire [63:0] ext_out_data9,
    // output wire [63:0] ext_out_data10,
    // output wire [63:0] ext_out_data11,
    // output wire [63:0] ext_out_data12,
    // output wire [63:0] ext_out_data13,
    // output wire [63:0] ext_out_data14,
    // output wire [63:0] ext_out_data15,

    // output wire [63:0] ext_in_data0,
    // output wire [63:0] ext_in_data1,
    // output wire [63:0] ext_in_data2,
    // output wire [63:0] ext_in_data3,
    // output wire [63:0] ext_in_data4,
    // output wire [63:0] ext_in_data5,
    // output wire [63:0] ext_in_data6,
    // output wire [63:0] ext_in_data7,
    // output wire [63:0] ext_in_data8,
    // output wire [63:0] ext_in_data9,
    // output wire [63:0] ext_in_data10,
    // output wire [63:0] ext_in_data11,
    // output wire [63:0] ext_in_data12,
    // output wire [63:0] ext_in_data13,
    // output wire [63:0] ext_in_data14,
    // output wire [63:0] ext_in_data15,
    output [31:0]   ext_read_addr,
    output [31:0]   ext_write_addr,
    output          ext_write_req,
    output          ext_read_req,

    // input wire [31:0] base_ram_data,  //BaseRAM数据，低8位与CPLD串口控制器共�?
    output wire[31:0] base_ram_addr, //BaseRAM地址
    // output wire[3:0] base_ram_be_n,  //BaseRAM字节使能，低有效。如果不使用字节使能，请保持�?0
    // output wire base_ram_wen,
    output wire inst_ebreak,

    output wire we,
    output wire [63:0]data,
    output wire [4:0]addr,

    output wire [63:0] Inst_Src2_forwarding,
    output wire [63:0] Inst_Src1_forwarding,
    output wire [63:0] mul_div_result,
// mmio is asynchronous
    input [63:0]    mmio_serial_data,
    input [63:0]    mmio_rtc_low_data,
    input [63:0]    mmio_rtc_high_data,
    input [63:0]    mmio_vga_ctl_low_data,
    input [63:0]    mmio_vga_ctl_high_data,
    //input [63:0]    mmio_fb_data,

    output [63:0]   mmio_write_data,
    output          mmio_wen,
    output [7:0]    mmio_be_n,
    output          mmio_serial_en,
   // output mmio_vga_en,
    output          mmio_rtc_low_en,
    output          mmio_rtc_high_en,
    output          mmio_vga_ctl_low_en,
    output          mmio_vga_ctl_high_en,
    output          mmio_fb_low_en,
    output          mmio_fb_high_en,
    output [31:0]   mmio_addr ,

    output wire   mul_div_valid,
    output wire  IF_we,
    output wire [2:0] inst_result_Select,
    output wire [63:0] EX_data,
    output wire [4:0] EX_addr,
    output wire [31:0] inst_addr,
    //ExtRAM信号
    //input wire[63:0] ext_ram_read_data,  //ExtRAM数据
    output wire[31:0] ext_ram_addr, //ExtRAM地址
    output wire[7:0] ext_ram_be_n,  //ExtRAM字节使能，低有效。如果不使用字节使能，请保持�?0  
    output wire ext_ram_wen,       //ExtRAM片�?�，低有�?
    output wire [63:0] ext_ram_write_data,
    output wire valid,
    output wire [31:0] debug_pc,
    output [31:0] debug_inst_addr,
    output [31:0] inst,
    // AXI 

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
// wire [63:0] mul_div_result;
// assign final_result = mul_div_result;w
    //wire[7:0] ext_ram_be_n;  //ExtRAM字节使能，低有效。如果不使用字节使能，请保持�?0  
    //wire ext_ram_wen;       //ExtRAM片�?�，低有�?
    //wire [63:0] ext_ram_write_data;
    wire[63:0] ext_ram_read_data;
   // wire[31:0] ext_ram_addr;
wire takeup;
assign {takeup,EX_addr,EX_data} = EX_ID_Bus;
//assign base_ram_be_n = 4'b0; // to be check 
assign {we,addr,data} = MEM_ID_Bus;
wire [`ID_IF_Bus-1:0] ID_IF_Bus;
wire [`ctrlBus-1:0] ctrlBus;
wire [`IF_IF2_Bus-1:0] IF_IF2_Bus;
wire [`IF2_ID_Bus-1:0] IF2_ID_Bus;
wire [`EX_ID_Bus-1:0] EX_ID_Bus;
wire [`MEM_ID_Bus-1:0] MEM_ID_Bus;
wire [`WB_ID_Bus-1:0] WB_ID_Bus;
wire [`ID_EX_Bus-1:0] ID_EX_Bus;
wire [`EX_MEM_Bus-1:0] EX_MEM_Bus;
wire [`MEM_WB_Bus-1:0] MEM_WB_Bus;
wire [63:0] IF_src1_data;
wire [4:0] src1_addr;
wire [63:0] IF_src2_data;
wire [4:0] src2_addr;
wire [`ID_IF_Bus:0] ID_IF_Bus;
wire pause_mem;
//wire [31:0] inst_addr;
//wire [31:0] inst;

wire [63:0] mmio_read_data;
wire mmio_en_reg;
wire mmio_kbd_en;
wire stop_all;
mmio mmio(
    .clk(clk),
    .rst(rst),

    .ext_addr(ext_ram_addr),
    .ext_data(ext_ram_write_data),

    .ext_ram_be_n(ext_ram_be_n),
    .ext_ram_wen(ext_ram_wen), 

    // .mmio_serial_data(mmio_serial_data),
    .mmio_rtc_low_data(mmio_rtc_low_data),
    .mmio_rtc_high_data(mmio_rtc_high_data),
    .mmio_vga_ctl_low_data(mmio_vga_ctl_low_data),
    .mmio_vga_ctl_high_data(mmio_vga_ctl_high_data),
    // .mmio_fb_data(mmio_fb_data),
    .mmio_read_data(mmio_read_data),

    .mmio_write_data(mmio_write_data),
    .mmio_wen(mmio_wen),
    .mmio_be_n(mmio_be_n),
    .mmio_kbd_en(mmio_kbd_en),
    .mmio_serial_en(mmio_serial_en),
// output mmio_vga_en,
    .mmio_rtc_low_en(mmio_rtc_low_en),
    .mmio_rtc_high_en(mmio_rtc_high_en),
    .mmio_vga_ctl_low_en(|mmio_vga_ctl_low_en),
    .mmio_vga_ctl_high_en(mmio_vga_ctl_high_en),

    .mmio_fb_low_en(mmio_fb_low_en),
    .mmio_fb_high_en(mmio_fb_high_en),
    .mmio_en_reg(mmio_en_reg),
    .mmio_addr(mmio_addr) 
);
wire [7:0]dcache_be_n;
wire dcache_wen;
wire [63:0] dcache_read_out_data;
wire inst_fence_i;
assign dcache_be_n = mmio_kbd_en|mmio_serial_en|mmio_rtc_low_en|mmio_rtc_high_en|mmio_vga_ctl_high_en|mmio_vga_ctl_low_en|mmio_fb_low_en|mmio_fb_high_en?8'd0:ext_ram_be_n;
assign dcache_wen =  mmio_kbd_en|mmio_serial_en|mmio_rtc_low_en|mmio_rtc_high_en|mmio_vga_ctl_high_en|mmio_vga_ctl_low_en|mmio_fb_low_en|mmio_fb_high_en?1'd0:ext_ram_wen;
assign ext_ram_read_data = mmio_en_reg ? mmio_read_data :
                            dcache_read_out_data;
IF IF(
    .clk(clk),
    .rst(rst),
    .stop_all(stop_all),
    .pause_mem(pause_mem),
    .ID_IF_Bus(ID_IF_Bus),
    .ctrlBus(ctrlBus),
    .IF_ID_Bus(IF_IF2_Bus),
    .inst_addr(inst_addr)
);

IF2 IF2(
    .clk(clk),
    .rst(rst),
    .stop_all(stop_all),
    .pause_mem(pause_mem),
    .ID_IF_Bus(ID_IF_Bus),
    .IF_IF2_Bus(IF_IF2_Bus),
    .IF2_ID_Bus(IF2_ID_Bus)
);

ID ID(
    .clk(clk),
    .rst(rst),
    .stop_all(stop_all),
    .int_time(int_time),
    .instin(inst),
    .pause_mem(pause_mem),
    .ctrlBus(ctrlBus),
    .ID_IF_Bus(ID_IF_Bus),
    .IF2_ID_Bus(IF2_ID_Bus),
    .EX_ID_Bus(EX_ID_Bus),
    .MEM_ID_Bus(MEM_ID_Bus),
    .inst_fence_i(inst_fence_i),
  //  .WB_ID_Bus(WB_ID_Bus),

    .ID_EX_Bus(ID_EX_Bus)
);

EX EX(
    .clk(clk),
    .rst(rst),
    .stop_all(stop_all),
    .ID_EX_Bus(ID_EX_Bus),
    .debug_mul_div_result(mul_div_result),
    .EX_MEM_Bus(EX_MEM_Bus),
    .EX_ID_Bus(EX_ID_Bus),

    .debug_inst_addr(debug_inst_addr),

    .mul_div_valid(mul_div_valid),
    .IF_we(IF_we),
    .inst_result_Select(inst_result_Select),

    .Inst_Src2_forwarding(Inst_Src2_forwarding),
    .Inst_Src1_forwarding(Inst_Src1_forwarding),
    .ext_ram_addr(ext_ram_addr), //ExtRAM地址
    .ext_ram_be_n(ext_ram_be_n),  //ExtRAM字节使能，低有效。如果不使用字节使能，请保持�?0
    .ext_ram_wen(ext_ram_wen),       //ExtRAM片�?�，低有�?
    .ext_ram_write_data(ext_ram_write_data)
);
//FlaseStage FlaseStage(
//    .clk(clk),
//    .rst(rst),
    
//    .EX_FLASE_Bus(EX_FLASE_Bus),
//    .EX_ID_Bus(EX_ID_Bus),
    
//    . 
    
//);
// MEM2 MEM2(
//     .clk(clk),
//     .rst(rst),
//     .EX_MEM_Bus(EX_MEM_Bus),
//     .MEM2_ID_Bus(MEM2_ID_Bus),
//     .MEM1_MEM2_Bus(MEM_MEM2_Bus)
// );

MEM MEM(
    .clk(clk),
    .rst(rst),
    .stop_all(stop_all),
    .ext_ram_read_data(ext_ram_read_data),
    .EX_MEM_Bus(EX_MEM_Bus),
    .inst_ebreak(inst_ebreak),
    .MEM_ID_Bus(MEM_ID_Bus),
    .valid(valid),
    .inst_addr(debug_pc)
);
// wire [511:0] inst_in_data;
// assign  { inst_in_data15 ,inst_in_data14 ,inst_in_data13 ,inst_in_data12 ,inst_in_data11 ,inst_in_data10 ,inst_in_data9 ,inst_in_data8 ,inst_in_data7 ,inst_in_data6 ,inst_in_data5 ,inst_in_data4 ,inst_in_data3 ,inst_in_data2 ,inst_in_data1 ,inst_in_data0} = inst_in_data;
// wire [1023:0]  ext_in_data;
// wire [1023:0] ext_out_data;
// assign {ext_in_data15, ext_in_data14, ext_in_data13, ext_in_data12, ext_in_data11, ext_in_data10, ext_in_data9, ext_in_data8, ext_in_data7, ext_in_data6, ext_in_data5, ext_in_data4, ext_in_data3, ext_in_data2, ext_in_data1, ext_in_data0}  =  ext_in_data;
// assign {ext_out_data15, ext_out_data14, ext_out_data13, ext_out_data12, ext_out_data11, ext_out_data10, ext_out_data9, ext_out_data8, ext_out_data7, ext_out_data6, ext_out_data5, ext_out_data4, ext_out_data3, ext_out_data2, ext_out_data1, ext_out_data0}  = ext_out_data;
// ram ram(
//     .clk(clk),
//     .rst(rst),

//     .mem_stop(pause_mem),
//     .inst_addr(inst_addr),
//     .ext_addr(ext_ram_addr),

//     .ext_ram_be_n(dcache_be_n),
//     .ext_ram_wen(dcache_wen),
//     .ext_ram_write_data(ext_ram_write_data),

//     .inst_data(inst),
//     .ext_data(dcache_read_out_data)

// );

// assign stop_all =0;

cache cache
(
    .clk(clk),
    .rst(rst),
    
    .inst_addr(inst_addr),
    .inst_en(1'b1),
    .inst_data(inst),
    .mem_stop(pause_mem),
    .stop_all(stop_all),
    .ext_data_addr(ext_ram_addr),
    .ext_data_be(dcache_be_n),
    .ext_data_wen(dcache_wen),   
    .ext_data_write_data(ext_ram_write_data),
// the following will be replaced by AXI
    .inst_in_data(),
    .inst_read_addr(base_ram_addr),
    .inst_read_req(inst_read_req),
    .ext_cache_read_data(dcache_read_out_data),
    .ext_in_data(),
    .ext_read_addr(ext_read_addr),
    .ext_write_addr(ext_write_addr),
    //.ext_out_data(),
    .ext_write_req(ext_write_req),
    .ext_read_req(ext_read_req),
    .inst_fence_i(inst_fence_i),

    .AWID(AWID),     
    .AWADDR(AWADDR),    
    .AWLEN(AWLEN),            
    .AWSIZE(AWSIZE),             
    .AWBURST(AWBURST),           
    .AWVALID(AWVALID),            
    
    .AWREADY(AWREADY),           
    // w
    .WDATA(WDATA),    
    .WSTRB(WSTRB),
    .WLAST(WLAST),            
    .WVALID(WVALID),          
    .WREADY(WREADY),            
    // b
    .BID(BID),     
    .BRESP(BRESP),          
    .BVALID(BVALID),        
    
    .BREADY(BREADY),  

    .ARADDR(ARADDR),   
    .ARLEN(ARLEN),          
    .ARSIZE(ARSIZE),            
    .ARBURST(ARBURST),            
    .ARVALID(ARVALID),     

    .ARREADY(ARREADY),           
    // r

    .RID(RID),
    .RDATA(RDATA),   
    .RRESP(RRESP),                 
    .RLAST(RLAST),               
    .RVALID(RVALID),  

    .RREADY(RREADY),      
    .ARID(ARID)
);


//WB WB(
//    .clk(clk),
//    .rst(rst),
    
//    .MEM_WB_Bus(MEM_WB_Bus),

//    .WB_ID_Bus(WB_ID_Bus)
//);

endmodule
