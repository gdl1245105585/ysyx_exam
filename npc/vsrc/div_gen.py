with open('1.txt', 'w+',encoding='UTF-8') as f:    
    for i in range(64):
        f.write("wire [64:0] remain_data_%d_1,remain_data_%d_2;\nassign remain_data_%d_1 = remain_data_%d_2[64] ? {remain_data_%d_1[63:0],src2[61]} :{remain_data_%d_2[63:0],src2[61]};\nassign remain_data_%d_2 = remain_data_%d_1 - {1'b0,src2};\nassign result[%d] = remain_data_%d_2[64];\n\n\n\n" %(i,i,i,i-1,i-1,i-1,i,i,64-i,i))
