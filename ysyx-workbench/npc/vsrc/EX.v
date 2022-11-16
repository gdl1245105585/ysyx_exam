`include "defines.vh"

module EX(
    input clk,
    input rst,
    
    input stop_all,

    output wire [31:0] debug_inst_addr,

    input wire [`ID_EX_Bus-1:0] ID_EX_Bus,
   output wire [63:0] debug_mul_div_result,
   output wire   mul_div_valid,
   output wire  IF_we,
   output wire [2:0] inst_result_Select,
    output wire [`EX_MEM_Bus-1:0] EX_MEM_Bus,
    output wire [`EX_ID_Bus-1:0] EX_ID_Bus,
    output wire [63:0] Inst_Src2_forwarding,
    output wire [63:0] Inst_Src1_forwarding,
    output wire[31:0] ext_ram_addr, //ExtRAM地址
    output wire[7:0] ext_ram_be_n,  //ExtRAM字节使能，低有效。如果不使用字节使能，请保持�???0
    output wire ext_ram_wen,       //ExtRAM片�?�，低有�???
    output wire [63:0] ext_ram_write_data
);
assign debug_inst_addr = inst_addr;
assign debug_mul_div_result = alu_result;
reg [`ID_EX_Bus-1:0] ID_EX_Bus_Reg;
always @(posedge clk) begin
    if(rst) begin
        ID_EX_Bus_Reg <= `ID_EX_Bus'd0;
    end
    else if(stop_all) begin
        
    end
    else begin
        ID_EX_Bus_Reg <= ID_EX_Bus;
    end
end
wire inst_ebreak;
wire [2:0] inst_Src1_Select;
wire [3:0] inst_Src2_Select;
//wire [2:0] inst_result_Select;
wire ID_we;
//wire IF_we;
wire [4:0] ID_addr;
wire [63:0] ID_result;
wire [31:0] inst;
wire [31:0] inst_addr;
//wire [63:0] Inst_Src2_forwarding,Inst_Src1_forwarding;
wire inst_lwu,inst_sh, inst_sd,inst_sw,inst_ld,inst_lw,inst_lhu,inst_lh,inst_lbu,inst_lb,inst_sb;
wire [10:0] mem_OneHot;
wire [10:0] compare_OneHot;
wire [13:0] alu_OneHOt;
wire [12:0] mul_div_OneHot;
wire valid;

//assign {inst_ebreak,IF_we,inst_addr,inst,ID_result,ID_addr,ID_we,inst_result_Select,inst_Src1_Select,inst_Src2_Select,Inst_Src2_forwarding,Inst_Src1_forwarding}=ID_EX_Bus_Reg;
assign {valid,mul_div_OneHot,alu_OneHOt,mem_OneHot,inst_ebreak,IF_we,inst_addr,inst,ID_result,ID_addr,ID_we,inst_result_Select,inst_Src1_Select,inst_Src2_Select,Inst_Src2_forwarding,Inst_Src1_forwarding}=ID_EX_Bus_Reg;
assign {inst_lwu,inst_sh, inst_sd,inst_sw,inst_ld,inst_lw,inst_lhu,inst_lh,inst_lbu,inst_lb,inst_sb} = mem_OneHot;
wire [63:0] alu_result;
wire [63:0] alu_src1,alu_src2;
wire [63:0] final_result;
assign alu_src1 =     inst_Src1_Select[0] ? {32'd0,inst_addr} :
                      inst_Src1_Select[1] ? Inst_Src1_forwarding : 
                      inst_Src1_Select[2] ? {32'b0,Inst_Src1_forwarding[31:0]}:64'd0;
assign alu_src2 =     inst_Src2_Select[0] ? {{32{inst[31]}},inst[31:12],12'b0} :
                      inst_Src2_Select[1] ? {{52{inst[31]}},inst[31:20]}:
                      inst_Src2_Select[2] ? {{52{inst[31]}},inst[31:25], inst[11:7]} :
                      inst_Src2_Select[3] ? Inst_Src2_forwarding :64'd0;


reg [7:0] lb_sb_be;
reg [7:0] lh_sh_be;
reg [7:0] lw_sw_be;
always @(*) begin
    case(alu_result[2:0])
        3'b000:  lb_sb_be = 8'b00000001;
        3'b001:  lb_sb_be = 8'b00000010;
        3'b010:  lb_sb_be = 8'b00000100;
        3'b011:  lb_sb_be = 8'b00001000;
        3'b100:  lb_sb_be = 8'b00010000;
        3'b101:  lb_sb_be = 8'b00100000;
        3'b110:  lb_sb_be = 8'b01000000;
        3'b111:  lb_sb_be = 8'b10000000;
        default:  lb_sb_be = 8'b00000000;
    endcase

    case(alu_result[2:0])
        3'b000:  lh_sh_be = 8'b00000011;
        3'b001:  lh_sh_be = 8'b00000011;
        3'b010:  lh_sh_be = 8'b00001100;
        3'b011:  lh_sh_be = 8'b00001100;
        3'b100:  lh_sh_be = 8'b00110000;
        3'b101:  lh_sh_be = 8'b00110000;
        3'b110:  lh_sh_be = 8'b11000000;
        3'b111:  lh_sh_be = 8'b11000000;
        default:  lh_sh_be = 8'b00000000;
    endcase

    case(alu_result[2:0])
        3'b000:  lw_sw_be = 8'b00001111;
        3'b001:  lw_sw_be = 8'b00001111;
        3'b010:  lw_sw_be = 8'b00001111;
        3'b011:  lw_sw_be = 8'b00001111;
        3'b100:  lw_sw_be = 8'b11110000;
        3'b101:  lw_sw_be = 8'b11110000;
        3'b110:  lw_sw_be = 8'b11110000;
        3'b111:  lw_sw_be = 8'b11110000;
        default:  lw_sw_be = 8'b00000000;
    endcase
end
assign ext_ram_addr[2:0] =  3'd0;
                            // inst_ld|inst_sd ?3'b0:
                            // inst_lh |inst_lhu |inst_sh ?{alu_result[2:1],1'b0}:
                            // inst_lwu|inst_lw  |inst_sw ?{alu_result[2],2'b0}:
                            // alu_result[2:0];
assign ext_ram_addr[31:3] = alu_result[31:3];


assign ext_ram_write_data = Inst_Src2_forwarding;
assign ext_ram_wen = inst_sw|inst_sb|inst_sh|inst_sd;
assign ext_ram_be_n = inst_ld |inst_sd ?8'b11111111:
                      inst_lwu|inst_lw |inst_sw ?lw_sw_be:
                      inst_lh |inst_lhu |inst_sh ?lh_sh_be:
                      inst_lb |inst_lbu |inst_sb ?lb_sb_be:
                      8'b00000000;
alu alu_1(
    .alu_control(alu_OneHOt),
    .alu_src1(alu_src1),
    .alu_src2(alu_src2),
    .alu_result(alu_result)
);
//wire mul_div_valid;
wire [63:0] mul_div_result;
mdu mdu(
    .clk(clk),
    .rst(rst),

    .mul_div_OneHot(mul_div_OneHot),
    .src1(Inst_Src1_forwarding),
    .src2(Inst_Src2_forwarding),
   .debug_mul_div_result(),
    .mul_div_valid(mul_div_valid),
    .result(mul_div_result)
);
// verilator lint_on WIDTH
assign final_result = ID_addr == 5'd0 ? 0:
		            IF_we ?ID_result :
                    mul_div_valid ? mul_div_result :
                    inst_result_Select[0]?alu_result:
                    inst_result_Select[2]?{{32{alu_result[31]}},alu_result[31:0]}:
                    64'h00000000ffffffff;  //means error

assign  EX_ID_Bus= {ID_we,ID_addr,final_result};
assign  EX_MEM_Bus = {valid,mem_OneHot,inst_addr,inst_ebreak,ID_we,ID_addr,final_result};
endmodule
