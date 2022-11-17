`include "defines.vh"
module ID(
    input wire clk,
    input wire rst,

    //debug
    //output [31:0] debug_inst_addr,



    input int_time,
    input stop_all,
    input [31:0] instin,

    inout wire [`ctrlBus-1:0] ctrlBus,
    input wire [`IF2_ID_Bus-1:0] IF2_ID_Bus,
    input wire [`EX_ID_Bus-1:0] EX_ID_Bus,
    input wire [`MEM_ID_Bus-1:0] MEM_ID_Bus,
 //   input wire [`WB_ID_Bus-1:0] WB_ID_Bus,
    output [`ID_IF_Bus-1:0] ID_IF_Bus,
    output pause_mem,
    output inst_fence_i,
    output wire [`ID_EX_Bus-1:0] ID_EX_Bus
);
//assign debug_inst_addr = inst_addr;

//there use read data not the data selected because when you need to mem,not pause the ex stage
wire [63:0] Inst_Src1_Read,Inst_Src2_Read,Inst_Src3_Read; 
wire [63:0] csr_result;
wire [4:0] EX_addr,MEM_addr,IF_addr;
wire [63:0] EX_data,MEM_data,IF_data;
wire MEM_we,EX_we,IF_we;
reg [`EX_ID_Bus-1:0] EX_ID_Bus_reg;
reg [`MEM_ID_Bus-1:0] MEM_ID_Bus_reg;
reg [`WB_ID_Bus-1:0] WB_ID_Bus_reg;
reg [31:0] inst;
reg [31:0] inst_mem_domin;
assign {EX_we,EX_addr,EX_data} = EX_ID_Bus;
assign {MEM_we,MEM_addr,MEM_data} = MEM_ID_Bus;
//assign {WB_we,WB_addr,WB_data} = WB_ID_Bus;
reg  [`IF2_ID_Bus-1:0] IF_ID_Bus_Reg;
wire valid;
reg mem_arrive_flag,jump_flag;
always @(posedge clk) begin
    if(rst) begin
        IF_ID_Bus_Reg <= `IF2_ID_Bus'd0;
        inst <= 32'd0;
        mem_arrive_flag <=1'd0;
        jump_flag <= 1'd0;  
        inst_mem_domin <= 32'd0;
    end
    else if(stop_all)begin
    end
    // else if(pause_mem )begin
    //     IF_ID_Bus_Reg <= IF2_ID_Bus;
    //     inst <= 32'd0;
    //     mem_arrive_flag <= 1'd1;
    //     jump_flag <= 1'd0;  
    //     inst_mem_domin <= instin;
    // end
    // else if(mem_arrive_flag) begin
    //     mem_arrive_flag <= 1'd0;
    //     jump_flag <= 1'd0;  
    //     inst <= inst_mem_domin;
    //     inst_mem_domin <= 32'd0; 
    //     // inst_mem_domin <= 32'd0;
    // end
    else if(pause_mem)begin
        IF_ID_Bus_Reg <= `IF2_ID_Bus'd0;
        inst <= 32'd0;
    end
    else if(stop_all) begin
        
    end
    else if(junm_en) begin
        jump_flag <= 1'd1;
        mem_arrive_flag <= 1'd0;
        IF_ID_Bus_Reg <= `IF2_ID_Bus'd0;
        inst <= 32'd0;
        inst_mem_domin <= 32'd0;
    end
    else if(jump_flag) begin
        jump_flag <= 1'd0;
        mem_arrive_flag <= 1'd0;
        IF_ID_Bus_Reg <= `IF2_ID_Bus'd0;
        inst <= 32'd0;
        inst_mem_domin <= 32'd0;
    end
    else begin
        IF_ID_Bus_Reg <= IF2_ID_Bus;
        inst <= instin;
        mem_arrive_flag <= 1'd0;
        jump_flag <= 1'd0;  
        inst_mem_domin <= 32'd0;
    end
