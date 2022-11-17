module Dcache
(
    input clk,
    input rst,

    input [16*64-1:0]       ext_in_read_data,
    input [63:0]            ext_in_data_64,
    input [31:0]            ext_in_addr,
    input [7:0]             ext_data_be,
    input                   ext_en,
    input                   ext_wen,
    input [63:0]            ext_in_write_data,
    input                   inst_fence_i,
    input                   icache_busy,
    input                   dcache_valid,
    // output                  dcache_write_busy,
    // output                  dcache_read_busy,
    //input data_in_ready,
    input                   dcache_ready,
    input                   read_shortcut_dcache,
    //input                   dcache_write_ready,
    output [63:0]           ext_out_read_data,    
    output [16*64-1:0]      ext_out_write_data,
    output [31:0]           ext_out_write_addr,
    output [31:0]           ext_out_read_addr,
    output                  ext_write_req,
    output                  ext_read_req
);

//seems that the data forwarding and indata process waste lots of time


wire [63:0] total_shift;
wire [15:0]hit;
reg [15:0] dirty_flag;
reg [24:0] tag [15:0]   ;         //total 16 index  therefore ,22 bits tag
reg [1023:0] ext_store [15:0];   //16 is a set
reg [63:0] ext_out_index;
reg [10:0] offset;
wire[10:0] write_offset;
wire [1023:0] ext_in_data_combine;
wire [1023:0] ext_in_data_mask;
wire [1023:0] ext_write_data_mask;
wire ext_write_ready;
wire ext_read_ready;
wire [3:0] hit_index;
reg [7:0] ext_data_be_reg;
wire [9:0] total_shift_in;
wire [9:0] ext_in_shift;
wire [63:0] ext_read_data_64;
assign ext_read_data_64 = ext_in_data_64 &
                        ~{{8{ext_data_be[7]}},
                        {8{ext_data_be[6]}},
                        {8{ext_data_be[5]}},
                        {8{ext_data_be[4]}},
                        {8{ext_data_be[3]}},
                        {8{ext_data_be[2]}},
                        {8{ext_data_be[1]}},
                        {8{ext_data_be[0]}}} ;

