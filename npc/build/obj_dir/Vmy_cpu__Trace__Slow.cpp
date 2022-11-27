// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmy_cpu__Syms.h"


void Vmy_cpu___024root__traceInitSub0(Vmy_cpu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vmy_cpu___024root__traceInitTop(Vmy_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vmy_cpu___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vmy_cpu___024root__traceInitSub0(Vmy_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1915,"clk", false,-1);
        tracep->declBit(c+1916,"rst", false,-1);
        tracep->declBit(c+1917,"int_time", false,-1);
        tracep->declBit(c+1918,"inst_read_req", false,-1);
        tracep->declBus(c+1919,"ext_read_addr", false,-1, 31,0);
        tracep->declBus(c+1920,"ext_write_addr", false,-1, 31,0);
        tracep->declBit(c+1921,"ext_write_req", false,-1);
        tracep->declBit(c+1922,"ext_read_req", false,-1);
        tracep->declBus(c+1923,"base_ram_addr", false,-1, 31,0);
        tracep->declBit(c+1924,"inst_ebreak", false,-1);
        tracep->declBit(c+1925,"we", false,-1);
        tracep->declQuad(c+1926,"data", false,-1, 63,0);
        tracep->declBus(c+1928,"addr", false,-1, 4,0);
        tracep->declQuad(c+1929,"Inst_Src2_forwarding", false,-1, 63,0);
        tracep->declQuad(c+1931,"Inst_Src1_forwarding", false,-1, 63,0);
        tracep->declQuad(c+1933,"mul_div_result", false,-1, 63,0);
        tracep->declQuad(c+1935,"mmio_serial_data", false,-1, 63,0);
        tracep->declQuad(c+1937,"mmio_rtc_low_data", false,-1, 63,0);
        tracep->declQuad(c+1939,"mmio_rtc_high_data", false,-1, 63,0);
        tracep->declQuad(c+1941,"mmio_vga_ctl_low_data", false,-1, 63,0);
        tracep->declQuad(c+1943,"mmio_vga_ctl_high_data", false,-1, 63,0);
        tracep->declQuad(c+1945,"mmio_write_data", false,-1, 63,0);
        tracep->declBit(c+1947,"mmio_wen", false,-1);
        tracep->declBus(c+1948,"mmio_be_n", false,-1, 7,0);
        tracep->declBit(c+1949,"mmio_serial_en", false,-1);
        tracep->declBit(c+1950,"mmio_rtc_low_en", false,-1);
        tracep->declBit(c+1951,"mmio_rtc_high_en", false,-1);
        tracep->declBit(c+1952,"mmio_vga_ctl_low_en", false,-1);
        tracep->declBit(c+1953,"mmio_vga_ctl_high_en", false,-1);
        tracep->declBit(c+1954,"mmio_fb_low_en", false,-1);
        tracep->declBit(c+1955,"mmio_fb_high_en", false,-1);
        tracep->declBus(c+1956,"mmio_addr", false,-1, 31,0);
        tracep->declBit(c+1957,"mul_div_valid", false,-1);
        tracep->declBit(c+1958,"IF_we", false,-1);
        tracep->declBus(c+1959,"inst_result_Select", false,-1, 2,0);
        tracep->declQuad(c+1960,"EX_data", false,-1, 63,0);
        tracep->declBus(c+1962,"EX_addr", false,-1, 4,0);
        tracep->declBus(c+1963,"inst_addr", false,-1, 31,0);
        tracep->declBus(c+1964,"ext_ram_addr", false,-1, 31,0);
        tracep->declBus(c+1965,"ext_ram_be_n", false,-1, 7,0);
        tracep->declBit(c+1966,"ext_ram_wen", false,-1);
        tracep->declQuad(c+1967,"ext_ram_write_data", false,-1, 63,0);
        tracep->declBit(c+1969,"valid", false,-1);
        tracep->declBus(c+1970,"debug_pc", false,-1, 31,0);
        tracep->declBus(c+1971,"debug_inst_addr", false,-1, 31,0);
        tracep->declBus(c+1972,"inst", false,-1, 31,0);
        tracep->declBus(c+1973,"AWID", false,-1, 3,0);
        tracep->declBus(c+1974,"AWADDR", false,-1, 31,0);
        tracep->declBus(c+1975,"AWLEN", false,-1, 7,0);
        tracep->declBus(c+1976,"AWSIZE", false,-1, 2,0);
        tracep->declBus(c+1977,"AWBURST", false,-1, 1,0);
        tracep->declBit(c+1978,"AWVALID", false,-1);
        tracep->declBit(c+1979,"AWREADY", false,-1);
        tracep->declQuad(c+1980,"WDATA", false,-1, 63,0);
        tracep->declBus(c+1982,"WSTRB", false,-1, 7,0);
        tracep->declBit(c+1983,"WLAST", false,-1);
        tracep->declBit(c+1984,"WVALID", false,-1);
        tracep->declBit(c+1985,"WREADY", false,-1);
        tracep->declBus(c+1986,"BID", false,-1, 3,0);
        tracep->declBus(c+1987,"BRESP", false,-1, 1,0);
        tracep->declBit(c+1988,"BVALID", false,-1);
        tracep->declBit(c+1989,"BREADY", false,-1);
        tracep->declBus(c+1990,"ARADDR", false,-1, 31,0);
        tracep->declBus(c+1991,"ARLEN", false,-1, 7,0);
        tracep->declBus(c+1992,"ARSIZE", false,-1, 2,0);
        tracep->declBus(c+1993,"ARBURST", false,-1, 1,0);
        tracep->declBit(c+1994,"ARVALID", false,-1);
        tracep->declBit(c+1995,"ARREADY", false,-1);
        tracep->declBus(c+1996,"RID", false,-1, 3,0);
        tracep->declQuad(c+1997,"RDATA", false,-1, 63,0);
        tracep->declBus(c+1999,"RRESP", false,-1, 1,0);
        tracep->declBit(c+2000,"RLAST", false,-1);
        tracep->declBit(c+2001,"RVALID", false,-1);
        tracep->declBit(c+2002,"RREADY", false,-1);
        tracep->declBus(c+2003,"ARID", false,-1, 3,0);
        tracep->declBit(c+1915,"my_cpu clk", false,-1);
        tracep->declBit(c+1916,"my_cpu rst", false,-1);
        tracep->declBit(c+1917,"my_cpu int_time", false,-1);
        tracep->declBit(c+1918,"my_cpu inst_read_req", false,-1);
        tracep->declBus(c+1919,"my_cpu ext_read_addr", false,-1, 31,0);
        tracep->declBus(c+1920,"my_cpu ext_write_addr", false,-1, 31,0);
        tracep->declBit(c+1921,"my_cpu ext_write_req", false,-1);
        tracep->declBit(c+1922,"my_cpu ext_read_req", false,-1);
        tracep->declBus(c+1923,"my_cpu base_ram_addr", false,-1, 31,0);
        tracep->declBit(c+1924,"my_cpu inst_ebreak", false,-1);
        tracep->declBit(c+1925,"my_cpu we", false,-1);
        tracep->declQuad(c+1926,"my_cpu data", false,-1, 63,0);
        tracep->declBus(c+1928,"my_cpu addr", false,-1, 4,0);
        tracep->declQuad(c+1929,"my_cpu Inst_Src2_forwarding", false,-1, 63,0);
        tracep->declQuad(c+1931,"my_cpu Inst_Src1_forwarding", false,-1, 63,0);
        tracep->declQuad(c+1933,"my_cpu mul_div_result", false,-1, 63,0);
        tracep->declQuad(c+1935,"my_cpu mmio_serial_data", false,-1, 63,0);
        tracep->declQuad(c+1937,"my_cpu mmio_rtc_low_data", false,-1, 63,0);
        tracep->declQuad(c+1939,"my_cpu mmio_rtc_high_data", false,-1, 63,0);
        tracep->declQuad(c+1941,"my_cpu mmio_vga_ctl_low_data", false,-1, 63,0);
        tracep->declQuad(c+1943,"my_cpu mmio_vga_ctl_high_data", false,-1, 63,0);
        tracep->declQuad(c+1945,"my_cpu mmio_write_data", false,-1, 63,0);
        tracep->declBit(c+1947,"my_cpu mmio_wen", false,-1);
        tracep->declBus(c+1948,"my_cpu mmio_be_n", false,-1, 7,0);
        tracep->declBit(c+1949,"my_cpu mmio_serial_en", false,-1);
        tracep->declBit(c+1950,"my_cpu mmio_rtc_low_en", false,-1);
        tracep->declBit(c+1951,"my_cpu mmio_rtc_high_en", false,-1);
        tracep->declBit(c+1952,"my_cpu mmio_vga_ctl_low_en", false,-1);
        tracep->declBit(c+1953,"my_cpu mmio_vga_ctl_high_en", false,-1);
        tracep->declBit(c+1954,"my_cpu mmio_fb_low_en", false,-1);
        tracep->declBit(c+1955,"my_cpu mmio_fb_high_en", false,-1);
        tracep->declBus(c+1956,"my_cpu mmio_addr", false,-1, 31,0);
        tracep->declBit(c+1957,"my_cpu mul_div_valid", false,-1);
        tracep->declBit(c+1958,"my_cpu IF_we", false,-1);
        tracep->declBus(c+1959,"my_cpu inst_result_Select", false,-1, 2,0);
        tracep->declQuad(c+1960,"my_cpu EX_data", false,-1, 63,0);
        tracep->declBus(c+1962,"my_cpu EX_addr", false,-1, 4,0);
        tracep->declBus(c+1963,"my_cpu inst_addr", false,-1, 31,0);
        tracep->declBus(c+1964,"my_cpu ext_ram_addr", false,-1, 31,0);
        tracep->declBus(c+1965,"my_cpu ext_ram_be_n", false,-1, 7,0);
        tracep->declBit(c+1966,"my_cpu ext_ram_wen", false,-1);
        tracep->declQuad(c+1967,"my_cpu ext_ram_write_data", false,-1, 63,0);
        tracep->declBit(c+1969,"my_cpu valid", false,-1);
        tracep->declBus(c+1970,"my_cpu debug_pc", false,-1, 31,0);
        tracep->declBus(c+1971,"my_cpu debug_inst_addr", false,-1, 31,0);
        tracep->declBus(c+1972,"my_cpu inst", false,-1, 31,0);
        tracep->declBus(c+1973,"my_cpu AWID", false,-1, 3,0);
        tracep->declBus(c+1974,"my_cpu AWADDR", false,-1, 31,0);
        tracep->declBus(c+1975,"my_cpu AWLEN", false,-1, 7,0);
        tracep->declBus(c+1976,"my_cpu AWSIZE", false,-1, 2,0);
        tracep->declBus(c+1977,"my_cpu AWBURST", false,-1, 1,0);
        tracep->declBit(c+1978,"my_cpu AWVALID", false,-1);
        tracep->declBit(c+1979,"my_cpu AWREADY", false,-1);
        tracep->declQuad(c+1980,"my_cpu WDATA", false,-1, 63,0);
        tracep->declBus(c+1982,"my_cpu WSTRB", false,-1, 7,0);
        tracep->declBit(c+1983,"my_cpu WLAST", false,-1);
        tracep->declBit(c+1984,"my_cpu WVALID", false,-1);
        tracep->declBit(c+1985,"my_cpu WREADY", false,-1);
        tracep->declBus(c+1986,"my_cpu BID", false,-1, 3,0);
        tracep->declBus(c+1987,"my_cpu BRESP", false,-1, 1,0);
        tracep->declBit(c+1988,"my_cpu BVALID", false,-1);
        tracep->declBit(c+1989,"my_cpu BREADY", false,-1);
        tracep->declBus(c+1990,"my_cpu ARADDR", false,-1, 31,0);
        tracep->declBus(c+1991,"my_cpu ARLEN", false,-1, 7,0);
        tracep->declBus(c+1992,"my_cpu ARSIZE", false,-1, 2,0);
        tracep->declBus(c+1993,"my_cpu ARBURST", false,-1, 1,0);
        tracep->declBit(c+1994,"my_cpu ARVALID", false,-1);
        tracep->declBit(c+1995,"my_cpu ARREADY", false,-1);
        tracep->declBus(c+1996,"my_cpu RID", false,-1, 3,0);
        tracep->declQuad(c+1997,"my_cpu RDATA", false,-1, 63,0);
        tracep->declBus(c+1999,"my_cpu RRESP", false,-1, 1,0);
        tracep->declBit(c+2000,"my_cpu RLAST", false,-1);
        tracep->declBit(c+2001,"my_cpu RVALID", false,-1);
        tracep->declBit(c+2002,"my_cpu RREADY", false,-1);
        tracep->declBus(c+2003,"my_cpu ARID", false,-1, 3,0);
        tracep->declQuad(c+1,"my_cpu ext_ram_read_data", false,-1, 63,0);
        tracep->declBit(c+3,"my_cpu takeup", false,-1);
        tracep->declQuad(c+1875,"my_cpu ID_IF_Bus", false,-1, 32,0);
        tracep->declBus(c+2128,"my_cpu ctrlBus", false,-1, 2,0);
        tracep->declBus(c+1963,"my_cpu IF_IF2_Bus", false,-1, 31,0);
        tracep->declQuad(c+4,"my_cpu IF2_ID_Bus", false,-1, 32,0);
        tracep->declArray(c+6,"my_cpu EX_ID_Bus", false,-1, 69,0);
        tracep->declArray(c+9,"my_cpu MEM_ID_Bus", false,-1, 69,0);
        tracep->declArray(c+2129,"my_cpu WB_ID_Bus", false,-1, 70,0);
        tracep->declArray(c+1863,"my_cpu ID_EX_Bus", false,-1, 312,0);
        tracep->declArray(c+12,"my_cpu EX_MEM_Bus", false,-1, 114,0);
        tracep->declArray(c+2132,"my_cpu MEM_WB_Bus", false,-1, 499,0);
        tracep->declQuad(c+2148,"my_cpu IF_src1_data", false,-1, 63,0);
        tracep->declBus(c+2150,"my_cpu src1_addr", false,-1, 4,0);
        tracep->declQuad(c+2151,"my_cpu IF_src2_data", false,-1, 63,0);
        tracep->declBus(c+2153,"my_cpu src2_addr", false,-1, 4,0);
        tracep->declBit(c+16,"my_cpu pause_mem", false,-1);
        tracep->declQuad(c+17,"my_cpu mmio_read_data", false,-1, 63,0);
        tracep->declBit(c+19,"my_cpu mmio_en_reg", false,-1);
        tracep->declBit(c+20,"my_cpu mmio_kbd_en", false,-1);
        tracep->declBit(c+21,"my_cpu stop_all", false,-1);
        tracep->declBus(c+22,"my_cpu dcache_be_n", false,-1, 7,0);
        tracep->declBit(c+23,"my_cpu dcache_wen", false,-1);
        tracep->declQuad(c+24,"my_cpu dcache_read_out_data", false,-1, 63,0);
        tracep->declBit(c+26,"my_cpu inst_fence_i", false,-1);
        tracep->declBit(c+1915,"my_cpu mmio clk", false,-1);
        tracep->declBit(c+1916,"my_cpu mmio rst", false,-1);
        tracep->declBus(c+1964,"my_cpu mmio ext_addr", false,-1, 31,0);
        tracep->declQuad(c+1967,"my_cpu mmio ext_data", false,-1, 63,0);
        tracep->declBus(c+1965,"my_cpu mmio ext_ram_be_n", false,-1, 7,0);
        tracep->declBit(c+1966,"my_cpu mmio ext_ram_wen", false,-1);
        tracep->declQuad(c+1937,"my_cpu mmio mmio_rtc_low_data", false,-1, 63,0);
        tracep->declQuad(c+1939,"my_cpu mmio mmio_rtc_high_data", false,-1, 63,0);
        tracep->declQuad(c+1941,"my_cpu mmio mmio_vga_ctl_low_data", false,-1, 63,0);
        tracep->declQuad(c+1943,"my_cpu mmio mmio_vga_ctl_high_data", false,-1, 63,0);
        tracep->declQuad(c+17,"my_cpu mmio mmio_read_data", false,-1, 63,0);
        tracep->declBit(c+20,"my_cpu mmio mmio_kbd_en", false,-1);
        tracep->declQuad(c+1945,"my_cpu mmio mmio_write_data", false,-1, 63,0);
        tracep->declBit(c+1947,"my_cpu mmio mmio_wen", false,-1);
        tracep->declBus(c+1948,"my_cpu mmio mmio_be_n", false,-1, 7,0);
        tracep->declBit(c+1949,"my_cpu mmio mmio_serial_en", false,-1);
        tracep->declBit(c+1952,"my_cpu mmio mmio_vga_ctl_low_en", false,-1);
        tracep->declBit(c+1953,"my_cpu mmio mmio_vga_ctl_high_en", false,-1);
        tracep->declBit(c+1950,"my_cpu mmio mmio_rtc_low_en", false,-1);
        tracep->declBit(c+1951,"my_cpu mmio mmio_rtc_high_en", false,-1);
        tracep->declBit(c+1954,"my_cpu mmio mmio_fb_low_en", false,-1);
        tracep->declBit(c+1955,"my_cpu mmio mmio_fb_high_en", false,-1);
        tracep->declBit(c+19,"my_cpu mmio mmio_en_reg", false,-1);
        tracep->declBus(c+1956,"my_cpu mmio mmio_addr", false,-1, 31,0);
        tracep->declQuad(c+27,"my_cpu mmio total_shift", false,-1, 63,0);
        tracep->declQuad(c+29,"my_cpu mmio total_shift_cut", false,-1, 63,0);
        tracep->declBus(c+31,"my_cpu mmio total_shift_in", false,-1, 9,0);
        tracep->declQuad(c+32,"my_cpu mmio serial_read_data", false,-1, 63,0);
        tracep->declBus(c+34,"my_cpu mmio vga_ctl_low_read_data", false,-1, 31,0);
        tracep->declBus(c+35,"my_cpu mmio unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+1915,"my_cpu IF clk", false,-1);
        tracep->declBit(c+1916,"my_cpu IF rst", false,-1);
        tracep->declBit(c+21,"my_cpu IF stop_all", false,-1);
        tracep->declQuad(c+1875,"my_cpu IF ID_IF_Bus", false,-1, 32,0);
        tracep->declBus(c+2128,"my_cpu IF ctrlBus", false,-1, 2,0);
        tracep->declBit(c+16,"my_cpu IF pause_mem", false,-1);
        tracep->declBus(c+1963,"my_cpu IF IF_ID_Bus", false,-1, 31,0);
        tracep->declBus(c+1963,"my_cpu IF inst_addr", false,-1, 31,0);
        tracep->declBus(c+2004,"my_cpu IF inst_addr_next", false,-1, 31,0);
        tracep->declBus(c+1877,"my_cpu IF jump_next", false,-1, 31,0);
        tracep->declBit(c+1878,"my_cpu IF jump_en", false,-1);
        tracep->declBit(c+36,"my_cpu IF pause_mem_sec", false,-1);
        tracep->declBit(c+1915,"my_cpu IF2 clk", false,-1);
        tracep->declBit(c+1916,"my_cpu IF2 rst", false,-1);
        tracep->declBit(c+21,"my_cpu IF2 stop_all", false,-1);
        tracep->declQuad(c+1875,"my_cpu IF2 ID_IF_Bus", false,-1, 32,0);
        tracep->declBus(c+1963,"my_cpu IF2 IF_IF2_Bus", false,-1, 31,0);
        tracep->declBit(c+16,"my_cpu IF2 pause_mem", false,-1);
        tracep->declQuad(c+4,"my_cpu IF2 IF2_ID_Bus", false,-1, 32,0);
        tracep->declBit(c+37,"my_cpu IF2 valid", false,-1);
        tracep->declBus(c+1877,"my_cpu IF2 jump_next", false,-1, 31,0);
        tracep->declBit(c+1878,"my_cpu IF2 jump_en", false,-1);
        tracep->declBus(c+38,"my_cpu IF2 IF2_ID_Bus_reg", false,-1, 31,0);
        tracep->declBit(c+1915,"my_cpu ID clk", false,-1);
        tracep->declBit(c+1916,"my_cpu ID rst", false,-1);
        tracep->declBit(c+1917,"my_cpu ID int_time", false,-1);
        tracep->declBit(c+21,"my_cpu ID stop_all", false,-1);
        tracep->declBus(c+1972,"my_cpu ID instin", false,-1, 31,0);
        tracep->declBus(c+2128,"my_cpu ID ctrlBus", false,-1, 2,0);
        tracep->declQuad(c+4,"my_cpu ID IF2_ID_Bus", false,-1, 32,0);
        tracep->declArray(c+6,"my_cpu ID EX_ID_Bus", false,-1, 69,0);
        tracep->declArray(c+9,"my_cpu ID MEM_ID_Bus", false,-1, 69,0);
        tracep->declQuad(c+1875,"my_cpu ID ID_IF_Bus", false,-1, 32,0);
        tracep->declBit(c+16,"my_cpu ID pause_mem", false,-1);
        tracep->declBit(c+26,"my_cpu ID inst_fence_i", false,-1);
        tracep->declArray(c+1863,"my_cpu ID ID_EX_Bus", false,-1, 312,0);
        tracep->declQuad(c+39,"my_cpu ID Inst_Src1_Read", false,-1, 63,0);
        tracep->declQuad(c+41,"my_cpu ID Inst_Src2_Read", false,-1, 63,0);
        tracep->declQuad(c+43,"my_cpu ID Inst_Src3_Read", false,-1, 63,0);
        tracep->declQuad(c+1879,"my_cpu ID csr_result", false,-1, 63,0);
        tracep->declBus(c+45,"my_cpu ID EX_addr", false,-1, 4,0);
        tracep->declBus(c+46,"my_cpu ID MEM_addr", false,-1, 4,0);
        tracep->declBus(c+47,"my_cpu ID IF_addr", false,-1, 4,0);
        tracep->declQuad(c+48,"my_cpu ID EX_data", false,-1, 63,0);
        tracep->declQuad(c+50,"my_cpu ID MEM_data", false,-1, 63,0);
        tracep->declQuad(c+1873,"my_cpu ID IF_data", false,-1, 63,0);
        tracep->declBit(c+52,"my_cpu ID MEM_we", false,-1);
        tracep->declBit(c+3,"my_cpu ID EX_we", false,-1);
        tracep->declBit(c+53,"my_cpu ID IF_we", false,-1);
        tracep->declArray(c+2154,"my_cpu ID EX_ID_Bus_reg", false,-1, 69,0);
        tracep->declArray(c+2157,"my_cpu ID MEM_ID_Bus_reg", false,-1, 69,0);
        tracep->declArray(c+2160,"my_cpu ID WB_ID_Bus_reg", false,-1, 70,0);
        tracep->declBus(c+54,"my_cpu ID inst", false,-1, 31,0);
        tracep->declBus(c+55,"my_cpu ID inst_mem_domin", false,-1, 31,0);
        tracep->declQuad(c+56,"my_cpu ID IF_ID_Bus_Reg", false,-1, 32,0);
        tracep->declBit(c+58,"my_cpu ID valid", false,-1);
        tracep->declBit(c+59,"my_cpu ID mem_arrive_flag", false,-1);
        tracep->declBit(c+60,"my_cpu ID jump_flag", false,-1);
        tracep->declBus(c+61,"my_cpu ID inst_addr", false,-1, 31,0);
        tracep->declBit(c+62,"my_cpu ID ID_we", false,-1);
        tracep->declQuad(c+2163,"my_cpu ID ID_data", false,-1, 63,0);
        tracep->declBus(c+63,"my_cpu ID ID_addr", false,-1, 4,0);
        tracep->declBus(c+47,"my_cpu ID dest_addr", false,-1, 4,0);
        tracep->declBus(c+64,"my_cpu ID src1_addr", false,-1, 4,0);
        tracep->declBus(c+65,"my_cpu ID src2_addr", false,-1, 4,0);
        tracep->declBus(c+66,"my_cpu ID func3", false,-1, 2,0);
        tracep->declBus(c+67,"my_cpu ID opcode", false,-1, 6,0);
        tracep->declBus(c+68,"my_cpu ID func7", false,-1, 6,0);
        tracep->declBus(c+69,"my_cpu ID shamt", false,-1, 5,0);
        tracep->declBus(c+70,"my_cpu ID imm", false,-1, 11,0);
        tracep->declQuad(c+2165,"my_cpu ID IF_Src1_Read", false,-1, 63,0);
        tracep->declQuad(c+2167,"my_cpu ID IF_Src2_Read", false,-1, 63,0);
        tracep->declQuad(c+1873,"my_cpu ID ID_result", false,-1, 63,0);
        tracep->declBit(c+71,"my_cpu ID inst_auipc", false,-1);
        tracep->declBit(c+72,"my_cpu ID inst_addi", false,-1);
        tracep->declBit(c+73,"my_cpu ID inst_ebreak", false,-1);
        tracep->declBit(c+74,"my_cpu ID inst_addiw", false,-1);
        tracep->declBit(c+75,"my_cpu ID inst_addw", false,-1);
        tracep->declBit(c+76,"my_cpu ID inst_add", false,-1);
        tracep->declBit(c+77,"my_cpu ID inst_subw", false,-1);
        tracep->declBit(c+78,"my_cpu ID inst_lwu", false,-1);
        tracep->declBit(c+79,"my_cpu ID inst_sh", false,-1);
        tracep->declBit(c+80,"my_cpu ID inst_sb", false,-1);
        tracep->declBit(c+81,"my_cpu ID inst_sd", false,-1);
        tracep->declBit(c+82,"my_cpu ID inst_sw", false,-1);
        tracep->declBit(c+83,"my_cpu ID inst_ld", false,-1);
        tracep->declBit(c+84,"my_cpu ID inst_lw", false,-1);
        tracep->declBit(c+85,"my_cpu ID inst_lhu", false,-1);
        tracep->declBit(c+86,"my_cpu ID inst_lh", false,-1);
        tracep->declBit(c+87,"my_cpu ID inst_lbu", false,-1);
        tracep->declBit(c+88,"my_cpu ID inst_lb", false,-1);
        tracep->declBit(c+89,"my_cpu ID inst_sub", false,-1);
        tracep->declBit(c+90,"my_cpu ID inst_srli", false,-1);
        tracep->declBit(c+91,"my_cpu ID inst_sllw", false,-1);
        tracep->declBit(c+92,"my_cpu ID inst_slli", false,-1);
        tracep->declBit(c+93,"my_cpu ID inst_sltiu", false,-1);
        tracep->declBit(c+94,"my_cpu ID inst_srai", false,-1);
        tracep->declBit(c+95,"my_cpu ID inst_sltu", false,-1);
        tracep->declBit(c+96,"my_cpu ID inst_slt", false,-1);
        tracep->declBit(c+97,"my_cpu ID inst_slliw", false,-1);
        tracep->declBit(c+98,"my_cpu ID inst_sraiw", false,-1);
        tracep->declBit(c+99,"my_cpu ID inst_sraw", false,-1);
        tracep->declBit(c+100,"my_cpu ID inst_srliw", false,-1);
        tracep->declBit(c+101,"my_cpu ID inst_srlw", false,-1);
        tracep->declBit(c+102,"my_cpu ID inst_sll", false,-1);
        tracep->declBit(c+103,"my_cpu ID inst_srl", false,-1);
        tracep->declBit(c+104,"my_cpu ID inst_sra", false,-1);
        tracep->declBit(c+105,"my_cpu ID inst_xor", false,-1);
        tracep->declBit(c+106,"my_cpu ID inst_slti", false,-1);
        tracep->declBit(c+107,"my_cpu ID inst_or", false,-1);
        tracep->declBit(c+108,"my_cpu ID inst_xori", false,-1);
        tracep->declBit(c+109,"my_cpu ID inst_and", false,-1);
        tracep->declBit(c+110,"my_cpu ID inst_andi", false,-1);
        tracep->declBit(c+111,"my_cpu ID inst_lui", false,-1);
        tracep->declBit(c+112,"my_cpu ID inst_ori", false,-1);
        tracep->declBit(c+113,"my_cpu ID inst_mulw", false,-1);
        tracep->declBit(c+114,"my_cpu ID inst_divw", false,-1);
        tracep->declBit(c+115,"my_cpu ID inst_remw", false,-1);
        tracep->declBit(c+116,"my_cpu ID inst_mul", false,-1);
        tracep->declBit(c+117,"my_cpu ID inst_divuw", false,-1);
        tracep->declBit(c+118,"my_cpu ID inst_remuw", false,-1);
        tracep->declBit(c+119,"my_cpu ID inst_div", false,-1);
        tracep->declBit(c+120,"my_cpu ID inst_divu", false,-1);
        tracep->declBit(c+121,"my_cpu ID inst_rem", false,-1);
        tracep->declBit(c+122,"my_cpu ID inst_remu", false,-1);
        tracep->declBit(c+123,"my_cpu ID inst_mulh", false,-1);
        tracep->declBit(c+124,"my_cpu ID inst_mulhsu", false,-1);
        tracep->declBit(c+125,"my_cpu ID inst_mulhu", false,-1);
        tracep->declBit(c+126,"my_cpu ID inst_csrrs", false,-1);
        tracep->declBit(c+127,"my_cpu ID inst_csrrw", false,-1);
        tracep->declBit(c+128,"my_cpu ID inst_mret", false,-1);
        tracep->declBit(c+129,"my_cpu ID inst_ecall", false,-1);
        tracep->declBus(c+130,"my_cpu ID inst_Src1_Select", false,-1, 2,0);
        tracep->declBus(c+131,"my_cpu ID inst_Src2_Select", false,-1, 3,0);
        tracep->declBus(c+132,"my_cpu ID inst_result_Select", false,-1, 2,0);
        tracep->declBus(c+133,"my_cpu ID mem_OneHot", false,-1, 10,0);
        tracep->declBus(c+134,"my_cpu ID alu_OneHOt", false,-1, 13,0);
        tracep->declBus(c+135,"my_cpu ID mul_div_OneHot", false,-1, 12,0);
        tracep->declBus(c+136,"my_cpu ID csr_OneHot", false,-1, 3,0);
        tracep->declBit(c+137,"my_cpu ID op_add", false,-1);
        tracep->declBit(c+138,"my_cpu ID op_sub", false,-1);
        tracep->declBit(c+139,"my_cpu ID op_slt", false,-1);
        tracep->declBit(c+140,"my_cpu ID op_sltu", false,-1);
        tracep->declBit(c+141,"my_cpu ID op_and", false,-1);
        tracep->declBit(c+142,"my_cpu ID op_or", false,-1);
        tracep->declBit(c+143,"my_cpu ID op_xor", false,-1);
        tracep->declBit(c+144,"my_cpu ID op_sll", false,-1);
        tracep->declBit(c+145,"my_cpu ID op_srl", false,-1);
        tracep->declBit(c+146,"my_cpu ID op_sra", false,-1);
        tracep->declBit(c+111,"my_cpu ID op_lui", false,-1);
        tracep->declBit(c+147,"my_cpu ID op_sraw", false,-1);
        tracep->declBit(c+148,"my_cpu ID op_sllw", false,-1);
        tracep->declBit(c+149,"my_cpu ID op_srlw", false,-1);
        tracep->declQuad(c+150,"my_cpu ID Inst_Src1_forwarding", false,-1, 63,0);
        tracep->declQuad(c+152,"my_cpu ID Inst_Src2_forwarding", false,-1, 63,0);
        tracep->declQuad(c+154,"my_cpu ID Inst_Src3_forwarding", false,-1, 63,0);
        tracep->declBus(c+1881,"my_cpu ID inst_addr_next", false,-1, 31,0);
        tracep->declBus(c+156,"my_cpu ID jump_addr_next_jal", false,-1, 31,0);
        tracep->declBus(c+157,"my_cpu ID jump_addr_next_jalr", false,-1, 31,0);
        tracep->declBus(c+158,"my_cpu ID jump_addr_next_beq", false,-1, 31,0);
        tracep->declBus(c+159,"my_cpu ID jump_addr_next_bltu", false,-1, 31,0);
        tracep->declBus(c+160,"my_cpu ID jump_addr_next_bne", false,-1, 31,0);
        tracep->declBus(c+161,"my_cpu ID jump_addr_next_blt", false,-1, 31,0);
        tracep->declBus(c+162,"my_cpu ID jump_addr_next_bge", false,-1, 31,0);
        tracep->declBus(c+163,"my_cpu ID jump_addr_next_bgeu", false,-1, 31,0);
        tracep->declBus(c+164,"my_cpu ID j_type_imm", false,-1, 20,0);
        tracep->declBus(c+165,"my_cpu ID b_type_imm", false,-1, 12,0);
        tracep->declBit(c+166,"my_cpu ID inst_jal", false,-1);
        tracep->declBit(c+167,"my_cpu ID inst_jalr", false,-1);
        tracep->declBit(c+168,"my_cpu ID inst_bne", false,-1);
        tracep->declBit(c+169,"my_cpu ID inst_beq", false,-1);
        tracep->declBit(c+170,"my_cpu ID inst_blt", false,-1);
        tracep->declBit(c+171,"my_cpu ID inst_bge", false,-1);
        tracep->declBit(c+172,"my_cpu ID inst_bgeu", false,-1);
        tracep->declBit(c+173,"my_cpu ID inst_bltu", false,-1);
        tracep->declBit(c+174,"my_cpu ID junm_en", false,-1);
        tracep->declBus(c+46,"my_cpu ID regesiterfile a", false,-1, 4,0);
        tracep->declQuad(c+50,"my_cpu ID regesiterfile d", false,-1, 63,0);
        tracep->declBus(c+64,"my_cpu ID regesiterfile dpra1", false,-1, 4,0);
        tracep->declBus(c+65,"my_cpu ID regesiterfile dpra2", false,-1, 4,0);
        tracep->declBus(c+2169,"my_cpu ID regesiterfile dpra3", false,-1, 4,0);
        tracep->declBit(c+1915,"my_cpu ID regesiterfile clk", false,-1);
        tracep->declBit(c+52,"my_cpu ID regesiterfile we", false,-1);
        tracep->declQuad(c+39,"my_cpu ID regesiterfile dpo1", false,-1, 63,0);
        tracep->declQuad(c+41,"my_cpu ID regesiterfile dpo2", false,-1, 63,0);
        tracep->declQuad(c+43,"my_cpu ID regesiterfile dpo3", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+175+i*2,"my_cpu ID regesiterfile rf", true,(i+0), 63,0);}}
        tracep->declBit(c+1915,"my_cpu ID csr clk", false,-1);
        tracep->declBit(c+1916,"my_cpu ID csr rst", false,-1);
        tracep->declBus(c+61,"my_cpu ID csr pc", false,-1, 31,0);
        tracep->declQuad(c+2170,"my_cpu ID csr a4", false,-1, 63,0);
        tracep->declBit(c+1917,"my_cpu ID csr int_time", false,-1);
        tracep->declQuad(c+150,"my_cpu ID csr src1", false,-1, 63,0);
        tracep->declBus(c+70,"my_cpu ID csr csr_num", false,-1, 11,0);
        tracep->declBus(c+136,"my_cpu ID csr csr_OneHot", false,-1, 3,0);
        tracep->declQuad(c+1879,"my_cpu ID csr csr_result", false,-1, 63,0);
        tracep->declBus(c+239,"my_cpu ID csr csr_map_num", false,-1, 3,0);
        tracep->declBit(c+240,"my_cpu ID csr inst_ecall", false,-1);
        tracep->declBit(c+241,"my_cpu ID csr inst_mret", false,-1);
        tracep->declBit(c+242,"my_cpu ID csr inst_csrrs", false,-1);
        tracep->declBit(c+243,"my_cpu ID csr inst_csrrw", false,-1);
        tracep->declBit(c+1882,"my_cpu ID csr time_interrupt", false,-1);
        tracep->declBit(c+244,"my_cpu ID csr time_interrupt_flag", false,-1);
        {int i; for (i=0; i<16; i++) {
                tracep->declQuad(c+245+i*2,"my_cpu ID csr csr_reg", true,(i+0), 63,0);}}
        tracep->declBus(c+277,"my_cpu ID csr unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+70,"my_cpu ID csr csr_map csr_num", false,-1, 11,0);
        tracep->declBus(c+239,"my_cpu ID csr csr_map csr_map_num", false,-1, 3,0);
        tracep->declBit(c+1915,"my_cpu EX clk", false,-1);
        tracep->declBit(c+1916,"my_cpu EX rst", false,-1);
        tracep->declBit(c+21,"my_cpu EX stop_all", false,-1);
        tracep->declBus(c+1971,"my_cpu EX debug_inst_addr", false,-1, 31,0);
        tracep->declArray(c+1863,"my_cpu EX ID_EX_Bus", false,-1, 312,0);
        tracep->declQuad(c+1933,"my_cpu EX debug_mul_div_result", false,-1, 63,0);
        tracep->declBit(c+1957,"my_cpu EX mul_div_valid", false,-1);
        tracep->declBit(c+1958,"my_cpu EX IF_we", false,-1);
        tracep->declBus(c+1959,"my_cpu EX inst_result_Select", false,-1, 2,0);
        tracep->declArray(c+12,"my_cpu EX EX_MEM_Bus", false,-1, 114,0);
        tracep->declArray(c+6,"my_cpu EX EX_ID_Bus", false,-1, 69,0);
        tracep->declQuad(c+1929,"my_cpu EX Inst_Src2_forwarding", false,-1, 63,0);
        tracep->declQuad(c+1931,"my_cpu EX Inst_Src1_forwarding", false,-1, 63,0);
        tracep->declBus(c+1964,"my_cpu EX ext_ram_addr", false,-1, 31,0);
        tracep->declBus(c+1965,"my_cpu EX ext_ram_be_n", false,-1, 7,0);
        tracep->declBit(c+1966,"my_cpu EX ext_ram_wen", false,-1);
        tracep->declQuad(c+1967,"my_cpu EX ext_ram_write_data", false,-1, 63,0);
        tracep->declArray(c+278,"my_cpu EX ID_EX_Bus_Reg", false,-1, 312,0);
        tracep->declBit(c+288,"my_cpu EX inst_ebreak", false,-1);
        tracep->declBus(c+289,"my_cpu EX inst_Src1_Select", false,-1, 2,0);
        tracep->declBus(c+290,"my_cpu EX inst_Src2_Select", false,-1, 3,0);
        tracep->declBit(c+291,"my_cpu EX ID_we", false,-1);
        tracep->declBus(c+292,"my_cpu EX ID_addr", false,-1, 4,0);
        tracep->declQuad(c+293,"my_cpu EX ID_result", false,-1, 63,0);
        tracep->declBus(c+295,"my_cpu EX inst", false,-1, 31,0);
        tracep->declBus(c+296,"my_cpu EX inst_addr", false,-1, 31,0);
        tracep->declBit(c+297,"my_cpu EX inst_lwu", false,-1);
        tracep->declBit(c+298,"my_cpu EX inst_sh", false,-1);
        tracep->declBit(c+299,"my_cpu EX inst_sd", false,-1);
        tracep->declBit(c+300,"my_cpu EX inst_sw", false,-1);
        tracep->declBit(c+301,"my_cpu EX inst_ld", false,-1);
        tracep->declBit(c+302,"my_cpu EX inst_lw", false,-1);
        tracep->declBit(c+303,"my_cpu EX inst_lhu", false,-1);
        tracep->declBit(c+304,"my_cpu EX inst_lh", false,-1);
        tracep->declBit(c+305,"my_cpu EX inst_lbu", false,-1);
        tracep->declBit(c+306,"my_cpu EX inst_lb", false,-1);
        tracep->declBit(c+307,"my_cpu EX inst_sb", false,-1);
        tracep->declBus(c+308,"my_cpu EX mem_OneHot", false,-1, 10,0);
        tracep->declBus(c+2172,"my_cpu EX compare_OneHot", false,-1, 10,0);
        tracep->declBus(c+309,"my_cpu EX alu_OneHOt", false,-1, 13,0);
        tracep->declBus(c+310,"my_cpu EX mul_div_OneHot", false,-1, 12,0);
        tracep->declBit(c+311,"my_cpu EX valid", false,-1);
        tracep->declQuad(c+312,"my_cpu EX alu_result", false,-1, 63,0);
        tracep->declQuad(c+314,"my_cpu EX alu_src1", false,-1, 63,0);
        tracep->declQuad(c+316,"my_cpu EX alu_src2", false,-1, 63,0);
        tracep->declQuad(c+318,"my_cpu EX final_result", false,-1, 63,0);
        tracep->declBus(c+320,"my_cpu EX lb_sb_be", false,-1, 7,0);
        tracep->declBus(c+321,"my_cpu EX lh_sh_be", false,-1, 7,0);
        tracep->declBus(c+322,"my_cpu EX lw_sw_be", false,-1, 7,0);
        tracep->declQuad(c+323,"my_cpu EX mul_div_result", false,-1, 63,0);
        tracep->declBus(c+309,"my_cpu EX alu_1 alu_control", false,-1, 13,0);
        tracep->declQuad(c+314,"my_cpu EX alu_1 alu_src1", false,-1, 63,0);
        tracep->declQuad(c+316,"my_cpu EX alu_1 alu_src2", false,-1, 63,0);
        tracep->declQuad(c+312,"my_cpu EX alu_1 alu_result", false,-1, 63,0);
        tracep->declBit(c+325,"my_cpu EX alu_1 op_add", false,-1);
        tracep->declBit(c+326,"my_cpu EX alu_1 op_sub", false,-1);
        tracep->declBit(c+327,"my_cpu EX alu_1 op_slt", false,-1);
        tracep->declBit(c+328,"my_cpu EX alu_1 op_sltu", false,-1);
        tracep->declBit(c+329,"my_cpu EX alu_1 op_and", false,-1);
        tracep->declBit(c+330,"my_cpu EX alu_1 op_or", false,-1);
        tracep->declBit(c+331,"my_cpu EX alu_1 op_xor", false,-1);
        tracep->declBit(c+332,"my_cpu EX alu_1 op_sll", false,-1);
        tracep->declBit(c+333,"my_cpu EX alu_1 op_srl", false,-1);
        tracep->declBit(c+334,"my_cpu EX alu_1 op_sra", false,-1);
        tracep->declBit(c+335,"my_cpu EX alu_1 op_lui", false,-1);
        tracep->declBit(c+336,"my_cpu EX alu_1 op_sllw", false,-1);
        tracep->declBit(c+337,"my_cpu EX alu_1 op_srlw", false,-1);
        tracep->declBit(c+338,"my_cpu EX alu_1 op_sraw", false,-1);
        tracep->declQuad(c+339,"my_cpu EX alu_1 add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+341,"my_cpu EX alu_1 slt_result", false,-1, 63,0);
        tracep->declQuad(c+343,"my_cpu EX alu_1 sltu_result", false,-1, 63,0);
        tracep->declQuad(c+345,"my_cpu EX alu_1 and_result", false,-1, 63,0);
        tracep->declQuad(c+347,"my_cpu EX alu_1 or_result", false,-1, 63,0);
        tracep->declQuad(c+349,"my_cpu EX alu_1 xor_result", false,-1, 63,0);
        tracep->declQuad(c+351,"my_cpu EX alu_1 sll_result", false,-1, 63,0);
        tracep->declQuad(c+353,"my_cpu EX alu_1 srl_result", false,-1, 63,0);
        tracep->declQuad(c+353,"my_cpu EX alu_1 sra_result", false,-1, 63,0);
        tracep->declQuad(c+316,"my_cpu EX alu_1 lui_result", false,-1, 63,0);
        tracep->declQuad(c+355,"my_cpu EX alu_1 sraw_result", false,-1, 63,0);
        tracep->declQuad(c+357,"my_cpu EX alu_1 srlw_result", false,-1, 63,0);
        tracep->declQuad(c+359,"my_cpu EX alu_1 sllw_result", false,-1, 63,0);
        tracep->declQuad(c+314,"my_cpu EX alu_1 adder_a", false,-1, 63,0);
        tracep->declQuad(c+361,"my_cpu EX alu_1 adder_b", false,-1, 63,0);
        tracep->declQuad(c+363,"my_cpu EX alu_1 adder_cin", false,-1, 63,0);
        tracep->declQuad(c+339,"my_cpu EX alu_1 adder_result", false,-1, 63,0);
        tracep->declBit(c+365,"my_cpu EX alu_1 adder_cout", false,-1);
        tracep->declBit(c+1915,"my_cpu EX mdu clk", false,-1);
        tracep->declBit(c+1916,"my_cpu EX mdu rst", false,-1);
        tracep->declBus(c+310,"my_cpu EX mdu mul_div_OneHot", false,-1, 12,0);
        tracep->declQuad(c+1931,"my_cpu EX mdu src1", false,-1, 63,0);
        tracep->declQuad(c+1929,"my_cpu EX mdu src2", false,-1, 63,0);
        tracep->declQuad(c+2173,"my_cpu EX mdu debug_mul_div_result", false,-1, 63,0);
        tracep->declBit(c+1957,"my_cpu EX mdu mul_div_valid", false,-1);
        tracep->declQuad(c+323,"my_cpu EX mdu result", false,-1, 63,0);
        tracep->declBit(c+366,"my_cpu EX mdu inst_mulh", false,-1);
        tracep->declBit(c+367,"my_cpu EX mdu inst_mulhsu", false,-1);
        tracep->declBit(c+368,"my_cpu EX mdu inst_mulhu", false,-1);
        tracep->declBit(c+369,"my_cpu EX mdu inst_rem", false,-1);
        tracep->declBit(c+370,"my_cpu EX mdu inst_remu", false,-1);
        tracep->declBit(c+371,"my_cpu EX mdu inst_div", false,-1);
        tracep->declBit(c+372,"my_cpu EX mdu inst_divu", false,-1);
        tracep->declBit(c+373,"my_cpu EX mdu inst_remuw", false,-1);
        tracep->declBit(c+374,"my_cpu EX mdu inst_divuw", false,-1);
        tracep->declBit(c+375,"my_cpu EX mdu inst_mul", false,-1);
        tracep->declBit(c+376,"my_cpu EX mdu inst_remw", false,-1);
        tracep->declBit(c+377,"my_cpu EX mdu inst_divw", false,-1);
        tracep->declBit(c+378,"my_cpu EX mdu inst_mulw", false,-1);
        tracep->declArray(c+2175,"my_cpu EX mdu mul_result", false,-1, 127,0);
        tracep->declArray(c+2179,"my_cpu EX mdu mulh_result", false,-1, 127,0);
        tracep->declArray(c+2183,"my_cpu EX mdu mulhsu_result", false,-1, 127,0);
        tracep->declArray(c+2187,"my_cpu EX mdu mulhu_result", false,-1, 127,0);
        tracep->declQuad(c+2191,"my_cpu EX mdu mulw_result", false,-1, 63,0);
        tracep->declQuad(c+379,"my_cpu EX mdu div_result", false,-1, 63,0);
        tracep->declQuad(c+2193,"my_cpu EX mdu divw_result", false,-1, 63,0);
        tracep->declQuad(c+2173,"my_cpu EX mdu divu_result", false,-1, 63,0);
        tracep->declQuad(c+2195,"my_cpu EX mdu divuw_result", false,-1, 63,0);
        tracep->declQuad(c+2197,"my_cpu EX mdu remw_result", false,-1, 63,0);
        tracep->declQuad(c+381,"my_cpu EX mdu rem_result", false,-1, 63,0);
        tracep->declQuad(c+2199,"my_cpu EX mdu remuw_result", false,-1, 63,0);
        tracep->declQuad(c+2201,"my_cpu EX mdu remu_result", false,-1, 63,0);
        tracep->declQuad(c+383,"my_cpu EX mdu re_hi", false,-1, 63,0);
        tracep->declQuad(c+385,"my_cpu EX mdu re_lo", false,-1, 63,0);
        tracep->declBus(c+387,"my_cpu EX mdu mul_signed", false,-1, 1,0);
        tracep->declBit(c+388,"my_cpu EX mdu div_sign", false,-1);
        tracep->declBit(c+389,"my_cpu EX mdu shorten", false,-1);
        tracep->declQuad(c+1931,"my_cpu EX mdu mul src1", false,-1, 63,0);
        tracep->declQuad(c+1929,"my_cpu EX mdu mul src2", false,-1, 63,0);
        tracep->declBus(c+387,"my_cpu EX mdu mul mul_signed", false,-1, 1,0);
        tracep->declQuad(c+383,"my_cpu EX mdu mul re_hi", false,-1, 63,0);
        tracep->declQuad(c+385,"my_cpu EX mdu mul re_lo", false,-1, 63,0);
        tracep->declBit(c+390,"my_cpu EX mdu mul src1_abs_flag", false,-1);
        tracep->declBit(c+391,"my_cpu EX mdu mul src2_abs_flag", false,-1);
        tracep->declQuad(c+392,"my_cpu EX mdu mul src1_mul", false,-1, 63,0);
        tracep->declQuad(c+394,"my_cpu EX mdu mul src2_mul", false,-1, 63,0);
        tracep->declQuad(c+396,"my_cpu EX mdu mul mul_32_1_var", false,-1, 63,0);
        tracep->declQuad(c+398,"my_cpu EX mdu mul mul_32_2_var", false,-1, 63,0);
        tracep->declQuad(c+400,"my_cpu EX mdu mul mul_32_3_var", false,-1, 63,0);
        tracep->declQuad(c+402,"my_cpu EX mdu mul mul_32_4_var", false,-1, 63,0);
        tracep->declArray(c+404,"my_cpu EX mdu mul result_abs", false,-1, 127,0);
        tracep->declBit(c+408,"my_cpu EX mdu mul signed_flag", false,-1);
        tracep->declArray(c+409,"my_cpu EX mdu mul result", false,-1, 127,0);
        tracep->declBus(c+413,"my_cpu EX mdu mul mul_32_1 src1", false,-1, 31,0);
        tracep->declBus(c+414,"my_cpu EX mdu mul mul_32_1 src2", false,-1, 31,0);
        tracep->declQuad(c+396,"my_cpu EX mdu mul mul_32_1 output1", false,-1, 63,0);
        tracep->declBus(c+413,"my_cpu EX mdu mul mul_32_2 src1", false,-1, 31,0);
        tracep->declBus(c+415,"my_cpu EX mdu mul mul_32_2 src2", false,-1, 31,0);
        tracep->declQuad(c+398,"my_cpu EX mdu mul mul_32_2 output1", false,-1, 63,0);
        tracep->declBus(c+416,"my_cpu EX mdu mul mul_32_3 src1", false,-1, 31,0);
        tracep->declBus(c+414,"my_cpu EX mdu mul mul_32_3 src2", false,-1, 31,0);
        tracep->declQuad(c+400,"my_cpu EX mdu mul mul_32_3 output1", false,-1, 63,0);
        tracep->declBus(c+416,"my_cpu EX mdu mul mul_32_4 src1", false,-1, 31,0);
        tracep->declBus(c+415,"my_cpu EX mdu mul mul_32_4 src2", false,-1, 31,0);
        tracep->declQuad(c+402,"my_cpu EX mdu mul mul_32_4 output1", false,-1, 63,0);
        tracep->declBit(c+2203,"my_cpu EX mdu div clk", false,-1);
        tracep->declBit(c+2204,"my_cpu EX mdu div rst", false,-1);
        tracep->declBit(c+388,"my_cpu EX mdu div sign", false,-1);
        tracep->declQuad(c+1931,"my_cpu EX mdu div div_data", false,-1, 63,0);
        tracep->declQuad(c+1929,"my_cpu EX mdu div dived_data", false,-1, 63,0);
        tracep->declBit(c+2205,"my_cpu EX mdu div div_ready", false,-1);
        tracep->declBit(c+389,"my_cpu EX mdu div shorten", false,-1);
        tracep->declBit(c+2206,"my_cpu EX mdu div div_valid", false,-1);
        tracep->declQuad(c+381,"my_cpu EX mdu div result_hi", false,-1, 63,0);
        tracep->declQuad(c+379,"my_cpu EX mdu div result_lo", false,-1, 63,0);
        tracep->declArray(c+417,"my_cpu EX mdu div remain_data", false,-1, 64,0);
        tracep->declQuad(c+420,"my_cpu EX mdu div result", false,-1, 63,0);
        tracep->declQuad(c+2207,"my_cpu EX mdu div src2", false,-1, 63,0);
        tracep->declBus(c+2209,"my_cpu EX mdu div div_state", false,-1, 2,0);
        tracep->declBus(c+2210,"my_cpu EX mdu div result_index", false,-1, 6,0);
        tracep->declArray(c+2211,"my_cpu EX mdu div sub_data", false,-1, 64,0);
        tracep->declQuad(c+422,"my_cpu EX mdu div div_data_abs", false,-1, 63,0);
        tracep->declQuad(c+424,"my_cpu EX mdu div dived_data_abs", false,-1, 63,0);
        tracep->declBit(c+426,"my_cpu EX mdu div div_sign_flag", false,-1);
        tracep->declBit(c+427,"my_cpu EX mdu div dived_sign_flag", false,-1);
        tracep->declQuad(c+2005,"my_cpu EX mdu div div_32_data", false,-1, 63,0);
        tracep->declQuad(c+2007,"my_cpu EX mdu div dived_32_data", false,-1, 63,0);
        tracep->declArray(c+428,"my_cpu EX mdu div remain_data_1_1", false,-1, 64,0);
        tracep->declArray(c+431,"my_cpu EX mdu div remain_data_1_2", false,-1, 64,0);
        tracep->declArray(c+434,"my_cpu EX mdu div remain_data_2_1", false,-1, 64,0);
        tracep->declArray(c+437,"my_cpu EX mdu div remain_data_2_2", false,-1, 64,0);
        tracep->declArray(c+440,"my_cpu EX mdu div remain_data_3_1", false,-1, 64,0);
        tracep->declArray(c+443,"my_cpu EX mdu div remain_data_3_2", false,-1, 64,0);
        tracep->declArray(c+446,"my_cpu EX mdu div remain_data_4_1", false,-1, 64,0);
        tracep->declArray(c+449,"my_cpu EX mdu div remain_data_4_2", false,-1, 64,0);
        tracep->declArray(c+452,"my_cpu EX mdu div remain_data_5_1", false,-1, 64,0);
        tracep->declArray(c+455,"my_cpu EX mdu div remain_data_5_2", false,-1, 64,0);
        tracep->declArray(c+458,"my_cpu EX mdu div remain_data_6_1", false,-1, 64,0);
        tracep->declArray(c+461,"my_cpu EX mdu div remain_data_6_2", false,-1, 64,0);
        tracep->declArray(c+464,"my_cpu EX mdu div remain_data_7_1", false,-1, 64,0);
        tracep->declArray(c+467,"my_cpu EX mdu div remain_data_7_2", false,-1, 64,0);
        tracep->declArray(c+470,"my_cpu EX mdu div remain_data_8_1", false,-1, 64,0);
        tracep->declArray(c+473,"my_cpu EX mdu div remain_data_8_2", false,-1, 64,0);
        tracep->declArray(c+476,"my_cpu EX mdu div remain_data_9_1", false,-1, 64,0);
        tracep->declArray(c+479,"my_cpu EX mdu div remain_data_9_2", false,-1, 64,0);
        tracep->declArray(c+482,"my_cpu EX mdu div remain_data_10_1", false,-1, 64,0);
        tracep->declArray(c+485,"my_cpu EX mdu div remain_data_10_2", false,-1, 64,0);
        tracep->declArray(c+488,"my_cpu EX mdu div remain_data_11_1", false,-1, 64,0);
        tracep->declArray(c+491,"my_cpu EX mdu div remain_data_11_2", false,-1, 64,0);
        tracep->declArray(c+494,"my_cpu EX mdu div remain_data_12_1", false,-1, 64,0);
        tracep->declArray(c+497,"my_cpu EX mdu div remain_data_12_2", false,-1, 64,0);
        tracep->declArray(c+500,"my_cpu EX mdu div remain_data_13_1", false,-1, 64,0);
        tracep->declArray(c+503,"my_cpu EX mdu div remain_data_13_2", false,-1, 64,0);
        tracep->declArray(c+506,"my_cpu EX mdu div remain_data_14_1", false,-1, 64,0);
        tracep->declArray(c+509,"my_cpu EX mdu div remain_data_14_2", false,-1, 64,0);
        tracep->declArray(c+512,"my_cpu EX mdu div remain_data_15_1", false,-1, 64,0);
        tracep->declArray(c+515,"my_cpu EX mdu div remain_data_15_2", false,-1, 64,0);
        tracep->declArray(c+518,"my_cpu EX mdu div remain_data_16_1", false,-1, 64,0);
        tracep->declArray(c+521,"my_cpu EX mdu div remain_data_16_2", false,-1, 64,0);
        tracep->declArray(c+524,"my_cpu EX mdu div remain_data_17_1", false,-1, 64,0);
        tracep->declArray(c+527,"my_cpu EX mdu div remain_data_17_2", false,-1, 64,0);
        tracep->declArray(c+530,"my_cpu EX mdu div remain_data_18_1", false,-1, 64,0);
        tracep->declArray(c+533,"my_cpu EX mdu div remain_data_18_2", false,-1, 64,0);
        tracep->declArray(c+536,"my_cpu EX mdu div remain_data_19_1", false,-1, 64,0);
        tracep->declArray(c+539,"my_cpu EX mdu div remain_data_19_2", false,-1, 64,0);
        tracep->declArray(c+542,"my_cpu EX mdu div remain_data_20_1", false,-1, 64,0);
        tracep->declArray(c+545,"my_cpu EX mdu div remain_data_20_2", false,-1, 64,0);
        tracep->declArray(c+548,"my_cpu EX mdu div remain_data_21_1", false,-1, 64,0);
        tracep->declArray(c+551,"my_cpu EX mdu div remain_data_21_2", false,-1, 64,0);
        tracep->declArray(c+554,"my_cpu EX mdu div remain_data_22_1", false,-1, 64,0);
        tracep->declArray(c+557,"my_cpu EX mdu div remain_data_22_2", false,-1, 64,0);
        tracep->declArray(c+560,"my_cpu EX mdu div remain_data_23_1", false,-1, 64,0);
        tracep->declArray(c+563,"my_cpu EX mdu div remain_data_23_2", false,-1, 64,0);
        tracep->declArray(c+566,"my_cpu EX mdu div remain_data_24_1", false,-1, 64,0);
        tracep->declArray(c+569,"my_cpu EX mdu div remain_data_24_2", false,-1, 64,0);
        tracep->declArray(c+572,"my_cpu EX mdu div remain_data_25_1", false,-1, 64,0);
        tracep->declArray(c+575,"my_cpu EX mdu div remain_data_25_2", false,-1, 64,0);
        tracep->declArray(c+578,"my_cpu EX mdu div remain_data_26_1", false,-1, 64,0);
        tracep->declArray(c+581,"my_cpu EX mdu div remain_data_26_2", false,-1, 64,0);
        tracep->declArray(c+584,"my_cpu EX mdu div remain_data_27_1", false,-1, 64,0);
        tracep->declArray(c+587,"my_cpu EX mdu div remain_data_27_2", false,-1, 64,0);
        tracep->declArray(c+590,"my_cpu EX mdu div remain_data_28_1", false,-1, 64,0);
        tracep->declArray(c+593,"my_cpu EX mdu div remain_data_28_2", false,-1, 64,0);
        tracep->declArray(c+596,"my_cpu EX mdu div remain_data_29_1", false,-1, 64,0);
        tracep->declArray(c+599,"my_cpu EX mdu div remain_data_29_2", false,-1, 64,0);
        tracep->declArray(c+602,"my_cpu EX mdu div remain_data_30_1", false,-1, 64,0);
        tracep->declArray(c+605,"my_cpu EX mdu div remain_data_30_2", false,-1, 64,0);
        tracep->declArray(c+608,"my_cpu EX mdu div remain_data_31_1", false,-1, 64,0);
        tracep->declArray(c+611,"my_cpu EX mdu div remain_data_31_2", false,-1, 64,0);
        tracep->declArray(c+614,"my_cpu EX mdu div remain_data_32_1", false,-1, 64,0);
        tracep->declArray(c+617,"my_cpu EX mdu div remain_data_32_2", false,-1, 64,0);
        tracep->declArray(c+620,"my_cpu EX mdu div remain_data_33_1", false,-1, 64,0);
        tracep->declArray(c+623,"my_cpu EX mdu div remain_data_33_2", false,-1, 64,0);
        tracep->declArray(c+626,"my_cpu EX mdu div remain_data_34_1", false,-1, 64,0);
        tracep->declArray(c+629,"my_cpu EX mdu div remain_data_34_2", false,-1, 64,0);
        tracep->declArray(c+632,"my_cpu EX mdu div remain_data_35_1", false,-1, 64,0);
        tracep->declArray(c+635,"my_cpu EX mdu div remain_data_35_2", false,-1, 64,0);
        tracep->declArray(c+638,"my_cpu EX mdu div remain_data_36_1", false,-1, 64,0);
        tracep->declArray(c+641,"my_cpu EX mdu div remain_data_36_2", false,-1, 64,0);
        tracep->declArray(c+644,"my_cpu EX mdu div remain_data_37_1", false,-1, 64,0);
        tracep->declArray(c+647,"my_cpu EX mdu div remain_data_37_2", false,-1, 64,0);
        tracep->declArray(c+650,"my_cpu EX mdu div remain_data_38_1", false,-1, 64,0);
        tracep->declArray(c+653,"my_cpu EX mdu div remain_data_38_2", false,-1, 64,0);
        tracep->declArray(c+656,"my_cpu EX mdu div remain_data_39_1", false,-1, 64,0);
        tracep->declArray(c+659,"my_cpu EX mdu div remain_data_39_2", false,-1, 64,0);
        tracep->declArray(c+662,"my_cpu EX mdu div remain_data_40_1", false,-1, 64,0);
        tracep->declArray(c+665,"my_cpu EX mdu div remain_data_40_2", false,-1, 64,0);
        tracep->declArray(c+668,"my_cpu EX mdu div remain_data_41_1", false,-1, 64,0);
        tracep->declArray(c+671,"my_cpu EX mdu div remain_data_41_2", false,-1, 64,0);
        tracep->declArray(c+674,"my_cpu EX mdu div remain_data_42_1", false,-1, 64,0);
        tracep->declArray(c+677,"my_cpu EX mdu div remain_data_42_2", false,-1, 64,0);
        tracep->declArray(c+680,"my_cpu EX mdu div remain_data_43_1", false,-1, 64,0);
        tracep->declArray(c+683,"my_cpu EX mdu div remain_data_43_2", false,-1, 64,0);
        tracep->declArray(c+686,"my_cpu EX mdu div remain_data_44_1", false,-1, 64,0);
        tracep->declArray(c+689,"my_cpu EX mdu div remain_data_44_2", false,-1, 64,0);
        tracep->declArray(c+692,"my_cpu EX mdu div remain_data_45_1", false,-1, 64,0);
        tracep->declArray(c+695,"my_cpu EX mdu div remain_data_45_2", false,-1, 64,0);
        tracep->declArray(c+698,"my_cpu EX mdu div remain_data_46_1", false,-1, 64,0);
        tracep->declArray(c+701,"my_cpu EX mdu div remain_data_46_2", false,-1, 64,0);
        tracep->declArray(c+704,"my_cpu EX mdu div remain_data_47_1", false,-1, 64,0);
        tracep->declArray(c+707,"my_cpu EX mdu div remain_data_47_2", false,-1, 64,0);
        tracep->declArray(c+710,"my_cpu EX mdu div remain_data_48_1", false,-1, 64,0);
        tracep->declArray(c+713,"my_cpu EX mdu div remain_data_48_2", false,-1, 64,0);
        tracep->declArray(c+716,"my_cpu EX mdu div remain_data_49_1", false,-1, 64,0);
        tracep->declArray(c+719,"my_cpu EX mdu div remain_data_49_2", false,-1, 64,0);
        tracep->declArray(c+722,"my_cpu EX mdu div remain_data_50_1", false,-1, 64,0);
        tracep->declArray(c+725,"my_cpu EX mdu div remain_data_50_2", false,-1, 64,0);
        tracep->declArray(c+728,"my_cpu EX mdu div remain_data_51_1", false,-1, 64,0);
        tracep->declArray(c+731,"my_cpu EX mdu div remain_data_51_2", false,-1, 64,0);
        tracep->declArray(c+734,"my_cpu EX mdu div remain_data_52_1", false,-1, 64,0);
        tracep->declArray(c+737,"my_cpu EX mdu div remain_data_52_2", false,-1, 64,0);
        tracep->declArray(c+740,"my_cpu EX mdu div remain_data_53_1", false,-1, 64,0);
        tracep->declArray(c+743,"my_cpu EX mdu div remain_data_53_2", false,-1, 64,0);
        tracep->declArray(c+746,"my_cpu EX mdu div remain_data_54_1", false,-1, 64,0);
        tracep->declArray(c+749,"my_cpu EX mdu div remain_data_54_2", false,-1, 64,0);
        tracep->declArray(c+752,"my_cpu EX mdu div remain_data_55_1", false,-1, 64,0);
        tracep->declArray(c+755,"my_cpu EX mdu div remain_data_55_2", false,-1, 64,0);
        tracep->declArray(c+758,"my_cpu EX mdu div remain_data_56_1", false,-1, 64,0);
        tracep->declArray(c+761,"my_cpu EX mdu div remain_data_56_2", false,-1, 64,0);
        tracep->declArray(c+764,"my_cpu EX mdu div remain_data_57_1", false,-1, 64,0);
        tracep->declArray(c+767,"my_cpu EX mdu div remain_data_57_2", false,-1, 64,0);
        tracep->declArray(c+770,"my_cpu EX mdu div remain_data_58_1", false,-1, 64,0);
        tracep->declArray(c+773,"my_cpu EX mdu div remain_data_58_2", false,-1, 64,0);
        tracep->declArray(c+776,"my_cpu EX mdu div remain_data_59_1", false,-1, 64,0);
        tracep->declArray(c+779,"my_cpu EX mdu div remain_data_59_2", false,-1, 64,0);
        tracep->declArray(c+782,"my_cpu EX mdu div remain_data_60_1", false,-1, 64,0);
        tracep->declArray(c+785,"my_cpu EX mdu div remain_data_60_2", false,-1, 64,0);
        tracep->declArray(c+788,"my_cpu EX mdu div remain_data_61_1", false,-1, 64,0);
        tracep->declArray(c+791,"my_cpu EX mdu div remain_data_61_2", false,-1, 64,0);
        tracep->declArray(c+794,"my_cpu EX mdu div remain_data_62_1", false,-1, 64,0);
        tracep->declArray(c+797,"my_cpu EX mdu div remain_data_62_2", false,-1, 64,0);
        tracep->declArray(c+800,"my_cpu EX mdu div remain_data_63_1", false,-1, 64,0);
        tracep->declArray(c+803,"my_cpu EX mdu div remain_data_63_2", false,-1, 64,0);
        tracep->declArray(c+806,"my_cpu EX mdu div remain_data_64_1", false,-1, 64,0);
        tracep->declArray(c+809,"my_cpu EX mdu div remain_data_64_2", false,-1, 64,0);
        tracep->declBus(c+812,"my_cpu EX mdu div rem32", false,-1, 31,0);
        tracep->declQuad(c+813,"my_cpu EX mdu div short_rem32", false,-1, 63,0);
        tracep->declBus(c+815,"my_cpu EX mdu div result32", false,-1, 31,0);
        tracep->declQuad(c+816,"my_cpu EX mdu div short_div32", false,-1, 63,0);
        tracep->declBit(c+1915,"my_cpu MEM clk", false,-1);
        tracep->declBit(c+1916,"my_cpu MEM rst", false,-1);
        tracep->declBit(c+21,"my_cpu MEM stop_all", false,-1);
        tracep->declQuad(c+1,"my_cpu MEM ext_ram_read_data", false,-1, 63,0);
        tracep->declArray(c+12,"my_cpu MEM EX_MEM_Bus", false,-1, 114,0);
        tracep->declArray(c+9,"my_cpu MEM MEM_ID_Bus", false,-1, 69,0);
        tracep->declBus(c+1970,"my_cpu MEM inst_addr", false,-1, 31,0);
        tracep->declBit(c+1969,"my_cpu MEM valid", false,-1);
        tracep->declBit(c+1924,"my_cpu MEM inst_ebreak", false,-1);
        tracep->declArray(c+818,"my_cpu MEM EX_MEM_Bus_Reg", false,-1, 114,0);
        tracep->declBit(c+822,"my_cpu MEM inst_lwu", false,-1);
        tracep->declBit(c+823,"my_cpu MEM inst_sh", false,-1);
        tracep->declBit(c+824,"my_cpu MEM inst_sd", false,-1);
        tracep->declBit(c+825,"my_cpu MEM inst_sw", false,-1);
        tracep->declBit(c+826,"my_cpu MEM inst_ld", false,-1);
        tracep->declBit(c+827,"my_cpu MEM inst_lw", false,-1);
        tracep->declBit(c+828,"my_cpu MEM inst_lhu", false,-1);
        tracep->declBit(c+829,"my_cpu MEM inst_lh", false,-1);
        tracep->declBit(c+830,"my_cpu MEM inst_lbu", false,-1);
        tracep->declBit(c+831,"my_cpu MEM inst_lb", false,-1);
        tracep->declBit(c+832,"my_cpu MEM inst_sb", false,-1);
        tracep->declBus(c+833,"my_cpu MEM mem_OneHot", false,-1, 10,0);
        tracep->declQuad(c+834,"my_cpu MEM EX_result", false,-1, 63,0);
        tracep->declQuad(c+836,"my_cpu MEM final_result", false,-1, 63,0);
        tracep->declBus(c+838,"my_cpu MEM ID_addr", false,-1, 4,0);
        tracep->declBit(c+839,"my_cpu MEM ID_we", false,-1);
        tracep->declBit(c+1915,"my_cpu cache clk", false,-1);
        tracep->declBit(c+1916,"my_cpu cache rst", false,-1);
        tracep->declBus(c+1963,"my_cpu cache inst_addr", false,-1, 31,0);
        tracep->declBit(c+2214,"my_cpu cache inst_en", false,-1);
        tracep->declBus(c+1972,"my_cpu cache inst_data", false,-1, 31,0);
        tracep->declBit(c+16,"my_cpu cache mem_stop", false,-1);
        tracep->declBit(c+21,"my_cpu cache stop_all", false,-1);
        tracep->declBus(c+1964,"my_cpu cache ext_data_addr", false,-1, 31,0);
        tracep->declBus(c+22,"my_cpu cache ext_data_be", false,-1, 7,0);
        tracep->declBit(c+23,"my_cpu cache ext_data_wen", false,-1);
        tracep->declQuad(c+1967,"my_cpu cache ext_data_write_data", false,-1, 63,0);
        tracep->declQuad(c+24,"my_cpu cache ext_cache_read_data", false,-1, 63,0);
        tracep->declArray(c+2009,"my_cpu cache inst_in_data", false,-1, 511,0);
        tracep->declBus(c+1923,"my_cpu cache inst_read_addr", false,-1, 31,0);
        tracep->declBit(c+1918,"my_cpu cache inst_read_req", false,-1);
        tracep->declArray(c+1883,"my_cpu cache ext_in_data", false,-1, 1023,0);
        tracep->declBus(c+1919,"my_cpu cache ext_read_addr", false,-1, 31,0);
        tracep->declBus(c+1920,"my_cpu cache ext_write_addr", false,-1, 31,0);
        tracep->declBit(c+1921,"my_cpu cache ext_write_req", false,-1);
        tracep->declBit(c+1922,"my_cpu cache ext_read_req", false,-1);
        tracep->declBit(c+26,"my_cpu cache inst_fence_i", false,-1);
        tracep->declBus(c+1973,"my_cpu cache AWID", false,-1, 3,0);
        tracep->declBus(c+1974,"my_cpu cache AWADDR", false,-1, 31,0);
        tracep->declBus(c+1975,"my_cpu cache AWLEN", false,-1, 7,0);
        tracep->declBus(c+1976,"my_cpu cache AWSIZE", false,-1, 2,0);
        tracep->declBus(c+1977,"my_cpu cache AWBURST", false,-1, 1,0);
        tracep->declBit(c+1978,"my_cpu cache AWVALID", false,-1);
        tracep->declBit(c+1979,"my_cpu cache AWREADY", false,-1);
        tracep->declQuad(c+1980,"my_cpu cache WDATA", false,-1, 63,0);
        tracep->declBus(c+1982,"my_cpu cache WSTRB", false,-1, 7,0);
        tracep->declBit(c+1983,"my_cpu cache WLAST", false,-1);
        tracep->declBit(c+1984,"my_cpu cache WVALID", false,-1);
        tracep->declBit(c+1985,"my_cpu cache WREADY", false,-1);
        tracep->declBus(c+1986,"my_cpu cache BID", false,-1, 3,0);
        tracep->declBus(c+1987,"my_cpu cache BRESP", false,-1, 1,0);
        tracep->declBit(c+1988,"my_cpu cache BVALID", false,-1);
        tracep->declBit(c+1989,"my_cpu cache BREADY", false,-1);
        tracep->declBus(c+1990,"my_cpu cache ARADDR", false,-1, 31,0);
        tracep->declBus(c+1991,"my_cpu cache ARLEN", false,-1, 7,0);
        tracep->declBus(c+1992,"my_cpu cache ARSIZE", false,-1, 2,0);
        tracep->declBus(c+1993,"my_cpu cache ARBURST", false,-1, 1,0);
        tracep->declBit(c+1994,"my_cpu cache ARVALID", false,-1);
        tracep->declBit(c+1995,"my_cpu cache ARREADY", false,-1);
        tracep->declBus(c+1996,"my_cpu cache RID", false,-1, 3,0);
        tracep->declQuad(c+1997,"my_cpu cache RDATA", false,-1, 63,0);
        tracep->declBus(c+1999,"my_cpu cache RRESP", false,-1, 1,0);
        tracep->declBit(c+2000,"my_cpu cache RLAST", false,-1);
        tracep->declBit(c+2001,"my_cpu cache RVALID", false,-1);
        tracep->declBit(c+2002,"my_cpu cache RREADY", false,-1);
        tracep->declBus(c+2003,"my_cpu cache ARID", false,-1, 3,0);
        tracep->declBit(c+840,"my_cpu cache read_shortcut_icache", false,-1);
        tracep->declBit(c+841,"my_cpu cache read_shortcut_dcache", false,-1);
        tracep->declBit(c+2025,"my_cpu cache dcache_ready", false,-1);
        tracep->declBit(c+2026,"my_cpu cache icache_ready", false,-1);
        tracep->declBit(c+842,"my_cpu cache icache_busy", false,-1);
        tracep->declBit(c+843,"my_cpu cache dcache_busy", false,-1);
        tracep->declBit(c+844,"my_cpu cache ext_en", false,-1);
        tracep->declArray(c+845,"my_cpu cache ext_out_write_data", false,-1, 1023,0);
        tracep->declArray(c+877,"my_cpu cache rdata_buffer_data", false,-1, 1023,0);
        tracep->declBus(c+909,"my_cpu cache AXI_read_addr", false,-1, 31,0);
        tracep->declBus(c+910,"my_cpu cache read_state", false,-1, 2,0);
        tracep->declBus(c+911,"my_cpu cache read_index", false,-1, 3,0);
        tracep->declBus(c+912,"my_cpu cache AXI_read_size", false,-1, 2,0);
        tracep->declBus(c+913,"my_cpu cache AXI_read_target", false,-1, 1,0);
        tracep->declBit(c+914,"my_cpu cache read_req", false,-1);
        tracep->declArray(c+915,"my_cpu cache wdata_buffer_data", false,-1, 1023,0);
        tracep->declBus(c+947,"my_cpu cache wdata_buffer_addr", false,-1, 31,0);
        tracep->declQuad(c+948,"my_cpu cache AXI_write_data", false,-1, 63,0);
        tracep->declBus(c+950,"my_cpu cache AXI_write_addr", false,-1, 31,0);
        tracep->declBus(c+951,"my_cpu cache write_index", false,-1, 3,0);
        tracep->declBus(c+952,"my_cpu cache write_state", false,-1, 3,0);
        tracep->declBit(c+1915,"my_cpu cache Icache clk", false,-1);
        tracep->declBit(c+1916,"my_cpu cache Icache rst", false,-1);
        tracep->declBit(c+2001,"my_cpu cache Icache icache_valid", false,-1);
        tracep->declQuad(c+1997,"my_cpu cache Icache inst_in_data_32", false,-1, 63,0);
        tracep->declArray(c+953,"my_cpu cache Icache inst_in_data_shortcut", false,-1, 511,0);
        tracep->declBus(c+1963,"my_cpu cache Icache inst_addr", false,-1, 31,0);
        tracep->declBit(c+2214,"my_cpu cache Icache inst_en", false,-1);
        tracep->declBit(c+16,"my_cpu cache Icache mem_stop", false,-1);
        tracep->declBit(c+843,"my_cpu cache Icache dcache_busy", false,-1);
        tracep->declBit(c+2026,"my_cpu cache Icache icache_ready", false,-1);
        tracep->declBit(c+840,"my_cpu cache Icache read_shortcut", false,-1);
        tracep->declBus(c+1923,"my_cpu cache Icache inst_read_addr", false,-1, 31,0);
        tracep->declBit(c+1918,"my_cpu cache Icache inst_read_req", false,-1);
        tracep->declBus(c+1972,"my_cpu cache Icache inst_out_data", false,-1, 31,0);
        tracep->declBus(c+969,"my_cpu cache Icache hit", false,-1, 15,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+970+i*1,"my_cpu cache Icache tag", true,(i+0), 25,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declArray(c+986+i*16,"my_cpu cache Icache inst_store", true,(i+0), 511,0);}}
        tracep->declBus(c+2215,"my_cpu cache Icache offset", false,-1, 9,0);
        tracep->declBus(c+1242,"my_cpu cache Icache offset_wire", false,-1, 9,0);
        tracep->declBus(c+1243,"my_cpu cache Icache inst_addr_pre", false,-1, 31,0);
        tracep->declBus(c+1244,"my_cpu cache Icache inst_addr_sel", false,-1, 31,0);
        tracep->declBus(c+1245,"my_cpu cache Icache replace_index", false,-1, 3,0);
        tracep->declBus(c+1246,"my_cpu cache Icache hit_index", false,-1, 3,0);
        tracep->declBus(c+1247,"my_cpu cache Icache icache_state", false,-1, 1,0);
        tracep->declBus(c+2216,"my_cpu cache Icache index_replace_real", false,-1, 3,0);
        tracep->declBus(c+1248,"my_cpu cache Icache index_in", false,-1, 3,0);
        tracep->declBus(c+1249,"my_cpu cache Icache replace_index_reg", false,-1, 3,0);
        tracep->declBus(c+1250,"my_cpu cache Icache unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+1251,"my_cpu cache Icache unnamedblk2 j", false,-1, 31,0);
        tracep->declBus(c+969,"my_cpu cache Icache find_index_hit data", false,-1, 15,0);
        tracep->declBus(c+1246,"my_cpu cache Icache find_index_hit index", false,-1, 3,0);
        tracep->declBit(c+1915,"my_cpu cache Dcache clk", false,-1);
        tracep->declBit(c+1916,"my_cpu cache Dcache rst", false,-1);
        tracep->declArray(c+1883,"my_cpu cache Dcache ext_in_read_data", false,-1, 1023,0);
        tracep->declQuad(c+1997,"my_cpu cache Dcache ext_in_data_64", false,-1, 63,0);
        tracep->declBus(c+1964,"my_cpu cache Dcache ext_in_addr", false,-1, 31,0);
        tracep->declBus(c+22,"my_cpu cache Dcache ext_data_be", false,-1, 7,0);
        tracep->declBit(c+844,"my_cpu cache Dcache ext_en", false,-1);
        tracep->declBit(c+23,"my_cpu cache Dcache ext_wen", false,-1);
        tracep->declQuad(c+1967,"my_cpu cache Dcache ext_in_write_data", false,-1, 63,0);
        tracep->declBit(c+26,"my_cpu cache Dcache inst_fence_i", false,-1);
        tracep->declBit(c+842,"my_cpu cache Dcache icache_busy", false,-1);
        tracep->declBit(c+2001,"my_cpu cache Dcache dcache_valid", false,-1);
        tracep->declBit(c+2025,"my_cpu cache Dcache dcache_ready", false,-1);
        tracep->declBit(c+841,"my_cpu cache Dcache read_shortcut_dcache", false,-1);
        tracep->declQuad(c+24,"my_cpu cache Dcache ext_out_read_data", false,-1, 63,0);
        tracep->declArray(c+845,"my_cpu cache Dcache ext_out_write_data", false,-1, 1023,0);
        tracep->declBus(c+1920,"my_cpu cache Dcache ext_out_write_addr", false,-1, 31,0);
        tracep->declBus(c+1919,"my_cpu cache Dcache ext_out_read_addr", false,-1, 31,0);
        tracep->declBit(c+1921,"my_cpu cache Dcache ext_write_req", false,-1);
        tracep->declBit(c+1922,"my_cpu cache Dcache ext_read_req", false,-1);
        tracep->declQuad(c+1252,"my_cpu cache Dcache total_shift", false,-1, 63,0);
        tracep->declBus(c+1254,"my_cpu cache Dcache hit", false,-1, 15,0);
        tracep->declBus(c+1255,"my_cpu cache Dcache dirty_flag", false,-1, 15,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+1256+i*1,"my_cpu cache Dcache tag", true,(i+0), 24,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declArray(c+1272+i*32,"my_cpu cache Dcache ext_store", true,(i+0), 1023,0);}}
        tracep->declQuad(c+1784,"my_cpu cache Dcache ext_out_index", false,-1, 63,0);
        tracep->declBus(c+1786,"my_cpu cache Dcache offset", false,-1, 10,0);
        tracep->declBus(c+2217,"my_cpu cache Dcache write_offset", false,-1, 10,0);
        tracep->declArray(c+2027,"my_cpu cache Dcache ext_in_data_combine", false,-1, 1023,0);
        tracep->declArray(c+2059,"my_cpu cache Dcache ext_in_data_mask", false,-1, 1023,0);
        tracep->declArray(c+2091,"my_cpu cache Dcache ext_write_data_mask", false,-1, 1023,0);
        tracep->declBit(c+2218,"my_cpu cache Dcache ext_write_ready", false,-1);
        tracep->declBit(c+2219,"my_cpu cache Dcache ext_read_ready", false,-1);
        tracep->declBus(c+1787,"my_cpu cache Dcache hit_index", false,-1, 3,0);
        tracep->declBus(c+1788,"my_cpu cache Dcache ext_data_be_reg", false,-1, 7,0);
        tracep->declBus(c+1789,"my_cpu cache Dcache total_shift_in", false,-1, 9,0);
        tracep->declBus(c+2123,"my_cpu cache Dcache ext_in_shift", false,-1, 9,0);
        tracep->declQuad(c+2124,"my_cpu cache Dcache ext_read_data_64", false,-1, 63,0);
        tracep->declQuad(c+1790,"my_cpu cache Dcache ext_in_data_write_64", false,-1, 63,0);
        tracep->declQuad(c+2126,"my_cpu cache Dcache ext_already_data", false,-1, 63,0);
        tracep->declBus(c+1792,"my_cpu cache Dcache replace_index", false,-1, 3,0);
        tracep->declBus(c+1793,"my_cpu cache Dcache replace_index_already_write", false,-1, 3,0);
        tracep->declBus(c+1794,"my_cpu cache Dcache dcache_state", false,-1, 1,0);
        tracep->declBit(c+1795,"my_cpu cache Dcache indata_target", false,-1);
        tracep->declBus(c+1796,"my_cpu cache Dcache write_index", false,-1, 3,0);
        tracep->declArray(c+1797,"my_cpu cache Dcache ext_store_t", false,-1, 1023,0);
        tracep->declQuad(c+1829,"my_cpu cache Dcache store0", false,-1, 63,0);
        tracep->declQuad(c+1831,"my_cpu cache Dcache store1", false,-1, 63,0);
        tracep->declQuad(c+1833,"my_cpu cache Dcache store2", false,-1, 63,0);
        tracep->declQuad(c+1835,"my_cpu cache Dcache store3", false,-1, 63,0);
        tracep->declQuad(c+1837,"my_cpu cache Dcache store4", false,-1, 63,0);
        tracep->declQuad(c+1839,"my_cpu cache Dcache store5", false,-1, 63,0);
        tracep->declQuad(c+1841,"my_cpu cache Dcache store6", false,-1, 63,0);
        tracep->declQuad(c+1843,"my_cpu cache Dcache store7", false,-1, 63,0);
        tracep->declQuad(c+1845,"my_cpu cache Dcache store8", false,-1, 63,0);
        tracep->declQuad(c+1847,"my_cpu cache Dcache store9", false,-1, 63,0);
        tracep->declQuad(c+1849,"my_cpu cache Dcache store10", false,-1, 63,0);
        tracep->declQuad(c+1851,"my_cpu cache Dcache store11", false,-1, 63,0);
        tracep->declQuad(c+1853,"my_cpu cache Dcache store12", false,-1, 63,0);
        tracep->declQuad(c+1855,"my_cpu cache Dcache store13", false,-1, 63,0);
        tracep->declQuad(c+1857,"my_cpu cache Dcache store14", false,-1, 63,0);
        tracep->declQuad(c+1859,"my_cpu cache Dcache store15", false,-1, 63,0);
        tracep->declBus(c+1861,"my_cpu cache Dcache unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+1862,"my_cpu cache Dcache unnamedblk2 j", false,-1, 31,0);
        tracep->declBus(c+1254,"my_cpu cache Dcache find_index_hit data", false,-1, 15,0);
        tracep->declBus(c+1787,"my_cpu cache Dcache find_index_hit index", false,-1, 3,0);
    }
}

void Vmy_cpu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vmy_cpu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vmy_cpu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vmy_cpu___024root__traceRegister(Vmy_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vmy_cpu___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vmy_cpu___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vmy_cpu___024root__traceCleanup, vlSelf);
    }
}

