/* there is protection from software which restrict that the data width is up to 32 bits*/


module mmio(
    input clk,
    input rst,

    input [31:0]    ext_addr,
    input [63:0]    ext_data,
    
    input [7:0]     ext_ram_be_n,
    input           ext_ram_wen, 
    // input [63:0]    mmio_serial_data,
    input [63:0]    mmio_rtc_low_data,
    input [63:0]    mmio_rtc_high_data,
    input [63:0]    mmio_vga_ctl_low_data,
    input [63:0]    mmio_vga_ctl_high_data,
    // input [63:0]    mmio_fb_data,

    output reg [63:0]   mmio_read_data,

    output          mmio_kbd_en,
    output [63:0]   mmio_write_data,
    output          mmio_wen,
    output [7:0]    mmio_be_n,
    output          mmio_serial_en,
    output          mmio_vga_ctl_low_en,
    output          mmio_vga_ctl_high_en,
    output          mmio_rtc_low_en,
    output          mmio_rtc_high_en,
    output          mmio_fb_low_en,
    output          mmio_fb_high_en,
    output reg      mmio_en_reg,
    output [31:0]   mmio_addr 
);
wire [63:0] total_shift;
assign total_shift =    mmio_be_n[4] ? 64'd0:
                        mmio_be_n[5] ? 64'd8:
                        mmio_be_n[6] ? 64'd16:
                        mmio_be_n[7] ? 64'd24: 64'd0;
wire [63:0] total_shift_cut;
assign total_shift_cut = mmio_be_n[0] ? 64'd0:
                        mmio_be_n[1] ? 64'd8:
                        mmio_be_n[2] ? 64'd16:
                        mmio_be_n[3] ? 64'd24: 64'd0;
always @(posedge clk)begin
    if(rst) begin
        mmio_en_reg <= 1'd0;
        mmio_read_data <= 64'd0;
    end
    else if(mmio_serial_en && ~mmio_wen)begin
        mmio_en_reg <= 1'd1;
        mmio_read_data <= (serial_read_data >>> total_shift_in); 
        //$display("read %x",mmio_read_data);
    end
    else if(mmio_rtc_low_en && ~mmio_wen)begin
        mmio_en_reg <= 1'd1;
        mmio_read_data <= mmio_rtc_low_data;
    end    
    else if(mmio_rtc_high_en && ~mmio_wen)begin
        mmio_en_reg <= 1'd1;
        mmio_read_data <= mmio_rtc_high_data;
    end       
    else if(mmio_vga_ctl_low_en && ~mmio_wen)begin
        mmio_en_reg <= 1'd1;
        mmio_read_data <= {32'd0,mmio_vga_ctl_low_data[31:0]};
    end     
    else if(mmio_vga_ctl_high_en && ~mmio_wen)begin
        mmio_en_reg <= 1'd1;
        mmio_read_data <= {32'd0,mmio_vga_ctl_high_data[31:0]};
    end     
    else if(mmio_fb_low_en && ~mmio_wen) begin
        mmio_en_reg <= 1'd1;
        mmio_read_data <= {32'd0,{(vmem[mmio_addr[18:2]] &   {{8{mmio_be_n[3]}},
                                                            {8{mmio_be_n[2]}},
                                                            {8{mmio_be_n[1]}},
                                                            {8{mmio_be_n[0]}}}) >> total_shift_cut }};
    end        
    else if(mmio_fb_high_en && ~mmio_wen) begin
        mmio_en_reg <= 1'd1;                                                            
        mmio_read_data <= {32'd0,{(vmem[mmio_addr[18:2]+1] &   {{8{mmio_be_n[7]}},
                                                            {8{mmio_be_n[6]}},
                                                            {8{mmio_be_n[5]}},
                                                            {8{mmio_be_n[4]}}}) >> total_shift}};
    end
    else if(mmio_kbd_en && ~mmio_wen) begin
        mmio_en_reg <= 1'd1;
        mmio_read_data <= 0;
    end
    else begin
        mmio_en_reg <= 1'd0;
        mmio_read_data <= 64'd0;
    end
