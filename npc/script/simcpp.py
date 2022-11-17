with open('1.txt', 'w+',encoding='UTF-8') as f:    
    for i in range(16):
        f.write("top->ext_in_data%d = npc_ram_read(top->ext_read_addr+8*%d-0x80000000,8);\n" %(i,i))
