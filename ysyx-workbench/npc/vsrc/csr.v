`include "defines.vh"
module csr(
    input clk,
    input rst,
    input[31:0] pc,
    input[63:0] a4,

    input int_time,  //tiem clock in 
    input [63:0] src1,
    input [11:0] csr_num,
    input [3:0] csr_OneHot,

    output [63:0] csr_result 
);
wire [3:0] csr_map_num;
wire inst_ecall,inst_mret,inst_csrrs,inst_csrrw;
assign {inst_ecall,inst_mret,inst_csrrs,inst_csrrw} = csr_OneHot;
assign csr_result = inst_csrrw|inst_csrrs               ? csr_reg[csr_map_num]  :
                    inst_mret && ~time_interrupt_flag   ? csr_reg[4'd4] +64'h4  :
                    inst_mret && time_interrupt_flag    ? csr_reg[4'd4]         : //back from time_int
                    inst_ecall|time_interrupt           ? csr_reg[4'd3]         : // jump to mtvec
                    64'h0; 

wire time_interrupt;
reg  time_interrupt_flag;
assign time_interrupt = int_time ==1 &&csr_reg[4'd1][3] ==1'b1 && csr_reg[4'd2][7] == 1'b1;

csr_map csr_map(
    .csr_num(csr_num),
    .csr_map_num(csr_map_num)
);


reg [63:0] csr_reg [15:0];
always @(posedge clk)begin
    if(rst) begin
        for(int i=0;i<16;i++) begin
            csr_reg[i] <= 64'd0;
        end
        time_interrupt_flag <= 1'b0;
    end
    else if(inst_csrrw)begin
        csr_reg[csr_map_num] <= src1;
    end
    else if(inst_csrrs) begin
        csr_reg[csr_map_num] <= src1 | csr_reg[csr_map_num]; 
    end
    else if(inst_ecall)begin
        csr_reg [4] <= {32'd0,pc};   //pc put in mepc
        csr_reg [5] <= a4;     //gpr[17] put in mcause   17 means the a4 is designed to store the cause 
    end
    if(time_interrupt) begin
        csr_reg [4] <= {32'd0,pc};   //pc put in mepc
        csr_reg [5] <= a4;     //gpr[17] put in mcause   17 means the a4 is designed to store the cause         
        time_interrupt_flag <= 1'b1;
    end
    else if(inst_mret && time_interrupt_flag == 1'b1)   //assume that mret is slower than the next time int come
    begin
        time_interrupt_flag <= 1'b0;
    end

end
    
endmodule