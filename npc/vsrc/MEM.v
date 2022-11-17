`include "defines.vh"

module MEM(
    input wire clk,
    input wire rst,
    input stop_all,
    input [63:0]    ext_ram_read_data,
    input wire [`EX_MEM_Bus-1:0] EX_MEM_Bus,
    output wire [`MEM_ID_Bus-1:0] MEM_ID_Bus,
    output wire [31:0] inst_addr,
    output wire valid,
    output wire inst_ebreak
);
reg [`EX_MEM_Bus-1:0] EX_MEM_Bus_Reg;
wire inst_lwu,inst_sh, inst_sd,inst_sw,inst_ld,inst_lw,inst_lhu,inst_lh,inst_lbu,inst_lb,inst_sb;
wire [10:0] mem_OneHot;
wire [63:0] EX_result,final_result;
wire [4:0] ID_addr;
wire ID_we;
always @(posedge clk) begin
    if(rst) begin
        EX_MEM_Bus_Reg <= `EX_MEM_Bus'd0;
    end
    else if(stop_all)begin
        EX_MEM_Bus_Reg <= `EX_MEM_Bus'd0;
    end
    else begin
        EX_MEM_Bus_Reg <=EX_MEM_Bus;
    end
end
assign {valid,mem_OneHot,inst_addr,inst_ebreak,ID_we,ID_addr,EX_result} = EX_MEM_Bus_Reg;
assign {inst_lwu,inst_sh, inst_sd,inst_sw,inst_ld,inst_lw,inst_lhu,inst_lh,inst_lbu,inst_lb,inst_sb} = mem_OneHot;
    
assign final_result = inst_ld ?ext_ram_read_data:
        inst_lw ?{{32{ext_ram_read_data[31]}},{ext_ram_read_data[31:0]}}:
        inst_lh ?{{48{ext_ram_read_data[15]}},{ext_ram_read_data[15:0]}}:
        inst_lb ?{{56{ext_ram_read_data[7]}},{ext_ram_read_data[7:0]}}:
        inst_lwu ?{{32{1'b0}},{ext_ram_read_data[31:0]}} :
        inst_lhu ?{{48{1'b0}},{ext_ram_read_data[15:0]}}:
        inst_lbu ?{{56{1'b0}},{ext_ram_read_data[7:0]}}:
        EX_result;
assign MEM_ID_Bus = {ID_we,ID_addr,final_result};
//assign {inst_ebreak,MEM_ID_Bus} = EX_MEM_Bus_Reg;
endmodule