end
wire [9:0] total_shift_in;
assign total_shift_in = mmio_be_n[0] ? 10'd0:
                        mmio_be_n[1] ? 10'd8:
                        mmio_be_n[2] ? 10'd16:
                        mmio_be_n[3] ? 10'd24:
                        mmio_be_n[4] ? 10'd32:
                        mmio_be_n[5] ? 10'd40:
                        mmio_be_n[6] ? 10'd48:
                        mmio_be_n[7] ? 10'd56:10'd0;
reg [63:0] serial_read_data;
reg [31:0] vga_ctl_low_read_data;
always @(posedge clk) begin
    if(rst) begin
        serial_read_data <= 64'd0;
        vga_ctl_low_read_data <= (32'd400 << 10'd16) | 32'd300;
    end
    else if(mmio_serial_en && mmio_wen) begin
        serial_read_data <= serial_read_data | ((mmio_write_data <<total_shift_in)&
                                                {{8{mmio_be_n[7]}},
                                                {8{mmio_be_n[6]}},
                                                {8{mmio_be_n[5]}},
                                                {8{mmio_be_n[4]}},
                                                {8{mmio_be_n[3]}},
                                                {8{mmio_be_n[2]}},
                                                {8{mmio_be_n[1]}},
                                                {8{mmio_be_n[0]}}});
        //$display("write %x",serial_read_data);
    end
end

assign mmio_serial_en = ext_addr ==32'ha00003f8 && |mmio_be_n;
assign mmio_rtc_low_en = ext_addr == 32'ha0000048 && mmio_be_n[3:0]!=0;
assign mmio_rtc_high_en = ext_addr == 32'ha0000048 && mmio_be_n[7:4]!=0;
assign mmio_vga_ctl_low_en = ext_addr == 32'ha0000100 &&  mmio_be_n[3:0]!=0;
assign mmio_vga_ctl_high_en = ext_addr == 32'ha0000100 &&  mmio_be_n[7:4]!=0;
assign mmio_kbd_en = ext_addr ==32'ha0000060 && |mmio_be_n;
assign mmio_fb_low_en = ext_addr[31:24] == 8'ha1 && |mmio_be_n[3:0]; 
assign mmio_fb_high_en = ext_addr[31:24] == 8'ha1 && |mmio_be_n[7:4]; 

assign mmio_wen =  mmio_kbd_en|mmio_fb_low_en|mmio_fb_high_en|mmio_serial_en|mmio_rtc_low_en|mmio_rtc_high_en|mmio_vga_ctl_low_en|mmio_vga_ctl_high_en?ext_ram_wen:0;
assign mmio_be_n = ext_ram_be_n;
assign mmio_write_data = ext_data;
assign mmio_addr = mmio_rtc_high_en ?32'ha000004c: ext_addr;




// vmem
import "DPI-C" function void set_vmem_ptr(input logic [31:0] a []);
reg [31:0] vmem[400*300-1:0];
initial begin
    set_vmem_ptr(vmem);
end
always @(posedge clk) begin
    if(rst) begin
        for(int i=0;i<400*300;i++) begin
            vmem[i] = 32'hffffffff;
        end
    end
    else if(mmio_fb_low_en && mmio_wen )begin
        vmem[mmio_addr[18:2]] <=    (mmio_write_data[31:0]<<total_shift_cut) &{{8{mmio_be_n[3]}},
                                    {8{mmio_be_n[2]}},
                                    {8{mmio_be_n[1]}},
                                    {8{mmio_be_n[0]}}};
    end
    else if(mmio_fb_high_en && mmio_wen )begin
        vmem[mmio_addr[18:2]+1] <=  (mmio_write_data[31:0]<<total_shift) &{{8{mmio_be_n[7]}},
                                    {8{mmio_be_n[6]}},
                                    {8{mmio_be_n[5]}},
                                    {8{mmio_be_n[4]}}};
    end
end
endmodule