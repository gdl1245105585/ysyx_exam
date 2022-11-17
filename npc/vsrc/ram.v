import "DPI-C" function void set_ram_ptr(input logic [63:0] a []);

module ram(
    input clk,
    input rst,

    input mem_stop,
    input [31:0] inst_addr,
    input [31:0] ext_addr,

    input   [7:0]   ext_ram_be_n,
    input           ext_ram_wen,
    input   [63:0]  ext_ram_write_data,

    output reg [31:0] inst_data,
    output reg [63:0] ext_data
);
reg [63:0] ram [16777215:0];
initial begin
    set_ram_ptr(ram); 
end

wire [63:0] ext_in_data_write_64;
assign ext_in_data_write_64 =(ext_ram_write_data<<total_shift)& 
                            {{8{ext_ram_be_n[7]}},
                            {8{ext_ram_be_n[6]}},
                            {8{ext_ram_be_n[5]}},
                            {8{ext_ram_be_n[4]}},
                            {8{ext_ram_be_n[3]}},
                            {8{ext_ram_be_n[2]}},
                            {8{ext_ram_be_n[1]}},
                            {8{ext_ram_be_n[0]}}} ;
wire [63:0] ext_already_data;
assign ext_already_data =   ram[ext_addr[26:3]] &
                            ~{{8{ext_ram_be_n[7]}},
                            {8{ext_ram_be_n[6]}},
                            {8{ext_ram_be_n[5]}},
                            {8{ext_ram_be_n[4]}},
                            {8{ext_ram_be_n[3]}},
                            {8{ext_ram_be_n[2]}},
                            {8{ext_ram_be_n[1]}},
                            {8{ext_ram_be_n[0]}}} ;
wire [63:0] total_shift;
assign total_shift =    ext_ram_be_n[0] ? 64'd0:
                        ext_ram_be_n[1] ? 64'd8:
                        ext_ram_be_n[2] ? 64'd16:
                        ext_ram_be_n[3] ? 64'd24:
                        ext_ram_be_n[4] ? 64'd32:
                        ext_ram_be_n[5] ? 64'd40:
                        ext_ram_be_n[6] ? 64'd48:
                        ext_ram_be_n[7] ? 64'd56:64'd0;
always @(posedge clk) begin
    if(mem_stop) begin
    end
    else begin
        if(ext_ram_wen) begin
            ram[ext_addr[26:3]] <= ext_already_data |ext_in_data_write_64;
        end
        else begin
            ext_data <= (ram[ext_addr[26:3]] &
                    {{8{ext_ram_be_n[7]}},
                    {8{ext_ram_be_n[6]}},
                    {8{ext_ram_be_n[5]}},
                    {8{ext_ram_be_n[4]}},
                    {8{ext_ram_be_n[3]}},
                    {8{ext_ram_be_n[2]}},
                    {8{ext_ram_be_n[1]}},
                    {8{ext_ram_be_n[0]}}})>>> total_shift;
        end
        if(inst_addr[2] ==0 )
            inst_data <= ram[inst_addr[26:3]][31:0]; 
        else if(inst_addr[2] ==1)
            inst_data <= ram[inst_addr[26:3]][63:32]; 
    end
end
endmodule