module find_index(

    input [15:0] data,
    output reg [3:0] index
);

always @(*) begin
    case(data)
        16'b1 : index = 4'd0;
        16'b10 : index = 4'd1;
        16'b100 : index = 4'd2;
        16'b1000 : index = 4'd3;
        16'b10000 : index = 4'd4;
        16'b100000 : index = 4'd5;
        16'b1000000 : index = 4'd6;
        16'b10000000 : index = 4'd7;
        16'b100000000 : index = 4'd8;
        16'b1000000000 : index = 4'd9;
        16'b10000000000 : index = 4'd10;
        16'b100000000000 : index = 4'd11;
        16'b1000000000000 : index = 4'd12;
        16'b10000000000000 : index = 4'd13;
        16'b100000000000000 : index = 4'd14;
        16'b1000000000000000 : index = 4'd15;
        default: index = 4'd0;
    endcase
end

// wire [7:0] data_8;
// wire [3:0] data_4;
// wire [1:0] data_2;

// assign index[3] =  data[15:8]==8'd0;
// assign data_8= index[3] ? data[15:8] : data[7:0] ;
// assign index[2] =  data_8[7:4]==4'd0;
// assign data_4= index[2] ? data_8[7:4] : data_8[3:0] ;
// assign index[1] =  data_4[3:2]==2'd0;
// assign data_2 = index[1] ? data_4[3:2] : data_4[1:0];
// assign index[0] = data_2[1];

endmodule