assign ext_in_shift = {6'd0,ext_in_addr[6:3]} <<6;
assign total_shift_in = ext_data_be[0] ? 10'd0:
                        ext_data_be[1] ? 10'd8:
                        ext_data_be[2] ? 10'd16:
                        ext_data_be[3] ? 10'd24:
                        ext_data_be[4] ? 10'd32:
                        ext_data_be[5] ? 10'd40:
                        ext_data_be[6] ? 10'd48:
                        ext_data_be[7] ? 10'd56:10'd0;
assign total_shift =    ext_data_be_reg[0] ? 64'd0:
                        ext_data_be_reg[1] ? 64'd8:
                        ext_data_be_reg[2] ? 64'd16:
                        ext_data_be_reg[3] ? 64'd24:
                        ext_data_be_reg[4] ? 64'd32:
                        ext_data_be_reg[5] ? 64'd40:
                        ext_data_be_reg[6] ? 64'd48:
                        ext_data_be_reg[7] ? 64'd56:64'd0;
assign ext_in_data_combine =(({960'd0,ext_in_write_data} << (total_shift_in) )& 
                            {960'd0,{8{ext_data_be[7]}},
                            {8{ext_data_be[6]}},
                            {8{ext_data_be[5]}},
                            {8{ext_data_be[4]}},
                            {8{ext_data_be[3]}},
                            {8{ext_data_be[2]}},
                            {8{ext_data_be[1]}},
                            {8{ext_data_be[0]}}}) << ext_in_shift;
wire [63:0] ext_in_data_write_64;
assign ext_in_data_write_64 =(ext_in_write_data << total_shift_in)& 
                            {{8{ext_data_be[7]}},
                            {8{ext_data_be[6]}},
                            {8{ext_data_be[5]}},
                            {8{ext_data_be[4]}},
                            {8{ext_data_be[3]}},
                            {8{ext_data_be[2]}},
                            {8{ext_data_be[1]}},
                            {8{ext_data_be[0]}}} ;
wire [63:0] ext_already_data;
assign ext_already_data = ext_store[hit_index][ext_in_shift+10'd63-:64] &
                            ~{{8{ext_data_be[7]}},
                            {8{ext_data_be[6]}},
                            {8{ext_data_be[5]}},
                            {8{ext_data_be[4]}},
                            {8{ext_data_be[3]}},
                            {8{ext_data_be[2]}},
                            {8{ext_data_be[1]}},
                            {8{ext_data_be[0]}}} ;
assign ext_write_data_mask = ext_store[hit_index] & 
                            ~({960'd0,{{8{ext_data_be[7]}},
                            {8{ext_data_be[6]}},
                            {8{ext_data_be[5]}},
                            {8{ext_data_be[4]}},
                            {8{ext_data_be[3]}},
                            {8{ext_data_be[2]}},
                            {8{ext_data_be[1]}},
                            {8{ext_data_be[0]}}}} <<( ext_in_shift));

assign ext_in_data_mask = ext_in_read_data & 
                        ~({960'd0,{{8{ext_data_be[7]}},
                        {8{ext_data_be[6]}},
                        {8{ext_data_be[5]}},
                        {8{ext_data_be[4]}},
                        {8{ext_data_be[3]}},
                        {8{ext_data_be[2]}},
                        {8{ext_data_be[1]}},
                        {8{ext_data_be[0]}}}} <<( ext_in_shift));
//generated by script

assign hit[0] = tag[0] == ext_in_addr[31:7];
assign hit[1] = tag[1] == ext_in_addr[31:7];
assign hit[2] = tag[2] == ext_in_addr[31:7];
assign hit[3] = tag[3] == ext_in_addr[31:7];
assign hit[4] = tag[4] == ext_in_addr[31:7];
assign hit[5] = tag[5] == ext_in_addr[31:7];
assign hit[6] = tag[6] == ext_in_addr[31:7];
assign hit[7] = tag[7] == ext_in_addr[31:7];   
assign hit[8] = tag[8] == ext_in_addr[31:7];
assign hit[9] = tag[9] == ext_in_addr[31:7];
assign hit[10] = tag[10] == ext_in_addr[31:7];
assign hit[11] = tag[11] == ext_in_addr[31:7];
assign hit[12] = tag[12] == ext_in_addr[31:7];
assign hit[13] = tag[13] == ext_in_addr[31:7];
assign hit[14] = tag[14] == ext_in_addr[31:7];
assign hit[15] = tag[15] == ext_in_addr[31:7];

find_index find_index_hit(
    .data(hit),
    .index(hit_index)
);

// find_index find_index_dirty(
//     .data(dirty_flag),
//     .index(dirty_flag_index)
// );

reg [3:0] replace_index;
reg [3:0] replace_index_already_write;
assign ext_out_write_addr = {tag[replace_index],7'd0};
assign ext_out_write_data = ext_store[replace_index];
assign ext_out_read_addr = {ext_in_addr[31:7],7'd0};
assign ext_read_req = icache_busy ? 1'd0 : hit==16'd0 && ext_en;
assign ext_write_req = dcache_state == 2'd1 |icache_busy ? 1'd0 : hit==16'd0 && dirty_flag[replace_index] == 1 && ext_en;
//The following is the replacement algorithm

always @(posedge clk)
begin
    if(rst) begin
        replace_index <= 4'd0;
    end
    else
        replace_index <= replace_index +4'd1;
end
// wire [3:0] replace_index;
// assign replace_index = 4'd0;
reg [1:0] dcache_state;  // read state
reg indata_target; //0 from read request 
                    //1 from write request 
reg [3:0] write_index;
always @(posedge clk) begin      
    if(rst) begin
        for(int i=0;i<16;i++) begin
            ext_store[i] <=1024'd0;
        end
        for(int j=0;j<16;j++) begin
            tag[j] <= 25'd0;
        end
        dirty_flag <= 16'd0;
        offset <= 11'd0;
        ext_out_index <= 64'd0;
        ext_data_be_reg <= 8'd0;
        indata_target <= 1'd0;
        dcache_state <= 2'd0;
        replace_index_already_write <= 4'd0;
    end
    else if(icache_busy) begin
        
    end
    else if(dcache_state == 2'd0 ) begin
        if(ext_read_req ) begin
            if(~ ext_wen) begin
                if(~read_shortcut_dcache) begin
                    dcache_state <= 2'd1;
                    offset <= ({7'd0,{ext_in_addr[6:3]}}+11'd1) <<6 ;
                    indata_target <= 1'd0;
                    ext_data_be_reg <=  ext_data_be;
                    replace_index_already_write <= replace_index;
                    write_index <= 4'd0;
                end
                else if(read_shortcut_dcache) begin
                    dirty_flag[replace_index] <=1'd0;
                    tag[replace_index] <= ext_in_addr[31:7];
                    ext_store[replace_index] <= ext_in_read_data;
                    ext_out_index <= ext_in_read_data[(({7'd0,{ext_in_addr[6:3]}}+11'd1) <<6)-1-:64] ;
                    offset <= ({7'd0,{ext_in_addr[6:3]}}+11'd1) <<6 ;
                    ext_data_be_reg <=  ext_data_be;
                end
            end
            else if(ext_wen) begin
                if(~read_shortcut_dcache) begin
                    indata_target <= 1'd1;
                    dcache_state <= 2'd1;            
                    ext_data_be_reg <=  ext_data_be;
                    replace_index_already_write <= replace_index;
                    write_index <= 4'd0;
                end
                else if(read_shortcut_dcache) begin
                    dirty_flag[replace_index] <=1'd1;
                    tag[replace_index] <= ext_in_addr[31:7];
                    ext_store[replace_index] <= ext_in_data_mask | ext_in_data_combine;
                    indata_target <= 1'd0;
                    ext_data_be_reg <=  ext_data_be;
                end
            end
        end
        else if(ext_wen && (hit!=16'd0)) begin
            dirty_flag <= dirty_flag | hit;
            ext_store[hit_index][ext_in_shift+10'd63-:64] <=  ext_in_data_write_64|ext_already_data;
            ext_data_be_reg <=  ext_data_be;
        end
        else if(ext_en && (hit!=16'd0) && ~ext_wen) begin
            ext_out_index <= ext_store[hit_index][(({7'd0,{ext_in_addr[6:3]}}+11'd1) <<6)-1-:64]  ;
            offset <= ({7'd0,{ext_in_addr[6:3]}}+11'd1) <<6 ;
            ext_data_be_reg <=  ext_data_be;
        end
    end
    else if(dcache_state == 2'd1 && dcache_valid) begin
        if(dcache_ready) begin
            dcache_state <= 2'd0;
            tag[replace_index_already_write] <= ext_in_addr[31:7];
            if(indata_target == 1'd0) begin
                dirty_flag[replace_index_already_write] <=1'd0;
                ext_out_index <= ext_in_read_data[offset-1-:64] ;
            end
            else if(indata_target == 1'd1) begin
                dirty_flag[replace_index_already_write] <=1'd1;
            end
        end
        
        if(indata_target == 1'd0) begin
            ext_store[replace_index_already_write][({3'd0,write_index}+7'd1)*64-1-:64] <= ext_in_data_64;
        end
        else if(indata_target == 1'd1) begin
            ext_store[replace_index_already_write][({3'd0,write_index}+7'd1)*64-1-:64] <= 
            write_index == ext_in_addr[6:3]  ?   ext_in_data_write_64| ext_read_data_64 :ext_in_data_64;
        end
        write_index <= write_index +4'd1;
    end
end
// reg [1:0] write_state;
// always @(posedge clk) begin
//     if(rst) begin
//         write_state <= 2'd0;
//     end
//     else if(write_state == 2'd0 && ext_write_req)begin
//         write_state <= 2'd1;
//     end
//     else if(write_state == 2'd1 && dcache_write_ready) begin
//         write_state <= 2'd0;
//     end
// end




assign ext_out_read_data = (ext_out_index&
                                    {{8{ext_data_be_reg[7]}},
                                    {8{ext_data_be_reg[6]}},
                                    {8{ext_data_be_reg[5]}},
                                    {8{ext_data_be_reg[4]}},
                                    {8{ext_data_be_reg[3]}},
                                    {8{ext_data_be_reg[2]}},
                                    {8{ext_data_be_reg[1]}},
                                    {8{ext_data_be_reg[0]}}})>>> total_shift;


//debug 

wire [1023:0] ext_store_t;
assign ext_store_t = ext_store[7];
wire [63:0] store0 ; 
wire [63:0] store1 ; 
wire [63:0] store2 ; 
wire [63:0] store3 ; 
wire [63:0] store4 ; 
wire [63:0] store5 ; 
wire [63:0] store6 ; 
wire [63:0] store7 ; 
wire [63:0] store8 ; 
wire [63:0] store9 ; 
wire [63:0] store10 ; 
wire [63:0] store11 ; 
wire [63:0] store12 ; 
wire [63:0] store13 ; 
wire [63:0] store14 ; 
wire [63:0] store15 ; 

assign store0  = ext_store_t[10'd1*64-1-:64];
assign store1  = ext_store_t[10'd2*64-1-:64];
assign store2  = ext_store_t[10'd3*64-1-:64];
assign store3  = ext_store_t[10'd4*64-1-:64];
assign store4  = ext_store_t[10'd5*64-1-:64];
assign store5  = ext_store_t[10'd6*64-1-:64];
assign store6  = ext_store_t[10'd7*64-1-:64];
assign store7  = ext_store_t[10'd8*64-1-:64];
assign store8  = ext_store_t[10'd9*64-1-:64];
assign store9  = ext_store_t[10'd10*64-1-:64];
assign store10  = ext_store_t[10'd11*64-1-:64];
assign store11  = ext_store_t[10'd12*64-1-:64];
assign store12  = ext_store_t[10'd13*64-1-:64];
assign store13  = ext_store_t[10'd14*64-1-:64];
assign store14  = ext_store_t[10'd15*64-1-:64];
assign store15  = ext_store_t[10'd16*64-1-:64];


endmodule