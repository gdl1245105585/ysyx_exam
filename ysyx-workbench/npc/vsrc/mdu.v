module mdu(
    input clk,
    input rst,

    input [12:0] mul_div_OneHot,
    input [63:0] src1,
    input [63:0] src2,
    output  [63:0]debug_mul_div_result,
    output  mul_div_valid,
    output  [63:0] result
);
wire inst_mulh,inst_mulhsu,inst_mulhu,inst_rem,inst_remu,inst_div,inst_divu,inst_remuw,inst_divuw,inst_mul,inst_remw,inst_divw,inst_mulw;
assign {inst_mulh,inst_mulhsu,inst_mulhu,inst_rem,inst_remu,inst_div,inst_divu,inst_remuw,inst_divuw,inst_mul,inst_remw,inst_divw,inst_mulw} = mul_div_OneHot;


assign debug_mul_div_result = divu_result;
wire [127:0] mul_result;
wire [127:0] mulh_result;
wire [127:0] mulhsu_result;
wire [127:0] mulhu_result;
wire [63:0] mulw_result;

wire [63:0] div_result;
wire [63:0] divw_result;
wire [63:0] divu_result;
wire [63:0] divuw_result;

wire [63:0] remw_result;
wire [63:0] rem_result;
wire [63:0] remuw_result;
wire [63:0] remu_result;


wire [63:0] re_hi,re_lo;
wire [1:0] mul_signed;
assign mul_signed = inst_mulh|inst_mul|inst_mulw ? 2'b11:
                    inst_mulhsu ? 2'b01:2'b00;
//wire [63:0] mul_src1 = inst_mulh|inst_mul|inst_mulw|inst_mulhsu|inst_mulhu ?src1:64'd0 ;
//wire [63:0] mul_src2 = inst_mulh|inst_mul|inst_mulw|inst_mulhsu|inst_mulhu ?src2:64'd0 ;
mul mul(
    .src1(src1),
    .src2(src2),
    
    .mul_signed(mul_signed),  // bit 0 induce the src1 signed  1 is signed
    .re_hi(re_hi),
    .re_lo(re_lo)
);
wire div_sign;
assign div_sign = inst_rem|inst_remw |inst_divw|inst_div;
wire shorten;
assign shorten = inst_remw|inst_remuw|inst_divw|inst_divuw;
wire [63:0] div_result;
wire [63:0] rem_result;
div div(
    .clk(),
    .rst(),

    .sign(div_sign),
    .div_data(src1),
    .dived_data(src2),
    .div_ready(),
    .shorten(shorten),
    
    .div_valid(),
    .result_hi(rem_result),
    .result_lo(div_result)

);
// always @(posedge clk) begin
//     if(inst_remw) begin
//         $display("%x %x",src1,src2);
//     end
// end
//verilator lint_off WIDTH
// assign mul_result = src2 * src1;
// assign mulh_result = $signed (src1) * $signed( src2);
// assign mulhsu_result = $signed (src1) * src2;
// assign mulw_result =  {{32{mul_result[31]}},mul_result[31:0]};

// assign rem_result = $signed (src1) % $signed (src2);
// assign remu_result = src1 % src2;
// wire [31:0] remw_32;
// assign remw_32 = $signed( src1[31:0] )% $signed (src2[31:0]);
// assign remw_result = {{32{remw_32[31]}},remw_32};
// wire [31:0] remuw_32;
// assign remuw_32 = (src1[31:0] %  src2[31:0]);
// assign remuw_result =  {{32{remuw_32[31]}},remuw_32};

// assign divu_result = src1 /src2;
// assign div_result = $signed(src1 )/ $signed(src2);

// wire [31:0] devidew_32;
// assign devidew_32 =  src1[31:0] / src2[31:0] ;
// assign divuw_result =  {{32{devidew_32[31]}},devidew_32};

// wire [31:0] devide_32 ; 
// assign devide_32 = $signed( src1[31:0]) / $signed (src2[31:0]) ;
// assign divw_result =  {{32{devide_32[31]}} , devide_32};  //

assign mul_div_valid = mul_div_OneHot != 13'd0;

assign result =     
                    inst_mul  ? re_lo:
                    inst_mulh ? re_hi:
                    inst_mulhsu? re_hi:
                    inst_mulhu? re_hi :
                    inst_mulw ? {{32{re_lo[31]}},re_lo[31:0]}:
                    // inst_mul  ? mul_result[63:0]:
                    // inst_mulh ? mulh_result[127:64]:
                    // inst_mulhsu? mulhsu_result[127:64]:
                    // inst_mulhu? mul_result[127:64] :
                    // inst_mulw ? mulw_result:
                    inst_rem ? rem_result :
                    inst_remu ? rem_result:
                    inst_remuw ? rem_result:
                    inst_remw ? rem_result:
                    inst_divw ? div_result:
                    inst_div ? div_result:
                    inst_divu ? div_result:
                    inst_divuw ? div_result: 64'd0;
endmodule