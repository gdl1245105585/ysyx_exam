
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/11/11 10:38:58
// Design Name: 
// Module Name: mul
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module mul(
    input [63:0] src1,
    input [63:0] src2,
    
    input [1:0] mul_signed,  // bit 0 induce the src1 signed  1 is signed
    output [63:0] re_hi,
    output [63:0] re_lo
    );
    

    wire src1_abs_flag;
    wire src2_abs_flag;

    assign src1_abs_flag = src1[63] && mul_signed[0];
    assign src2_abs_flag = src2[63] && mul_signed[1];

    wire [63:0] src1_mul; 
    wire [63:0] src2_mul;

    assign src1_mul = src1_abs_flag   ? ~src1 + 1 : src1;
    assign src2_mul = src2_abs_flag   ? ~src2 + 1 : src2;

    // wire  [127:0] booth [63:0];

    // genvar i;
    // generate
    // for(i=0;i<64;i=i+1) begin
    //     assign booth[i] = {64'd0,(src1_mul[i] ? src2_mul : 64'd0)} << i ;
    // end
    // endgenerate

    // // add like tree

    // wire [127:0] tree_32 [31:0];
    // generate
    // for(i=0;i<64;i=i+2) begin
    // assign tree_32[i>>1] = booth[i] + booth[i+1]  ;
    // end
    // endgenerate
       
    // wire [127:0] tree_16 [15:0];
    // generate
    // for(i=0;i<32;i=i+2) begin
    // assign tree_16[i>>1] = tree_32[i] + tree_32[i+1]  ;
    // end
    // endgenerate
    
    // wire [127:0] tree_8 [7:0];
    // generate
    // for(i=0;i<16;i=i+2) begin
    // assign tree_8[i>>1] = tree_16[i] + tree_16[i+1]  ;
    // end
    // endgenerate
   
    // wire [127:0] tree_4 [3:0];
    // generate
    // for(i=0;i<8;i=i+2) begin
    // assign tree_4[i>>1] = tree_8[i] + tree_8[i+1]  ;
    // end
    // endgenerate
    
    //  wire [127:0] result_abs;
    // assign result_abs = tree_4[0] + tree_4[1] +tree_4[2] + tree_4[3];
    wire [63:0] mul_32_1_var;
    wire [63:0] mul_32_2_var;
    wire [63:0] mul_32_3_var;
    wire [63:0] mul_32_4_var;
    mul_32 mul_32_1 (
        .src1(src1_mul[31:0]),
        .src2(src2_mul[31:0]),

        .output1(mul_32_1_var)
    );
    mul_32 mul_32_2 (
        .src1(src1_mul[31:0]),
        .src2(src2_mul[63:32]),

        .output1(mul_32_2_var)
    );
    mul_32 mul_32_3 (
        .src1(src1_mul[63:32]),
        .src2(src2_mul[31:0]),

        .output1(mul_32_3_var)
    );
    mul_32 mul_32_4 (
        .src1(src1_mul[63:32]),
        .src2(src2_mul[63:32]),

        .output1(mul_32_4_var)
    );

    wire [127:0] result_abs;
    assign result_abs = {64'd0,mul_32_1_var} + {32'd0,mul_32_2_var,32'd0} + {32'd0,mul_32_3_var,32'd0} +{mul_32_4_var,64'd0};

    // assign result_abs = ({64'd0,(src1_mul[0] ? src2_mul : 64'd0)} << 0) +
    //                     ({64'd0,(src1_mul[1] ? src2_mul : 64'd0)} << 1) +
    //                     ({64'd0,(src1_mul[2] ? src2_mul : 64'd0)} << 2) +
    //                     ({64'd0,(src1_mul[3] ? src2_mul : 64'd0)} << 3) +
    //                     ({64'd0,(src1_mul[4] ? src2_mul : 64'd0)} << 4) +
    //                     ({64'd0,(src1_mul[5] ? src2_mul : 64'd0)} << 5) +
    //                     ({64'd0,(src1_mul[6] ? src2_mul : 64'd0)} << 6) +
    //                     ({64'd0,(src1_mul[7] ? src2_mul : 64'd0)} << 7) +
    //                     ({64'd0,(src1_mul[8] ? src2_mul : 64'd0)} << 8) +
    //                     ({64'd0,(src1_mul[9] ? src2_mul : 64'd0)} << 9) +
    //                     ({64'd0,(src1_mul[10] ? src2_mul : 64'd0)} << 10) +
    //                     ({64'd0,(src1_mul[11] ? src2_mul : 64'd0)} << 11) +
    //                     ({64'd0,(src1_mul[12] ? src2_mul : 64'd0)} << 12) +
    //                     ({64'd0,(src1_mul[13] ? src2_mul : 64'd0)} << 13) +
    //                     ({64'd0,(src1_mul[14] ? src2_mul : 64'd0)} << 14) +
    //                     ({64'd0,(src1_mul[15] ? src2_mul : 64'd0)} << 15) +
    //                     ({64'd0,(src1_mul[16] ? src2_mul : 64'd0)} << 16) +
    //                     ({64'd0,(src1_mul[17] ? src2_mul : 64'd0)} << 17) +
    //                     ({64'd0,(src1_mul[18] ? src2_mul : 64'd0)} << 18) +
    //                     ({64'd0,(src1_mul[19] ? src2_mul : 64'd0)} << 19) +
    //                     ({64'd0,(src1_mul[20] ? src2_mul : 64'd0)} << 20) +
    //                     ({64'd0,(src1_mul[21] ? src2_mul : 64'd0)} << 21) +
    //                     ({64'd0,(src1_mul[22] ? src2_mul : 64'd0)} << 22) +
    //                     ({64'd0,(src1_mul[23] ? src2_mul : 64'd0)} << 23) +
    //                     ({64'd0,(src1_mul[24] ? src2_mul : 64'd0)} << 24) +
    //                     ({64'd0,(src1_mul[25] ? src2_mul : 64'd0)} << 25) +
    //                     ({64'd0,(src1_mul[26] ? src2_mul : 64'd0)} << 26) +
    //                     ({64'd0,(src1_mul[27] ? src2_mul : 64'd0)} << 27) +
    //                     ({64'd0,(src1_mul[28] ? src2_mul : 64'd0)} << 28) +
    //                     ({64'd0,(src1_mul[29] ? src2_mul : 64'd0)} << 29) +
    //                     ({64'd0,(src1_mul[30] ? src2_mul : 64'd0)} << 30) +
    //                     ({64'd0,(src1_mul[31] ? src2_mul : 64'd0)} << 31) +
    //                     ({64'd0,(src1_mul[32] ? src2_mul : 64'd0)} << 32) +
    //                     ({64'd0,(src1_mul[33] ? src2_mul : 64'd0)} << 33) +
    //                     ({64'd0,(src1_mul[34] ? src2_mul : 64'd0)} << 34) +
    //                     ({64'd0,(src1_mul[35] ? src2_mul : 64'd0)} << 35) +
    //                     ({64'd0,(src1_mul[36] ? src2_mul : 64'd0)} << 36) +
    //                     ({64'd0,(src1_mul[37] ? src2_mul : 64'd0)} << 37) +
    //                     ({64'd0,(src1_mul[38] ? src2_mul : 64'd0)} << 38) +
    //                     ({64'd0,(src1_mul[39] ? src2_mul : 64'd0)} << 39) +
    //                     ({64'd0,(src1_mul[40] ? src2_mul : 64'd0)} << 40) +
    //                     ({64'd0,(src1_mul[41] ? src2_mul : 64'd0)} << 41) +
    //                     ({64'd0,(src1_mul[42] ? src2_mul : 64'd0)} << 42) +
    //                     ({64'd0,(src1_mul[43] ? src2_mul : 64'd0)} << 43) +
    //                     ({64'd0,(src1_mul[44] ? src2_mul : 64'd0)} << 44) +
    //                     ({64'd0,(src1_mul[45] ? src2_mul : 64'd0)} << 45) +
    //                     ({64'd0,(src1_mul[46] ? src2_mul : 64'd0)} << 46) +
    //                     ({64'd0,(src1_mul[47] ? src2_mul : 64'd0)} << 47) +
    //                     ({64'd0,(src1_mul[48] ? src2_mul : 64'd0)} << 48) +
    //                     ({64'd0,(src1_mul[49] ? src2_mul : 64'd0)} << 49) +
    //                     ({64'd0,(src1_mul[50] ? src2_mul : 64'd0)} << 50) +
    //                     ({64'd0,(src1_mul[51] ? src2_mul : 64'd0)} << 51) +
    //                     ({64'd0,(src1_mul[52] ? src2_mul : 64'd0)} << 52) +
    //                     ({64'd0,(src1_mul[53] ? src2_mul : 64'd0)} << 53) +
    //                     ({64'd0,(src1_mul[54] ? src2_mul : 64'd0)} << 54) +
    //                     ({64'd0,(src1_mul[55] ? src2_mul : 64'd0)} << 55) +
    //                     ({64'd0,(src1_mul[56] ? src2_mul : 64'd0)} << 56) +
    //                     ({64'd0,(src1_mul[57] ? src2_mul : 64'd0)} << 57) +
    //                     ({64'd0,(src1_mul[58] ? src2_mul : 64'd0)} << 58) +
    //                     ({64'd0,(src1_mul[59] ? src2_mul : 64'd0)} << 59) +
    //                     ({64'd0,(src1_mul[60] ? src2_mul : 64'd0)} << 60) +
    //                     ({64'd0,(src1_mul[61] ? src2_mul : 64'd0)} << 61) +
    //                     ({64'd0,(src1_mul[62] ? src2_mul : 64'd0)} << 62) +
    //                     ({64'd0,(src1_mul[63] ? src2_mul : 64'd0)} << 63) ;
    
     wire signed_flag ;
     assign signed_flag = (src1_abs_flag ^ src2_abs_flag) && (mul_signed ==2'b11);


     wire [127:0] result;
     assign result = signed_flag ? ~result_abs +1 : result_abs; 

    assign re_hi = result[127:64];
    assign re_lo = result[63:0] ;
endmodule
