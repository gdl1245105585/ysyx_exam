`include "defines.vh"

module MEM2(
    input wire clk,
    input wire rst,
    input wire [`EX_MEM_Bus-1:0] EX_MEM_Bus,
    
    output wire [`MEM_ID_Bus-1:0] MEM2_ID_Bus,
    output wire [`EX_MEM_Bus-1:0] MEM1_MEM2_Bus
);
reg [`EX_MEM_Bus-1:0] MEM1_MEM2_Bus_Reg;

wire [10:0] mem_OneHot;
wire [63:0] EX_result;
wire [4:0] ID_addr;
wire ID_we,valid,inst_ebreak;
wire [31:0] inst_addr;
assign MEM2_ID_Bus = {ID_we,ID_addr,EX_result};
assign {valid,mem_OneHot,inst_addr,inst_ebreak,ID_we,ID_addr,EX_result} = MEM1_MEM2_Bus_Reg;
always @(posedge clk) begin
    if(rst) begin
        MEM1_MEM2_Bus_Reg <= `EX_MEM_Bus'd0;
    end
    else begin
        
        MEM1_MEM2_Bus_Reg <= EX_MEM_Bus;
    end
end

assign MEM1_MEM2_Bus = MEM1_MEM2_Bus_Reg;
endmodule