end
wire [31:0] inst_addr;
assign {valid,inst_addr} = mem_arrive_flag ? `IF2_ID_Bus'd0: IF_ID_Bus_Reg;  //not wrong  .please read clearly

wire ID_we;
wire [63:0] ID_data;
wire [4:0] ID_addr;



wire[4:0] dest_addr;
wire [4:0] src1_addr;
wire [4:0] src2_addr;
wire [2:0] func3;
wire [6:0] opcode,func7;
wire [5:0] shamt;
wire [11:0] imm;
wire [63:0] IF_Src1_Read;
wire [63:0] IF_Src2_Read;
assign opcode = inst[6:0];
assign dest_addr = inst[11:7];
assign func3 = inst[14:12];
assign src1_addr = inst[19:15];
assign src2_addr = inst[24:20];
assign shamt = inst[25:20];
assign imm = inst[31:20];
assign func7 = inst[31:25];

wire [63:0] ID_result;
wire inst_auipc, inst_addi,inst_ebreak,inst_addiw,inst_addw,inst_add,inst_subw;
wire inst_lwu,inst_sh, inst_sb,inst_sd,inst_sw,inst_ld,inst_lw,inst_lhu,inst_lh,inst_lbu,inst_lb;
wire inst_sub,inst_srli,inst_sllw,inst_slli,inst_sltiu,inst_srai,inst_sltu,
        inst_slt,inst_slliw,inst_sraiw,inst_sraw,inst_srliw,inst_srlw,
        inst_sll,inst_srl,inst_sra,inst_xor,inst_slti;
wire inst_or,inst_xori,inst_and,inst_andi,inst_lui,inst_ori;
wire inst_mulw,inst_divw,inst_remw,inst_mul,inst_divuw,inst_remuw,inst_div,inst_divu,inst_rem,inst_remu,inst_mulh,inst_mulhsu,inst_mulhu;
wire inst_csrrs,inst_csrrw,inst_mret,inst_ecall;

assign inst_ecall = inst == 32'b0000000_00000_00000_000_00000_1110011;
assign inst_mret = inst == 32'b0011000_00010_00000_000_00000_1110011;
assign inst_csrrs = opcode == 7'b1110011 && func3 == 3'b010;
assign inst_csrrw = opcode == 7'b1110011 && func3 == 3'b001;

assign inst_ori = opcode == 7'b0010011 && func3 == 3'b110;
assign inst_mulh = opcode == 7'b0110011 && func3 == 3'b001 && func7 == 7'b0000001;
assign inst_mulhsu = opcode == 7'b0110011 && func3 == 3'b010 && func7 == 7'b0000001;
assign inst_mulhu = opcode == 7'b0110011 && func3 == 3'b011 && func7 ==  7'b0000001;
assign inst_remu = opcode == 7'b0110011 && func3 == 3'b111 && func7 == 7'b0000001;
assign inst_remw = opcode == 7'b0111011 && func3 == 3'b110 && func7 == 7'b0000001;
assign inst_rem = opcode == 7'b0110011 && func3 == 3'b110 && func7 == 7'b0000001;
assign inst_remuw = opcode == 7'b0111011 && func3 == 3'b111 && func7 == 7'b0000001;
assign inst_divuw = opcode == 7'b0111011 && func3 == 3'b101 && func7 == 7'b0000001;
assign inst_divw = opcode == 7'b0111011 &&func3 ==3'b100 && func7 == 7'b0000001;
assign inst_divu = opcode == 7'b0110011 && func3 == 3'b101 && func7 == 7'b0000001;
assign inst_div = opcode == 7'b0110011 && func3 == 3'b100 && func7 == 7'b0000001;

assign inst_srl = opcode == 7'b0110011 && func3 == 3'b101 && func7 == 7'b0000000;
assign inst_sra = opcode == 7'b0110011 && func3 == 3'b101 && func7 == 7'b0100000;
assign inst_xor = opcode == 7'b0110011 && func3 == 3'b100 && func7 == 7'b0000000;
assign inst_slti = opcode == 7'b0010011 && func3 == 3'b010;
assign inst_sll = opcode == 7'b0110011 && func3 == 3'b001 && func7 == 7'b0000000;

assign inst_lui = opcode == 7'b0110111;
assign inst_mul = opcode == 7'b0110011 && func3 == 3'b000 && func7 == 7'b0000001;
assign inst_sraw = opcode == 7'b0111011 && func3 == 3'b101 && func7 == 7'b0100000;
assign inst_srliw = opcode == 7'b0011011 && func3 == 3'b101 && func7[6:1] == 6'b000000;
assign inst_srlw = opcode == 7'b0111011 && func3 == 3'b101 && func7 == 7'b0000000;
assign inst_slliw = opcode == 7'b0011011 && func3 == 3'b001 && func7[6:1] == 6'b000000;
assign inst_sraiw = opcode == 7'b0011011 && func3 == 3'b101 && func7[6:1] == 6'b010000;
assign inst_slt = opcode == 7'b0110011 && func3 == 3'b010 && func7 == 7'b0000000;

assign inst_subw = opcode == 7'b0111011 && func3 == 3'b000 &&func7 == 7'b0100000;

assign inst_mulw = opcode == 7'b0111011 &&func3 ==3'b000 && func7 == 7'b0000001;
assign inst_and = opcode == 7'b0110011 && func3 == 3'b111 && func7 == 7'b0000000;
assign inst_andi = opcode === 7'b0010011 && func3 == 3'b111;
assign inst_sltu = opcode == 7'b0110011 && func3 == 3'b011 && func7 == 7'b0000000;
assign inst_srai = opcode == 7'b0010011 && func3 == 3'b101 && func7[6:1] == 6'b010000;
assign inst_add = opcode == 7'b0110011 && func3 == 3'b000 && func7 == 7'b0000000; 
assign inst_addw = opcode == 7'b0111011 && func3 == 3'b000 && func7 == 7'b0000000;
assign inst_lb = opcode == 7'b0000011 &&func3 == 3'b000;
assign inst_sltiu = opcode == 7'b0010011 && func3 == 3'b011;
assign inst_sub = opcode == 7'b0110011 && func3 == 3'b000 && func7 == 7'b0100000;
assign inst_srli = opcode == 7'b0010011 && func3 == 3'b101 && func7[6:1] == 6'b000000; //func7 when the is func7[0] is zeros will the inst works
assign inst_sllw = opcode == 7'b0111011 && func3 == 3'b001 && func7 == 7'b0000000; 
assign inst_slli = opcode == 7'b0010011 && func3 ==3'b001 && func7[6:1] == 6'b000000;
assign inst_sh = opcode == 7'b0100011 && func3 == 3'b001;
assign inst_sd = opcode == 7'b0100011 && func3 == 3'b011;
assign inst_sw = opcode == 7'b0100011 && func3 == 3'b010;
assign inst_or = opcode == 7'b0110011 && func3 == 3'b110 && func7 == 7'b0000000;
assign inst_xori = opcode == 7'b0010011 && func3 == 3'b100;
assign inst_lw = opcode == 7'b0000011 && func3 == 3'b010;
assign inst_lhu = opcode == 7'b0000011 && func3 == 3'b101;
assign inst_lh = opcode == 7'b0000011 && func3 ==3'b001;
assign inst_ld = opcode == 7'b0000011 && func3 == 3'b011;
assign inst_lbu = opcode == 7'b0000011 && func3 == 3'b100;
assign inst_sb =  opcode == 7'b0100011 && func3 == 3'b000;
assign inst_lwu = opcode == 7'b0000011 && func3 == 3'b110;
assign inst_auipc = opcode == 7'b0010111;
assign inst_addi = opcode == 7'b0010011 && func3 == 3'b000;
assign inst_addiw = opcode == 7'b0011011 && func3 == 3'b000;
assign inst_ebreak = inst==32'h00100073;

assign inst_fence_i = inst == 32'b00000000000000000001000000001111;
wire [2:0] inst_Src1_Select;
wire [3:0] inst_Src2_Select;
wire [2:0] inst_result_Select;
wire [10:0] mem_OneHot;
wire [13:0] alu_OneHOt;
wire [12:0] mul_div_OneHot;
wire [3:0] csr_OneHot;
assign mem_OneHot={inst_lwu,inst_sh, inst_sd,inst_sw,inst_ld,inst_lw,inst_lhu,inst_lh,inst_lbu,inst_lb,inst_sb};


assign inst_Src1_Select = inst_auipc?3'b001:
                            inst_sll|inst_srl|inst_sra|inst_xor|inst_slti|inst_slt|inst_subw|inst_and |inst_andi|inst_sltu|inst_add|inst_addi|inst_sd|inst_addiw|inst_ld|inst_lw|inst_lhu|inst_lh|inst_lbu|inst_lb|inst_sh|inst_sw|inst_sd|inst_sb|
                            inst_ori|inst_slliw|inst_srai|inst_sub|inst_srli|inst_sllw|inst_slli|inst_sltiu|inst_or|inst_xori|inst_lwu|inst_addw ?3'b010:
                            inst_sraiw |inst_sraw|inst_srlw|inst_srliw?3'b100:3'b000;

assign inst_Src2_Select = inst_lui|inst_auipc ? 4'b0001:
                            inst_ori|inst_slti|inst_slliw|inst_andi|inst_addi|inst_addiw|inst_srli|inst_slli|inst_sltiu |inst_ld|inst_lw|inst_lhu|inst_lh|
                            inst_sraiw|inst_srliw|inst_srai|inst_lbu|inst_lb|inst_xori|inst_lwu? 4'b0010:  //i_type
                            inst_sd |inst_sh|inst_sb|inst_sw? 4'b0100:   //s_type
                            inst_sll|inst_srl|inst_sra|inst_xor|inst_sraw|inst_srlw|inst_slt|inst_subw|inst_and|inst_sltu|inst_add|inst_sub|inst_sllw|inst_or|inst_addw? 4'b1000:4'b0000;

 
assign inst_result_Select = inst_ori|inst_sll|inst_srl|inst_sra|inst_xor|inst_slti|inst_lui|inst_slt|inst_and|inst_andi|inst_sltu|inst_srai|inst_auipc|inst_addi| inst_sub |inst_srli|inst_slli|inst_sltiu|inst_or|inst_xori|inst_add?3'b001:    //not turned
                            inst_sraiw |inst_sraw|inst_srlw|inst_srliw|inst_slliw|inst_subw|inst_sllw|inst_addiw|inst_addw?3'b100:3'b000;  //signed 32bit

wire op_add, op_sub, op_slt, op_sltu,op_and, op_or, op_xor,op_sll, op_srl, op_sra, op_lui,op_sraw,op_sllw,op_srlw;
assign op_add = inst_auipc|inst_addi|inst_addiw|inst_sd|inst_ld|inst_lwu|inst_sw|inst_lw| inst_lhu|inst_lh|inst_lbu|
                            inst_lb|inst_sb|inst_sh|inst_addw|inst_add;
assign op_sub = inst_sub|inst_subw;
assign op_sll = inst_slli|inst_sll;
assign op_or = inst_or|inst_ori;
assign op_xor = inst_xori|inst_xor;
assign op_srl = inst_srli|inst_srl;
assign op_slt = inst_slt|inst_slti;
assign op_sltu = inst_sltiu|inst_sltu;
assign op_sra = inst_srai|inst_sra;
assign op_and = inst_and|inst_andi;
assign op_lui = inst_lui;
assign op_sllw = inst_sllw|inst_slliw;
assign op_srlw = inst_srlw|inst_srliw;
assign op_sraw = inst_sraiw|inst_sraw;
//opOneHot is not defined
    
assign ID_we = inst_ori|inst_sll|inst_srl|inst_sra|inst_xor|inst_slti|inst_lui|inst_mul|inst_sraiw |inst_sraw|inst_srlw|inst_srliw|inst_slt|
inst_slliw|inst_remw|inst_subw|inst_divw|inst_mulw|inst_and|inst_andi|inst_sltu|inst_srai|inst_auipc | inst_addi|IF_we|inst_addiw|
inst_lwu|inst_ld|inst_lw|inst_lhu|inst_lh|inst_lbu|inst_lb|inst_sub|inst_srli|inst_sllw|inst_slli|inst_sltiu|inst_or|inst_xori|
inst_addw|inst_add|inst_divuw|inst_remuw|inst_div|inst_divu|inst_rem|inst_remu|inst_mulh|inst_mulhsu|inst_mulhu;
assign ID_result = IF_data;
assign ID_addr = IF_we ?IF_addr:dest_addr;


//regfile
regfile regesiterfile(
    .clk(clk),

    .dpra1(src1_addr),
    .dpo1(Inst_Src1_Read),
    .dpra2(src2_addr),
    .dpo2(Inst_Src2_Read),
    .dpra3(5'd17),
    .dpo3(Inst_Src3_Read),
    .we(MEM_we),
    .a(MEM_addr),
    .d(MEM_data)
);
csr csr(
    .clk(clk),
    .rst(rst),
    .int_time(int_time),
    .pc(inst_addr),
    .src1(Inst_Src1_forwarding),
    .a4(64'hb),
    .csr_num(inst[31:20]),
    .csr_OneHot(csr_OneHot),

    .csr_result(csr_result)

);
//Data forwarding
wire [63:0] Inst_Src1_forwarding,Inst_Src2_forwarding,Inst_Src3_forwarding;

assign Inst_Src1_forwarding = 
(EX_we & (EX_addr == src1_addr)) ? EX_data :
                                 (MEM_we & (MEM_addr == src1_addr)) ? MEM_data :
                    
                                                    Inst_Src1_Read;
assign Inst_Src2_forwarding = 
(EX_we & (EX_addr == src2_addr)) ? EX_data :
                                 (MEM_we & (MEM_addr == src2_addr)) ? MEM_data :
                                                    Inst_Src2_Read;



assign Inst_Src3_forwarding = 
(EX_we & (EX_addr == 5'd17)) ? EX_data :
                                 (MEM_we & (MEM_addr == 5'd17)) ? MEM_data :
                                                    Inst_Src3_Read;
wire [31:0] inst_addr_next,jump_addr_next_jal,jump_addr_next_jalr,jump_addr_next_beq,jump_addr_next_bltu,
    jump_addr_next_bne,jump_addr_next_blt,jump_addr_next_bge,jump_addr_next_bgeu;
wire IF_we;
    wire [4:0] IF_addr;
    wire [63:0] IF_data;
    wire [20:0] j_type_imm;
    wire [12:0] b_type_imm;
    wire inst_jal,inst_jalr,inst_bne,inst_beq,inst_blt,inst_bge,inst_bgeu,inst_bltu;
    assign src1_addr = inst[19:15];
    assign src2_addr = inst[24:20];
    assign j_type_imm = {inst[31],inst[19:12],inst[20],inst[30:21],1'b0};
    assign b_type_imm = {inst[31],inst[7],inst[30:25],inst[11:8],1'b0};
    assign inst_bgeu = inst[6:0] == 7'b1100011 && inst[14:12] == 3'b111;
    assign inst_jal = inst[6:0] == 7'b1101111;
    assign inst_jalr = inst[6:0] == 7'b1100111 && func3 == 3'b000;
    assign inst_bne = inst[6:0] == 7'b1100011 && inst[14:12] == 3'b001;
    assign inst_beq = inst[6:0] == 7'b1100011 && inst[14:12] == 3'b000;
    assign inst_blt = inst[6:0] == 7'b1100011 && inst[14:12] == 3'b100;
    assign inst_bge = inst[6:0] == 7'b1100011 && inst[14:12] == 3'b101;
    assign inst_bltu = inst[6:0] == 7'b1100011 && inst[14:12] == 3'b110;
    
    assign jump_addr_next_bltu = Inst_Src1_forwarding <Inst_Src2_forwarding ?inst_addr + {{19{b_type_imm[12]}},b_type_imm}: inst_addr +32'd4;
    assign jump_addr_next_bgeu = Inst_Src1_forwarding>= Inst_Src2_forwarding?inst_addr + {{19{b_type_imm[12]}},b_type_imm}: inst_addr +32'd4;
    assign jump_addr_next_bge =  (Inst_Src1_forwarding[63] == 0 && Inst_Src2_forwarding[63] == 1)| (~(Inst_Src1_forwarding[63]  ^ Inst_Src2_forwarding[63]) && Inst_Src1_forwarding>=Inst_Src2_forwarding) ?
                                inst_addr + {{19{b_type_imm[12]}},b_type_imm}: inst_addr +32'd4;

    assign jump_addr_next_blt = (Inst_Src1_forwarding[63] == 1 && Inst_Src2_forwarding[63] == 0)| (~(Inst_Src1_forwarding[63]  ^ Inst_Src2_forwarding[63] ) && Inst_Src1_forwarding<Inst_Src2_forwarding)?
                                inst_addr + {{19{b_type_imm[12]}},b_type_imm}: inst_addr +32'd4;

    assign jump_addr_next_beq = Inst_Src1_forwarding == Inst_Src2_forwarding? inst_addr + {{19{b_type_imm[12]}},b_type_imm} : inst_addr +32'd4;
    assign jump_addr_next_jal = inst_addr + {{11{j_type_imm[20]}},j_type_imm};
    assign jump_addr_next_jalr = Inst_Src1_forwarding[31:0] + {{20{inst[31]}},inst[31:20]};
    assign jump_addr_next_bne = Inst_Src1_forwarding != Inst_Src2_forwarding? inst_addr + {{19{b_type_imm[12]}},b_type_imm} : inst_addr +32'd4;
    assign inst_addr_next = 
                inst_mret |inst_ecall? csr_result[31:0]:
                inst_jal ?jump_addr_next_jal :
				inst_bltu ? jump_addr_next_bltu :
                inst_bne ? jump_addr_next_bne :
                inst_beq ? jump_addr_next_beq :
                inst_bge ? jump_addr_next_bge :
                inst_blt ? jump_addr_next_blt :
                inst_bgeu ? jump_addr_next_bgeu:
				inst_jalr?{jump_addr_next_jalr[31:1],1'b0}:
				inst_addr+ 32'h4;
    assign IF_we = inst_jal |inst_jalr |inst_csrrs|inst_csrrw;
    assign IF_data =    inst_jal |inst_jalr     ?{32'd0,inst_addr +32'h4}:
                        inst_csrrs|inst_csrrw   ?csr_result :
                        64'd0;
    assign IF_addr = inst[11:7];
wire junm_en;
assign junm_en =inst_ecall|inst_mret|inst_jal|inst_jalr|inst_bne|inst_beq|inst_blt|inst_bge|inst_bgeu|inst_bltu;
assign ID_IF_Bus = {junm_en,inst_addr_next};
assign mul_div_OneHot = {inst_mulh,inst_mulhsu,inst_mulhu,inst_rem,inst_remu,inst_div,inst_divu,inst_remuw,inst_divuw,inst_mul,inst_remw,inst_divw,inst_mulw} ;
assign csr_OneHot = {inst_ecall,inst_mret,inst_csrrs,inst_csrrw};
assign alu_OneHOt = {op_add, op_sub, op_slt, op_sltu,op_and, op_or, op_xor,op_sll, op_srl, op_sra, op_lui,op_sraw,op_sllw,op_srlw};
assign ID_EX_Bus = {valid,mul_div_OneHot,alu_OneHOt,mem_OneHot,inst_ebreak,IF_we,inst_addr,inst,ID_result,ID_addr,ID_we,inst_result_Select,inst_Src1_Select,inst_Src2_Select,Inst_Src2_forwarding,Inst_Src1_forwarding};
assign pause_mem = |mem_OneHot;//inst_ld|inst_lw|inst_lhu|inst_lh|inst_lbu|inst_lwu|inst_lb; //for the convience of the icache fetch operation
endmodule
