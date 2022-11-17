module csr_map(
    input [11:0] csr_num,
    output reg [3:0] csr_map_num
);

always @(*) begin
    case(csr_num) 
        //12'h0 :     assign csr_map_num =4'd0;
        12'h300:     csr_map_num =4'd1;   //mstatue
        12'h304:     csr_map_num =4'd2;      //mie 
        12'h305:     csr_map_num =4'd3; //mtvec
        12'h341:     csr_map_num =4'd4; //mepc
        12'h342:     csr_map_num =4'd5; //mcause
        12'h344:     csr_map_num =4'd6;  //mip
        // 12'h4000:   assign csr_map_num =4'd7; //mtimecmp
        // 12'hbff8:   assign csr_map_num =4'd8; //mtime
        default:     csr_map_num =4'd15;
    endcase
end
endmodule