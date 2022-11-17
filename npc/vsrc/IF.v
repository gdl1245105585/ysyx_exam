`include "defines.vh"
module IF(
    input clk,
    input rst,

    input stop_all,
    input [`ID_IF_Bus-1:0] ID_IF_Bus,
    input [`ctrlBus-1:0] ctrlBus,
    input pause_mem,
    output [`IF_IF2_Bus-1:0] IF_ID_Bus,
    output reg [31:0] inst_addr
);

    wire [31:0] inst_addr_next;
    wire [31:0] jump_next;
    wire jump_en;
    reg pause_mem_sec;
    assign {jump_en,jump_next} = ID_IF_Bus;
    assign inst_addr_next = jump_en?jump_next:inst_addr+32'd4;

    always @(posedge clk) begin
        if(rst) begin
                inst_addr <= 32'h80000000;
                pause_mem_sec <= 1'd0;
        end
        else if(pause_mem|stop_all)
        begin 
        end
        else begin
            inst_addr <= inst_addr_next;
            pause_mem_sec <= 1'd0;
        end
    end
	
    // always @(posedge clk) begin
	// if(rst) begin
	//     jalr_pause <=1'b0;
	// end
	// else if(inst_jalr && jalr_pause ==1'b0)begin
	//     jalr_pause <= 1'b1;
	// end
	// else
	//     jalr_pause <= 1'b0;
    // end
    assign IF_ID_Bus = {inst_addr};
endmodule

