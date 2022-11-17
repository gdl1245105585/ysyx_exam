`include "defines.vh"
import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
 
module regfile (
    input [4:0] a,
    input [63:0] d,
    input [4:0] dpra1,
    input [4:0] dpra2,
    input [4:0] dpra3,
    input clk,
    input we,
    output [63:0] dpo1,
    output [63:0] dpo2,
    output [63:0] dpo3
);
  reg [63:0] rf [31:0];
  initial  begin
    set_gpr_ptr(rf); 
  end
  always @(posedge clk) begin
    if (we) rf[a] <= d;
  end

  assign dpo1 = rf[dpra1];
  assign dpo2 = rf[dpra2];
  assign dpo3 = rf[dpra3];
endmodule

