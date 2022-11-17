with open('1.txt', 'w+',encoding='UTF-8') as f:    
    for i in range(65):
        f.write("wire [64:0] remain_data_%d_1,remain_data_%d_2;\nassign remain_data_%d_1 = remain_data_%d_2[64] ? {remain_data_%d_1[63:0],div_data_abs[%d]} :{remain_data_%d_2[63:0],div_data_abs[%d]};\nassign remain_data_%d_2 = remain_data_%d_1 - {1'b0,dived_data_abs};\nassign result[%d] = ~remain_data_%d_2[64];\n\n" %(i,i,i,i-1,i-1,64-i,i-1,64-i,i,i,64-i,i))
