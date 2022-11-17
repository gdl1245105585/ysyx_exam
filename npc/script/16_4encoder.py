with open('1.txt', 'w+',encoding='UTF-8') as f:    
    for i in range(16):
        f.write("16'b%s : index <= 4'd%d;\n" %(bin(1<<i),i))
