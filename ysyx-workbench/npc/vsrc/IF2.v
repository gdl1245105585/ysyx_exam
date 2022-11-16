`include "defines.vh"
module IF2(
    input clk,
    input rst,
    
    input stop_all,
    input [`ID_IF_Bus-1:0] ID_IF_Bus,
    input wire [`IF_IF2_Bus-1:0] IF_IF2_Bus,
    input wire pause_mem,
    output wire [`IF2_ID_Bus-1:0] IF2_ID_Bus
);
reg valid;
wire [31:0] jump_next;
wire jump_en;
assign {jump_en,jump_next} = ID_IF_Bus;
reg [`IF_IF2_Bus-1:0] IF2_ID_Bus_reg;
assign IF2_ID_Bus = {valid,IF2_ID_Bus_reg};
always @(posedge clk) begin
    if(rst) begin
        IF2_ID_Bus_reg<= `IF_IF2_Bus'd0; 
        valid <= 1'd0;
    end
    else if(jump_en) begin
        IF2_ID_Bus_reg<= `IF_IF2_Bus'd0;
        valid <= 1'd0;
    end
    else if(pause_mem|stop_all) begin
    end
    else begin
        IF2_ID_Bus_reg <= IF_IF2_Bus;
        valid <= 1'd1;
    end
end
endmodule