void Vmy_cpu___024root__traceFullSub0(Vmy_cpu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vmy_cpu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vmy_cpu___024root* const __restrict vlSelf = static_cast<Vmy_cpu___024root*>(voidSelf);
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vmy_cpu___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vmy_cpu___024root__traceFullSub0(Vmy_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp1132;
    VlWide<3>/*95:0*/ __Vtemp1134;
    VlWide<3>/*95:0*/ __Vtemp1135;
    VlWide<3>/*95:0*/ __Vtemp1136;
    VlWide<3>/*95:0*/ __Vtemp1137;
    VlWide<3>/*95:0*/ __Vtemp1138;
    VlWide<3>/*95:0*/ __Vtemp1141;
    VlWide<3>/*95:0*/ __Vtemp1142;
    VlWide<3>/*95:0*/ __Vtemp1143;
    VlWide<3>/*95:0*/ __Vtemp1144;
    VlWide<3>/*95:0*/ __Vtemp1145;
    VlWide<3>/*95:0*/ __Vtemp1147;
    VlWide<32>/*1023:0*/ __Vtemp1148;
    VlWide<16>/*511:0*/ __Vtemp1149;
    VlWide<32>/*1023:0*/ __Vtemp1150;
    VlWide<5>/*159:0*/ __Vtemp1172;
    VlWide<5>/*159:0*/ __Vtemp1174;
    VlWide<5>/*159:0*/ __Vtemp1175;
    VlWide<5>/*159:0*/ __Vtemp1176;
    VlWide<5>/*159:0*/ __Vtemp1177;
    VlWide<10>/*319:0*/ __Vtemp1178;
    VlWide<10>/*319:0*/ __Vtemp1180;
    VlWide<16>/*511:0*/ __Vtemp1185;
    VlWide<32>/*1023:0*/ __Vtemp1186;
    VlWide<32>/*1023:0*/ __Vtemp1187;
    VlWide<31>/*991:0*/ __Vtemp1188;
    VlWide<32>/*1023:0*/ __Vtemp1191;
    VlWide<32>/*1023:0*/ __Vtemp1192;
    VlWide<31>/*991:0*/ __Vtemp1193;
    VlWide<32>/*1023:0*/ __Vtemp1194;
    VlWide<32>/*1023:0*/ __Vtemp1195;
    VlWide<32>/*1023:0*/ __Vtemp1197;
    VlWide<31>/*991:0*/ __Vtemp1199;
    VlWide<32>/*1023:0*/ __Vtemp1200;
    VlWide<32>/*1023:0*/ __Vtemp1201;
    VlWide<32>/*1023:0*/ __Vtemp1203;
    VlWide<32>/*1023:0*/ __Vtemp1204;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->my_cpu__DOT__ext_ram_read_data),64);
        tracep->fullBit(oldp+3,((1U & (vlSelf->my_cpu__DOT__EX_ID_Bus[2U] 
                                       >> 5U))));
        tracep->fullQData(oldp+4,((((QData)((IData)(vlSelf->my_cpu__DOT__IF2__DOT__valid)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->my_cpu__DOT__IF2__DOT__IF2_ID_Bus_reg)))),33);
        tracep->fullWData(oldp+6,(vlSelf->my_cpu__DOT__EX_ID_Bus),70);
        tracep->fullWData(oldp+9,(vlSelf->my_cpu__DOT__MEM_ID_Bus),70);
        __Vtemp1132[0U] = (IData)(vlSelf->my_cpu__DOT__EX__DOT__final_result);
        __Vtemp1132[1U] = (IData)((vlSelf->my_cpu__DOT__EX__DOT__final_result 
                                   >> 0x20U));
        __Vtemp1132[2U] = ((0xffffff80U & ((vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                            << 0x17U) 
                                           | (0x7fff80U 
                                              & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[7U] 
                                                 >> 9U)))) 
                           | ((0x40U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                        >> 0xbU)) | 
                              ((0x20U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U] 
                                         >> 5U)) | 
                               (0x1fU & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U] 
                                         >> 0xbU)))));
        __Vtemp1132[3U] = ((0x40000U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                        >> 6U)) | (
                                                   (0x3ff80U 
                                                    & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                                       >> 0xbU)) 
                                                   | (0x7fU 
                                                      & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                                         >> 9U))));
        tracep->fullWData(oldp+12,(__Vtemp1132),115);
        tracep->fullBit(oldp+16,((0U != (IData)(vlSelf->my_cpu__DOT__ID__DOT__mem_OneHot))));
        tracep->fullQData(oldp+17,(vlSelf->my_cpu__DOT__mmio_read_data),64);
        tracep->fullBit(oldp+19,(vlSelf->my_cpu__DOT__mmio_en_reg));
        tracep->fullBit(oldp+20,(vlSelf->my_cpu__DOT__mmio_kbd_en));
        tracep->fullBit(oldp+21,(vlSelf->my_cpu__DOT__stop_all));
        tracep->fullCData(oldp+22,(vlSelf->my_cpu__DOT__dcache_be_n),8);
        tracep->fullBit(oldp+23,(vlSelf->my_cpu__DOT__dcache_wen));
        tracep->fullQData(oldp+24,(VL_SHIFTR_QQQ(64,64,64, 
                                                 (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_out_index 
                                                  & (((QData)((IData)(
                                                                      (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg) 
                                                                                >> 7U)))) 
                                                                        << 0x18U) 
                                                                       | ((0xff0000U 
                                                                           & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg) 
                                                                                >> 6U)))) 
                                                                              << 0x10U)) 
                                                                          | ((0xff00U 
                                                                              & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg) 
                                                                                >> 5U)))) 
                                                                                << 8U)) 
                                                                             | (0xffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg) 
                                                                                >> 4U)))))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg) 
                                                                                >> 3U)))) 
                                                                         << 0x18U) 
                                                                        | ((0xff0000U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg) 
                                                                                >> 2U)))) 
                                                                               << 0x10U)) 
                                                                           | ((0xff00U 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg) 
                                                                                >> 1U)))) 
                                                                                << 8U)) 
                                                                              | (0xffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg)))))))))))), 
                                                 ((1U 
                                                   & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg))
                                                   ? 0ULL
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg))
                                                    ? 8ULL
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg))
                                                     ? 0x10ULL
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg))
                                                      ? 0x18ULL
                                                      : 
                                                     ((0x10U 
                                                       & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg))
                                                       ? 0x20ULL
                                                       : 
                                                      ((0x20U 
                                                        & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg))
                                                        ? 0x28ULL
                                                        : 
                                                       ((0x40U 
                                                         & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg))
                                                         ? 0x30ULL
                                                         : 
                                                        ((0x80U 
                                                          & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg))
                                                          ? 0x38ULL
                                                          : 0ULL)))))))))),64);
        tracep->fullBit(oldp+26,((0x100fU == vlSelf->my_cpu__DOT__ID__DOT__inst)));
        tracep->fullQData(oldp+27,(vlSelf->my_cpu__DOT__mmio__DOT__total_shift),64);
        tracep->fullQData(oldp+29,(vlSelf->my_cpu__DOT__mmio__DOT__total_shift_cut),64);
        tracep->fullSData(oldp+31,(vlSelf->my_cpu__DOT__mmio__DOT__total_shift_in),10);
        tracep->fullQData(oldp+32,(vlSelf->my_cpu__DOT__mmio__DOT__serial_read_data),64);
        tracep->fullIData(oldp+34,(vlSelf->my_cpu__DOT__mmio__DOT__vga_ctl_low_read_data),32);
        tracep->fullIData(oldp+35,(vlSelf->my_cpu__DOT__mmio__DOT__unnamedblk1__DOT__i),32);
        tracep->fullBit(oldp+36,(vlSelf->my_cpu__DOT__IF__DOT__pause_mem_sec));
        tracep->fullBit(oldp+37,(vlSelf->my_cpu__DOT__IF2__DOT__valid));
        tracep->fullIData(oldp+38,(vlSelf->my_cpu__DOT__IF2__DOT__IF2_ID_Bus_reg),32);
        tracep->fullQData(oldp+39,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf
                                   [vlSelf->my_cpu__DOT__ID__DOT__src1_addr]),64);
        tracep->fullQData(oldp+41,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf
                                   [vlSelf->my_cpu__DOT__ID__DOT__src2_addr]),64);
        tracep->fullQData(oldp+43,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf
                                   [0x11U]),64);
        tracep->fullCData(oldp+45,((0x1fU & vlSelf->my_cpu__DOT__EX_ID_Bus[2U])),5);
        tracep->fullCData(oldp+46,((0x1fU & vlSelf->my_cpu__DOT__MEM_ID_Bus[2U])),5);
        tracep->fullCData(oldp+47,((0x1fU & (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                             >> 7U))),5);
        tracep->fullQData(oldp+48,((((QData)((IData)(
                                                     vlSelf->my_cpu__DOT__EX_ID_Bus[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->my_cpu__DOT__EX_ID_Bus[0U])))),64);
        tracep->fullQData(oldp+50,((((QData)((IData)(
                                                     vlSelf->my_cpu__DOT__MEM_ID_Bus[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->my_cpu__DOT__MEM_ID_Bus[0U])))),64);
        tracep->fullBit(oldp+52,((1U & (vlSelf->my_cpu__DOT__MEM_ID_Bus[2U] 
                                        >> 5U))));
        tracep->fullBit(oldp+53,(vlSelf->my_cpu__DOT__ID__DOT__IF_we));
        tracep->fullIData(oldp+54,(vlSelf->my_cpu__DOT__ID__DOT__inst),32);
        tracep->fullIData(oldp+55,(vlSelf->my_cpu__DOT__ID__DOT__inst_mem_domin),32);
        tracep->fullQData(oldp+56,(vlSelf->my_cpu__DOT__ID__DOT__IF_ID_Bus_Reg),33);
        tracep->fullBit(oldp+58,((1U & (IData)((((IData)(vlSelf->my_cpu__DOT__ID__DOT__mem_arrive_flag)
                                                  ? 0ULL
                                                  : vlSelf->my_cpu__DOT__ID__DOT__IF_ID_Bus_Reg) 
                                                >> 0x20U)))));
        tracep->fullBit(oldp+59,(vlSelf->my_cpu__DOT__ID__DOT__mem_arrive_flag));
        tracep->fullBit(oldp+60,(vlSelf->my_cpu__DOT__ID__DOT__jump_flag));
        tracep->fullIData(oldp+61,(vlSelf->my_cpu__DOT__ID__DOT__inst_addr),32);
        tracep->fullBit(oldp+62,(((((((((((((((((((
                                                   (((((((((((((((((((((((((((((((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ori) 
                                                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sll)) 
                                                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srl)) 
                                                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sra)) 
                                                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_xor)) 
                                                                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slti)) 
                                                                              | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                                                             | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_mul)) 
                                                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraiw)) 
                                                                           | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraw)) 
                                                                          | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srlw)) 
                                                                         | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srliw)) 
                                                                        | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slt)) 
                                                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slliw)) 
                                                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_remw)) 
                                                                     | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_subw)) 
                                                                    | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_divw)) 
                                                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_mulw)) 
                                                                  | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_and)) 
                                                                 | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_andi)) 
                                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sltu)) 
                                                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srai)) 
                                                              | (0x17U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                                             | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addi)) 
                                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__IF_we)) 
                                                           | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addiw)) 
                                                          | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lwu)) 
                                                         | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ld)) 
                                                        | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lw)) 
                                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lhu)) 
                                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lh)) 
                                                     | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lbu)) 
                                                    | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lb)) 
                                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sub)) 
                                                  | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srli)) 
                                                 | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sllw)) 
                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slli)) 
                                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sltiu)) 
                                              | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_or)) 
                                             | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_xori)) 
                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addw)) 
                                           | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_add)) 
                                          | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_divuw)) 
                                         | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_remuw)) 
                                        | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_div)) 
                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_divu)) 
                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_rem)) 
                                     | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_remu)) 
                                    | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_mulh)) 
                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_mulhsu)) 
                                  | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_mulhu))));
        tracep->fullCData(oldp+63,((0x1fU & ((IData)(vlSelf->my_cpu__DOT__ID__DOT__IF_we)
                                              ? (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                 >> 7U)
                                              : (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                 >> 7U)))),5);
        tracep->fullCData(oldp+64,(vlSelf->my_cpu__DOT__ID__DOT__src1_addr),5);
        tracep->fullCData(oldp+65,(vlSelf->my_cpu__DOT__ID__DOT__src2_addr),5);
        tracep->fullCData(oldp+66,((7U & (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+67,((0x7fU & vlSelf->my_cpu__DOT__ID__DOT__inst)),7);
        tracep->fullCData(oldp+68,((vlSelf->my_cpu__DOT__ID__DOT__inst 
                                    >> 0x19U)),7);
        tracep->fullCData(oldp+69,((0x3fU & (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                             >> 0x14U))),6);
        tracep->fullSData(oldp+70,((vlSelf->my_cpu__DOT__ID__DOT__inst 
                                    >> 0x14U)),12);
        tracep->fullBit(oldp+71,((0x17U == (0x7fU & vlSelf->my_cpu__DOT__ID__DOT__inst))));
        tracep->fullBit(oldp+72,(vlSelf->my_cpu__DOT__ID__DOT__inst_addi));
        tracep->fullBit(oldp+73,((0x100073U == vlSelf->my_cpu__DOT__ID__DOT__inst)));
        tracep->fullBit(oldp+74,(vlSelf->my_cpu__DOT__ID__DOT__inst_addiw));
        tracep->fullBit(oldp+75,(vlSelf->my_cpu__DOT__ID__DOT__inst_addw));
        tracep->fullBit(oldp+76,(vlSelf->my_cpu__DOT__ID__DOT__inst_add));
        tracep->fullBit(oldp+77,(vlSelf->my_cpu__DOT__ID__DOT__inst_subw));
        tracep->fullBit(oldp+78,(vlSelf->my_cpu__DOT__ID__DOT__inst_lwu));
        tracep->fullBit(oldp+79,(vlSelf->my_cpu__DOT__ID__DOT__inst_sh));
        tracep->fullBit(oldp+80,(vlSelf->my_cpu__DOT__ID__DOT__inst_sb));
        tracep->fullBit(oldp+81,(vlSelf->my_cpu__DOT__ID__DOT__inst_sd));
        tracep->fullBit(oldp+82,(vlSelf->my_cpu__DOT__ID__DOT__inst_sw));
        tracep->fullBit(oldp+83,(vlSelf->my_cpu__DOT__ID__DOT__inst_ld));
        tracep->fullBit(oldp+84,(vlSelf->my_cpu__DOT__ID__DOT__inst_lw));
        tracep->fullBit(oldp+85,(vlSelf->my_cpu__DOT__ID__DOT__inst_lhu));
        tracep->fullBit(oldp+86,(vlSelf->my_cpu__DOT__ID__DOT__inst_lh));
        tracep->fullBit(oldp+87,(vlSelf->my_cpu__DOT__ID__DOT__inst_lbu));
        tracep->fullBit(oldp+88,(vlSelf->my_cpu__DOT__ID__DOT__inst_lb));
        tracep->fullBit(oldp+89,(vlSelf->my_cpu__DOT__ID__DOT__inst_sub));
        tracep->fullBit(oldp+90,(vlSelf->my_cpu__DOT__ID__DOT__inst_srli));
        tracep->fullBit(oldp+91,(vlSelf->my_cpu__DOT__ID__DOT__inst_sllw));
        tracep->fullBit(oldp+92,(vlSelf->my_cpu__DOT__ID__DOT__inst_slli));
        tracep->fullBit(oldp+93,(vlSelf->my_cpu__DOT__ID__DOT__inst_sltiu));
        tracep->fullBit(oldp+94,(vlSelf->my_cpu__DOT__ID__DOT__inst_srai));
        tracep->fullBit(oldp+95,(vlSelf->my_cpu__DOT__ID__DOT__inst_sltu));
        tracep->fullBit(oldp+96,(vlSelf->my_cpu__DOT__ID__DOT__inst_slt));
        tracep->fullBit(oldp+97,(vlSelf->my_cpu__DOT__ID__DOT__inst_slliw));
        tracep->fullBit(oldp+98,(vlSelf->my_cpu__DOT__ID__DOT__inst_sraiw));
        tracep->fullBit(oldp+99,(vlSelf->my_cpu__DOT__ID__DOT__inst_sraw));
        tracep->fullBit(oldp+100,(vlSelf->my_cpu__DOT__ID__DOT__inst_srliw));
        tracep->fullBit(oldp+101,(vlSelf->my_cpu__DOT__ID__DOT__inst_srlw));
        tracep->fullBit(oldp+102,(vlSelf->my_cpu__DOT__ID__DOT__inst_sll));
        tracep->fullBit(oldp+103,(vlSelf->my_cpu__DOT__ID__DOT__inst_srl));
        tracep->fullBit(oldp+104,(vlSelf->my_cpu__DOT__ID__DOT__inst_sra));
        tracep->fullBit(oldp+105,(vlSelf->my_cpu__DOT__ID__DOT__inst_xor));
        tracep->fullBit(oldp+106,(vlSelf->my_cpu__DOT__ID__DOT__inst_slti));
        tracep->fullBit(oldp+107,(vlSelf->my_cpu__DOT__ID__DOT__inst_or));
        tracep->fullBit(oldp+108,(vlSelf->my_cpu__DOT__ID__DOT__inst_xori));
        tracep->fullBit(oldp+109,(vlSelf->my_cpu__DOT__ID__DOT__inst_and));
        tracep->fullBit(oldp+110,(vlSelf->my_cpu__DOT__ID__DOT__inst_andi));
        tracep->fullBit(oldp+111,((0x37U == (0x7fU 
                                             & vlSelf->my_cpu__DOT__ID__DOT__inst))));
        tracep->fullBit(oldp+112,(vlSelf->my_cpu__DOT__ID__DOT__inst_ori));
        tracep->fullBit(oldp+113,(vlSelf->my_cpu__DOT__ID__DOT__inst_mulw));
        tracep->fullBit(oldp+114,(vlSelf->my_cpu__DOT__ID__DOT__inst_divw));
        tracep->fullBit(oldp+115,(vlSelf->my_cpu__DOT__ID__DOT__inst_remw));
        tracep->fullBit(oldp+116,(vlSelf->my_cpu__DOT__ID__DOT__inst_mul));
        tracep->fullBit(oldp+117,(vlSelf->my_cpu__DOT__ID__DOT__inst_divuw));
        tracep->fullBit(oldp+118,(vlSelf->my_cpu__DOT__ID__DOT__inst_remuw));
        tracep->fullBit(oldp+119,(vlSelf->my_cpu__DOT__ID__DOT__inst_div));
        tracep->fullBit(oldp+120,(vlSelf->my_cpu__DOT__ID__DOT__inst_divu));
        tracep->fullBit(oldp+121,(vlSelf->my_cpu__DOT__ID__DOT__inst_rem));
        tracep->fullBit(oldp+122,(vlSelf->my_cpu__DOT__ID__DOT__inst_remu));
        tracep->fullBit(oldp+123,(vlSelf->my_cpu__DOT__ID__DOT__inst_mulh));
        tracep->fullBit(oldp+124,(vlSelf->my_cpu__DOT__ID__DOT__inst_mulhsu));
        tracep->fullBit(oldp+125,(vlSelf->my_cpu__DOT__ID__DOT__inst_mulhu));
        tracep->fullBit(oldp+126,(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrs));
        tracep->fullBit(oldp+127,(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrw));
        tracep->fullBit(oldp+128,((0x30200073U == vlSelf->my_cpu__DOT__ID__DOT__inst)));
        tracep->fullBit(oldp+129,((0x73U == vlSelf->my_cpu__DOT__ID__DOT__inst)));
        tracep->fullCData(oldp+130,(((0x17U == (0x7fU 
                                                & vlSelf->my_cpu__DOT__ID__DOT__inst))
                                      ? 1U : ((((((
                                                   (((((((((((((((((((((((((((((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sll) 
                                                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srl)) 
                                                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sra)) 
                                                                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_xor)) 
                                                                              | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slti)) 
                                                                             | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slt)) 
                                                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_subw)) 
                                                                           | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_and)) 
                                                                          | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_andi)) 
                                                                         | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sltu)) 
                                                                        | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_add)) 
                                                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addi)) 
                                                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sd)) 
                                                                     | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addiw)) 
                                                                    | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ld)) 
                                                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lw)) 
                                                                  | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lhu)) 
                                                                 | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lh)) 
                                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lbu)) 
                                                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lb)) 
                                                              | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sh)) 
                                                             | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sw)) 
                                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sd)) 
                                                           | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sb)) 
                                                          | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ori)) 
                                                         | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slliw)) 
                                                        | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srai)) 
                                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sub)) 
                                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srli)) 
                                                     | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sllw)) 
                                                    | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slli)) 
                                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sltiu)) 
                                                  | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_or)) 
                                                 | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_xori)) 
                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lwu)) 
                                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addw))
                                               ? 2U
                                               : ((
                                                   (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraiw) 
                                                     | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraw)) 
                                                    | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srlw)) 
                                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srliw))
                                                   ? 4U
                                                   : 0U)))),3);
        tracep->fullCData(oldp+131,((((0x37U == (0x7fU 
                                                 & vlSelf->my_cpu__DOT__ID__DOT__inst)) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->my_cpu__DOT__ID__DOT__inst)))
                                      ? 1U : ((((((
                                                   (((((((((((((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ori) 
                                                                 | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slti)) 
                                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slliw)) 
                                                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_andi)) 
                                                              | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addi)) 
                                                             | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addiw)) 
                                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srli)) 
                                                           | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slli)) 
                                                          | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sltiu)) 
                                                         | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ld)) 
                                                        | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lw)) 
                                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lhu)) 
                                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lh)) 
                                                     | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraiw)) 
                                                    | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srliw)) 
                                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srai)) 
                                                  | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lbu)) 
                                                 | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lb)) 
                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_xori)) 
                                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lwu))
                                               ? 2U
                                               : ((
                                                   (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sd) 
                                                     | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sh)) 
                                                    | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sb)) 
                                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sw))
                                                   ? 4U
                                                   : 
                                                  ((((((((((((((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sll) 
                                                                 | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srl)) 
                                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sra)) 
                                                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_xor)) 
                                                              | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraw)) 
                                                             | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srlw)) 
                                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slt)) 
                                                           | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_subw)) 
                                                          | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_and)) 
                                                         | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sltu)) 
                                                        | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_add)) 
                                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sub)) 
                                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sllw)) 
                                                     | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_or)) 
                                                    | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addw))
                                                    ? 8U
                                                    : 0U))))),4);
        tracep->fullCData(oldp+132,((((((((((((((((
                                                   (((((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ori) 
                                                         | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sll)) 
                                                        | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srl)) 
                                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sra)) 
                                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_xor)) 
                                                     | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slti)) 
                                                    | (0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slt)) 
                                                  | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_and)) 
                                                 | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_andi)) 
                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sltu)) 
                                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srai)) 
                                              | (0x17U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                             | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addi)) 
                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sub)) 
                                           | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srli)) 
                                          | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slli)) 
                                         | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sltiu)) 
                                        | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_or)) 
                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_xori)) 
                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_add))
                                      ? 1U : ((((((
                                                   ((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraiw) 
                                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraw)) 
                                                     | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srlw)) 
                                                    | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srliw)) 
                                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slliw)) 
                                                  | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_subw)) 
                                                 | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sllw)) 
                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addiw)) 
                                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addw))
                                               ? 4U
                                               : 0U))),3);
        tracep->fullSData(oldp+133,(vlSelf->my_cpu__DOT__ID__DOT__mem_OneHot),11);
        tracep->fullSData(oldp+134,((((((((((((((((
                                                   (((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->my_cpu__DOT__ID__DOT__inst)) 
                                                     | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addi)) 
                                                    | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addiw)) 
                                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sd)) 
                                                  | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ld)) 
                                                 | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lwu)) 
                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sw)) 
                                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lw)) 
                                              | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lhu)) 
                                             | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lh)) 
                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lbu)) 
                                           | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lb)) 
                                          | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sb)) 
                                         | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sh)) 
                                        | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addw)) 
                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_add)) 
                                      << 0xdU) | ((
                                                   ((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sub) 
                                                    | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_subw)) 
                                                   << 0xcU) 
                                                  | ((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slt) 
                                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slti)) 
                                                      << 0xbU) 
                                                     | ((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sltiu) 
                                                          | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sltu)) 
                                                         << 0xaU) 
                                                        | ((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_and) 
                                                             | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_andi)) 
                                                            << 9U) 
                                                           | ((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_or) 
                                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ori)) 
                                                               << 8U) 
                                                              | ((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_xori) 
                                                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_xor)) 
                                                                  << 7U) 
                                                                 | ((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slli) 
                                                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sll)) 
                                                                     << 6U) 
                                                                    | ((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srli) 
                                                                         | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srl)) 
                                                                        << 5U) 
                                                                       | ((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srai) 
                                                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sra)) 
                                                                           << 4U) 
                                                                          | (((0x37U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & vlSelf->my_cpu__DOT__ID__DOT__inst)) 
                                                                              << 3U) 
                                                                             | ((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraiw) 
                                                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraw)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sllw) 
                                                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slliw)) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srlw) 
                                                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srliw)))))))))))))))),14);
        tracep->fullSData(oldp+135,((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_mulh) 
                                      << 0xcU) | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_mulhsu) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_mulhu) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_rem) 
                                                         << 9U) 
                                                        | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_remu) 
                                                            << 8U) 
                                                           | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_div) 
                                                               << 7U) 
                                                              | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_divu) 
                                                                  << 6U) 
                                                                 | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_remuw) 
                                                                     << 5U) 
                                                                    | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_divuw) 
                                                                        << 4U) 
                                                                       | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_mul) 
                                                                           << 3U) 
                                                                          | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_remw) 
                                                                              << 2U) 
                                                                             | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_divw) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_mulw)))))))))))))),13);
        tracep->fullCData(oldp+136,(vlSelf->my_cpu__DOT__ID__DOT__csr_OneHot),4);
        tracep->fullBit(oldp+137,(((((((((((((((((0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->my_cpu__DOT__ID__DOT__inst)) 
                                                 | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addi)) 
                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addiw)) 
                                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sd)) 
                                              | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ld)) 
                                             | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lwu)) 
                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sw)) 
                                           | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lw)) 
                                          | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lhu)) 
                                         | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lh)) 
                                        | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lbu)) 
                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lb)) 
                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sb)) 
                                     | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sh)) 
                                    | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addw)) 
                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_add))));
        tracep->fullBit(oldp+138,(((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sub) 
                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_subw))));
        tracep->fullBit(oldp+139,(((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slt) 
                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slti))));
        tracep->fullBit(oldp+140,(((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sltiu) 
                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sltu))));
        tracep->fullBit(oldp+141,(((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_and) 
                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_andi))));
        tracep->fullBit(oldp+142,(((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_or) 
                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ori))));
        tracep->fullBit(oldp+143,(((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_xori) 
                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_xor))));
        tracep->fullBit(oldp+144,(((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slli) 
                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sll))));
        tracep->fullBit(oldp+145,(((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srli) 
                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srl))));
        tracep->fullBit(oldp+146,(((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srai) 
                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sra))));
        tracep->fullBit(oldp+147,(((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraiw) 
                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraw))));
        tracep->fullBit(oldp+148,(((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sllw) 
                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slliw))));
        tracep->fullBit(oldp+149,(((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srlw) 
                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srliw))));
        tracep->fullQData(oldp+150,(vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding),64);
        tracep->fullQData(oldp+152,(vlSelf->my_cpu__DOT__ID__DOT__Inst_Src2_forwarding),64);
        tracep->fullQData(oldp+154,((((vlSelf->my_cpu__DOT__EX_ID_Bus[2U] 
                                       >> 5U) & (0x11U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSelf->my_cpu__DOT__EX_ID_Bus[2U])))
                                      ? (((QData)((IData)(
                                                          vlSelf->my_cpu__DOT__EX_ID_Bus[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->my_cpu__DOT__EX_ID_Bus[0U])))
                                      : (((vlSelf->my_cpu__DOT__MEM_ID_Bus[2U] 
                                           >> 5U) & 
                                          (0x11U == 
                                           (0x1fU & 
                                            vlSelf->my_cpu__DOT__MEM_ID_Bus[2U])))
                                          ? (((QData)((IData)(
                                                              vlSelf->my_cpu__DOT__MEM_ID_Bus[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->my_cpu__DOT__MEM_ID_Bus[0U])))
                                          : vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf
                                         [0x11U]))),64);
        tracep->fullIData(oldp+156,((vlSelf->my_cpu__DOT__ID__DOT__inst_addr 
                                     + (((- (IData)(
                                                    (1U 
                                                     & (vlSelf->my_cpu__DOT__ID__DOT__j_type_imm 
                                                        >> 0x14U)))) 
                                         << 0x15U) 
                                        | vlSelf->my_cpu__DOT__ID__DOT__j_type_imm))),32);
        tracep->fullIData(oldp+157,(((IData)(vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding) 
                                     + (((- (IData)(
                                                    (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                         >> 0x14U)))),32);
        tracep->fullIData(oldp+158,(((vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding 
                                      == vlSelf->my_cpu__DOT__ID__DOT__Inst_Src2_forwarding)
                                      ? (vlSelf->my_cpu__DOT__ID__DOT__inst_addr 
                                         + (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->my_cpu__DOT__ID__DOT__b_type_imm) 
                                                            >> 0xcU)))) 
                                             << 0xdU) 
                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__b_type_imm)))
                                      : ((IData)(4U) 
                                         + vlSelf->my_cpu__DOT__ID__DOT__inst_addr))),32);
        tracep->fullIData(oldp+159,(((vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding 
                                      < vlSelf->my_cpu__DOT__ID__DOT__Inst_Src2_forwarding)
                                      ? (vlSelf->my_cpu__DOT__ID__DOT__inst_addr 
                                         + (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->my_cpu__DOT__ID__DOT__b_type_imm) 
                                                            >> 0xcU)))) 
                                             << 0xdU) 
                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__b_type_imm)))
                                      : ((IData)(4U) 
                                         + vlSelf->my_cpu__DOT__ID__DOT__inst_addr))),32);
        tracep->fullIData(oldp+160,(((vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding 
                                      != vlSelf->my_cpu__DOT__ID__DOT__Inst_Src2_forwarding)
                                      ? (vlSelf->my_cpu__DOT__ID__DOT__inst_addr 
                                         + (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->my_cpu__DOT__ID__DOT__b_type_imm) 
                                                            >> 0xcU)))) 
                                             << 0xdU) 
                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__b_type_imm)))
                                      : ((IData)(4U) 
                                         + vlSelf->my_cpu__DOT__ID__DOT__inst_addr))),32);
        tracep->fullIData(oldp+161,(((1U & (((IData)(
                                                     (vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding 
                                                      >> 0x3fU)) 
                                             & (~ (IData)(
                                                          (vlSelf->my_cpu__DOT__ID__DOT__Inst_Src2_forwarding 
                                                           >> 0x3fU)))) 
                                            | ((~ ((IData)(
                                                           (vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding 
                                                            >> 0x3fU)) 
                                                   ^ (IData)(
                                                             (vlSelf->my_cpu__DOT__ID__DOT__Inst_Src2_forwarding 
                                                              >> 0x3fU)))) 
                                               & (vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding 
                                                  < vlSelf->my_cpu__DOT__ID__DOT__Inst_Src2_forwarding))))
                                      ? (vlSelf->my_cpu__DOT__ID__DOT__inst_addr 
                                         + (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->my_cpu__DOT__ID__DOT__b_type_imm) 
                                                            >> 0xcU)))) 
                                             << 0xdU) 
                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__b_type_imm)))
                                      : ((IData)(4U) 
                                         + vlSelf->my_cpu__DOT__ID__DOT__inst_addr))),32);
        tracep->fullIData(oldp+162,(((1U & (((~ (IData)(
                                                        (vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding 
                                                         >> 0x3fU))) 
                                             & (IData)(
                                                       (vlSelf->my_cpu__DOT__ID__DOT__Inst_Src2_forwarding 
                                                        >> 0x3fU))) 
                                            | ((~ ((IData)(
                                                           (vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding 
                                                            >> 0x3fU)) 
                                                   ^ (IData)(
                                                             (vlSelf->my_cpu__DOT__ID__DOT__Inst_Src2_forwarding 
                                                              >> 0x3fU)))) 
                                               & (vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding 
                                                  >= vlSelf->my_cpu__DOT__ID__DOT__Inst_Src2_forwarding))))
                                      ? (vlSelf->my_cpu__DOT__ID__DOT__inst_addr 
                                         + (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->my_cpu__DOT__ID__DOT__b_type_imm) 
                                                            >> 0xcU)))) 
                                             << 0xdU) 
                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__b_type_imm)))
                                      : ((IData)(4U) 
                                         + vlSelf->my_cpu__DOT__ID__DOT__inst_addr))),32);
        tracep->fullIData(oldp+163,(((vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding 
                                      >= vlSelf->my_cpu__DOT__ID__DOT__Inst_Src2_forwarding)
                                      ? (vlSelf->my_cpu__DOT__ID__DOT__inst_addr 
                                         + (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->my_cpu__DOT__ID__DOT__b_type_imm) 
                                                            >> 0xcU)))) 
                                             << 0xdU) 
                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__b_type_imm)))
                                      : ((IData)(4U) 
                                         + vlSelf->my_cpu__DOT__ID__DOT__inst_addr))),32);
        tracep->fullIData(oldp+164,(vlSelf->my_cpu__DOT__ID__DOT__j_type_imm),21);
        tracep->fullSData(oldp+165,(vlSelf->my_cpu__DOT__ID__DOT__b_type_imm),13);
        tracep->fullBit(oldp+166,((0x6fU == (0x7fU 
                                             & vlSelf->my_cpu__DOT__ID__DOT__inst))));
        tracep->fullBit(oldp+167,(vlSelf->my_cpu__DOT__ID__DOT__inst_jalr));
        tracep->fullBit(oldp+168,(vlSelf->my_cpu__DOT__ID__DOT__inst_bne));
        tracep->fullBit(oldp+169,(vlSelf->my_cpu__DOT__ID__DOT__inst_beq));
        tracep->fullBit(oldp+170,(vlSelf->my_cpu__DOT__ID__DOT__inst_blt));
        tracep->fullBit(oldp+171,(vlSelf->my_cpu__DOT__ID__DOT__inst_bge));
        tracep->fullBit(oldp+172,(vlSelf->my_cpu__DOT__ID__DOT__inst_bgeu));
        tracep->fullBit(oldp+173,(vlSelf->my_cpu__DOT__ID__DOT__inst_bltu));
        tracep->fullBit(oldp+174,(vlSelf->my_cpu__DOT__ID__DOT__junm_en));
        tracep->fullQData(oldp+175,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[0]),64);
        tracep->fullQData(oldp+177,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[1]),64);
        tracep->fullQData(oldp+179,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[2]),64);
        tracep->fullQData(oldp+181,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[3]),64);
        tracep->fullQData(oldp+183,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[4]),64);
        tracep->fullQData(oldp+185,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[5]),64);
        tracep->fullQData(oldp+187,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[6]),64);
        tracep->fullQData(oldp+189,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[7]),64);
        tracep->fullQData(oldp+191,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[8]),64);
        tracep->fullQData(oldp+193,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[9]),64);
        tracep->fullQData(oldp+195,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[10]),64);
        tracep->fullQData(oldp+197,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[11]),64);
        tracep->fullQData(oldp+199,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[12]),64);
        tracep->fullQData(oldp+201,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[13]),64);
        tracep->fullQData(oldp+203,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[14]),64);
        tracep->fullQData(oldp+205,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[15]),64);
        tracep->fullQData(oldp+207,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[16]),64);
        tracep->fullQData(oldp+209,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[17]),64);
        tracep->fullQData(oldp+211,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[18]),64);
        tracep->fullQData(oldp+213,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[19]),64);
        tracep->fullQData(oldp+215,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[20]),64);
        tracep->fullQData(oldp+217,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[21]),64);
        tracep->fullQData(oldp+219,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[22]),64);
        tracep->fullQData(oldp+221,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[23]),64);
        tracep->fullQData(oldp+223,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[24]),64);
        tracep->fullQData(oldp+225,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[25]),64);
        tracep->fullQData(oldp+227,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[26]),64);
        tracep->fullQData(oldp+229,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[27]),64);
        tracep->fullQData(oldp+231,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[28]),64);
        tracep->fullQData(oldp+233,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[29]),64);
        tracep->fullQData(oldp+235,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[30]),64);
        tracep->fullQData(oldp+237,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[31]),64);
        tracep->fullCData(oldp+239,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_map_num),4);
        tracep->fullBit(oldp+240,((1U & ((IData)(vlSelf->my_cpu__DOT__ID__DOT__csr_OneHot) 
                                         >> 3U))));
        tracep->fullBit(oldp+241,((1U & ((IData)(vlSelf->my_cpu__DOT__ID__DOT__csr_OneHot) 
                                         >> 2U))));
        tracep->fullBit(oldp+242,((1U & ((IData)(vlSelf->my_cpu__DOT__ID__DOT__csr_OneHot) 
                                         >> 1U))));
        tracep->fullBit(oldp+243,((1U & (IData)(vlSelf->my_cpu__DOT__ID__DOT__csr_OneHot))));
        tracep->fullBit(oldp+244,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__time_interrupt_flag));
        tracep->fullQData(oldp+245,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[0]),64);
        tracep->fullQData(oldp+247,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[1]),64);
        tracep->fullQData(oldp+249,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[2]),64);
        tracep->fullQData(oldp+251,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[3]),64);
        tracep->fullQData(oldp+253,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[4]),64);
        tracep->fullQData(oldp+255,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[5]),64);
        tracep->fullQData(oldp+257,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[6]),64);
        tracep->fullQData(oldp+259,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[7]),64);
        tracep->fullQData(oldp+261,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[8]),64);
        tracep->fullQData(oldp+263,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[9]),64);
        tracep->fullQData(oldp+265,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[10]),64);
        tracep->fullQData(oldp+267,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[11]),64);
        tracep->fullQData(oldp+269,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[12]),64);
        tracep->fullQData(oldp+271,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[13]),64);
        tracep->fullQData(oldp+273,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[14]),64);
        tracep->fullQData(oldp+275,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[15]),64);
        tracep->fullIData(oldp+277,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__unnamedblk1__DOT__i),32);
        tracep->fullWData(oldp+278,(vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg),313);
        tracep->fullBit(oldp+288,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                         >> 0x11U))));
        tracep->fullCData(oldp+289,((7U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U] 
                                           >> 4U))),3);
        tracep->fullCData(oldp+290,((0xfU & vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U])),4);
        tracep->fullBit(oldp+291,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U] 
                                         >> 0xaU))));
        tracep->fullCData(oldp+292,((0x1fU & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U] 
                                              >> 0xbU))),5);
        tracep->fullQData(oldp+293,((((QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[6U])) 
                                      << 0x30U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[5U])) 
                                                    << 0x10U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U])) 
                                                      >> 0x10U)))),64);
        tracep->fullIData(oldp+295,(((vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[7U] 
                                      << 0x10U) | (
                                                   vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[6U] 
                                                   >> 0x10U))),32);
        tracep->fullIData(oldp+296,(((vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                      << 0x10U) | (
                                                   vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[7U] 
                                                   >> 0x10U))),32);
        tracep->fullBit(oldp+297,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                         >> 0x1cU))));
        tracep->fullBit(oldp+298,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                         >> 0x1bU))));
        tracep->fullBit(oldp+299,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                         >> 0x1aU))));
        tracep->fullBit(oldp+300,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+301,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                         >> 0x18U))));
        tracep->fullBit(oldp+302,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                         >> 0x17U))));
        tracep->fullBit(oldp+303,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+304,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+305,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+306,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+307,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                         >> 0x12U))));
        tracep->fullSData(oldp+308,((0x7ffU & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                               >> 0x12U))),11);
        tracep->fullSData(oldp+309,((0x3fffU & ((vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                                 << 3U) 
                                                | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                                   >> 0x1dU)))),14);
        tracep->fullSData(oldp+310,((0x1fffU & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                                >> 0xbU))),13);
        tracep->fullBit(oldp+311,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                         >> 0x18U))));
        tracep->fullQData(oldp+312,(vlSelf->my_cpu__DOT__EX__DOT__alu_result),64);
        tracep->fullQData(oldp+314,(vlSelf->my_cpu__DOT__EX__DOT__alu_src1),64);
        tracep->fullQData(oldp+316,(vlSelf->my_cpu__DOT__EX__DOT__alu_src2),64);
        tracep->fullQData(oldp+318,(vlSelf->my_cpu__DOT__EX__DOT__final_result),64);
        tracep->fullCData(oldp+320,(((1U & (IData)(
                                                   (vlSelf->my_cpu__DOT__EX__DOT__alu_result 
                                                    >> 2U)))
                                      ? ((1U & (IData)(
                                                       (vlSelf->my_cpu__DOT__EX__DOT__alu_result 
                                                        >> 1U)))
                                          ? ((1U & (IData)(vlSelf->my_cpu__DOT__EX__DOT__alu_result))
                                              ? 0x80U
                                              : 0x40U)
                                          : ((1U & (IData)(vlSelf->my_cpu__DOT__EX__DOT__alu_result))
                                              ? 0x20U
                                              : 0x10U))
                                      : ((1U & (IData)(
                                                       (vlSelf->my_cpu__DOT__EX__DOT__alu_result 
                                                        >> 1U)))
                                          ? ((1U & (IData)(vlSelf->my_cpu__DOT__EX__DOT__alu_result))
                                              ? 8U : 4U)
                                          : ((1U & (IData)(vlSelf->my_cpu__DOT__EX__DOT__alu_result))
                                              ? 2U : 1U)))),8);
        tracep->fullCData(oldp+321,(((1U & (IData)(
                                                   (vlSelf->my_cpu__DOT__EX__DOT__alu_result 
                                                    >> 2U)))
                                      ? ((1U & (IData)(
                                                       (vlSelf->my_cpu__DOT__EX__DOT__alu_result 
                                                        >> 1U)))
                                          ? 0xc0U : 0x30U)
                                      : ((1U & (IData)(
                                                       (vlSelf->my_cpu__DOT__EX__DOT__alu_result 
                                                        >> 1U)))
                                          ? 0xcU : 3U))),8);
        tracep->fullCData(oldp+322,(((1U & (IData)(
                                                   (vlSelf->my_cpu__DOT__EX__DOT__alu_result 
                                                    >> 2U)))
                                      ? 0xf0U : 0xfU)),8);
        tracep->fullQData(oldp+323,(vlSelf->my_cpu__DOT__EX__DOT__mul_div_result),64);
        tracep->fullBit(oldp+325,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                         >> 0xaU))));
        tracep->fullBit(oldp+326,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                         >> 9U))));
        tracep->fullBit(oldp+327,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                         >> 8U))));
        tracep->fullBit(oldp+328,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                         >> 7U))));
        tracep->fullBit(oldp+329,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                         >> 6U))));
        tracep->fullBit(oldp+330,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                         >> 5U))));
        tracep->fullBit(oldp+331,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                         >> 4U))));
        tracep->fullBit(oldp+332,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                         >> 3U))));
        tracep->fullBit(oldp+333,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                         >> 2U))));
        tracep->fullBit(oldp+334,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                         >> 1U))));
        tracep->fullBit(oldp+335,((1U & vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U])));
        tracep->fullBit(oldp+336,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                         >> 0x1eU))));
        tracep->fullBit(oldp+337,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                         >> 0x1dU))));
        tracep->fullBit(oldp+338,((vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                   >> 0x1fU)));
        tracep->fullQData(oldp+339,(vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__adder_result),64);
        tracep->fullQData(oldp+341,(vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__slt_result),64);
        VL_EXTEND_WQ(65,64, __Vtemp1134, vlSelf->my_cpu__DOT__EX__DOT__alu_src1);
        VL_EXTEND_WQ(65,64, __Vtemp1135, vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__adder_b);
        VL_ADD_W(3, __Vtemp1136, __Vtemp1134, __Vtemp1135);
        VL_EXTEND_WQ(65,64, __Vtemp1137, vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__adder_cin);
        VL_ADD_W(3, __Vtemp1138, __Vtemp1136, __Vtemp1137);
        tracep->fullQData(oldp+343,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp1138[2U])))))),64);
        tracep->fullQData(oldp+345,((vlSelf->my_cpu__DOT__EX__DOT__alu_src1 
                                     & vlSelf->my_cpu__DOT__EX__DOT__alu_src2)),64);
        tracep->fullQData(oldp+347,((vlSelf->my_cpu__DOT__EX__DOT__alu_src1 
                                     | vlSelf->my_cpu__DOT__EX__DOT__alu_src2)),64);
        tracep->fullQData(oldp+349,((vlSelf->my_cpu__DOT__EX__DOT__alu_src1 
                                     ^ vlSelf->my_cpu__DOT__EX__DOT__alu_src2)),64);
        tracep->fullQData(oldp+351,((vlSelf->my_cpu__DOT__EX__DOT__alu_src1 
                                     << (0x3fU & (IData)(vlSelf->my_cpu__DOT__EX__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+353,((vlSelf->my_cpu__DOT__EX__DOT__alu_src1 
                                     >> (0x3fU & (IData)(vlSelf->my_cpu__DOT__EX__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+355,(vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__sraw_result),64);
        tracep->fullQData(oldp+357,(vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__srlw_result),64);
        tracep->fullQData(oldp+359,(vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__sllw_result),64);
        tracep->fullQData(oldp+361,(vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__adder_b),64);
        tracep->fullQData(oldp+363,(vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__adder_cin),64);
        VL_EXTEND_WQ(65,64, __Vtemp1141, vlSelf->my_cpu__DOT__EX__DOT__alu_src1);
        VL_EXTEND_WQ(65,64, __Vtemp1142, vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__adder_b);
        VL_ADD_W(3, __Vtemp1143, __Vtemp1141, __Vtemp1142);
        VL_EXTEND_WQ(65,64, __Vtemp1144, vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__adder_cin);
        VL_ADD_W(3, __Vtemp1145, __Vtemp1143, __Vtemp1144);
        tracep->fullBit(oldp+365,((1U & __Vtemp1145[2U])));
        tracep->fullBit(oldp+366,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                         >> 0x17U))));
        tracep->fullBit(oldp+367,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+368,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+369,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+370,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+371,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                         >> 0x12U))));
        tracep->fullBit(oldp+372,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                         >> 0x11U))));
        tracep->fullBit(oldp+373,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                         >> 0x10U))));
        tracep->fullBit(oldp+374,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+375,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                         >> 0xeU))));
        tracep->fullBit(oldp+376,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                         >> 0xdU))));
        tracep->fullBit(oldp+377,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                         >> 0xcU))));
        tracep->fullBit(oldp+378,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                         >> 0xbU))));
        tracep->fullQData(oldp+379,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div_result),64);
        tracep->fullQData(oldp+381,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__rem_result),64);
        tracep->fullQData(oldp+383,((((QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[2U])))),64);
        tracep->fullQData(oldp+385,((((QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[0U])))),64);
        tracep->fullCData(oldp+387,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul_signed),2);
        tracep->fullBit(oldp+388,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div_sign));
        tracep->fullBit(oldp+389,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__shorten));
        tracep->fullBit(oldp+390,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_abs_flag));
        tracep->fullBit(oldp+391,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_abs_flag));
        tracep->fullQData(oldp+392,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul),64);
        tracep->fullQData(oldp+394,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul),64);
        tracep->fullQData(oldp+396,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__mul_32_1_var),64);
        tracep->fullQData(oldp+398,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__mul_32_2_var),64);
        tracep->fullQData(oldp+400,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__mul_32_3_var),64);
        tracep->fullQData(oldp+402,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__mul_32_4_var),64);
        tracep->fullWData(oldp+404,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result_abs),128);
        tracep->fullBit(oldp+408,((((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_abs_flag) 
                                    ^ (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_abs_flag)) 
                                   & (3U == (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul_signed)))));
        tracep->fullWData(oldp+409,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result),128);
        tracep->fullIData(oldp+413,((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul)),32);
        tracep->fullIData(oldp+414,((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)),32);
        tracep->fullIData(oldp+415,((IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                             >> 0x20U))),32);
        tracep->fullIData(oldp+416,((IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                             >> 0x20U))),32);
        tracep->fullWData(oldp+417,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data),65);
        tracep->fullQData(oldp+420,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result),64);
        tracep->fullQData(oldp+422,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs),64);
        tracep->fullQData(oldp+424,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs),64);
        tracep->fullBit(oldp+426,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_sign_flag));
        tracep->fullBit(oldp+427,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_sign_flag));
        VL_EXTEND_WI(65,1, __Vtemp1147, (1U & (IData)(
                                                      (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                                       >> 0x3fU))));
        tracep->fullWData(oldp+428,(__Vtemp1147),65);
        tracep->fullWData(oldp+431,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_1_2),65);
        tracep->fullWData(oldp+434,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_1),65);
        tracep->fullWData(oldp+437,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_2),65);
        tracep->fullWData(oldp+440,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_1),65);
        tracep->fullWData(oldp+443,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_2),65);
        tracep->fullWData(oldp+446,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_1),65);
        tracep->fullWData(oldp+449,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_2),65);
        tracep->fullWData(oldp+452,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_1),65);
        tracep->fullWData(oldp+455,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_2),65);
        tracep->fullWData(oldp+458,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_1),65);
        tracep->fullWData(oldp+461,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_2),65);
        tracep->fullWData(oldp+464,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_1),65);
        tracep->fullWData(oldp+467,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_2),65);
        tracep->fullWData(oldp+470,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_1),65);
        tracep->fullWData(oldp+473,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_2),65);
        tracep->fullWData(oldp+476,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_1),65);
        tracep->fullWData(oldp+479,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_2),65);
        tracep->fullWData(oldp+482,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_1),65);
        tracep->fullWData(oldp+485,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_2),65);
        tracep->fullWData(oldp+488,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_1),65);
        tracep->fullWData(oldp+491,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_2),65);
        tracep->fullWData(oldp+494,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_1),65);
        tracep->fullWData(oldp+497,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_2),65);
        tracep->fullWData(oldp+500,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_1),65);
        tracep->fullWData(oldp+503,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_2),65);
        tracep->fullWData(oldp+506,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_1),65);
        tracep->fullWData(oldp+509,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_2),65);
        tracep->fullWData(oldp+512,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_1),65);
        tracep->fullWData(oldp+515,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_2),65);
        tracep->fullWData(oldp+518,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_1),65);
        tracep->fullWData(oldp+521,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_2),65);
        tracep->fullWData(oldp+524,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_1),65);
        tracep->fullWData(oldp+527,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_2),65);
        tracep->fullWData(oldp+530,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_1),65);
        tracep->fullWData(oldp+533,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_2),65);
        tracep->fullWData(oldp+536,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_1),65);
        tracep->fullWData(oldp+539,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_2),65);
        tracep->fullWData(oldp+542,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_1),65);
        tracep->fullWData(oldp+545,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_2),65);
        tracep->fullWData(oldp+548,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_1),65);
        tracep->fullWData(oldp+551,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_2),65);
        tracep->fullWData(oldp+554,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_1),65);
        tracep->fullWData(oldp+557,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_2),65);
        tracep->fullWData(oldp+560,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_1),65);
        tracep->fullWData(oldp+563,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_2),65);
        tracep->fullWData(oldp+566,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_1),65);
        tracep->fullWData(oldp+569,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_2),65);
        tracep->fullWData(oldp+572,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_1),65);
        tracep->fullWData(oldp+575,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_2),65);
        tracep->fullWData(oldp+578,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_1),65);
        tracep->fullWData(oldp+581,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_2),65);
        tracep->fullWData(oldp+584,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_1),65);
        tracep->fullWData(oldp+587,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_2),65);
        tracep->fullWData(oldp+590,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_1),65);
        tracep->fullWData(oldp+593,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_2),65);
        tracep->fullWData(oldp+596,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_1),65);
        tracep->fullWData(oldp+599,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_2),65);
        tracep->fullWData(oldp+602,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_1),65);
        tracep->fullWData(oldp+605,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_2),65);
        tracep->fullWData(oldp+608,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_1),65);
        tracep->fullWData(oldp+611,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_2),65);
        tracep->fullWData(oldp+614,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_1),65);
        tracep->fullWData(oldp+617,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_2),65);
        tracep->fullWData(oldp+620,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_1),65);
        tracep->fullWData(oldp+623,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_2),65);
        tracep->fullWData(oldp+626,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_1),65);
        tracep->fullWData(oldp+629,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_2),65);
        tracep->fullWData(oldp+632,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_1),65);
        tracep->fullWData(oldp+635,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_2),65);
        tracep->fullWData(oldp+638,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_1),65);
        tracep->fullWData(oldp+641,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_2),65);
        tracep->fullWData(oldp+644,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_1),65);
        tracep->fullWData(oldp+647,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_2),65);
        tracep->fullWData(oldp+650,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_1),65);
        tracep->fullWData(oldp+653,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_2),65);
        tracep->fullWData(oldp+656,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_1),65);
        tracep->fullWData(oldp+659,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_2),65);
        tracep->fullWData(oldp+662,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_1),65);
        tracep->fullWData(oldp+665,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_2),65);
        tracep->fullWData(oldp+668,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_1),65);
        tracep->fullWData(oldp+671,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_2),65);
        tracep->fullWData(oldp+674,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_1),65);
        tracep->fullWData(oldp+677,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_2),65);
        tracep->fullWData(oldp+680,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_1),65);
        tracep->fullWData(oldp+683,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_2),65);
        tracep->fullWData(oldp+686,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_1),65);
        tracep->fullWData(oldp+689,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_2),65);
        tracep->fullWData(oldp+692,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_1),65);
        tracep->fullWData(oldp+695,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_2),65);
        tracep->fullWData(oldp+698,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_1),65);
        tracep->fullWData(oldp+701,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_2),65);
        tracep->fullWData(oldp+704,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_1),65);
        tracep->fullWData(oldp+707,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_2),65);
        tracep->fullWData(oldp+710,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_1),65);
        tracep->fullWData(oldp+713,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_2),65);
        tracep->fullWData(oldp+716,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_1),65);
        tracep->fullWData(oldp+719,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_2),65);
        tracep->fullWData(oldp+722,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_1),65);
        tracep->fullWData(oldp+725,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_2),65);
        tracep->fullWData(oldp+728,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_1),65);
        tracep->fullWData(oldp+731,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_2),65);
        tracep->fullWData(oldp+734,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_1),65);
        tracep->fullWData(oldp+737,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_2),65);
        tracep->fullWData(oldp+740,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_1),65);
        tracep->fullWData(oldp+743,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_2),65);
        tracep->fullWData(oldp+746,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_1),65);
        tracep->fullWData(oldp+749,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_2),65);
        tracep->fullWData(oldp+752,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_1),65);
        tracep->fullWData(oldp+755,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_2),65);
        tracep->fullWData(oldp+758,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_1),65);
        tracep->fullWData(oldp+761,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_2),65);
        tracep->fullWData(oldp+764,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_1),65);
        tracep->fullWData(oldp+767,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_2),65);
        tracep->fullWData(oldp+770,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_1),65);
        tracep->fullWData(oldp+773,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_2),65);
        tracep->fullWData(oldp+776,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_1),65);
        tracep->fullWData(oldp+779,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_2),65);
        tracep->fullWData(oldp+782,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_1),65);
        tracep->fullWData(oldp+785,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_2),65);
        tracep->fullWData(oldp+788,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_1),65);
        tracep->fullWData(oldp+791,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_2),65);
        tracep->fullWData(oldp+794,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_1),65);
        tracep->fullWData(oldp+797,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_2),65);
        tracep->fullWData(oldp+800,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_1),65);
        tracep->fullWData(oldp+803,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_2),65);
        tracep->fullWData(oldp+806,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_64_1),65);
        tracep->fullWData(oldp+809,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_64_2),65);
        tracep->fullIData(oldp+812,(((IData)(1U) + 
                                     (~ vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data[0U]))),32);
        tracep->fullQData(oldp+813,(((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_sign_flag)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (((IData)(1U) 
                                                                       + 
                                                                       (~ 
                                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data[0U])) 
                                                                      >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((IData)(1U) 
                                                            + 
                                                            (~ 
                                                             vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data[0U])))))
                                      : (((QData)((IData)(
                                                          (- (IData)(
                                                                     (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data[0U] 
                                                                      >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data[0U]))))),64);
        tracep->fullIData(oldp+815,(((IData)(1U) + 
                                     (~ (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result)))),32);
        tracep->fullQData(oldp+816,((((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_sign_flag) 
                                      ^ (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_sign_flag))
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (((IData)(1U) 
                                                                       + 
                                                                       (~ (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result))) 
                                                                      >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((IData)(1U) 
                                                            + 
                                                            (~ (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result))))))
                                      : (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result))))),64);
        tracep->fullWData(oldp+818,(vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg),115);
        tracep->fullBit(oldp+822,((1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                                         >> 0x11U))));
        tracep->fullBit(oldp+823,((1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                                         >> 0x10U))));
        tracep->fullBit(oldp+824,((1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+825,((1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                                         >> 0xeU))));
        tracep->fullBit(oldp+826,((1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                                         >> 0xdU))));
        tracep->fullBit(oldp+827,((1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                                         >> 0xcU))));
        tracep->fullBit(oldp+828,((1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                                         >> 0xbU))));
        tracep->fullBit(oldp+829,((1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                                         >> 0xaU))));
        tracep->fullBit(oldp+830,((1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                                         >> 9U))));
        tracep->fullBit(oldp+831,((1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                                         >> 8U))));
        tracep->fullBit(oldp+832,((1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                                         >> 7U))));
        tracep->fullSData(oldp+833,((0x7ffU & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                                               >> 7U))),11);
        tracep->fullQData(oldp+834,((((QData)((IData)(
                                                      vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[0U])))),64);
        tracep->fullQData(oldp+836,(((0x2000U & vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U])
                                      ? vlSelf->my_cpu__DOT__ext_ram_read_data
                                      : ((0x1000U & 
                                          vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U])
                                          ? (((QData)((IData)(
                                                              (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->my_cpu__DOT__ext_ram_read_data 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->my_cpu__DOT__ext_ram_read_data)))
                                          : ((0x400U 
                                              & vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U])
                                              ? (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->my_cpu__DOT__ext_ram_read_data 
                                                                                >> 0xfU)))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->my_cpu__DOT__ext_ram_read_data)))))
                                              : ((0x100U 
                                                  & vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U])
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->my_cpu__DOT__ext_ram_read_data 
                                                                                >> 7U)))))) 
                                                   << 8U) 
                                                  | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->my_cpu__DOT__ext_ram_read_data)))))
                                                  : 
                                                 ((0x20000U 
                                                   & vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U])
                                                   ? (QData)((IData)(vlSelf->my_cpu__DOT__ext_ram_read_data))
                                                   : 
                                                  ((0x800U 
                                                    & vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U])
                                                    ? (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->my_cpu__DOT__ext_ram_read_data))))
                                                    : 
                                                   ((0x200U 
                                                     & vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U])
                                                     ? (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->my_cpu__DOT__ext_ram_read_data))))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[0U]))))))))))),64);
        tracep->fullCData(oldp+838,((0x1fU & vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[2U])),5);
        tracep->fullBit(oldp+839,((1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[2U] 
                                         >> 5U))));
        tracep->fullBit(oldp+840,(vlSelf->my_cpu__DOT__cache__DOT__read_shortcut_icache));
        tracep->fullBit(oldp+841,(vlSelf->my_cpu__DOT__cache__DOT__read_shortcut_dcache));
        tracep->fullBit(oldp+842,(vlSelf->my_cpu__DOT__cache__DOT__icache_busy));
        tracep->fullBit(oldp+843,(vlSelf->my_cpu__DOT__cache__DOT__dcache_busy));
        tracep->fullBit(oldp+844,((0U != (IData)(vlSelf->my_cpu__DOT__dcache_be_n))));
        __Vtemp1148[0U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0U];
        __Vtemp1148[1U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][1U];
        __Vtemp1148[2U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][2U];
        __Vtemp1148[3U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][3U];
        __Vtemp1148[4U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][4U];
        __Vtemp1148[5U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][5U];
        __Vtemp1148[6U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][6U];
        __Vtemp1148[7U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][7U];
        __Vtemp1148[8U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][8U];
        __Vtemp1148[9U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][9U];
        __Vtemp1148[0xaU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0xaU];
        __Vtemp1148[0xbU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0xbU];
        __Vtemp1148[0xcU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0xcU];
        __Vtemp1148[0xdU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0xdU];
        __Vtemp1148[0xeU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0xeU];
        __Vtemp1148[0xfU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0xfU];
        __Vtemp1148[0x10U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x10U];
        __Vtemp1148[0x11U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x11U];
        __Vtemp1148[0x12U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x12U];
        __Vtemp1148[0x13U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x13U];
        __Vtemp1148[0x14U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x14U];
        __Vtemp1148[0x15U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x15U];
        __Vtemp1148[0x16U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x16U];
        __Vtemp1148[0x17U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x17U];
        __Vtemp1148[0x18U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x18U];
        __Vtemp1148[0x19U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x19U];
        __Vtemp1148[0x1aU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x1aU];
        __Vtemp1148[0x1bU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x1bU];
        __Vtemp1148[0x1cU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x1cU];
        __Vtemp1148[0x1dU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x1dU];
        __Vtemp1148[0x1eU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x1eU];
        __Vtemp1148[0x1fU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x1fU];
        tracep->fullWData(oldp+845,(__Vtemp1148),1024);
        tracep->fullWData(oldp+877,(vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data),1024);
        tracep->fullIData(oldp+909,(vlSelf->my_cpu__DOT__cache__DOT__AXI_read_addr),32);
        tracep->fullCData(oldp+910,(vlSelf->my_cpu__DOT__cache__DOT__read_state),3);
        tracep->fullCData(oldp+911,(vlSelf->my_cpu__DOT__cache__DOT__read_index),4);
        tracep->fullCData(oldp+912,(vlSelf->my_cpu__DOT__cache__DOT__AXI_read_size),3);
        tracep->fullCData(oldp+913,(vlSelf->my_cpu__DOT__cache__DOT__AXI_read_target),2);
        tracep->fullBit(oldp+914,(vlSelf->my_cpu__DOT__cache__DOT__read_req));
        tracep->fullWData(oldp+915,(vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data),1024);
        tracep->fullIData(oldp+947,(vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_addr),32);
        tracep->fullQData(oldp+948,(vlSelf->my_cpu__DOT__cache__DOT__AXI_write_data),64);
        tracep->fullIData(oldp+950,(vlSelf->my_cpu__DOT__cache__DOT__AXI_write_addr),32);
        tracep->fullCData(oldp+951,(vlSelf->my_cpu__DOT__cache__DOT__write_index),4);
        tracep->fullCData(oldp+952,(vlSelf->my_cpu__DOT__cache__DOT__write_state),4);
        __Vtemp1149[0U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0U];
        __Vtemp1149[1U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[1U];
        __Vtemp1149[2U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[2U];
        __Vtemp1149[3U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[3U];
        __Vtemp1149[4U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[4U];
        __Vtemp1149[5U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[5U];
        __Vtemp1149[6U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[6U];
        __Vtemp1149[7U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[7U];
        __Vtemp1149[8U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[8U];
        __Vtemp1149[9U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[9U];
        __Vtemp1149[0xaU] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xaU];
        __Vtemp1149[0xbU] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xbU];
        __Vtemp1149[0xcU] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xcU];
        __Vtemp1149[0xdU] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xdU];
        __Vtemp1149[0xeU] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xeU];
        __Vtemp1149[0xfU] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xfU];
        tracep->fullWData(oldp+953,(__Vtemp1149),512);
        tracep->fullSData(oldp+969,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit),16);
        tracep->fullIData(oldp+970,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[0]),26);
        tracep->fullIData(oldp+971,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[1]),26);
        tracep->fullIData(oldp+972,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[2]),26);
        tracep->fullIData(oldp+973,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[3]),26);
        tracep->fullIData(oldp+974,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[4]),26);
        tracep->fullIData(oldp+975,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[5]),26);
        tracep->fullIData(oldp+976,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[6]),26);
        tracep->fullIData(oldp+977,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[7]),26);
        tracep->fullIData(oldp+978,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[8]),26);
        tracep->fullIData(oldp+979,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[9]),26);
        tracep->fullIData(oldp+980,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[10]),26);
        tracep->fullIData(oldp+981,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[11]),26);
        tracep->fullIData(oldp+982,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[12]),26);
        tracep->fullIData(oldp+983,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[13]),26);
        tracep->fullIData(oldp+984,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[14]),26);
        tracep->fullIData(oldp+985,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[15]),26);
        tracep->fullWData(oldp+986,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0]),512);
        tracep->fullWData(oldp+1002,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[1]),512);
        tracep->fullWData(oldp+1018,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[2]),512);
        tracep->fullWData(oldp+1034,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[3]),512);
        tracep->fullWData(oldp+1050,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[4]),512);
        tracep->fullWData(oldp+1066,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[5]),512);
        tracep->fullWData(oldp+1082,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[6]),512);
        tracep->fullWData(oldp+1098,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[7]),512);
        tracep->fullWData(oldp+1114,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[8]),512);
        tracep->fullWData(oldp+1130,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[9]),512);
        tracep->fullWData(oldp+1146,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[10]),512);
        tracep->fullWData(oldp+1162,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[11]),512);
        tracep->fullWData(oldp+1178,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[12]),512);
        tracep->fullWData(oldp+1194,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[13]),512);
        tracep->fullWData(oldp+1210,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[14]),512);
        tracep->fullWData(oldp+1226,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[15]),512);
        tracep->fullSData(oldp+1242,((0x3ffU & (((IData)(1U) 
                                                 + 
                                                 (0xfU 
                                                  & (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                                                     >> 2U))) 
                                                << 5U))),10);
        tracep->fullIData(oldp+1243,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_pre),32);
        tracep->fullIData(oldp+1244,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel),32);
        tracep->fullCData(oldp+1245,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__replace_index),4);
        tracep->fullCData(oldp+1246,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit_index),4);
        tracep->fullCData(oldp+1247,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__icache_state),2);
        tracep->fullCData(oldp+1248,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__index_in),4);
        tracep->fullCData(oldp+1249,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__replace_index_reg),4);
        tracep->fullIData(oldp+1250,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+1251,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__unnamedblk2__DOT__j),32);
        tracep->fullQData(oldp+1252,(((1U & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg))
                                       ? 0ULL : ((2U 
                                                  & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg))
                                                  ? 8ULL
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg))
                                                   ? 0x10ULL
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg))
                                                    ? 0x18ULL
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg))
                                                     ? 0x20ULL
                                                     : 
                                                    ((0x20U 
                                                      & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg))
                                                      ? 0x28ULL
                                                      : 
                                                     ((0x40U 
                                                       & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg))
                                                       ? 0x30ULL
                                                       : 
                                                      ((0x80U 
                                                        & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg))
                                                        ? 0x38ULL
                                                        : 0ULL))))))))),64);
        tracep->fullSData(oldp+1254,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit),16);
        tracep->fullSData(oldp+1255,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__dirty_flag),16);
        tracep->fullIData(oldp+1256,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[0]),25);
        tracep->fullIData(oldp+1257,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[1]),25);
        tracep->fullIData(oldp+1258,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[2]),25);
        tracep->fullIData(oldp+1259,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[3]),25);
        tracep->fullIData(oldp+1260,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[4]),25);
        tracep->fullIData(oldp+1261,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[5]),25);
        tracep->fullIData(oldp+1262,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[6]),25);
        tracep->fullIData(oldp+1263,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[7]),25);
        tracep->fullIData(oldp+1264,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[8]),25);
        tracep->fullIData(oldp+1265,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[9]),25);
        tracep->fullIData(oldp+1266,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[10]),25);
        tracep->fullIData(oldp+1267,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[11]),25);
        tracep->fullIData(oldp+1268,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[12]),25);
        tracep->fullIData(oldp+1269,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[13]),25);
        tracep->fullIData(oldp+1270,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[14]),25);
        tracep->fullIData(oldp+1271,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[15]),25);
        tracep->fullWData(oldp+1272,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0]),1024);
        tracep->fullWData(oldp+1304,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1]),1024);
        tracep->fullWData(oldp+1336,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2]),1024);
        tracep->fullWData(oldp+1368,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3]),1024);
        tracep->fullWData(oldp+1400,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4]),1024);
        tracep->fullWData(oldp+1432,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5]),1024);
        tracep->fullWData(oldp+1464,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6]),1024);
        tracep->fullWData(oldp+1496,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7]),1024);
        tracep->fullWData(oldp+1528,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8]),1024);
        tracep->fullWData(oldp+1560,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9]),1024);
        tracep->fullWData(oldp+1592,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[10]),1024);
        tracep->fullWData(oldp+1624,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[11]),1024);
        tracep->fullWData(oldp+1656,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[12]),1024);
        tracep->fullWData(oldp+1688,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[13]),1024);
        tracep->fullWData(oldp+1720,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[14]),1024);
        tracep->fullWData(oldp+1752,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[15]),1024);
        tracep->fullQData(oldp+1784,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_out_index),64);
        tracep->fullSData(oldp+1786,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__offset),11);
        tracep->fullCData(oldp+1787,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index),4);
        tracep->fullCData(oldp+1788,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg),8);
        tracep->fullSData(oldp+1789,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__total_shift_in),10);
        tracep->fullQData(oldp+1790,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_in_data_write_64),64);
        tracep->fullCData(oldp+1792,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index),4);
        tracep->fullCData(oldp+1793,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index_already_write),4);
        tracep->fullCData(oldp+1794,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__dcache_state),2);
        tracep->fullBit(oldp+1795,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__indata_target));
        tracep->fullCData(oldp+1796,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__write_index),4);
        __Vtemp1150[0U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][0U];
        __Vtemp1150[1U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][1U];
        __Vtemp1150[2U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][2U];
        __Vtemp1150[3U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][3U];
        __Vtemp1150[4U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][4U];
        __Vtemp1150[5U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][5U];
        __Vtemp1150[6U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][6U];
        __Vtemp1150[7U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][7U];
        __Vtemp1150[8U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][8U];
        __Vtemp1150[9U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][9U];
        __Vtemp1150[0xaU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][0xaU];
        __Vtemp1150[0xbU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][0xbU];
        __Vtemp1150[0xcU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][0xcU];
        __Vtemp1150[0xdU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][0xdU];
        __Vtemp1150[0xeU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][0xeU];
        __Vtemp1150[0xfU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][0xfU];
        __Vtemp1150[0x10U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][0x10U];
        __Vtemp1150[0x11U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][0x11U];
        __Vtemp1150[0x12U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][0x12U];
        __Vtemp1150[0x13U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][0x13U];
        __Vtemp1150[0x14U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][0x14U];
        __Vtemp1150[0x15U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][0x15U];
        __Vtemp1150[0x16U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][0x16U];
        __Vtemp1150[0x17U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][0x17U];
        __Vtemp1150[0x18U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][0x18U];
        __Vtemp1150[0x19U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][0x19U];
        __Vtemp1150[0x1aU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][0x1aU];
        __Vtemp1150[0x1bU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][0x1bU];
        __Vtemp1150[0x1cU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][0x1cU];
        __Vtemp1150[0x1dU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][0x1dU];
        __Vtemp1150[0x1eU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][0x1eU];
        __Vtemp1150[0x1fU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [7U][0x1fU];
        tracep->fullWData(oldp+1797,(__Vtemp1150),1024);
        tracep->fullQData(oldp+1829,((((QData)((IData)(
                                                       vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                       [7U][1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                                   [7U][0U])))),64);
        tracep->fullQData(oldp+1831,((((QData)((IData)(
                                                       vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                       [7U][3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                                   [7U][2U])))),64);
        tracep->fullQData(oldp+1833,((((QData)((IData)(
                                                       vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                       [7U][5U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                                   [7U][4U])))),64);
        tracep->fullQData(oldp+1835,((((QData)((IData)(
                                                       vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                       [7U][7U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                                   [7U][6U])))),64);
        tracep->fullQData(oldp+1837,((((QData)((IData)(
                                                       vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                       [7U][9U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                                   [7U][8U])))),64);
        tracep->fullQData(oldp+1839,((((QData)((IData)(
                                                       vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                       [7U][0xbU])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                                   [7U][0xaU])))),64);
        tracep->fullQData(oldp+1841,((((QData)((IData)(
                                                       vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                       [7U][0xdU])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                                   [7U][0xcU])))),64);
        tracep->fullQData(oldp+1843,((((QData)((IData)(
                                                       vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                       [7U][0xfU])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                                   [7U][0xeU])))),64);
        tracep->fullQData(oldp+1845,((((QData)((IData)(
                                                       vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                       [7U][0x11U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                                   [7U][0x10U])))),64);
        tracep->fullQData(oldp+1847,((((QData)((IData)(
                                                       vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                       [7U][0x13U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                                   [7U][0x12U])))),64);
        tracep->fullQData(oldp+1849,((((QData)((IData)(
                                                       vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                       [7U][0x15U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                                   [7U][0x14U])))),64);
        tracep->fullQData(oldp+1851,((((QData)((IData)(
                                                       vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                       [7U][0x17U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                                   [7U][0x16U])))),64);
        tracep->fullQData(oldp+1853,((((QData)((IData)(
                                                       vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                       [7U][0x19U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                                   [7U][0x18U])))),64);
        tracep->fullQData(oldp+1855,((((QData)((IData)(
                                                       vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                       [7U][0x1bU])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                                   [7U][0x1aU])))),64);
        tracep->fullQData(oldp+1857,((((QData)((IData)(
                                                       vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                       [7U][0x1dU])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                                   [7U][0x1cU])))),64);
        tracep->fullQData(oldp+1859,((((QData)((IData)(
                                                       vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                       [7U][0x1fU])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                                   [7U][0x1eU])))),64);
        tracep->fullIData(oldp+1861,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+1862,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__unnamedblk2__DOT__j),32);
        __Vtemp1172[4U] = ((0xfffc0000U & (((((((((
                                                   (((((((((0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->my_cpu__DOT__ID__DOT__inst)) 
                                                           | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addi)) 
                                                          | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addiw)) 
                                                         | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sd)) 
                                                        | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ld)) 
                                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lwu)) 
                                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sw)) 
                                                     | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lw)) 
                                                    | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lhu)) 
                                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lh)) 
                                                  | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lbu)) 
                                                 | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lb)) 
                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sb)) 
                                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sh)) 
                                              | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addw)) 
                                             | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_add)) 
                                            << 0x1fU) 
                                           | ((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sub) 
                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_subw)) 
                                               << 0x1eU) 
                                              | ((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slt) 
                                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slti)) 
                                                  << 0x1dU) 
                                                 | ((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sltiu) 
                                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sltu)) 
                                                     << 0x1cU) 
                                                    | ((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_and) 
                                                         | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_andi)) 
                                                        << 0x1bU) 
                                                       | ((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_or) 
                                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ori)) 
                                                           << 0x1aU) 
                                                          | ((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_xori) 
                                                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_xor)) 
                                                              << 0x19U) 
                                                             | ((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slli) 
                                                                  | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sll)) 
                                                                 << 0x18U) 
                                                                | ((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srli) 
                                                                     | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srl)) 
                                                                    << 0x17U) 
                                                                   | ((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srai) 
                                                                        | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sra)) 
                                                                       << 0x16U) 
                                                                      | (((0x37U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->my_cpu__DOT__ID__DOT__inst)) 
                                                                          << 0x15U) 
                                                                         | ((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraiw) 
                                                                              | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraw)) 
                                                                             << 0x14U) 
                                                                            | ((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sllw) 
                                                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slliw)) 
                                                                                << 0x13U) 
                                                                               | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srlw) 
                                                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srliw)) 
                                                                                << 0x12U))))))))))))))) 
                           | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__mem_OneHot) 
                               << 7U) | (((0x100073U 
                                           == vlSelf->my_cpu__DOT__ID__DOT__inst) 
                                          << 6U) | 
                                         (((IData)(vlSelf->my_cpu__DOT__ID__DOT__IF_we) 
                                           << 5U) | 
                                          ((IData)(
                                                   ((((QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addr)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                                    >> 0x20U)) 
                                           >> 0x1bU)))));
        __Vtemp1174[4U] = (((0x37U == (0x7fU & vlSelf->my_cpu__DOT__ID__DOT__inst)) 
                            | (0x17U == (0x7fU & vlSelf->my_cpu__DOT__ID__DOT__inst)))
                            ? 1U : ((((((((((((((((
                                                   (((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ori) 
                                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slti)) 
                                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slliw)) 
                                                     | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_andi)) 
                                                    | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addi)) 
                                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addiw)) 
                                                  | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srli)) 
                                                 | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slli)) 
                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sltiu)) 
                                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ld)) 
                                              | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lw)) 
                                             | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lhu)) 
                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lh)) 
                                           | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraiw)) 
                                          | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srliw)) 
                                         | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srai)) 
                                        | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lbu)) 
                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lb)) 
                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_xori)) 
                                     | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lwu))
                                     ? 2U : (((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sd) 
                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sh)) 
                                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sb)) 
                                              | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sw))
                                              ? 4U : 
                                             ((((((((((((((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sll) 
                                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srl)) 
                                                           | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sra)) 
                                                          | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_xor)) 
                                                         | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraw)) 
                                                        | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srlw)) 
                                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slt)) 
                                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_subw)) 
                                                     | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_and)) 
                                                    | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sltu)) 
                                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_add)) 
                                                  | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sub)) 
                                                 | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sllw)) 
                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_or)) 
                                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addw))
                                               ? 8U
                                               : 0U))));
        __Vtemp1175[4U] = ((((0x17U == (0x7fU & vlSelf->my_cpu__DOT__ID__DOT__inst))
                              ? 1U : ((((((((((((((
                                                   (((((((((((((((((((((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sll) 
                                                                         | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srl)) 
                                                                        | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sra)) 
                                                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_xor)) 
                                                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slti)) 
                                                                     | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slt)) 
                                                                    | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_subw)) 
                                                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_and)) 
                                                                  | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_andi)) 
                                                                 | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sltu)) 
                                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_add)) 
                                                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addi)) 
                                                              | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sd)) 
                                                             | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addiw)) 
                                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ld)) 
                                                           | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lw)) 
                                                          | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lhu)) 
                                                         | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lh)) 
                                                        | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lbu)) 
                                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lb)) 
                                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sh)) 
                                                     | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sw)) 
                                                    | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sd)) 
                                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sb)) 
                                                  | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ori)) 
                                                 | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slliw)) 
                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srai)) 
                                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sub)) 
                                              | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srli)) 
                                             | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sllw)) 
                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slli)) 
                                           | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sltiu)) 
                                          | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_or)) 
                                         | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_xori)) 
                                        | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lwu)) 
                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addw))
                                       ? 2U : (((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraiw) 
                                                  | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraw)) 
                                                 | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srlw)) 
                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srliw))
                                                ? 4U
                                                : 0U))) 
                            << 4U) | __Vtemp1174[4U]);
        __Vtemp1176[4U] = ((((((((((((((((((((((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ori) 
                                                 | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sll)) 
                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srl)) 
                                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sra)) 
                                              | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_xor)) 
                                             | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slti)) 
                                            | (0x37U 
                                               == (0x7fU 
                                                   & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                           | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slt)) 
                                          | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_and)) 
                                         | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_andi)) 
                                        | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sltu)) 
                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srai)) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                     | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addi)) 
                                    | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sub)) 
                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srli)) 
                                  | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slli)) 
                                 | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sltiu)) 
                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_or)) 
                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_xori)) 
                              | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_add))
                              ? 1U : ((((((((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraiw) 
                                              | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraw)) 
                                             | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srlw)) 
                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srliw)) 
                                           | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slliw)) 
                                          | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_subw)) 
                                         | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sllw)) 
                                        | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addiw)) 
                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addw))
                                       ? 4U : 0U)) 
                            << 7U) | __Vtemp1175[4U]);
        __Vtemp1177[4U] = (((((((((((((((((((((((((
                                                   ((((((((((((((((((((((((((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ori) 
                                                                              | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sll)) 
                                                                             | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srl)) 
                                                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sra)) 
                                                                           | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_xor)) 
                                                                          | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slti)) 
                                                                         | (0x37U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                                                        | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_mul)) 
                                                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraiw)) 
                                                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraw)) 
                                                                     | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srlw)) 
                                                                    | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srliw)) 
                                                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slt)) 
                                                                  | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slliw)) 
                                                                 | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_remw)) 
                                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_subw)) 
                                                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_divw)) 
                                                              | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_mulw)) 
                                                             | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_and)) 
                                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_andi)) 
                                                           | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sltu)) 
                                                          | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srai)) 
                                                         | (0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                                        | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addi)) 
                                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__IF_we)) 
                                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addiw)) 
                                                     | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lwu)) 
                                                    | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ld)) 
                                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lw)) 
                                                  | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lhu)) 
                                                 | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lh)) 
                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lbu)) 
                                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lb)) 
                                              | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sub)) 
                                             | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srli)) 
                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sllw)) 
                                           | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slli)) 
                                          | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sltiu)) 
                                         | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_or)) 
                                        | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_xori)) 
                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addw)) 
                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_add)) 
                                     | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_divuw)) 
                                    | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_remuw)) 
                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_div)) 
                                  | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_divu)) 
                                 | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_rem)) 
                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_remu)) 
                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_mulh)) 
                              | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_mulhsu)) 
                             | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_mulhu)) 
                            << 0xaU) | __Vtemp1176[4U]);
        __Vtemp1178[5U] = ((0x7ffU & ((IData)((((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->my_cpu__DOT__ID__DOT__inst)) 
                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_jalr))
                                                ? (QData)((IData)(
                                                                  ((IData)(4U) 
                                                                   + vlSelf->my_cpu__DOT__ID__DOT__inst_addr)))
                                                : (
                                                   ((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrs) 
                                                    | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrw))
                                                    ? vlSelf->my_cpu__DOT__ID__DOT__csr_result
                                                    : 0ULL))) 
                                      >> 0x10U)) | 
                           ((0xf800U & ((IData)((((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->my_cpu__DOT__ID__DOT__inst)) 
                                                  | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_jalr))
                                                  ? (QData)((IData)(
                                                                    ((IData)(4U) 
                                                                     + vlSelf->my_cpu__DOT__ID__DOT__inst_addr)))
                                                  : 
                                                 (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrs) 
                                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrw))
                                                   ? vlSelf->my_cpu__DOT__ID__DOT__csr_result
                                                   : 0ULL))) 
                                        >> 0x10U)) 
                            | ((IData)(((((0x6fU == 
                                           (0x7fU & vlSelf->my_cpu__DOT__ID__DOT__inst)) 
                                          | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_jalr))
                                          ? (QData)((IData)(
                                                            ((IData)(4U) 
                                                             + vlSelf->my_cpu__DOT__ID__DOT__inst_addr)))
                                          : (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrs) 
                                              | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrw))
                                              ? vlSelf->my_cpu__DOT__ID__DOT__csr_result
                                              : 0ULL)) 
                                        >> 0x20U)) 
                               << 0x10U)));
        __Vtemp1178[6U] = ((0x7ffU & ((IData)(((((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->my_cpu__DOT__ID__DOT__inst)) 
                                                 | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_jalr))
                                                 ? (QData)((IData)(
                                                                   ((IData)(4U) 
                                                                    + vlSelf->my_cpu__DOT__ID__DOT__inst_addr)))
                                                 : 
                                                (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrs) 
                                                  | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrw))
                                                  ? vlSelf->my_cpu__DOT__ID__DOT__csr_result
                                                  : 0ULL)) 
                                               >> 0x20U)) 
                                      >> 0x10U)) | 
                           ((0xf800U & ((IData)((((
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->my_cpu__DOT__ID__DOT__inst)) 
                                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_jalr))
                                                   ? (QData)((IData)(
                                                                     ((IData)(4U) 
                                                                      + vlSelf->my_cpu__DOT__ID__DOT__inst_addr)))
                                                   : 
                                                  (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrs) 
                                                    | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrw))
                                                    ? vlSelf->my_cpu__DOT__ID__DOT__csr_result
                                                    : 0ULL)) 
                                                 >> 0x20U)) 
                                        >> 0x10U)) 
                            | ((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addr)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst)))) 
                               << 0x10U)));
        __Vtemp1178[7U] = ((0x7ffU & ((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addr)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst)))) 
                                      >> 0x10U)) | 
                           ((0xf800U & ((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addr)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst)))) 
                                        >> 0x10U)) 
                            | ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addr)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                        >> 0x20U)) 
                               << 0x10U)));
        __Vtemp1180[0U] = (IData)(vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding);
        __Vtemp1180[1U] = (IData)((vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding 
                                   >> 0x20U));
        __Vtemp1180[2U] = (IData)(vlSelf->my_cpu__DOT__ID__DOT__Inst_Src2_forwarding);
        __Vtemp1180[3U] = (IData)((vlSelf->my_cpu__DOT__ID__DOT__Inst_Src2_forwarding 
                                   >> 0x20U));
        __Vtemp1180[4U] = ((((IData)((((0x6fU == (0x7fU 
                                                  & vlSelf->my_cpu__DOT__ID__DOT__inst)) 
                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_jalr))
                                       ? (QData)((IData)(
                                                         ((IData)(4U) 
                                                          + vlSelf->my_cpu__DOT__ID__DOT__inst_addr)))
                                       : (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrs) 
                                           | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrw))
                                           ? vlSelf->my_cpu__DOT__ID__DOT__csr_result
                                           : 0ULL))) 
                             << 0x10U) | (0xf800U & 
                                          (((IData)(vlSelf->my_cpu__DOT__ID__DOT__IF_we)
                                             ? (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                >> 7U)
                                             : (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                >> 7U)) 
                                           << 0xbU))) 
                           | __Vtemp1177[4U]);
        __Vtemp1180[5U] = __Vtemp1178[5U];
        __Vtemp1180[6U] = __Vtemp1178[6U];
        __Vtemp1180[7U] = __Vtemp1178[7U];
        __Vtemp1180[8U] = ((0x7ffU & ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addr)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                               >> 0x20U)) 
                                      >> 0x10U)) | 
                           (__Vtemp1172[4U] << 0xbU));
        __Vtemp1180[9U] = ((0x1000000U & ((IData)((
                                                   ((IData)(vlSelf->my_cpu__DOT__ID__DOT__mem_arrive_flag)
                                                     ? 0ULL
                                                     : vlSelf->my_cpu__DOT__ID__DOT__IF_ID_Bus_Reg) 
                                                   >> 0x20U)) 
                                          << 0x18U)) 
                           | ((0xfffff800U & (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_mulh) 
                                               << 0x17U) 
                                              | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_mulhsu) 
                                                  << 0x16U) 
                                                 | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_mulhu) 
                                                     << 0x15U) 
                                                    | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_rem) 
                                                        << 0x14U) 
                                                       | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_remu) 
                                                           << 0x13U) 
                                                          | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_div) 
                                                              << 0x12U) 
                                                             | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_divu) 
                                                                 << 0x11U) 
                                                                | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_remuw) 
                                                                    << 0x10U) 
                                                                   | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_divuw) 
                                                                       << 0xfU) 
                                                                      | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_mul) 
                                                                          << 0xeU) 
                                                                         | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_remw) 
                                                                             << 0xdU) 
                                                                            | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_divw) 
                                                                                << 0xcU) 
                                                                               | ((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_mulw) 
                                                                                << 0xbU)))))))))))))) 
                              | (__Vtemp1172[4U] >> 0x15U)));
        tracep->fullWData(oldp+1863,(__Vtemp1180),313);
        tracep->fullQData(oldp+1873,((((0x6fU == (0x7fU 
                                                  & vlSelf->my_cpu__DOT__ID__DOT__inst)) 
                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_jalr))
                                       ? (QData)((IData)(
                                                         ((IData)(4U) 
                                                          + vlSelf->my_cpu__DOT__ID__DOT__inst_addr)))
                                       : (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrs) 
                                           | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrw))
                                           ? vlSelf->my_cpu__DOT__ID__DOT__csr_result
                                           : 0ULL))),64);
        tracep->fullQData(oldp+1875,(vlSelf->my_cpu__DOT__ID_IF_Bus),33);
        tracep->fullIData(oldp+1877,((IData)(vlSelf->my_cpu__DOT__ID_IF_Bus)),32);
        tracep->fullBit(oldp+1878,((1U & (IData)((vlSelf->my_cpu__DOT__ID_IF_Bus 
                                                  >> 0x20U)))));
        tracep->fullQData(oldp+1879,(vlSelf->my_cpu__DOT__ID__DOT__csr_result),64);
        tracep->fullIData(oldp+1881,(vlSelf->my_cpu__DOT__ID__DOT__inst_addr_next),32);
        tracep->fullBit(oldp+1882,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__time_interrupt));
        tracep->fullWData(oldp+1883,(vlSelf->my_cpu__DOT__cache__DOT__ext_in_data),1024);
        tracep->fullBit(oldp+1915,(vlSelf->clk));
        tracep->fullBit(oldp+1916,(vlSelf->rst));
        tracep->fullBit(oldp+1917,(vlSelf->int_time));
        tracep->fullBit(oldp+1918,(vlSelf->inst_read_req));
        tracep->fullIData(oldp+1919,(vlSelf->ext_read_addr),32);
        tracep->fullIData(oldp+1920,(vlSelf->ext_write_addr),32);
        tracep->fullBit(oldp+1921,(vlSelf->ext_write_req));
        tracep->fullBit(oldp+1922,(vlSelf->ext_read_req));
        tracep->fullIData(oldp+1923,(vlSelf->base_ram_addr),32);
        tracep->fullBit(oldp+1924,(vlSelf->inst_ebreak));
        tracep->fullBit(oldp+1925,(vlSelf->we));
        tracep->fullQData(oldp+1926,(vlSelf->data),64);
        tracep->fullCData(oldp+1928,(vlSelf->addr),5);
        tracep->fullQData(oldp+1929,(vlSelf->Inst_Src2_forwarding),64);
        tracep->fullQData(oldp+1931,(vlSelf->Inst_Src1_forwarding),64);
        tracep->fullQData(oldp+1933,(vlSelf->mul_div_result),64);
        tracep->fullQData(oldp+1935,(vlSelf->mmio_serial_data),64);
        tracep->fullQData(oldp+1937,(vlSelf->mmio_rtc_low_data),64);
        tracep->fullQData(oldp+1939,(vlSelf->mmio_rtc_high_data),64);
        tracep->fullQData(oldp+1941,(vlSelf->mmio_vga_ctl_low_data),64);
        tracep->fullQData(oldp+1943,(vlSelf->mmio_vga_ctl_high_data),64);
        tracep->fullQData(oldp+1945,(vlSelf->mmio_write_data),64);
        tracep->fullBit(oldp+1947,(vlSelf->mmio_wen));
        tracep->fullCData(oldp+1948,(vlSelf->mmio_be_n),8);
        tracep->fullBit(oldp+1949,(vlSelf->mmio_serial_en));
        tracep->fullBit(oldp+1950,(vlSelf->mmio_rtc_low_en));
        tracep->fullBit(oldp+1951,(vlSelf->mmio_rtc_high_en));
        tracep->fullBit(oldp+1952,(vlSelf->mmio_vga_ctl_low_en));
        tracep->fullBit(oldp+1953,(vlSelf->mmio_vga_ctl_high_en));
        tracep->fullBit(oldp+1954,(vlSelf->mmio_fb_low_en));
        tracep->fullBit(oldp+1955,(vlSelf->mmio_fb_high_en));
        tracep->fullIData(oldp+1956,(vlSelf->mmio_addr),32);
        tracep->fullBit(oldp+1957,(vlSelf->mul_div_valid));
        tracep->fullBit(oldp+1958,(vlSelf->IF_we));
        tracep->fullCData(oldp+1959,(vlSelf->inst_result_Select),3);
        tracep->fullQData(oldp+1960,(vlSelf->EX_data),64);
        tracep->fullCData(oldp+1962,(vlSelf->EX_addr),5);
        tracep->fullIData(oldp+1963,(vlSelf->inst_addr),32);
        tracep->fullIData(oldp+1964,(vlSelf->ext_ram_addr),32);
        tracep->fullCData(oldp+1965,(vlSelf->ext_ram_be_n),8);
        tracep->fullBit(oldp+1966,(vlSelf->ext_ram_wen));
        tracep->fullQData(oldp+1967,(vlSelf->ext_ram_write_data),64);
        tracep->fullBit(oldp+1969,(vlSelf->valid));
        tracep->fullIData(oldp+1970,(vlSelf->debug_pc),32);
        tracep->fullIData(oldp+1971,(vlSelf->debug_inst_addr),32);
        tracep->fullIData(oldp+1972,(vlSelf->inst),32);
        tracep->fullCData(oldp+1973,(vlSelf->AWID),4);
        tracep->fullIData(oldp+1974,(vlSelf->AWADDR),32);
        tracep->fullCData(oldp+1975,(vlSelf->AWLEN),8);
        tracep->fullCData(oldp+1976,(vlSelf->AWSIZE),3);
        tracep->fullCData(oldp+1977,(vlSelf->AWBURST),2);
        tracep->fullBit(oldp+1978,(vlSelf->AWVALID));
        tracep->fullBit(oldp+1979,(vlSelf->AWREADY));
        tracep->fullQData(oldp+1980,(vlSelf->WDATA),64);
        tracep->fullCData(oldp+1982,(vlSelf->WSTRB),8);
        tracep->fullBit(oldp+1983,(vlSelf->WLAST));
        tracep->fullBit(oldp+1984,(vlSelf->WVALID));
        tracep->fullBit(oldp+1985,(vlSelf->WREADY));
        tracep->fullCData(oldp+1986,(vlSelf->BID),4);
        tracep->fullCData(oldp+1987,(vlSelf->BRESP),2);
        tracep->fullBit(oldp+1988,(vlSelf->BVALID));
        tracep->fullBit(oldp+1989,(vlSelf->BREADY));
        tracep->fullIData(oldp+1990,(vlSelf->ARADDR),32);
        tracep->fullCData(oldp+1991,(vlSelf->ARLEN),8);
        tracep->fullCData(oldp+1992,(vlSelf->ARSIZE),3);
        tracep->fullCData(oldp+1993,(vlSelf->ARBURST),2);
        tracep->fullBit(oldp+1994,(vlSelf->ARVALID));
        tracep->fullBit(oldp+1995,(vlSelf->ARREADY));
        tracep->fullCData(oldp+1996,(vlSelf->RID),4);
        tracep->fullQData(oldp+1997,(vlSelf->RDATA),64);
        tracep->fullCData(oldp+1999,(vlSelf->RRESP),2);
        tracep->fullBit(oldp+2000,(vlSelf->RLAST));
        tracep->fullBit(oldp+2001,(vlSelf->RVALID));
        tracep->fullBit(oldp+2002,(vlSelf->RREADY));
        tracep->fullCData(oldp+2003,(vlSelf->ARID),4);
        tracep->fullIData(oldp+2004,(((1U & (IData)(
                                                    (vlSelf->my_cpu__DOT__ID_IF_Bus 
                                                     >> 0x20U)))
                                       ? (IData)(vlSelf->my_cpu__DOT__ID_IF_Bus)
                                       : ((IData)(4U) 
                                          + vlSelf->inst_addr))),32);
        tracep->fullQData(oldp+2005,(((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_sign_flag)
                                       ? (QData)((IData)(
                                                         ((IData)(1U) 
                                                          + 
                                                          (~ (IData)(vlSelf->Inst_Src1_forwarding)))))
                                       : (QData)((IData)(vlSelf->Inst_Src1_forwarding)))),64);
        tracep->fullQData(oldp+2007,(((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_sign_flag)
                                       ? (QData)((IData)(
                                                         ((IData)(1U) 
                                                          + 
                                                          (~ (IData)(vlSelf->Inst_Src2_forwarding)))))
                                       : (QData)((IData)(vlSelf->Inst_Src2_forwarding)))),64);
        if (((IData)(vlSelf->inst_read_req) & (vlSelf->inst_addr 
                                               == vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_addr))) {
            __Vtemp1185[0U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0U];
            __Vtemp1185[1U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[1U];
            __Vtemp1185[2U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[2U];
            __Vtemp1185[3U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[3U];
            __Vtemp1185[4U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[4U];
            __Vtemp1185[5U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[5U];
            __Vtemp1185[6U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[6U];
            __Vtemp1185[7U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[7U];
            __Vtemp1185[8U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[8U];
            __Vtemp1185[9U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[9U];
            __Vtemp1185[0xaU] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xaU];
            __Vtemp1185[0xbU] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xbU];
            __Vtemp1185[0xcU] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xcU];
            __Vtemp1185[0xdU] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xdU];
            __Vtemp1185[0xeU] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xeU];
            __Vtemp1185[0xfU] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xfU];
        } else {
            __Vtemp1185[0U] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0U];
            __Vtemp1185[1U] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[1U];
            __Vtemp1185[2U] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[2U];
            __Vtemp1185[3U] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[3U];
            __Vtemp1185[4U] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[4U];
            __Vtemp1185[5U] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[5U];
            __Vtemp1185[6U] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[6U];
            __Vtemp1185[7U] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[7U];
            __Vtemp1185[8U] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[8U];
            __Vtemp1185[9U] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[9U];
            __Vtemp1185[0xaU] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0xaU];
            __Vtemp1185[0xbU] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0xbU];
            __Vtemp1185[0xcU] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0xcU];
            __Vtemp1185[0xdU] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0xdU];
            __Vtemp1185[0xeU] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0xeU];
            __Vtemp1185[0xfU] = (IData)((vlSelf->RDATA 
                                         >> 0x20U));
        }
        tracep->fullWData(oldp+2009,(__Vtemp1185),512);
        tracep->fullBit(oldp+2025,(((((2U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__AXI_read_target)) 
                                      & (IData)(vlSelf->RVALID)) 
                                     & (IData)(vlSelf->RLAST)) 
                                    & (2U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_state)))));
        tracep->fullBit(oldp+2026,(((((1U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__AXI_read_target)) 
                                      & (IData)(vlSelf->RVALID)) 
                                     & (IData)(vlSelf->RLAST)) 
                                    & (2U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_state)))));
        VL_EXTEND_WQ(1024,64, __Vtemp1186, vlSelf->ext_ram_write_data);
        VL_SHIFTL_WWI(1024,1024,10, __Vtemp1187, __Vtemp1186, (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__total_shift_in));
        VL_EXTEND_WI(968,8, __Vtemp1188, (0xffU & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                 >> 7U))))));
        __Vtemp1191[0U] = (__Vtemp1187[0U] & (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                              >> 3U)))) 
                                               << 0x18U) 
                                              | ((0xff0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                    >> 2U)))) 
                                                     << 0x10U)) 
                                                 | ((0xff00U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                       >> 1U)))) 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->my_cpu__DOT__dcache_be_n)))))))));
        __Vtemp1191[1U] = (__Vtemp1187[1U] & ((__Vtemp1188[0U] 
                                               << 0x18U) 
                                              | ((0xff0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                    >> 6U)))) 
                                                     << 0x10U)) 
                                                 | ((0xff00U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                       >> 5U)))) 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                        >> 4U)))))))));
        __Vtemp1191[2U] = (__Vtemp1187[2U] & ((__Vtemp1188[0U] 
                                               >> 8U) 
                                              | (__Vtemp1188[1U] 
                                                 << 0x18U)));
        __Vtemp1191[3U] = (__Vtemp1187[3U] & ((__Vtemp1188[1U] 
                                               >> 8U) 
                                              | (__Vtemp1188[2U] 
                                                 << 0x18U)));
        __Vtemp1191[4U] = (__Vtemp1187[4U] & ((__Vtemp1188[2U] 
                                               >> 8U) 
                                              | (__Vtemp1188[3U] 
                                                 << 0x18U)));
        __Vtemp1191[5U] = (__Vtemp1187[5U] & ((__Vtemp1188[3U] 
                                               >> 8U) 
                                              | (__Vtemp1188[4U] 
                                                 << 0x18U)));
        __Vtemp1191[6U] = (__Vtemp1187[6U] & ((__Vtemp1188[4U] 
                                               >> 8U) 
                                              | (__Vtemp1188[5U] 
                                                 << 0x18U)));
        __Vtemp1191[7U] = (__Vtemp1187[7U] & ((__Vtemp1188[5U] 
                                               >> 8U) 
                                              | (__Vtemp1188[6U] 
                                                 << 0x18U)));
        __Vtemp1191[8U] = (__Vtemp1187[8U] & ((__Vtemp1188[6U] 
                                               >> 8U) 
                                              | (__Vtemp1188[7U] 
                                                 << 0x18U)));
        __Vtemp1191[9U] = (__Vtemp1187[9U] & ((__Vtemp1188[7U] 
                                               >> 8U) 
                                              | (__Vtemp1188[8U] 
                                                 << 0x18U)));
        __Vtemp1191[0xaU] = (__Vtemp1187[0xaU] & ((
                                                   __Vtemp1188[8U] 
                                                   >> 8U) 
                                                  | (__Vtemp1188[9U] 
                                                     << 0x18U)));
        __Vtemp1191[0xbU] = (__Vtemp1187[0xbU] & ((
                                                   __Vtemp1188[9U] 
                                                   >> 8U) 
                                                  | (__Vtemp1188[0xaU] 
                                                     << 0x18U)));
        __Vtemp1191[0xcU] = (__Vtemp1187[0xcU] & ((
                                                   __Vtemp1188[0xaU] 
                                                   >> 8U) 
                                                  | (__Vtemp1188[0xbU] 
                                                     << 0x18U)));
        __Vtemp1191[0xdU] = (__Vtemp1187[0xdU] & ((
                                                   __Vtemp1188[0xbU] 
                                                   >> 8U) 
                                                  | (__Vtemp1188[0xcU] 
                                                     << 0x18U)));
        __Vtemp1191[0xeU] = (__Vtemp1187[0xeU] & ((
                                                   __Vtemp1188[0xcU] 
                                                   >> 8U) 
                                                  | (__Vtemp1188[0xdU] 
                                                     << 0x18U)));
        __Vtemp1191[0xfU] = (__Vtemp1187[0xfU] & ((
                                                   __Vtemp1188[0xdU] 
                                                   >> 8U) 
                                                  | (__Vtemp1188[0xeU] 
                                                     << 0x18U)));
        __Vtemp1191[0x10U] = (__Vtemp1187[0x10U] & 
                              ((__Vtemp1188[0xeU] >> 8U) 
                               | (__Vtemp1188[0xfU] 
                                  << 0x18U)));
        __Vtemp1191[0x11U] = (__Vtemp1187[0x11U] & 
                              ((__Vtemp1188[0xfU] >> 8U) 
                               | (__Vtemp1188[0x10U] 
                                  << 0x18U)));
        __Vtemp1191[0x12U] = (__Vtemp1187[0x12U] & 
                              ((__Vtemp1188[0x10U] 
                                >> 8U) | (__Vtemp1188[0x11U] 
                                          << 0x18U)));
        __Vtemp1191[0x13U] = (__Vtemp1187[0x13U] & 
                              ((__Vtemp1188[0x11U] 
                                >> 8U) | (__Vtemp1188[0x12U] 
                                          << 0x18U)));
        __Vtemp1191[0x14U] = (__Vtemp1187[0x14U] & 
                              ((__Vtemp1188[0x12U] 
                                >> 8U) | (__Vtemp1188[0x13U] 
                                          << 0x18U)));
        __Vtemp1191[0x15U] = (__Vtemp1187[0x15U] & 
                              ((__Vtemp1188[0x13U] 
                                >> 8U) | (__Vtemp1188[0x14U] 
                                          << 0x18U)));
        __Vtemp1191[0x16U] = (__Vtemp1187[0x16U] & 
                              ((__Vtemp1188[0x14U] 
                                >> 8U) | (__Vtemp1188[0x15U] 
                                          << 0x18U)));
        __Vtemp1191[0x17U] = (__Vtemp1187[0x17U] & 
                              ((__Vtemp1188[0x15U] 
                                >> 8U) | (__Vtemp1188[0x16U] 
                                          << 0x18U)));
        __Vtemp1191[0x18U] = (__Vtemp1187[0x18U] & 
                              ((__Vtemp1188[0x16U] 
                                >> 8U) | (__Vtemp1188[0x17U] 
                                          << 0x18U)));
        __Vtemp1191[0x19U] = (__Vtemp1187[0x19U] & 
                              ((__Vtemp1188[0x17U] 
                                >> 8U) | (__Vtemp1188[0x18U] 
                                          << 0x18U)));
        __Vtemp1191[0x1aU] = (__Vtemp1187[0x1aU] & 
                              ((__Vtemp1188[0x18U] 
                                >> 8U) | (__Vtemp1188[0x19U] 
                                          << 0x18U)));
        __Vtemp1191[0x1bU] = (__Vtemp1187[0x1bU] & 
                              ((__Vtemp1188[0x19U] 
                                >> 8U) | (__Vtemp1188[0x1aU] 
                                          << 0x18U)));
        __Vtemp1191[0x1cU] = (__Vtemp1187[0x1cU] & 
                              ((__Vtemp1188[0x1aU] 
                                >> 8U) | (__Vtemp1188[0x1bU] 
                                          << 0x18U)));
        __Vtemp1191[0x1dU] = (__Vtemp1187[0x1dU] & 
                              ((__Vtemp1188[0x1bU] 
                                >> 8U) | (__Vtemp1188[0x1cU] 
                                          << 0x18U)));
        __Vtemp1191[0x1eU] = (__Vtemp1187[0x1eU] & 
                              ((__Vtemp1188[0x1cU] 
                                >> 8U) | (__Vtemp1188[0x1dU] 
                                          << 0x18U)));
        __Vtemp1191[0x1fU] = (__Vtemp1187[0x1fU] & 
                              ((__Vtemp1188[0x1dU] 
                                >> 8U) | (__Vtemp1188[0x1eU] 
                                          << 0x18U)));
        VL_SHIFTL_WWI(1024,1024,10, __Vtemp1192, __Vtemp1191, 
                      (0x3c0U & (vlSelf->ext_ram_addr 
                                 << 3U)));
        tracep->fullWData(oldp+2027,(__Vtemp1192),1024);
        VL_EXTEND_WI(992,32, __Vtemp1193, (((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                           >> 7U)))) 
                                            << 0x18U) 
                                           | ((0xff0000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                 >> 6U)))) 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                    >> 5U)))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                     >> 4U)))))))));
        __Vtemp1194[0U] = (((- (IData)((1U & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                              >> 3U)))) 
                            << 0x18U) | ((0xff0000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                            >> 2U)))) 
                                             << 0x10U)) 
                                         | ((0xff00U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                               >> 1U)))) 
                                                << 8U)) 
                                            | (0xffU 
                                               & (- (IData)(
                                                            (1U 
                                                             & (IData)(vlSelf->my_cpu__DOT__dcache_be_n))))))));
        __Vtemp1194[1U] = __Vtemp1193[0U];
        __Vtemp1194[2U] = __Vtemp1193[1U];
        __Vtemp1194[3U] = __Vtemp1193[2U];
        __Vtemp1194[4U] = __Vtemp1193[3U];
        __Vtemp1194[5U] = __Vtemp1193[4U];
        __Vtemp1194[6U] = __Vtemp1193[5U];
        __Vtemp1194[7U] = __Vtemp1193[6U];
        __Vtemp1194[8U] = __Vtemp1193[7U];
        __Vtemp1194[9U] = __Vtemp1193[8U];
        __Vtemp1194[0xaU] = __Vtemp1193[9U];
        __Vtemp1194[0xbU] = __Vtemp1193[0xaU];
        __Vtemp1194[0xcU] = __Vtemp1193[0xbU];
        __Vtemp1194[0xdU] = __Vtemp1193[0xcU];
        __Vtemp1194[0xeU] = __Vtemp1193[0xdU];
        __Vtemp1194[0xfU] = __Vtemp1193[0xeU];
        __Vtemp1194[0x10U] = __Vtemp1193[0xfU];
        __Vtemp1194[0x11U] = __Vtemp1193[0x10U];
        __Vtemp1194[0x12U] = __Vtemp1193[0x11U];
        __Vtemp1194[0x13U] = __Vtemp1193[0x12U];
        __Vtemp1194[0x14U] = __Vtemp1193[0x13U];
        __Vtemp1194[0x15U] = __Vtemp1193[0x14U];
        __Vtemp1194[0x16U] = __Vtemp1193[0x15U];
        __Vtemp1194[0x17U] = __Vtemp1193[0x16U];
        __Vtemp1194[0x18U] = __Vtemp1193[0x17U];
        __Vtemp1194[0x19U] = __Vtemp1193[0x18U];
        __Vtemp1194[0x1aU] = __Vtemp1193[0x19U];
        __Vtemp1194[0x1bU] = __Vtemp1193[0x1aU];
        __Vtemp1194[0x1cU] = __Vtemp1193[0x1bU];
        __Vtemp1194[0x1dU] = __Vtemp1193[0x1cU];
        __Vtemp1194[0x1eU] = __Vtemp1193[0x1dU];
        __Vtemp1194[0x1fU] = __Vtemp1193[0x1eU];
        VL_SHIFTL_WWI(1024,1024,10, __Vtemp1195, __Vtemp1194, 
                      (0x3c0U & (vlSelf->ext_ram_addr 
                                 << 3U)));
        __Vtemp1197[0U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0U] 
                           & (~ __Vtemp1195[0U]));
        __Vtemp1197[1U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[1U] 
                           & (~ __Vtemp1195[1U]));
        __Vtemp1197[2U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[2U] 
                           & (~ __Vtemp1195[2U]));
        __Vtemp1197[3U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[3U] 
                           & (~ __Vtemp1195[3U]));
        __Vtemp1197[4U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[4U] 
                           & (~ __Vtemp1195[4U]));
        __Vtemp1197[5U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[5U] 
                           & (~ __Vtemp1195[5U]));
        __Vtemp1197[6U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[6U] 
                           & (~ __Vtemp1195[6U]));
        __Vtemp1197[7U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[7U] 
                           & (~ __Vtemp1195[7U]));
        __Vtemp1197[8U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[8U] 
                           & (~ __Vtemp1195[8U]));
        __Vtemp1197[9U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[9U] 
                           & (~ __Vtemp1195[9U]));
        __Vtemp1197[0xaU] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xaU] 
                             & (~ __Vtemp1195[0xaU]));
        __Vtemp1197[0xbU] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xbU] 
                             & (~ __Vtemp1195[0xbU]));
        __Vtemp1197[0xcU] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xcU] 
                             & (~ __Vtemp1195[0xcU]));
        __Vtemp1197[0xdU] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xdU] 
                             & (~ __Vtemp1195[0xdU]));
        __Vtemp1197[0xeU] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xeU] 
                             & (~ __Vtemp1195[0xeU]));
        __Vtemp1197[0xfU] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xfU] 
                             & (~ __Vtemp1195[0xfU]));
        __Vtemp1197[0x10U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x10U] 
                              & (~ __Vtemp1195[0x10U]));
        __Vtemp1197[0x11U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x11U] 
                              & (~ __Vtemp1195[0x11U]));
        __Vtemp1197[0x12U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x12U] 
                              & (~ __Vtemp1195[0x12U]));
        __Vtemp1197[0x13U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x13U] 
                              & (~ __Vtemp1195[0x13U]));
        __Vtemp1197[0x14U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x14U] 
                              & (~ __Vtemp1195[0x14U]));
        __Vtemp1197[0x15U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x15U] 
                              & (~ __Vtemp1195[0x15U]));
        __Vtemp1197[0x16U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x16U] 
                              & (~ __Vtemp1195[0x16U]));
        __Vtemp1197[0x17U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x17U] 
                              & (~ __Vtemp1195[0x17U]));
        __Vtemp1197[0x18U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x18U] 
                              & (~ __Vtemp1195[0x18U]));
        __Vtemp1197[0x19U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x19U] 
                              & (~ __Vtemp1195[0x19U]));
        __Vtemp1197[0x1aU] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1aU] 
                              & (~ __Vtemp1195[0x1aU]));
        __Vtemp1197[0x1bU] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1bU] 
                              & (~ __Vtemp1195[0x1bU]));
        __Vtemp1197[0x1cU] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1cU] 
                              & (~ __Vtemp1195[0x1cU]));
        __Vtemp1197[0x1dU] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1dU] 
                              & (~ __Vtemp1195[0x1dU]));
        __Vtemp1197[0x1eU] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1eU] 
                              & (~ __Vtemp1195[0x1eU]));
        __Vtemp1197[0x1fU] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1fU] 
                              & (~ __Vtemp1195[0x1fU]));
        tracep->fullWData(oldp+2059,(__Vtemp1197),1024);
        VL_EXTEND_WI(992,32, __Vtemp1199, (((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                           >> 7U)))) 
                                            << 0x18U) 
                                           | ((0xff0000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                 >> 6U)))) 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                    >> 5U)))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                     >> 4U)))))))));
        __Vtemp1200[0U] = (((- (IData)((1U & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                              >> 3U)))) 
                            << 0x18U) | ((0xff0000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                            >> 2U)))) 
                                             << 0x10U)) 
                                         | ((0xff00U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                               >> 1U)))) 
                                                << 8U)) 
                                            | (0xffU 
                                               & (- (IData)(
                                                            (1U 
                                                             & (IData)(vlSelf->my_cpu__DOT__dcache_be_n))))))));
        __Vtemp1200[1U] = __Vtemp1199[0U];
        __Vtemp1200[2U] = __Vtemp1199[1U];
        __Vtemp1200[3U] = __Vtemp1199[2U];
        __Vtemp1200[4U] = __Vtemp1199[3U];
        __Vtemp1200[5U] = __Vtemp1199[4U];
        __Vtemp1200[6U] = __Vtemp1199[5U];
        __Vtemp1200[7U] = __Vtemp1199[6U];
        __Vtemp1200[8U] = __Vtemp1199[7U];
        __Vtemp1200[9U] = __Vtemp1199[8U];
        __Vtemp1200[0xaU] = __Vtemp1199[9U];
        __Vtemp1200[0xbU] = __Vtemp1199[0xaU];
        __Vtemp1200[0xcU] = __Vtemp1199[0xbU];
        __Vtemp1200[0xdU] = __Vtemp1199[0xcU];
        __Vtemp1200[0xeU] = __Vtemp1199[0xdU];
        __Vtemp1200[0xfU] = __Vtemp1199[0xeU];
        __Vtemp1200[0x10U] = __Vtemp1199[0xfU];
        __Vtemp1200[0x11U] = __Vtemp1199[0x10U];
        __Vtemp1200[0x12U] = __Vtemp1199[0x11U];
        __Vtemp1200[0x13U] = __Vtemp1199[0x12U];
        __Vtemp1200[0x14U] = __Vtemp1199[0x13U];
        __Vtemp1200[0x15U] = __Vtemp1199[0x14U];
        __Vtemp1200[0x16U] = __Vtemp1199[0x15U];
        __Vtemp1200[0x17U] = __Vtemp1199[0x16U];
        __Vtemp1200[0x18U] = __Vtemp1199[0x17U];
        __Vtemp1200[0x19U] = __Vtemp1199[0x18U];
        __Vtemp1200[0x1aU] = __Vtemp1199[0x19U];
        __Vtemp1200[0x1bU] = __Vtemp1199[0x1aU];
        __Vtemp1200[0x1cU] = __Vtemp1199[0x1bU];
        __Vtemp1200[0x1dU] = __Vtemp1199[0x1cU];
        __Vtemp1200[0x1eU] = __Vtemp1199[0x1dU];
        __Vtemp1200[0x1fU] = __Vtemp1199[0x1eU];
        VL_SHIFTL_WWI(1024,1024,10, __Vtemp1201, __Vtemp1200, 
                      (0x3c0U & (vlSelf->ext_ram_addr 
                                 << 3U)));
        __Vtemp1203[0U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                           [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0U] 
                           & (~ __Vtemp1201[0U]));
        __Vtemp1203[1U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                           [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][1U] 
                           & (~ __Vtemp1201[1U]));
        __Vtemp1203[2U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                           [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][2U] 
                           & (~ __Vtemp1201[2U]));
        __Vtemp1203[3U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                           [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][3U] 
                           & (~ __Vtemp1201[3U]));
        __Vtemp1203[4U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                           [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][4U] 
                           & (~ __Vtemp1201[4U]));
        __Vtemp1203[5U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                           [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][5U] 
                           & (~ __Vtemp1201[5U]));
        __Vtemp1203[6U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                           [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][6U] 
                           & (~ __Vtemp1201[6U]));
        __Vtemp1203[7U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                           [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][7U] 
                           & (~ __Vtemp1201[7U]));
        __Vtemp1203[8U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                           [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][8U] 
                           & (~ __Vtemp1201[8U]));
        __Vtemp1203[9U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                           [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][9U] 
                           & (~ __Vtemp1201[9U]));
        __Vtemp1203[0xaU] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                             [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xaU] 
                             & (~ __Vtemp1201[0xaU]));
        __Vtemp1203[0xbU] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                             [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xbU] 
                             & (~ __Vtemp1201[0xbU]));
        __Vtemp1203[0xcU] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                             [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xcU] 
                             & (~ __Vtemp1201[0xcU]));
        __Vtemp1203[0xdU] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                             [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xdU] 
                             & (~ __Vtemp1201[0xdU]));
        __Vtemp1203[0xeU] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                             [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xeU] 
                             & (~ __Vtemp1201[0xeU]));
        __Vtemp1203[0xfU] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                             [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xfU] 
                             & (~ __Vtemp1201[0xfU]));
        __Vtemp1203[0x10U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x10U] 
                              & (~ __Vtemp1201[0x10U]));
        __Vtemp1203[0x11U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x11U] 
                              & (~ __Vtemp1201[0x11U]));
        __Vtemp1203[0x12U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x12U] 
                              & (~ __Vtemp1201[0x12U]));
        __Vtemp1203[0x13U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x13U] 
                              & (~ __Vtemp1201[0x13U]));
        __Vtemp1203[0x14U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x14U] 
                              & (~ __Vtemp1201[0x14U]));
        __Vtemp1203[0x15U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x15U] 
                              & (~ __Vtemp1201[0x15U]));
        __Vtemp1203[0x16U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x16U] 
                              & (~ __Vtemp1201[0x16U]));
        __Vtemp1203[0x17U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x17U] 
                              & (~ __Vtemp1201[0x17U]));
        __Vtemp1203[0x18U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x18U] 
                              & (~ __Vtemp1201[0x18U]));
        __Vtemp1203[0x19U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x19U] 
                              & (~ __Vtemp1201[0x19U]));
        __Vtemp1203[0x1aU] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1aU] 
                              & (~ __Vtemp1201[0x1aU]));
        __Vtemp1203[0x1bU] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1bU] 
                              & (~ __Vtemp1201[0x1bU]));
        __Vtemp1203[0x1cU] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1cU] 
                              & (~ __Vtemp1201[0x1cU]));
        __Vtemp1203[0x1dU] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1dU] 
                              & (~ __Vtemp1201[0x1dU]));
        __Vtemp1203[0x1eU] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1eU] 
                              & (~ __Vtemp1201[0x1eU]));
        __Vtemp1203[0x1fU] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1fU] 
                              & (~ __Vtemp1201[0x1fU]));
        tracep->fullWData(oldp+2091,(__Vtemp1203),1024);
        tracep->fullSData(oldp+2123,((0x3c0U & (vlSelf->ext_ram_addr 
                                                << 3U))),10);
        tracep->fullQData(oldp+2124,((vlSelf->RDATA 
                                      & (~ (((QData)((IData)(
                                                             (((- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                              >> 7U)))) 
                                                               << 0x18U) 
                                                              | ((0xff0000U 
                                                                  & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                                >> 6U)))) 
                                                                     << 0x10U)) 
                                                                 | ((0xff00U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                                >> 5U)))) 
                                                                        << 8U)) 
                                                                    | (0xffU 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                                >> 4U)))))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                               >> 3U)))) 
                                                                << 0x18U) 
                                                               | ((0xff0000U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                                >> 2U)))) 
                                                                      << 0x10U)) 
                                                                  | ((0xff00U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                                >> 1U)))) 
                                                                         << 8U)) 
                                                                     | (0xffU 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->my_cpu__DOT__dcache_be_n)))))))))))))),64);
        __Vtemp1204[0U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0U];
        __Vtemp1204[1U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][1U];
        __Vtemp1204[2U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][2U];
        __Vtemp1204[3U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][3U];
        __Vtemp1204[4U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][4U];
        __Vtemp1204[5U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][5U];
        __Vtemp1204[6U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][6U];
        __Vtemp1204[7U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][7U];
        __Vtemp1204[8U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][8U];
        __Vtemp1204[9U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][9U];
        __Vtemp1204[0xaU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xaU];
        __Vtemp1204[0xbU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xbU];
        __Vtemp1204[0xcU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xcU];
        __Vtemp1204[0xdU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xdU];
        __Vtemp1204[0xeU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xeU];
        __Vtemp1204[0xfU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xfU];
        __Vtemp1204[0x10U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x10U];
        __Vtemp1204[0x11U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x11U];
        __Vtemp1204[0x12U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x12U];
        __Vtemp1204[0x13U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x13U];
        __Vtemp1204[0x14U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x14U];
        __Vtemp1204[0x15U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x15U];
        __Vtemp1204[0x16U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x16U];
        __Vtemp1204[0x17U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x17U];
        __Vtemp1204[0x18U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x18U];
        __Vtemp1204[0x19U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x19U];
        __Vtemp1204[0x1aU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1aU];
        __Vtemp1204[0x1bU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1bU];
        __Vtemp1204[0x1cU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1cU];
        __Vtemp1204[0x1dU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1dU];
        __Vtemp1204[0x1eU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1eU];
        __Vtemp1204[0x1fU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1fU];
        tracep->fullQData(oldp+2126,(((((QData)((IData)(
                                                        __Vtemp1204[
                                                        (((IData)(0x3fU) 
                                                          + 
                                                          (0x3c0U 
                                                           & (vlSelf->ext_ram_addr 
                                                              << 3U))) 
                                                         >> 5U)])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp1204[
                                                                    (0x1eU 
                                                                     & (vlSelf->ext_ram_addr 
                                                                        >> 2U))]))) 
                                      & (~ (((QData)((IData)(
                                                             (((- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                              >> 7U)))) 
                                                               << 0x18U) 
                                                              | ((0xff0000U 
                                                                  & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                                >> 6U)))) 
                                                                     << 0x10U)) 
                                                                 | ((0xff00U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                                >> 5U)))) 
                                                                        << 8U)) 
                                                                    | (0xffU 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                                >> 4U)))))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                               >> 3U)))) 
                                                                << 0x18U) 
                                                               | ((0xff0000U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                                >> 2U)))) 
                                                                      << 0x10U)) 
                                                                  | ((0xff00U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                                >> 1U)))) 
                                                                         << 8U)) 
                                                                     | (0xffU 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->my_cpu__DOT__dcache_be_n)))))))))))))),64);
        tracep->fullCData(oldp+2128,(0U),3);
        tracep->fullWData(oldp+2129,(vlSelf->my_cpu__DOT__WB_ID_Bus),71);
        tracep->fullWData(oldp+2132,(vlSelf->my_cpu__DOT__MEM_WB_Bus),500);
        tracep->fullQData(oldp+2148,(vlSelf->my_cpu__DOT__IF_src1_data),64);
        tracep->fullCData(oldp+2150,(vlSelf->my_cpu__DOT__src1_addr),5);
        tracep->fullQData(oldp+2151,(vlSelf->my_cpu__DOT__IF_src2_data),64);
        tracep->fullCData(oldp+2153,(vlSelf->my_cpu__DOT__src2_addr),5);
        tracep->fullWData(oldp+2154,(vlSelf->my_cpu__DOT__ID__DOT__EX_ID_Bus_reg),70);
        tracep->fullWData(oldp+2157,(vlSelf->my_cpu__DOT__ID__DOT__MEM_ID_Bus_reg),70);
        tracep->fullWData(oldp+2160,(vlSelf->my_cpu__DOT__ID__DOT__WB_ID_Bus_reg),71);
        tracep->fullQData(oldp+2163,(vlSelf->my_cpu__DOT__ID__DOT__ID_data),64);
        tracep->fullQData(oldp+2165,(vlSelf->my_cpu__DOT__ID__DOT__IF_Src1_Read),64);
        tracep->fullQData(oldp+2167,(vlSelf->my_cpu__DOT__ID__DOT__IF_Src2_Read),64);
        tracep->fullCData(oldp+2169,(0x11U),5);
        tracep->fullQData(oldp+2170,(0xbULL),64);
        tracep->fullSData(oldp+2172,(vlSelf->my_cpu__DOT__EX__DOT__compare_OneHot),11);
        tracep->fullQData(oldp+2173,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__divu_result),64);
        tracep->fullWData(oldp+2175,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul_result),128);
        tracep->fullWData(oldp+2179,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mulh_result),128);
        tracep->fullWData(oldp+2183,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mulhsu_result),128);
        tracep->fullWData(oldp+2187,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mulhu_result),128);
        tracep->fullQData(oldp+2191,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mulw_result),64);
        tracep->fullQData(oldp+2193,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__divw_result),64);
        tracep->fullQData(oldp+2195,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__divuw_result),64);
        tracep->fullQData(oldp+2197,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__remw_result),64);
        tracep->fullQData(oldp+2199,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__remuw_result),64);
        tracep->fullQData(oldp+2201,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__remu_result),64);
        tracep->fullBit(oldp+2203,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__clk));
        tracep->fullBit(oldp+2204,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__rst));
        tracep->fullBit(oldp+2205,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_ready));
        tracep->fullBit(oldp+2206,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_valid));
        tracep->fullQData(oldp+2207,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__src2),64);
        tracep->fullCData(oldp+2209,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_state),3);
        tracep->fullCData(oldp+2210,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result_index),7);
        tracep->fullWData(oldp+2211,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__sub_data),65);
        tracep->fullBit(oldp+2214,(1U));
        tracep->fullSData(oldp+2215,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__offset),10);
        tracep->fullCData(oldp+2216,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__index_replace_real),4);
        tracep->fullSData(oldp+2217,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__write_offset),11);
        tracep->fullBit(oldp+2218,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_write_ready));
        tracep->fullBit(oldp+2219,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_read_ready));
    }
}
