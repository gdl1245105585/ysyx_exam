with open('1.txt', 'w+',encoding='UTF-8') as f:    
    for i in range(32):
        f.write("({32'd0,(src1[%d] ? src2 : 32'd0)} << %d) +\n" %(i,i))
