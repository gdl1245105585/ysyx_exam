// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmy_cpu.h for the primary calling header

#include "Vmy_cpu___024root.h"
#include "Vmy_cpu__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void set_vmem_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vmy_cpu___024root____Vdpiimwrap_my_cpu__DOT__mmio__DOT__set_vmem_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 120000> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root____Vdpiimwrap_my_cpu__DOT__mmio__DOT__set_vmem_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {119999, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_vmem_ptr(&a__Vopenarray);
}

extern const VlUnpacked<CData/*0:0*/, 256> Vmy_cpu__ConstPool__TABLE_21af77e1_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vmy_cpu__ConstPool__TABLE_150325f4_0;
extern const VlWide<16>/*511:0*/ Vmy_cpu__ConstPool__CONST_93e1b771_0;
extern const VlWide<32>/*1023:0*/ Vmy_cpu__ConstPool__CONST_d6b7ba52_0;

VL_INLINE_OPT void Vmy_cpu___024root___sequent__TOP__2(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx1;
    CData/*0:0*/ __Vdlyvset__my_cpu__DOT__mmio__DOT__vmem__v0;
    CData/*0:0*/ __Vdlyvset__my_cpu__DOT__mmio__DOT__vmem__v1;
    CData/*0:0*/ __Vdly__my_cpu__DOT__ID__DOT__jump_flag;
    CData/*4:0*/ __Vdlyvdim0__my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf__v0;
    CData/*0:0*/ __Vdly__my_cpu__DOT__ID__DOT__csr__DOT__time_interrupt_flag;
    CData/*0:0*/ __Vdlyvset__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v0;
    CData/*3:0*/ __Vdlyvdim0__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v16;
    CData/*0:0*/ __Vdlyvset__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v16;
    CData/*3:0*/ __Vdlyvdim0__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v17;
    CData/*0:0*/ __Vdlyvset__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v17;
    CData/*0:0*/ __Vdlyvset__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v18;
    CData/*0:0*/ __Vdlyvset__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v20;
    CData/*3:0*/ __Vdly__my_cpu__DOT__cache__DOT__read_index;
    CData/*2:0*/ __Vdly__my_cpu__DOT__cache__DOT__read_state;
    CData/*3:0*/ __Vdly__my_cpu__DOT__cache__DOT__write_state;
    CData/*3:0*/ __Vdly__my_cpu__DOT__cache__DOT__write_index;
    CData/*3:0*/ __Vdly__my_cpu__DOT__cache__DOT__Icache__DOT__replace_index;
    CData/*0:0*/ __Vdlyvset__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v0;
    CData/*1:0*/ __Vdly__my_cpu__DOT__cache__DOT__Icache__DOT__icache_state;
    CData/*0:0*/ __Vdlyvset__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v1;
    CData/*3:0*/ __Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v16;
    CData/*0:0*/ __Vdlyvset__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v16;
    CData/*3:0*/ __Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__tag__v16;
    CData/*0:0*/ __Vdlyvset__my_cpu__DOT__cache__DOT__Icache__DOT__tag__v16;
    CData/*3:0*/ __Vdly__my_cpu__DOT__cache__DOT__Icache__DOT__index_in;
    CData/*3:0*/ __Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17;
    CData/*0:0*/ __Vdlyvset__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17;
    CData/*3:0*/ __Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__tag__v17;
    CData/*3:0*/ __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index;
    CData/*0:0*/ __Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v0;
    CData/*0:0*/ __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__indata_target;
    CData/*1:0*/ __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__dcache_state;
    CData/*3:0*/ __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index_already_write;
    CData/*0:0*/ __Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v1;
    CData/*3:0*/ __Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v16;
    CData/*0:0*/ __Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v16;
    CData/*3:0*/ __Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16;
    CData/*3:0*/ __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__write_index;
    CData/*3:0*/ __Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v17;
    CData/*0:0*/ __Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v17;
    CData/*3:0*/ __Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17;
    CData/*3:0*/ __Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v18;
    CData/*0:0*/ __Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v18;
    CData/*3:0*/ __Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v18;
    CData/*0:0*/ __Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v18;
    CData/*3:0*/ __Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v19;
    CData/*0:0*/ __Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v19;
    CData/*3:0*/ __Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v20;
    CData/*0:0*/ __Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v20;
    SData/*8:0*/ __Vdlyvlsb__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v16;
    SData/*15:0*/ __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__dirty_flag;
    SData/*10:0*/ __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__offset;
    SData/*9:0*/ __Vdlyvlsb__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v18;
    SData/*9:0*/ __Vdlyvlsb__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v19;
    SData/*9:0*/ __Vdlyvlsb__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v20;
    IData/*16:0*/ __Vdlyvdim0__my_cpu__DOT__mmio__DOT__vmem__v0;
    IData/*31:0*/ __Vdlyvval__my_cpu__DOT__mmio__DOT__vmem__v0;
    IData/*16:0*/ __Vdlyvdim0__my_cpu__DOT__mmio__DOT__vmem__v1;
    IData/*31:0*/ __Vdlyvval__my_cpu__DOT__mmio__DOT__vmem__v1;
    IData/*31:0*/ __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v16;
    IData/*25:0*/ __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__tag__v16;
    VlWide<16>/*511:0*/ __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17;
    IData/*25:0*/ __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__tag__v17;
    IData/*24:0*/ __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v16;
    VlWide<32>/*1023:0*/ __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16;
    IData/*24:0*/ __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v17;
    VlWide<32>/*1023:0*/ __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17;
    IData/*24:0*/ __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v18;
    VlWide<31>/*991:0*/ __Vtemp2;
    VlWide<32>/*1023:0*/ __Vtemp3;
    VlWide<32>/*1023:0*/ __Vtemp4;
    VlWide<32>/*1023:0*/ __Vtemp7;
    VlWide<32>/*1023:0*/ __Vtemp8;
    VlWide<31>/*991:0*/ __Vtemp9;
    VlWide<32>/*1023:0*/ __Vtemp12;
    VlWide<32>/*1023:0*/ __Vtemp13;
    VlWide<32>/*1023:0*/ __Vtemp15;
    VlWide<5>/*159:0*/ __Vtemp31;
    VlWide<5>/*159:0*/ __Vtemp33;
    VlWide<5>/*159:0*/ __Vtemp34;
    VlWide<5>/*159:0*/ __Vtemp35;
    VlWide<5>/*159:0*/ __Vtemp36;
    VlWide<10>/*319:0*/ __Vtemp37;
    VlWide<10>/*319:0*/ __Vtemp39;
    VlWide<3>/*95:0*/ __Vtemp40;
    VlWide<16>/*511:0*/ __Vtemp43;
    VlWide<3>/*95:0*/ __Vtemp45;
    VlWide<3>/*95:0*/ __Vtemp46;
    VlWide<3>/*95:0*/ __Vtemp47;
    VlWide<4>/*127:0*/ __Vtemp50;
    VlWide<3>/*95:0*/ __Vtemp51;
    VlWide<4>/*127:0*/ __Vtemp52;
    VlWide<4>/*127:0*/ __Vtemp53;
    VlWide<3>/*95:0*/ __Vtemp54;
    VlWide<4>/*127:0*/ __Vtemp55;
    VlWide<4>/*127:0*/ __Vtemp56;
    VlWide<4>/*127:0*/ __Vtemp57;
    VlWide<4>/*127:0*/ __Vtemp58;
    VlWide<3>/*95:0*/ __Vtemp59;
    VlWide<3>/*95:0*/ __Vtemp65;
    VlWide<3>/*95:0*/ __Vtemp66;
    VlWide<3>/*95:0*/ __Vtemp67;
    VlWide<3>/*95:0*/ __Vtemp68;
    VlWide<3>/*95:0*/ __Vtemp69;
    VlWide<4>/*127:0*/ __Vtemp71;
    VlWide<4>/*127:0*/ __Vtemp72;
    VlWide<4>/*127:0*/ __Vtemp73;
    VlWide<3>/*95:0*/ __Vtemp77;
    VlWide<3>/*95:0*/ __Vtemp78;
    VlWide<3>/*95:0*/ __Vtemp85;
    VlWide<3>/*95:0*/ __Vtemp86;
    VlWide<3>/*95:0*/ __Vtemp93;
    VlWide<3>/*95:0*/ __Vtemp94;
    VlWide<32>/*1023:0*/ __Vtemp96;
    VlWide<3>/*95:0*/ __Vtemp102;
    VlWide<3>/*95:0*/ __Vtemp103;
    VlWide<3>/*95:0*/ __Vtemp110;
    VlWide<3>/*95:0*/ __Vtemp111;
    VlWide<3>/*95:0*/ __Vtemp118;
    VlWide<3>/*95:0*/ __Vtemp119;
    VlWide<3>/*95:0*/ __Vtemp126;
    VlWide<3>/*95:0*/ __Vtemp127;
    VlWide<3>/*95:0*/ __Vtemp134;
    VlWide<3>/*95:0*/ __Vtemp135;
    VlWide<3>/*95:0*/ __Vtemp142;
    VlWide<3>/*95:0*/ __Vtemp143;
    VlWide<3>/*95:0*/ __Vtemp150;
    VlWide<3>/*95:0*/ __Vtemp151;
    VlWide<3>/*95:0*/ __Vtemp158;
    VlWide<3>/*95:0*/ __Vtemp159;
    VlWide<3>/*95:0*/ __Vtemp166;
    VlWide<3>/*95:0*/ __Vtemp167;
    VlWide<3>/*95:0*/ __Vtemp174;
    VlWide<3>/*95:0*/ __Vtemp175;
    VlWide<3>/*95:0*/ __Vtemp182;
    VlWide<3>/*95:0*/ __Vtemp183;
    VlWide<3>/*95:0*/ __Vtemp190;
    VlWide<3>/*95:0*/ __Vtemp191;
    VlWide<3>/*95:0*/ __Vtemp198;
    VlWide<3>/*95:0*/ __Vtemp199;
    VlWide<3>/*95:0*/ __Vtemp206;
    VlWide<3>/*95:0*/ __Vtemp207;
    VlWide<3>/*95:0*/ __Vtemp214;
    VlWide<3>/*95:0*/ __Vtemp215;
    VlWide<3>/*95:0*/ __Vtemp222;
    VlWide<3>/*95:0*/ __Vtemp223;
    VlWide<3>/*95:0*/ __Vtemp230;
    VlWide<3>/*95:0*/ __Vtemp231;
    VlWide<3>/*95:0*/ __Vtemp238;
    VlWide<3>/*95:0*/ __Vtemp239;
    VlWide<3>/*95:0*/ __Vtemp246;
    VlWide<3>/*95:0*/ __Vtemp247;
    VlWide<3>/*95:0*/ __Vtemp254;
    VlWide<3>/*95:0*/ __Vtemp255;
    VlWide<3>/*95:0*/ __Vtemp262;
    VlWide<3>/*95:0*/ __Vtemp263;
    VlWide<3>/*95:0*/ __Vtemp270;
    VlWide<3>/*95:0*/ __Vtemp271;
    VlWide<3>/*95:0*/ __Vtemp278;
    VlWide<3>/*95:0*/ __Vtemp279;
    VlWide<3>/*95:0*/ __Vtemp286;
    VlWide<3>/*95:0*/ __Vtemp287;
    VlWide<3>/*95:0*/ __Vtemp294;
    VlWide<3>/*95:0*/ __Vtemp295;
    VlWide<3>/*95:0*/ __Vtemp302;
    VlWide<3>/*95:0*/ __Vtemp303;
    VlWide<3>/*95:0*/ __Vtemp310;
    VlWide<3>/*95:0*/ __Vtemp311;
    VlWide<3>/*95:0*/ __Vtemp318;
    VlWide<3>/*95:0*/ __Vtemp319;
    VlWide<3>/*95:0*/ __Vtemp326;
    VlWide<3>/*95:0*/ __Vtemp327;
    VlWide<3>/*95:0*/ __Vtemp334;
    VlWide<3>/*95:0*/ __Vtemp335;
    VlWide<3>/*95:0*/ __Vtemp342;
    VlWide<3>/*95:0*/ __Vtemp343;
    VlWide<3>/*95:0*/ __Vtemp350;
    VlWide<3>/*95:0*/ __Vtemp351;
    VlWide<3>/*95:0*/ __Vtemp358;
    VlWide<3>/*95:0*/ __Vtemp359;
    VlWide<3>/*95:0*/ __Vtemp366;
    VlWide<3>/*95:0*/ __Vtemp367;
    VlWide<3>/*95:0*/ __Vtemp374;
    VlWide<3>/*95:0*/ __Vtemp375;
    VlWide<3>/*95:0*/ __Vtemp382;
    VlWide<3>/*95:0*/ __Vtemp383;
    VlWide<3>/*95:0*/ __Vtemp390;
    VlWide<3>/*95:0*/ __Vtemp391;
    VlWide<3>/*95:0*/ __Vtemp398;
    VlWide<3>/*95:0*/ __Vtemp399;
    VlWide<3>/*95:0*/ __Vtemp406;
    VlWide<3>/*95:0*/ __Vtemp407;
    VlWide<3>/*95:0*/ __Vtemp414;
    VlWide<3>/*95:0*/ __Vtemp415;
    VlWide<3>/*95:0*/ __Vtemp422;
    VlWide<3>/*95:0*/ __Vtemp423;
    VlWide<3>/*95:0*/ __Vtemp430;
    VlWide<3>/*95:0*/ __Vtemp431;
    VlWide<3>/*95:0*/ __Vtemp438;
    VlWide<3>/*95:0*/ __Vtemp439;
    VlWide<3>/*95:0*/ __Vtemp446;
    VlWide<3>/*95:0*/ __Vtemp447;
    VlWide<3>/*95:0*/ __Vtemp454;
    VlWide<3>/*95:0*/ __Vtemp455;
    VlWide<3>/*95:0*/ __Vtemp462;
    VlWide<3>/*95:0*/ __Vtemp463;
    VlWide<3>/*95:0*/ __Vtemp470;
    VlWide<3>/*95:0*/ __Vtemp471;
    VlWide<3>/*95:0*/ __Vtemp478;
    VlWide<3>/*95:0*/ __Vtemp479;
    VlWide<3>/*95:0*/ __Vtemp486;
    VlWide<3>/*95:0*/ __Vtemp487;
    VlWide<3>/*95:0*/ __Vtemp494;
    VlWide<3>/*95:0*/ __Vtemp495;
    VlWide<3>/*95:0*/ __Vtemp502;
    VlWide<3>/*95:0*/ __Vtemp503;
    VlWide<3>/*95:0*/ __Vtemp510;
    VlWide<3>/*95:0*/ __Vtemp511;
    VlWide<3>/*95:0*/ __Vtemp518;
    VlWide<3>/*95:0*/ __Vtemp519;
    VlWide<3>/*95:0*/ __Vtemp526;
    VlWide<3>/*95:0*/ __Vtemp527;
    VlWide<3>/*95:0*/ __Vtemp534;
    VlWide<3>/*95:0*/ __Vtemp535;
    VlWide<3>/*95:0*/ __Vtemp542;
    VlWide<3>/*95:0*/ __Vtemp543;
    VlWide<3>/*95:0*/ __Vtemp550;
    VlWide<3>/*95:0*/ __Vtemp551;
    VlWide<3>/*95:0*/ __Vtemp558;
    VlWide<3>/*95:0*/ __Vtemp559;
    VlWide<3>/*95:0*/ __Vtemp566;
    VlWide<3>/*95:0*/ __Vtemp567;
    VlWide<3>/*95:0*/ __Vtemp574;
    VlWide<3>/*95:0*/ __Vtemp575;
    QData/*63:0*/ __Vdly__my_cpu__DOT__mmio__DOT__serial_read_data;
    QData/*63:0*/ __Vdlyvval__my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v16;
    QData/*63:0*/ __Vdlyvval__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v17;
    QData/*63:0*/ __Vdlyvval__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v18;
    QData/*63:0*/ __Vdlyvval__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v20;
    QData/*63:0*/ __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v18;
    QData/*63:0*/ __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v19;
    QData/*63:0*/ __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v20;
    // Body
    __Vdly__my_cpu__DOT__cache__DOT__Icache__DOT__replace_index 
        = vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__replace_index;
    __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index 
        = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index;
    __Vdly__my_cpu__DOT__cache__DOT__write_index = vlSelf->my_cpu__DOT__cache__DOT__write_index;
    __Vdly__my_cpu__DOT__cache__DOT__write_state = vlSelf->my_cpu__DOT__cache__DOT__write_state;
    __Vdly__my_cpu__DOT__cache__DOT__read_state = vlSelf->my_cpu__DOT__cache__DOT__read_state;
    __Vdly__my_cpu__DOT__ID__DOT__csr__DOT__time_interrupt_flag 
        = vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__time_interrupt_flag;
    __Vdly__my_cpu__DOT__cache__DOT__read_index = vlSelf->my_cpu__DOT__cache__DOT__read_index;
    __Vdlyvset__my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf__v0 = 0U;
    __Vdly__my_cpu__DOT__mmio__DOT__serial_read_data 
        = vlSelf->my_cpu__DOT__mmio__DOT__serial_read_data;
    __Vdly__my_cpu__DOT__cache__DOT__Icache__DOT__index_in 
        = vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__index_in;
    __Vdlyvset__my_cpu__DOT__cache__DOT__Icache__DOT__tag__v16 = 0U;
    __Vdly__my_cpu__DOT__cache__DOT__Icache__DOT__icache_state 
        = vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__icache_state;
    __Vdlyvset__my_cpu__DOT__mmio__DOT__vmem__v0 = 0U;
    __Vdlyvset__my_cpu__DOT__mmio__DOT__vmem__v1 = 0U;
    __Vdlyvset__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v0 = 0U;
    __Vdlyvset__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v16 = 0U;
    __Vdlyvset__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v17 = 0U;
    __Vdlyvset__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v18 = 0U;
    __Vdlyvset__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v20 = 0U;
    __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__write_index 
        = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__write_index;
    __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index_already_write 
        = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index_already_write;
    __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__indata_target 
        = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__indata_target;
    __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__offset 
        = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__offset;
    __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__dcache_state 
        = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__dcache_state;
    __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__dirty_flag 
        = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__dirty_flag;
    __Vdlyvset__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v16 = 0U;
    __Vdlyvset__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v0 = 0U;
    __Vdlyvset__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v1 = 0U;
    __Vdlyvset__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17 = 0U;
    __Vdly__my_cpu__DOT__ID__DOT__jump_flag = vlSelf->my_cpu__DOT__ID__DOT__jump_flag;
    __Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v18 = 0U;
    __Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v16 = 0U;
    __Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v17 = 0U;
    __Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v18 = 0U;
    __Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v19 = 0U;
    __Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v20 = 0U;
    __Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v0 = 0U;
    __Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v1 = 0U;
    if (vlSelf->rst) {
        vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__unnamedblk1__DOT__i = 0x10U;
    }
    if (vlSelf->rst) {
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__unnamedblk2__DOT__j = 0x10U;
    }
    if (vlSelf->rst) {
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__unnamedblk1__DOT__i = 0x10U;
    }
    if (vlSelf->rst) {
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__unnamedblk2__DOT__j = 0x10U;
    }
    if (vlSelf->rst) {
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__unnamedblk1__DOT__i = 0x10U;
    }
    if (vlSelf->rst) {
        vlSelf->my_cpu__DOT__mmio__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(1,32,32, 0x1d4c0U, vlSelf->my_cpu__DOT__mmio__DOT__unnamedblk1__DOT__i)) {
            vlSelf->my_cpu__DOT__mmio__DOT____Vlvbound1 = 0xffffffffU;
            if (VL_LIKELY((0x1d4bfU >= (0x1ffffU & vlSelf->my_cpu__DOT__mmio__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->my_cpu__DOT__mmio__DOT__vmem[(0x1ffffU 
                                                      & vlSelf->my_cpu__DOT__mmio__DOT__unnamedblk1__DOT__i)] 
                    = vlSelf->my_cpu__DOT__mmio__DOT____Vlvbound1;
            }
            vlSelf->my_cpu__DOT__mmio__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelf->my_cpu__DOT__mmio__DOT__unnamedblk1__DOT__i);
        }
    }
    if (vlSelf->rst) {
        vlSelf->my_cpu__DOT__cache__DOT__AXI_write_data = 0ULL;
    }
    if (vlSelf->rst) {
        vlSelf->my_cpu__DOT__mmio__DOT__vga_ctl_low_read_data = 0x190012cU;
    }
    if (vlSelf->rst) {
        __Vdly__my_cpu__DOT__cache__DOT__Icache__DOT__replace_index = 0U;
        __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index = 0U;
    } else {
        __Vdly__my_cpu__DOT__cache__DOT__Icache__DOT__replace_index 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__replace_index)));
        __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index)));
    }
    if (vlSelf->rst) {
        vlSelf->my_cpu__DOT__cache__DOT__AXI_write_addr = 0U;
    } else if (((IData)(vlSelf->ext_write_req) & (0U 
                                                  == (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_state)))) {
        vlSelf->my_cpu__DOT__cache__DOT__AXI_write_addr 
            = vlSelf->ext_write_addr;
    }
    if (vlSelf->rst) {
        __Vdly__my_cpu__DOT__cache__DOT__write_index = 0U;
    } else if (((IData)(vlSelf->ext_write_req) & (0U 
                                                  == (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_state)))) {
        __Vdly__my_cpu__DOT__cache__DOT__write_index = 0U;
    } else if (((2U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_state)) 
                & (IData)(vlSelf->WREADY))) {
        __Vdly__my_cpu__DOT__cache__DOT__write_index 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_index)));
    }
    if (vlSelf->rst) {
        __Vdly__my_cpu__DOT__cache__DOT__write_state = 0U;
    } else if ((0U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_state))) {
        if (vlSelf->ext_write_req) {
            __Vdly__my_cpu__DOT__cache__DOT__write_state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_state))) {
        if (((IData)(vlSelf->AWREADY) & (IData)(vlSelf->WREADY))) {
            __Vdly__my_cpu__DOT__cache__DOT__write_state = 2U;
        }
    } else if ((2U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_state))) {
        if (((IData)(vlSelf->WREADY) & (0xfU == (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_index)))) {
            __Vdly__my_cpu__DOT__cache__DOT__write_state = 3U;
        }
    } else if ((3U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_state))) {
        if (vlSelf->BVALID) {
            __Vdly__my_cpu__DOT__cache__DOT__write_state = 0U;
        }
    } else {
        __Vdly__my_cpu__DOT__cache__DOT__write_state = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_addr = 0U;
    } else if (((IData)(vlSelf->ext_write_req) & (0U 
                                                  == (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_state)))) {
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_addr 
            = vlSelf->ext_write_addr;
    }
    if (vlSelf->rst) {
        vlSelf->my_cpu__DOT__cache__DOT__AXI_read_size = 0U;
    } else if (((IData)(vlSelf->my_cpu__DOT__cache__DOT__read_req) 
                & (0U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_state)))) {
        vlSelf->my_cpu__DOT__cache__DOT__AXI_read_size 
            = (((IData)(vlSelf->ext_read_req) & (~ (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_shortcut_dcache)))
                ? 3U : (((IData)(vlSelf->inst_read_req) 
                         & (~ (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_shortcut_icache)))
                         ? 2U : 0U));
    }
    if (vlSelf->rst) {
        vlSelf->my_cpu__DOT__cache__DOT__AXI_read_addr = 0U;
    } else if (((IData)(vlSelf->my_cpu__DOT__cache__DOT__read_req) 
                & (0U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_state)))) {
        vlSelf->my_cpu__DOT__cache__DOT__AXI_read_addr 
            = (((IData)(vlSelf->ext_read_req) & (~ (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_shortcut_dcache)))
                ? vlSelf->ext_read_addr : (((IData)(vlSelf->inst_read_req) 
                                            & (~ (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_shortcut_icache)))
                                            ? vlSelf->base_ram_addr
                                            : 0U));
    }
    __Vtableidx1 = (((IData)(vlSelf->RLAST) << 7U) 
                    | (((IData)(vlSelf->RVALID) << 6U) 
                       | (((IData)(vlSelf->ARREADY) 
                           << 5U) | (((IData)(vlSelf->my_cpu__DOT__cache__DOT__read_req) 
                                      << 4U) | (((IData)(vlSelf->my_cpu__DOT__cache__DOT__read_state) 
                                                 << 1U) 
                                                | (IData)(vlSelf->rst))))));
    if (Vmy_cpu__ConstPool__TABLE_21af77e1_0[__Vtableidx1]) {
        __Vdly__my_cpu__DOT__cache__DOT__read_state 
            = Vmy_cpu__ConstPool__TABLE_150325f4_0[__Vtableidx1];
    }
    if (vlSelf->rst) {
        __Vdly__my_cpu__DOT__ID__DOT__csr__DOT__time_interrupt_flag = 0U;
    }
    if (vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__time_interrupt) {
        __Vdly__my_cpu__DOT__ID__DOT__csr__DOT__time_interrupt_flag = 1U;
    } else if ((((IData)(vlSelf->my_cpu__DOT__ID__DOT__csr_OneHot) 
                 >> 2U) & (IData)(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__time_interrupt_flag))) {
        __Vdly__my_cpu__DOT__ID__DOT__csr__DOT__time_interrupt_flag = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[1U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[2U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[3U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[4U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[5U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[6U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[7U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[8U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[9U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0xaU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0xbU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0xcU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0xdU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0xeU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0xfU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x10U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x11U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x12U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x13U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x14U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x15U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x16U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x17U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x18U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x19U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x1aU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x1bU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x1cU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x1dU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x1eU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x1fU] = 0U;
        __Vdly__my_cpu__DOT__cache__DOT__read_index = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->my_cpu__DOT__cache__DOT__read_req) 
                         & (0U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_state)))))) {
        if (((2U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_state)) 
             & (IData)(vlSelf->RVALID))) {
            if ((2U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__AXI_read_target))) {
                VL_ASSIGNSEL_WIIQ(1024,64,(0x3ffU & 
                                           (((((IData)(1U) 
                                               + (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_index)) 
                                              << 6U) 
                                             - (IData)(1U)) 
                                            - (IData)(0x3fU))), vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data, vlSelf->RDATA);
            } else if ((1U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__AXI_read_target))) {
                VL_ASSIGNSEL_WIII(1024,32,(0x3ffU & 
                                           (((((IData)(1U) 
                                               + (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_index)) 
                                              << 5U) 
                                             - (IData)(1U)) 
                                            - (IData)(0x1fU))), vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data, 
                                  ((1U & (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_index))
                                    ? (IData)((vlSelf->RDATA 
                                               >> 0x20U))
                                    : (IData)(vlSelf->RDATA)));
            }
            __Vdly__my_cpu__DOT__cache__DOT__read_index 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_index)));
        }
    }
    if ((0x20U & vlSelf->my_cpu__DOT__MEM_ID_Bus[2U])) {
        __Vdlyvval__my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf__v0 
            = (((QData)((IData)(vlSelf->my_cpu__DOT__MEM_ID_Bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->my_cpu__DOT__MEM_ID_Bus[0U])));
        __Vdlyvset__my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf__v0 
            = (0x1fU & vlSelf->my_cpu__DOT__MEM_ID_Bus[2U]);
    }
    if (vlSelf->rst) {
        vlSelf->my_cpu__DOT__IF__DOT__pause_mem_sec = 0U;
    } else if ((1U & (~ ((0U != (IData)(vlSelf->my_cpu__DOT__ID__DOT__mem_OneHot)) 
                         | (IData)(vlSelf->my_cpu__DOT__stop_all))))) {
        vlSelf->my_cpu__DOT__IF__DOT__pause_mem_sec = 0U;
    }
    vlSelf->my_cpu__DOT__mmio_en_reg = ((~ (IData)(vlSelf->rst)) 
                                        & (((IData)(vlSelf->mmio_serial_en) 
                                            & (~ (IData)(vlSelf->mmio_wen))) 
                                           | (((IData)(vlSelf->mmio_rtc_low_en) 
                                               & (~ (IData)(vlSelf->mmio_wen))) 
                                              | (((IData)(vlSelf->mmio_rtc_high_en) 
                                                  & (~ (IData)(vlSelf->mmio_wen))) 
                                                 | (((IData)(vlSelf->mmio_vga_ctl_low_en) 
                                                     & (~ (IData)(vlSelf->mmio_wen))) 
                                                    | (((IData)(vlSelf->mmio_vga_ctl_high_en) 
                                                        & (~ (IData)(vlSelf->mmio_wen))) 
                                                       | (((IData)(vlSelf->mmio_fb_low_en) 
                                                           & (~ (IData)(vlSelf->mmio_wen))) 
                                                          | (((IData)(vlSelf->mmio_fb_high_en) 
                                                              & (~ (IData)(vlSelf->mmio_wen))) 
                                                             | ((IData)(vlSelf->my_cpu__DOT__mmio_kbd_en) 
                                                                & (~ (IData)(vlSelf->mmio_wen)))))))))));
    if (vlSelf->rst) {
        __Vdly__my_cpu__DOT__mmio__DOT__serial_read_data = 0ULL;
    } else if (((IData)(vlSelf->mmio_serial_en) & (IData)(vlSelf->mmio_wen))) {
        __Vdly__my_cpu__DOT__mmio__DOT__serial_read_data 
            = (vlSelf->my_cpu__DOT__mmio__DOT__serial_read_data 
               | (((0x3fU >= (IData)(vlSelf->my_cpu__DOT__mmio__DOT__total_shift_in))
                    ? (vlSelf->mmio_write_data << (IData)(vlSelf->my_cpu__DOT__mmio__DOT__total_shift_in))
                    : 0ULL) & (((QData)((IData)((((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->mmio_be_n) 
                                                                 >> 7U)))) 
                                                  << 0x18U) 
                                                 | ((0xff0000U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->mmio_be_n) 
                                                                       >> 6U)))) 
                                                        << 0x10U)) 
                                                    | ((0xff00U 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->mmio_be_n) 
                                                                          >> 5U)))) 
                                                           << 8U)) 
                                                       | (0xffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->mmio_be_n) 
                                                                           >> 4U)))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((- (IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->mmio_be_n) 
                                                                             >> 3U)))) 
                                                              << 0x18U) 
                                                             | ((0xff0000U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->mmio_be_n) 
                                                                                >> 2U)))) 
                                                                    << 0x10U)) 
                                                                | ((0xff00U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->mmio_be_n) 
                                                                                >> 1U)))) 
                                                                       << 8U)) 
                                                                   | (0xffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->mmio_be_n)))))))))))));
    }
    vlSelf->my_cpu__DOT__mmio_read_data = ((IData)(vlSelf->rst)
                                            ? 0ULL : 
                                           (((IData)(vlSelf->mmio_serial_en) 
                                             & (~ (IData)(vlSelf->mmio_wen)))
                                             ? ((0x3fU 
                                                 >= (IData)(vlSelf->my_cpu__DOT__mmio__DOT__total_shift_in))
                                                 ? 
                                                (vlSelf->my_cpu__DOT__mmio__DOT__serial_read_data 
                                                 >> (IData)(vlSelf->my_cpu__DOT__mmio__DOT__total_shift_in))
                                                 : 0ULL)
                                             : (((IData)(vlSelf->mmio_rtc_low_en) 
                                                 & (~ (IData)(vlSelf->mmio_wen)))
                                                 ? vlSelf->mmio_rtc_low_data
                                                 : 
                                                (((IData)(vlSelf->mmio_rtc_high_en) 
                                                  & (~ (IData)(vlSelf->mmio_wen)))
                                                  ? vlSelf->mmio_rtc_high_data
                                                  : 
                                                 (((IData)(vlSelf->mmio_vga_ctl_low_en) 
                                                   & (~ (IData)(vlSelf->mmio_wen)))
                                                   ? (QData)((IData)(vlSelf->mmio_vga_ctl_low_data))
                                                   : 
                                                  (((IData)(vlSelf->mmio_vga_ctl_high_en) 
                                                    & (~ (IData)(vlSelf->mmio_wen)))
                                                    ? (QData)((IData)(vlSelf->mmio_vga_ctl_high_data))
                                                    : 
                                                   (((IData)(vlSelf->mmio_fb_low_en) 
                                                     & (~ (IData)(vlSelf->mmio_wen)))
                                                     ? (QData)((IData)(
                                                                       VL_SHIFTR_IIQ(32,32,64, 
                                                                                (((0x1d4bfU 
                                                                                >= 
                                                                                (0x1ffffU 
                                                                                & (vlSelf->mmio_addr 
                                                                                >> 2U)))
                                                                                 ? 
                                                                                vlSelf->my_cpu__DOT__mmio__DOT__vmem
                                                                                [
                                                                                (0x1ffffU 
                                                                                & (vlSelf->mmio_addr 
                                                                                >> 2U))]
                                                                                 : 0U) 
                                                                                & (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->mmio_be_n) 
                                                                                >> 3U)))) 
                                                                                << 0x18U) 
                                                                                | ((0xff0000U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->mmio_be_n) 
                                                                                >> 2U)))) 
                                                                                << 0x10U)) 
                                                                                | ((0xff00U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->mmio_be_n) 
                                                                                >> 1U)))) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->mmio_be_n))))))))), vlSelf->my_cpu__DOT__mmio__DOT__total_shift_cut)))
                                                     : 
                                                    (((IData)(vlSelf->mmio_fb_high_en) 
                                                      & (~ (IData)(vlSelf->mmio_wen)))
                                                      ? (QData)((IData)(
                                                                        VL_SHIFTR_IIQ(32,32,64, 
                                                                                (((0x1d4bfU 
                                                                                >= 
                                                                                (0x1ffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (vlSelf->mmio_addr 
                                                                                >> 2U))))
                                                                                 ? 
                                                                                vlSelf->my_cpu__DOT__mmio__DOT__vmem
                                                                                [
                                                                                (0x1ffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (vlSelf->mmio_addr 
                                                                                >> 2U)))]
                                                                                 : 0U) 
                                                                                & (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->mmio_be_n) 
                                                                                >> 7U)))) 
                                                                                << 0x18U) 
                                                                                | ((0xff0000U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->mmio_be_n) 
                                                                                >> 6U)))) 
                                                                                << 0x10U)) 
                                                                                | ((0xff00U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->mmio_be_n) 
                                                                                >> 5U)))) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->mmio_be_n) 
                                                                                >> 4U))))))))), vlSelf->my_cpu__DOT__mmio__DOT__total_shift)))
                                                      : 0ULL))))))));
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (((IData)(vlSelf->mmio_fb_low_en) & (IData)(vlSelf->mmio_wen))) {
            vlSelf->my_cpu__DOT__mmio__DOT____Vlvbound2 
                = (VL_SHIFTL_IIQ(32,32,64, (IData)(vlSelf->mmio_write_data), vlSelf->my_cpu__DOT__mmio__DOT__total_shift_cut) 
                   & (((- (IData)((1U & ((IData)(vlSelf->mmio_be_n) 
                                         >> 3U)))) 
                       << 0x18U) | ((0xff0000U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->mmio_be_n) 
                                                                 >> 2U)))) 
                                                  << 0x10U)) 
                                    | ((0xff00U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->mmio_be_n) 
                                                                  >> 1U)))) 
                                                   << 8U)) 
                                       | (0xffU & (- (IData)(
                                                             (1U 
                                                              & (IData)(vlSelf->mmio_be_n)))))))));
            if ((0x1d4bfU >= (0x1ffffU & (vlSelf->mmio_addr 
                                          >> 2U)))) {
                __Vdlyvval__my_cpu__DOT__mmio__DOT__vmem__v0 
                    = vlSelf->my_cpu__DOT__mmio__DOT____Vlvbound2;
                __Vdlyvset__my_cpu__DOT__mmio__DOT__vmem__v0 = 1U;
                __Vdlyvdim0__my_cpu__DOT__mmio__DOT__vmem__v0 
                    = (0x1ffffU & (vlSelf->mmio_addr 
                                   >> 2U));
            }
        } else if (((IData)(vlSelf->mmio_fb_high_en) 
                    & (IData)(vlSelf->mmio_wen))) {
            vlSelf->my_cpu__DOT__mmio__DOT____Vlvbound3 
                = (VL_SHIFTL_IIQ(32,32,64, (IData)(vlSelf->mmio_write_data), vlSelf->my_cpu__DOT__mmio__DOT__total_shift) 
                   & (((- (IData)((1U & ((IData)(vlSelf->mmio_be_n) 
                                         >> 7U)))) 
                       << 0x18U) | ((0xff0000U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->mmio_be_n) 
                                                                 >> 6U)))) 
                                                  << 0x10U)) 
                                    | ((0xff00U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->mmio_be_n) 
                                                                  >> 5U)))) 
                                                   << 8U)) 
                                       | (0xffU & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->mmio_be_n) 
                                                                 >> 4U)))))))));
            if ((0x1d4bfU >= (0x1ffffU & ((IData)(1U) 
                                          + (vlSelf->mmio_addr 
                                             >> 2U))))) {
                __Vdlyvval__my_cpu__DOT__mmio__DOT__vmem__v1 
                    = vlSelf->my_cpu__DOT__mmio__DOT____Vlvbound3;
                __Vdlyvset__my_cpu__DOT__mmio__DOT__vmem__v1 = 1U;
                __Vdlyvdim0__my_cpu__DOT__mmio__DOT__vmem__v1 
                    = (0x1ffffU & ((IData)(1U) + (vlSelf->mmio_addr 
                                                  >> 2U)));
            }
        }
    }
    if (vlSelf->rst) {
        __Vdlyvset__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v0 = 1U;
    } else if ((1U & (IData)(vlSelf->my_cpu__DOT__ID__DOT__csr_OneHot))) {
        __Vdlyvval__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v16 
            = vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding;
        __Vdlyvset__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v16 = 1U;
        __Vdlyvdim0__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v16 
            = vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_map_num;
    } else if ((2U & (IData)(vlSelf->my_cpu__DOT__ID__DOT__csr_OneHot))) {
        __Vdlyvval__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v17 
            = (vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding 
               | vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg
               [vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_map_num]);
        __Vdlyvset__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v17 = 1U;
        __Vdlyvdim0__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v17 
            = vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_map_num;
    } else if ((8U & (IData)(vlSelf->my_cpu__DOT__ID__DOT__csr_OneHot))) {
        __Vdlyvval__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v18 
            = (QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addr));
        __Vdlyvset__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v18 = 1U;
    }
    if (vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__time_interrupt) {
        __Vdlyvval__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v20 
            = (QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addr));
        __Vdlyvset__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v20 = 1U;
    }
    if (vlSelf->rst) {
        __Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v0 = 1U;
        __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__dirty_flag = 0U;
        __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__offset = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_out_index = 0ULL;
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg = 0U;
        __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__indata_target = 0U;
        __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__dcache_state = 0U;
        __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index_already_write = 0U;
        __Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v1 = 1U;
    } else if ((1U & (~ (IData)(vlSelf->my_cpu__DOT__cache__DOT__icache_busy)))) {
        if ((0U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__dcache_state))) {
            if (vlSelf->ext_read_req) {
                if (vlSelf->my_cpu__DOT__dcache_wen) {
                    if (vlSelf->my_cpu__DOT__dcache_wen) {
                        if (vlSelf->my_cpu__DOT__cache__DOT__read_shortcut_dcache) {
                            if (vlSelf->my_cpu__DOT__cache__DOT__read_shortcut_dcache) {
                                __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__dirty_flag 
                                    = ((IData)(__Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__dirty_flag) 
                                       | (0xffffU & 
                                          ((IData)(1U) 
                                           << (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index))));
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v16 
                                    = (vlSelf->ext_ram_addr 
                                       >> 7U);
                                __Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v16 = 1U;
                                __Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v16 
                                    = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index;
                                VL_EXTEND_WI(992,32, __Vtemp2, 
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
                                                                        >> 4U)))))))));
                                __Vtemp3[0U] = (((- (IData)(
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
                                                                       & (IData)(vlSelf->my_cpu__DOT__dcache_be_n))))))));
                                __Vtemp3[1U] = __Vtemp2[0U];
                                __Vtemp3[2U] = __Vtemp2[1U];
                                __Vtemp3[3U] = __Vtemp2[2U];
                                __Vtemp3[4U] = __Vtemp2[3U];
                                __Vtemp3[5U] = __Vtemp2[4U];
                                __Vtemp3[6U] = __Vtemp2[5U];
                                __Vtemp3[7U] = __Vtemp2[6U];
                                __Vtemp3[8U] = __Vtemp2[7U];
                                __Vtemp3[9U] = __Vtemp2[8U];
                                __Vtemp3[0xaU] = __Vtemp2[9U];
                                __Vtemp3[0xbU] = __Vtemp2[0xaU];
                                __Vtemp3[0xcU] = __Vtemp2[0xbU];
                                __Vtemp3[0xdU] = __Vtemp2[0xcU];
                                __Vtemp3[0xeU] = __Vtemp2[0xdU];
                                __Vtemp3[0xfU] = __Vtemp2[0xeU];
                                __Vtemp3[0x10U] = __Vtemp2[0xfU];
                                __Vtemp3[0x11U] = __Vtemp2[0x10U];
                                __Vtemp3[0x12U] = __Vtemp2[0x11U];
                                __Vtemp3[0x13U] = __Vtemp2[0x12U];
                                __Vtemp3[0x14U] = __Vtemp2[0x13U];
                                __Vtemp3[0x15U] = __Vtemp2[0x14U];
                                __Vtemp3[0x16U] = __Vtemp2[0x15U];
                                __Vtemp3[0x17U] = __Vtemp2[0x16U];
                                __Vtemp3[0x18U] = __Vtemp2[0x17U];
                                __Vtemp3[0x19U] = __Vtemp2[0x18U];
                                __Vtemp3[0x1aU] = __Vtemp2[0x19U];
                                __Vtemp3[0x1bU] = __Vtemp2[0x1aU];
                                __Vtemp3[0x1cU] = __Vtemp2[0x1bU];
                                __Vtemp3[0x1dU] = __Vtemp2[0x1cU];
                                __Vtemp3[0x1eU] = __Vtemp2[0x1dU];
                                __Vtemp3[0x1fU] = __Vtemp2[0x1eU];
                                VL_SHIFTL_WWI(1024,1024,10, __Vtemp4, __Vtemp3, 
                                              (0x3c0U 
                                               & (vlSelf->ext_ram_addr 
                                                  << 3U)));
                                VL_EXTEND_WQ(1024,64, __Vtemp7, vlSelf->ext_ram_write_data);
                                VL_SHIFTL_WWI(1024,1024,10, __Vtemp8, __Vtemp7, (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__total_shift_in));
                                VL_EXTEND_WI(968,8, __Vtemp9, 
                                             (0xffU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                               >> 7U))))));
                                __Vtemp12[0U] = (__Vtemp8[0U] 
                                                 & (((- (IData)(
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
                                __Vtemp12[1U] = (__Vtemp8[1U] 
                                                 & ((__Vtemp9[0U] 
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
                                __Vtemp12[2U] = (__Vtemp8[2U] 
                                                 & ((__Vtemp9[0U] 
                                                     >> 8U) 
                                                    | (__Vtemp9[1U] 
                                                       << 0x18U)));
                                __Vtemp12[3U] = (__Vtemp8[3U] 
                                                 & ((__Vtemp9[1U] 
                                                     >> 8U) 
                                                    | (__Vtemp9[2U] 
                                                       << 0x18U)));
                                __Vtemp12[4U] = (__Vtemp8[4U] 
                                                 & ((__Vtemp9[2U] 
                                                     >> 8U) 
                                                    | (__Vtemp9[3U] 
                                                       << 0x18U)));
                                __Vtemp12[5U] = (__Vtemp8[5U] 
                                                 & ((__Vtemp9[3U] 
                                                     >> 8U) 
                                                    | (__Vtemp9[4U] 
                                                       << 0x18U)));
                                __Vtemp12[6U] = (__Vtemp8[6U] 
                                                 & ((__Vtemp9[4U] 
                                                     >> 8U) 
                                                    | (__Vtemp9[5U] 
                                                       << 0x18U)));
                                __Vtemp12[7U] = (__Vtemp8[7U] 
                                                 & ((__Vtemp9[5U] 
                                                     >> 8U) 
                                                    | (__Vtemp9[6U] 
                                                       << 0x18U)));
                                __Vtemp12[8U] = (__Vtemp8[8U] 
                                                 & ((__Vtemp9[6U] 
                                                     >> 8U) 
                                                    | (__Vtemp9[7U] 
                                                       << 0x18U)));
                                __Vtemp12[9U] = (__Vtemp8[9U] 
                                                 & ((__Vtemp9[7U] 
                                                     >> 8U) 
                                                    | (__Vtemp9[8U] 
                                                       << 0x18U)));
                                __Vtemp12[0xaU] = (
                                                   __Vtemp8[0xaU] 
                                                   & ((__Vtemp9[8U] 
                                                       >> 8U) 
                                                      | (__Vtemp9[9U] 
                                                         << 0x18U)));
                                __Vtemp12[0xbU] = (
                                                   __Vtemp8[0xbU] 
                                                   & ((__Vtemp9[9U] 
                                                       >> 8U) 
                                                      | (__Vtemp9[0xaU] 
                                                         << 0x18U)));
                                __Vtemp12[0xcU] = (
                                                   __Vtemp8[0xcU] 
                                                   & ((__Vtemp9[0xaU] 
                                                       >> 8U) 
                                                      | (__Vtemp9[0xbU] 
                                                         << 0x18U)));
                                __Vtemp12[0xdU] = (
                                                   __Vtemp8[0xdU] 
                                                   & ((__Vtemp9[0xbU] 
                                                       >> 8U) 
                                                      | (__Vtemp9[0xcU] 
                                                         << 0x18U)));
                                __Vtemp12[0xeU] = (
                                                   __Vtemp8[0xeU] 
                                                   & ((__Vtemp9[0xcU] 
                                                       >> 8U) 
                                                      | (__Vtemp9[0xdU] 
                                                         << 0x18U)));
                                __Vtemp12[0xfU] = (
                                                   __Vtemp8[0xfU] 
                                                   & ((__Vtemp9[0xdU] 
                                                       >> 8U) 
                                                      | (__Vtemp9[0xeU] 
                                                         << 0x18U)));
                                __Vtemp12[0x10U] = 
                                    (__Vtemp8[0x10U] 
                                     & ((__Vtemp9[0xeU] 
                                         >> 8U) | (
                                                   __Vtemp9[0xfU] 
                                                   << 0x18U)));
                                __Vtemp12[0x11U] = 
                                    (__Vtemp8[0x11U] 
                                     & ((__Vtemp9[0xfU] 
                                         >> 8U) | (
                                                   __Vtemp9[0x10U] 
                                                   << 0x18U)));
                                __Vtemp12[0x12U] = 
                                    (__Vtemp8[0x12U] 
                                     & ((__Vtemp9[0x10U] 
                                         >> 8U) | (
                                                   __Vtemp9[0x11U] 
                                                   << 0x18U)));
                                __Vtemp12[0x13U] = 
                                    (__Vtemp8[0x13U] 
                                     & ((__Vtemp9[0x11U] 
                                         >> 8U) | (
                                                   __Vtemp9[0x12U] 
                                                   << 0x18U)));
                                __Vtemp12[0x14U] = 
                                    (__Vtemp8[0x14U] 
                                     & ((__Vtemp9[0x12U] 
                                         >> 8U) | (
                                                   __Vtemp9[0x13U] 
                                                   << 0x18U)));
                                __Vtemp12[0x15U] = 
                                    (__Vtemp8[0x15U] 
                                     & ((__Vtemp9[0x13U] 
                                         >> 8U) | (
                                                   __Vtemp9[0x14U] 
                                                   << 0x18U)));
                                __Vtemp12[0x16U] = 
                                    (__Vtemp8[0x16U] 
                                     & ((__Vtemp9[0x14U] 
                                         >> 8U) | (
                                                   __Vtemp9[0x15U] 
                                                   << 0x18U)));
                                __Vtemp12[0x17U] = 
                                    (__Vtemp8[0x17U] 
                                     & ((__Vtemp9[0x15U] 
                                         >> 8U) | (
                                                   __Vtemp9[0x16U] 
                                                   << 0x18U)));
                                __Vtemp12[0x18U] = 
                                    (__Vtemp8[0x18U] 
                                     & ((__Vtemp9[0x16U] 
                                         >> 8U) | (
                                                   __Vtemp9[0x17U] 
                                                   << 0x18U)));
                                __Vtemp12[0x19U] = 
                                    (__Vtemp8[0x19U] 
                                     & ((__Vtemp9[0x17U] 
                                         >> 8U) | (
                                                   __Vtemp9[0x18U] 
                                                   << 0x18U)));
                                __Vtemp12[0x1aU] = 
                                    (__Vtemp8[0x1aU] 
                                     & ((__Vtemp9[0x18U] 
                                         >> 8U) | (
                                                   __Vtemp9[0x19U] 
                                                   << 0x18U)));
                                __Vtemp12[0x1bU] = 
                                    (__Vtemp8[0x1bU] 
                                     & ((__Vtemp9[0x19U] 
                                         >> 8U) | (
                                                   __Vtemp9[0x1aU] 
                                                   << 0x18U)));
                                __Vtemp12[0x1cU] = 
                                    (__Vtemp8[0x1cU] 
                                     & ((__Vtemp9[0x1aU] 
                                         >> 8U) | (
                                                   __Vtemp9[0x1bU] 
                                                   << 0x18U)));
                                __Vtemp12[0x1dU] = 
                                    (__Vtemp8[0x1dU] 
                                     & ((__Vtemp9[0x1bU] 
                                         >> 8U) | (
                                                   __Vtemp9[0x1cU] 
                                                   << 0x18U)));
                                __Vtemp12[0x1eU] = 
                                    (__Vtemp8[0x1eU] 
                                     & ((__Vtemp9[0x1cU] 
                                         >> 8U) | (
                                                   __Vtemp9[0x1dU] 
                                                   << 0x18U)));
                                __Vtemp12[0x1fU] = 
                                    (__Vtemp8[0x1fU] 
                                     & ((__Vtemp9[0x1dU] 
                                         >> 8U) | (
                                                   __Vtemp9[0x1eU] 
                                                   << 0x18U)));
                                VL_SHIFTL_WWI(1024,1024,10, __Vtemp13, __Vtemp12, 
                                              (0x3c0U 
                                               & (vlSelf->ext_ram_addr 
                                                  << 3U)));
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0U] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0U] 
                                        & (~ __Vtemp4[0U])) 
                                       | __Vtemp13[0U]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[1U] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[1U] 
                                        & (~ __Vtemp4[1U])) 
                                       | __Vtemp13[1U]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[2U] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[2U] 
                                        & (~ __Vtemp4[2U])) 
                                       | __Vtemp13[2U]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[3U] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[3U] 
                                        & (~ __Vtemp4[3U])) 
                                       | __Vtemp13[3U]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[4U] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[4U] 
                                        & (~ __Vtemp4[4U])) 
                                       | __Vtemp13[4U]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[5U] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[5U] 
                                        & (~ __Vtemp4[5U])) 
                                       | __Vtemp13[5U]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[6U] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[6U] 
                                        & (~ __Vtemp4[6U])) 
                                       | __Vtemp13[6U]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[7U] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[7U] 
                                        & (~ __Vtemp4[7U])) 
                                       | __Vtemp13[7U]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[8U] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[8U] 
                                        & (~ __Vtemp4[8U])) 
                                       | __Vtemp13[8U]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[9U] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[9U] 
                                        & (~ __Vtemp4[9U])) 
                                       | __Vtemp13[9U]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0xaU] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xaU] 
                                        & (~ __Vtemp4[0xaU])) 
                                       | __Vtemp13[0xaU]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0xbU] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xbU] 
                                        & (~ __Vtemp4[0xbU])) 
                                       | __Vtemp13[0xbU]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0xcU] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xcU] 
                                        & (~ __Vtemp4[0xcU])) 
                                       | __Vtemp13[0xcU]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0xdU] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xdU] 
                                        & (~ __Vtemp4[0xdU])) 
                                       | __Vtemp13[0xdU]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0xeU] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xeU] 
                                        & (~ __Vtemp4[0xeU])) 
                                       | __Vtemp13[0xeU]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0xfU] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xfU] 
                                        & (~ __Vtemp4[0xfU])) 
                                       | __Vtemp13[0xfU]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x10U] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x10U] 
                                        & (~ __Vtemp4[0x10U])) 
                                       | __Vtemp13[0x10U]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x11U] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x11U] 
                                        & (~ __Vtemp4[0x11U])) 
                                       | __Vtemp13[0x11U]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x12U] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x12U] 
                                        & (~ __Vtemp4[0x12U])) 
                                       | __Vtemp13[0x12U]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x13U] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x13U] 
                                        & (~ __Vtemp4[0x13U])) 
                                       | __Vtemp13[0x13U]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x14U] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x14U] 
                                        & (~ __Vtemp4[0x14U])) 
                                       | __Vtemp13[0x14U]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x15U] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x15U] 
                                        & (~ __Vtemp4[0x15U])) 
                                       | __Vtemp13[0x15U]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x16U] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x16U] 
                                        & (~ __Vtemp4[0x16U])) 
                                       | __Vtemp13[0x16U]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x17U] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x17U] 
                                        & (~ __Vtemp4[0x17U])) 
                                       | __Vtemp13[0x17U]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x18U] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x18U] 
                                        & (~ __Vtemp4[0x18U])) 
                                       | __Vtemp13[0x18U]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x19U] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x19U] 
                                        & (~ __Vtemp4[0x19U])) 
                                       | __Vtemp13[0x19U]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x1aU] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1aU] 
                                        & (~ __Vtemp4[0x1aU])) 
                                       | __Vtemp13[0x1aU]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x1bU] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1bU] 
                                        & (~ __Vtemp4[0x1bU])) 
                                       | __Vtemp13[0x1bU]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x1cU] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1cU] 
                                        & (~ __Vtemp4[0x1cU])) 
                                       | __Vtemp13[0x1cU]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x1dU] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1dU] 
                                        & (~ __Vtemp4[0x1dU])) 
                                       | __Vtemp13[0x1dU]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x1eU] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1eU] 
                                        & (~ __Vtemp4[0x1eU])) 
                                       | __Vtemp13[0x1eU]);
                                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x1fU] 
                                    = ((vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1fU] 
                                        & (~ __Vtemp4[0x1fU])) 
                                       | __Vtemp13[0x1fU]);
                                __Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16 
                                    = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index;
                                __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__indata_target = 0U;
                                vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg 
                                    = vlSelf->my_cpu__DOT__dcache_be_n;
                            }
                        } else {
                            __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__indata_target = 1U;
                            __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__dcache_state = 1U;
                            vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg 
                                = vlSelf->my_cpu__DOT__dcache_be_n;
                            __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index_already_write 
                                = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index;
                            __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__write_index = 0U;
                        }
                    }
                } else if (vlSelf->my_cpu__DOT__cache__DOT__read_shortcut_dcache) {
                    if (vlSelf->my_cpu__DOT__cache__DOT__read_shortcut_dcache) {
                        __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__dirty_flag 
                            = ((~ ((IData)(1U) << (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index))) 
                               & (IData)(__Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__dirty_flag));
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v17 
                            = (vlSelf->ext_ram_addr 
                               >> 7U);
                        __Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v17 = 1U;
                        __Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v17 
                            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index;
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0U] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0U];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[1U] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[1U];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[2U] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[2U];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[3U] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[3U];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[4U] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[4U];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[5U] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[5U];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[6U] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[6U];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[7U] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[7U];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[8U] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[8U];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[9U] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[9U];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0xaU] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xaU];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0xbU] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xbU];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0xcU] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xcU];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0xdU] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xdU];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0xeU] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xeU];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0xfU] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xfU];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x10U] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x10U];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x11U] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x11U];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x12U] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x12U];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x13U] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x13U];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x14U] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x14U];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x15U] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x15U];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x16U] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x16U];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x17U] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x17U];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x18U] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x18U];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x19U] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x19U];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x1aU] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1aU];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x1bU] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1bU];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x1cU] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1cU];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x1dU] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1dU];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x1eU] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1eU];
                        __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x1fU] 
                            = vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1fU];
                        __Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17 
                            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index;
                        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_out_index 
                            = (((QData)((IData)(vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[
                                                (((IData)(0x3fU) 
                                                  + 
                                                  (0x3ffU 
                                                   & (((((IData)(1U) 
                                                         + 
                                                         (0xfU 
                                                          & (vlSelf->ext_ram_addr 
                                                             >> 3U))) 
                                                        << 6U) 
                                                       - (IData)(1U)) 
                                                      - (IData)(0x3fU)))) 
                                                 >> 5U)])) 
                                << ((0U == (0x1fU & 
                                            (((((IData)(1U) 
                                                + (0xfU 
                                                   & (vlSelf->ext_ram_addr 
                                                      >> 3U))) 
                                               << 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU))))
                                     ? 0x20U : ((IData)(0x40U) 
                                                - (0x1fU 
                                                   & (((((IData)(1U) 
                                                         + 
                                                         (0xfU 
                                                          & (vlSelf->ext_ram_addr 
                                                             >> 3U))) 
                                                        << 6U) 
                                                       - (IData)(1U)) 
                                                      - (IData)(0x3fU)))))) 
                               | (((0U == (0x1fU & 
                                           (((((IData)(1U) 
                                               + (0xfU 
                                                  & (vlSelf->ext_ram_addr 
                                                     >> 3U))) 
                                              << 6U) 
                                             - (IData)(1U)) 
                                            - (IData)(0x3fU))))
                                    ? 0ULL : ((QData)((IData)(
                                                              vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[
                                                              (((IData)(0x1fU) 
                                                                + 
                                                                (0x3ffU 
                                                                 & (((((IData)(1U) 
                                                                       + 
                                                                       (0xfU 
                                                                        & (vlSelf->ext_ram_addr 
                                                                           >> 3U))) 
                                                                      << 6U) 
                                                                     - (IData)(1U)) 
                                                                    - (IData)(0x3fU)))) 
                                                               >> 5U)])) 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (((((IData)(1U) 
                                                         + 
                                                         (0xfU 
                                                          & (vlSelf->ext_ram_addr 
                                                             >> 3U))) 
                                                        << 6U) 
                                                       - (IData)(1U)) 
                                                      - (IData)(0x3fU)))))) 
                                  | ((QData)((IData)(
                                                     vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[
                                                     (0x1fU 
                                                      & ((((((IData)(1U) 
                                                             + 
                                                             (0xfU 
                                                              & (vlSelf->ext_ram_addr 
                                                                 >> 3U))) 
                                                            << 6U) 
                                                           - (IData)(1U)) 
                                                          - (IData)(0x3fU)) 
                                                         >> 5U))])) 
                                     >> (0x1fU & ((
                                                   (((IData)(1U) 
                                                     + 
                                                     (0xfU 
                                                      & (vlSelf->ext_ram_addr 
                                                         >> 3U))) 
                                                    << 6U) 
                                                   - (IData)(1U)) 
                                                  - (IData)(0x3fU))))));
                        __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__offset 
                            = (0x7ffU & (((IData)(1U) 
                                          + (0xfU & 
                                             (vlSelf->ext_ram_addr 
                                              >> 3U))) 
                                         << 6U));
                        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg 
                            = vlSelf->my_cpu__DOT__dcache_be_n;
                    }
                } else {
                    __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__dcache_state = 1U;
                    __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__offset 
                        = (0x7ffU & (((IData)(1U) + 
                                      (0xfU & (vlSelf->ext_ram_addr 
                                               >> 3U))) 
                                     << 6U));
                    __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__indata_target = 0U;
                    vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg 
                        = vlSelf->my_cpu__DOT__dcache_be_n;
                    __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index_already_write 
                        = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index;
                    __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__write_index = 0U;
                }
            } else if (((IData)(vlSelf->my_cpu__DOT__dcache_wen) 
                        & (0U != (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit)))) {
                __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__dirty_flag 
                    = ((IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__dirty_flag) 
                       | (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit));
                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v18 
                    = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_in_data_write_64 
                       | vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_already_data);
                __Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v18 = 1U;
                __Vdlyvlsb__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v18 
                    = (0x3c0U & (vlSelf->ext_ram_addr 
                                 << 3U));
                __Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v18 
                    = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index;
                vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg 
                    = vlSelf->my_cpu__DOT__dcache_be_n;
            } else if ((((0U != (IData)(vlSelf->my_cpu__DOT__dcache_be_n)) 
                         & (0U != (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))) 
                        & (~ (IData)(vlSelf->my_cpu__DOT__dcache_wen)))) {
                __Vtemp15[0U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0U];
                __Vtemp15[1U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][1U];
                __Vtemp15[2U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][2U];
                __Vtemp15[3U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][3U];
                __Vtemp15[4U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][4U];
                __Vtemp15[5U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][5U];
                __Vtemp15[6U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][6U];
                __Vtemp15[7U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][7U];
                __Vtemp15[8U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][8U];
                __Vtemp15[9U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][9U];
                __Vtemp15[0xaU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xaU];
                __Vtemp15[0xbU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xbU];
                __Vtemp15[0xcU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xcU];
                __Vtemp15[0xdU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xdU];
                __Vtemp15[0xeU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xeU];
                __Vtemp15[0xfU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xfU];
                __Vtemp15[0x10U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x10U];
                __Vtemp15[0x11U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x11U];
                __Vtemp15[0x12U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x12U];
                __Vtemp15[0x13U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x13U];
                __Vtemp15[0x14U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x14U];
                __Vtemp15[0x15U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x15U];
                __Vtemp15[0x16U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x16U];
                __Vtemp15[0x17U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x17U];
                __Vtemp15[0x18U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x18U];
                __Vtemp15[0x19U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x19U];
                __Vtemp15[0x1aU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1aU];
                __Vtemp15[0x1bU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1bU];
                __Vtemp15[0x1cU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1cU];
                __Vtemp15[0x1dU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1dU];
                __Vtemp15[0x1eU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1eU];
                __Vtemp15[0x1fU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1fU];
                vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_out_index 
                    = (((QData)((IData)(__Vtemp15[(
                                                   ((IData)(0x3fU) 
                                                    + 
                                                    (0x3ffU 
                                                     & (((((IData)(1U) 
                                                           + 
                                                           (0xfU 
                                                            & (vlSelf->ext_ram_addr 
                                                               >> 3U))) 
                                                          << 6U) 
                                                         - (IData)(1U)) 
                                                        - (IData)(0x3fU)))) 
                                                   >> 5U)])) 
                        << ((0U == (0x1fU & (((((IData)(1U) 
                                                + (0xfU 
                                                   & (vlSelf->ext_ram_addr 
                                                      >> 3U))) 
                                               << 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU))))
                             ? 0x20U : ((IData)(0x40U) 
                                        - (0x1fU & 
                                           (((((IData)(1U) 
                                               + (0xfU 
                                                  & (vlSelf->ext_ram_addr 
                                                     >> 3U))) 
                                              << 6U) 
                                             - (IData)(1U)) 
                                            - (IData)(0x3fU)))))) 
                       | (((0U == (0x1fU & (((((IData)(1U) 
                                               + (0xfU 
                                                  & (vlSelf->ext_ram_addr 
                                                     >> 3U))) 
                                              << 6U) 
                                             - (IData)(1U)) 
                                            - (IData)(0x3fU))))
                            ? 0ULL : ((QData)((IData)(
                                                      __Vtemp15[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x3ffU 
                                                         & (((((IData)(1U) 
                                                               + 
                                                               (0xfU 
                                                                & (vlSelf->ext_ram_addr 
                                                                   >> 3U))) 
                                                              << 6U) 
                                                             - (IData)(1U)) 
                                                            - (IData)(0x3fU)))) 
                                                       >> 5U)])) 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & (((((IData)(1U) 
                                                   + 
                                                   (0xfU 
                                                    & (vlSelf->ext_ram_addr 
                                                       >> 3U))) 
                                                  << 6U) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x3fU)))))) 
                          | ((QData)((IData)(__Vtemp15[
                                             (0x1fU 
                                              & ((((((IData)(1U) 
                                                     + 
                                                     (0xfU 
                                                      & (vlSelf->ext_ram_addr 
                                                         >> 3U))) 
                                                    << 6U) 
                                                   - (IData)(1U)) 
                                                  - (IData)(0x3fU)) 
                                                 >> 5U))])) 
                             >> (0x1fU & (((((IData)(1U) 
                                             + (0xfU 
                                                & (vlSelf->ext_ram_addr 
                                                   >> 3U))) 
                                            << 6U) 
                                           - (IData)(1U)) 
                                          - (IData)(0x3fU))))));
                __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__offset 
                    = (0x7ffU & (((IData)(1U) + (0xfU 
                                                 & (vlSelf->ext_ram_addr 
                                                    >> 3U))) 
                                 << 6U));
                vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg 
                    = vlSelf->my_cpu__DOT__dcache_be_n;
            }
        } else if (((1U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__dcache_state)) 
                    & (IData)(vlSelf->RVALID))) {
            if (((((2U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__AXI_read_target)) 
                   & (IData)(vlSelf->RVALID)) & (IData)(vlSelf->RLAST)) 
                 & (2U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_state)))) {
                __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__dcache_state = 0U;
                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v18 
                    = (vlSelf->ext_ram_addr >> 7U);
                __Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v18 = 1U;
                __Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v18 
                    = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index_already_write;
                if (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__indata_target) {
                    if (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__indata_target) {
                        __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__dirty_flag 
                            = ((IData)(__Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__dirty_flag) 
                               | (0xffffU & ((IData)(1U) 
                                             << (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index_already_write))));
                    }
                } else {
                    __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__dirty_flag 
                        = ((~ ((IData)(1U) << (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index_already_write))) 
                           & (IData)(__Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__dirty_flag));
                    vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_out_index 
                        = (((QData)((IData)(vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[
                                            (((IData)(0x3fU) 
                                              + (0x3ffU 
                                                 & (((IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__offset) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x3fU)))) 
                                             >> 5U)])) 
                            << ((0U == (0x1fU & (((IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__offset) 
                                                  - (IData)(1U)) 
                                                 - (IData)(0x3fU))))
                                 ? 0x20U : ((IData)(0x40U) 
                                            - (0x1fU 
                                               & (((IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__offset) 
                                                   - (IData)(1U)) 
                                                  - (IData)(0x3fU)))))) 
                           | (((0U == (0x1fU & (((IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__offset) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x3fU))))
                                ? 0ULL : ((QData)((IData)(
                                                          vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0x3ffU 
                                                             & (((IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__offset) 
                                                                 - (IData)(1U)) 
                                                                - (IData)(0x3fU)))) 
                                                           >> 5U)])) 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & (((IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__offset) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x3fU)))))) 
                              | ((QData)((IData)(vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[
                                                 (0x1fU 
                                                  & ((((IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__offset) 
                                                       - (IData)(1U)) 
                                                      - (IData)(0x3fU)) 
                                                     >> 5U))])) 
                                 >> (0x1fU & (((IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__offset) 
                                               - (IData)(1U)) 
                                              - (IData)(0x3fU))))));
                }
            }
            if (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__indata_target) {
                if (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__indata_target) {
                    __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v19 
                        = (((IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__write_index) 
                            == (0xfU & (vlSelf->ext_ram_addr 
                                        >> 3U))) ? 
                           (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_in_data_write_64 
                            | (vlSelf->RDATA & (~ (
                                                   ((QData)((IData)(
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
                                                                                & (IData)(vlSelf->my_cpu__DOT__dcache_be_n))))))))))))))
                            : vlSelf->RDATA);
                    __Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v19 = 1U;
                    __Vdlyvlsb__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v19 
                        = (0x3ffU & (((((IData)(1U) 
                                        + (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__write_index)) 
                                       << 6U) - (IData)(1U)) 
                                     - (IData)(0x3fU)));
                    __Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v19 
                        = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index_already_write;
                }
            } else {
                __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v20 
                    = vlSelf->RDATA;
                __Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v20 = 1U;
                __Vdlyvlsb__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v20 
                    = (0x3ffU & (((((IData)(1U) + (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__write_index)) 
                                   << 6U) - (IData)(1U)) 
                                 - (IData)(0x3fU)));
                __Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v20 
                    = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index_already_write;
            }
            __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__write_index 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__write_index)));
        }
    }
    if (vlSelf->rst) {
        vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[0U] = 0U;
        vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[1U] = 0U;
        vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[2U] = 0U;
        vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] = 0U;
    } else {
        vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[0U] 
            = ((IData)(vlSelf->my_cpu__DOT__stop_all)
                ? 0U : (IData)(vlSelf->my_cpu__DOT__EX__DOT__final_result));
        vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[1U] 
            = ((IData)(vlSelf->my_cpu__DOT__stop_all)
                ? 0U : (IData)((vlSelf->my_cpu__DOT__EX__DOT__final_result 
                                >> 0x20U)));
        vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[2U] 
            = ((IData)(vlSelf->my_cpu__DOT__stop_all)
                ? 0U : ((0xffffff80U & ((vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                         << 0x17U) 
                                        | (0x7fff80U 
                                           & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[7U] 
                                              >> 9U)))) 
                        | ((0x40U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                     >> 0xbU)) | ((0x20U 
                                                   & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U] 
                                                      >> 5U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U] 
                                                        >> 0xbU))))));
        vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
            = ((IData)(vlSelf->my_cpu__DOT__stop_all)
                ? 0U : ((0x40000U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                     >> 6U)) | ((0x3ff80U 
                                                 & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                                    >> 0xbU)) 
                                                | (0x7fU 
                                                   & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                                      >> 9U)))));
    }
    vlSelf->my_cpu__DOT__cache__DOT__write_index = __Vdly__my_cpu__DOT__cache__DOT__write_index;
    vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__time_interrupt_flag 
        = __Vdly__my_cpu__DOT__ID__DOT__csr__DOT__time_interrupt_flag;
    vlSelf->my_cpu__DOT__cache__DOT__read_index = __Vdly__my_cpu__DOT__cache__DOT__read_index;
    if (__Vdlyvset__my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf__v0) {
        vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[__Vdlyvdim0__my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf__v0] 
            = __Vdlyvval__my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf__v0;
    }
    vlSelf->my_cpu__DOT__mmio__DOT__serial_read_data 
        = __Vdly__my_cpu__DOT__mmio__DOT__serial_read_data;
    if (__Vdlyvset__my_cpu__DOT__mmio__DOT__vmem__v0) {
        vlSelf->my_cpu__DOT__mmio__DOT__vmem[__Vdlyvdim0__my_cpu__DOT__mmio__DOT__vmem__v0] 
            = __Vdlyvval__my_cpu__DOT__mmio__DOT__vmem__v0;
    }
    if (__Vdlyvset__my_cpu__DOT__mmio__DOT__vmem__v1) {
        vlSelf->my_cpu__DOT__mmio__DOT__vmem[__Vdlyvdim0__my_cpu__DOT__mmio__DOT__vmem__v1] 
            = __Vdlyvval__my_cpu__DOT__mmio__DOT__vmem__v1;
    }
    if (__Vdlyvset__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v0) {
        vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[0U] = 0ULL;
        vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[1U] = 0ULL;
        vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[2U] = 0ULL;
        vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[3U] = 0ULL;
        vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[4U] = 0ULL;
        vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[5U] = 0ULL;
        vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[6U] = 0ULL;
        vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[7U] = 0ULL;
        vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[8U] = 0ULL;
        vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[9U] = 0ULL;
        vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[0xaU] = 0ULL;
        vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[0xbU] = 0ULL;
        vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[0xcU] = 0ULL;
        vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[0xdU] = 0ULL;
        vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[0xeU] = 0ULL;
        vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[0xfU] = 0ULL;
    }
    if (__Vdlyvset__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v16) {
        vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[__Vdlyvdim0__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v16] 
            = __Vdlyvval__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v16;
    }
    if (__Vdlyvset__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v17) {
        vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[__Vdlyvdim0__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v17] 
            = __Vdlyvval__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v17;
    }
    if (__Vdlyvset__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v18) {
        vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[4U] 
            = __Vdlyvval__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v18;
        vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[5U] = 0xbULL;
    }
    if (__Vdlyvset__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v20) {
        vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[4U] 
            = __Vdlyvval__my_cpu__DOT__ID__DOT__csr__DOT__csr_reg__v20;
        vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[5U] = 0xbULL;
    }
    vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__offset 
        = __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__offset;
    vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__indata_target 
        = __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__indata_target;
    vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index_already_write 
        = __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index_already_write;
    vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__write_index 
        = __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__write_index;
    vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__dirty_flag 
        = __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__dirty_flag;
    vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__dcache_state 
        = __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__dcache_state;
    if (__Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v0) {
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[0U] = 0U;
    }
    if (__Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v1) {
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[1U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[2U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[3U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[4U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[5U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[6U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[7U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[8U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[9U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[0xaU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[0xbU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[0xcU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[0xdU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[0xeU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[0xfU] = 0U;
    }
    if (__Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v16) {
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v16] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v16;
    }
    if (__Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v17) {
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v17] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v17;
    }
    if (__Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v18) {
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v18] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v18;
    }
    vlSelf->AWADDR = vlSelf->my_cpu__DOT__cache__DOT__AXI_write_addr;
    vlSelf->WLAST = (0xfU == (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_index));
    vlSelf->ARSIZE = vlSelf->my_cpu__DOT__cache__DOT__AXI_read_size;
    vlSelf->ARADDR = vlSelf->my_cpu__DOT__cache__DOT__AXI_read_addr;
    vlSelf->my_cpu__DOT__ext_ram_read_data = ((IData)(vlSelf->my_cpu__DOT__mmio_en_reg)
                                               ? vlSelf->my_cpu__DOT__mmio_read_data
                                               : VL_SHIFTR_QQQ(64,64,64, 
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
                                                                        : 0ULL))))))))));
    vlSelf->valid = (1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                           >> 0x12U));
    vlSelf->debug_pc = ((vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                         << 0x19U) | (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[2U] 
                                      >> 7U));
    vlSelf->inst_ebreak = (1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[2U] 
                                 >> 6U));
    if (vlSelf->rst) {
        vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[0U] = 0U;
        vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[1U] = 0U;
        vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[2U] = 0U;
        vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[3U] = 0U;
        vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U] = 0U;
        vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[5U] = 0U;
        vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[6U] = 0U;
        vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[7U] = 0U;
        vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] = 0U;
        vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] = 0U;
    } else if ((1U & (~ (IData)(vlSelf->my_cpu__DOT__stop_all)))) {
        __Vtemp31[4U] = ((0xfffc0000U & (((((((((((
                                                   (((((((0x17U 
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
                                        << 6U) | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__IF_we) 
                                                   << 5U) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addr)) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                                              >> 0x20U)) 
                                                     >> 0x1bU)))));
        __Vtemp33[4U] = (((0x37U == (0x7fU & vlSelf->my_cpu__DOT__ID__DOT__inst)) 
                          | (0x17U == (0x7fU & vlSelf->my_cpu__DOT__ID__DOT__inst)))
                          ? 1U : ((((((((((((((((((
                                                   (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ori) 
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
                                             ? 8U : 0U))));
        __Vtemp34[4U] = ((((0x17U == (0x7fU & vlSelf->my_cpu__DOT__ID__DOT__inst))
                            ? 1U : ((((((((((((((((
                                                   (((((((((((((((((((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sll) 
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
                                              ? 4U : 0U))) 
                          << 4U) | __Vtemp33[4U]);
        __Vtemp35[4U] = ((((((((((((((((((((((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ori) 
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
                                     ? 4U : 0U)) << 7U) 
                         | __Vtemp34[4U]);
        __Vtemp36[4U] = (((((((((((((((((((((((((((
                                                   ((((((((((((((((((((((((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ori) 
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
                          << 0xaU) | __Vtemp35[4U]);
        __Vtemp37[5U] = ((0x7ffU & ((IData)((((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->my_cpu__DOT__ID__DOT__inst)) 
                                              | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_jalr))
                                              ? (QData)((IData)(
                                                                ((IData)(4U) 
                                                                 + vlSelf->my_cpu__DOT__ID__DOT__inst_addr)))
                                              : (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrs) 
                                                  | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrw))
                                                  ? vlSelf->my_cpu__DOT__ID__DOT__csr_result
                                                  : 0ULL))) 
                                    >> 0x10U)) | ((0xf800U 
                                                   & ((IData)(
                                                              (((0x6fU 
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
                                                  | ((IData)(
                                                             ((((0x6fU 
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
                                                     << 0x10U)));
        __Vtemp37[6U] = ((0x7ffU & ((IData)(((((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->my_cpu__DOT__ID__DOT__inst)) 
                                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_jalr))
                                               ? (QData)((IData)(
                                                                 ((IData)(4U) 
                                                                  + vlSelf->my_cpu__DOT__ID__DOT__inst_addr)))
                                               : (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrs) 
                                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrw))
                                                   ? vlSelf->my_cpu__DOT__ID__DOT__csr_result
                                                   : 0ULL)) 
                                             >> 0x20U)) 
                                    >> 0x10U)) | ((0xf800U 
                                                   & ((IData)(
                                                              ((((0x6fU 
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
                                                  | ((IData)(
                                                             (((QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addr)) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst)))) 
                                                     << 0x10U)));
        __Vtemp37[7U] = ((0x7ffU & ((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addr)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst)))) 
                                    >> 0x10U)) | ((0xf800U 
                                                   & ((IData)(
                                                              (((QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addr)) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst)))) 
                                                      >> 0x10U)) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addr)) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                                              >> 0x20U)) 
                                                     << 0x10U)));
        __Vtemp39[9U] = ((0x1000000U & ((IData)((((IData)(vlSelf->my_cpu__DOT__ID__DOT__mem_arrive_flag)
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
                            | (__Vtemp31[4U] >> 0x15U)));
        vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[0U] 
            = (IData)(vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding);
        vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[1U] 
            = (IData)((vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding 
                       >> 0x20U));
        vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[2U] 
            = (IData)(vlSelf->my_cpu__DOT__ID__DOT__Inst_Src2_forwarding);
        vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[3U] 
            = (IData)((vlSelf->my_cpu__DOT__ID__DOT__Inst_Src2_forwarding 
                       >> 0x20U));
        vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U] 
            = ((((IData)((((0x6fU == (0x7fU & vlSelf->my_cpu__DOT__ID__DOT__inst)) 
                           | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_jalr))
                           ? (QData)((IData)(((IData)(4U) 
                                              + vlSelf->my_cpu__DOT__ID__DOT__inst_addr)))
                           : (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrs) 
                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrw))
                               ? vlSelf->my_cpu__DOT__ID__DOT__csr_result
                               : 0ULL))) << 0x10U) 
                | (0xf800U & (((IData)(vlSelf->my_cpu__DOT__ID__DOT__IF_we)
                                ? (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                   >> 7U) : (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                             >> 7U)) 
                              << 0xbU))) | __Vtemp36[4U]);
        vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[5U] 
            = __Vtemp37[5U];
        vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[6U] 
            = __Vtemp37[6U];
        vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[7U] 
            = __Vtemp37[7U];
        vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
            = ((0x7ffU & ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addr)) 
                                     << 0x20U) | (QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                   >> 0x20U)) >> 0x10U)) 
               | (__Vtemp31[4U] << 0xbU));
        vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
            = __Vtemp39[9U];
    }
    __Vtemp40[0U] = (IData)(((0x2000U & vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U])
                              ? vlSelf->my_cpu__DOT__ext_ram_read_data
                              : ((0x1000U & vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U])
                                  ? (((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->my_cpu__DOT__ext_ram_read_data 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->my_cpu__DOT__ext_ram_read_data)))
                                  : ((0x400U & vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U])
                                      ? (((- (QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->my_cpu__DOT__ext_ram_read_data 
                                                                         >> 0xfU)))))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(vlSelf->my_cpu__DOT__ext_ram_read_data)))))
                                      : ((0x100U & 
                                          vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U])
                                          ? (((- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->my_cpu__DOT__ext_ram_read_data 
                                                                             >> 7U)))))) 
                                              << 8U) 
                                             | (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->my_cpu__DOT__ext_ram_read_data)))))
                                          : ((0x20000U 
                                              & vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U])
                                              ? (QData)((IData)(vlSelf->my_cpu__DOT__ext_ram_read_data))
                                              : ((0x800U 
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
                                                                     vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[0U])))))))))));
    __Vtemp40[1U] = (IData)((((0x2000U & vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U])
                               ? vlSelf->my_cpu__DOT__ext_ram_read_data
                               : ((0x1000U & vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U])
                                   ? (((QData)((IData)(
                                                       (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->my_cpu__DOT__ext_ram_read_data 
                                                                              >> 0x1fU))))))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->my_cpu__DOT__ext_ram_read_data)))
                                   : ((0x400U & vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U])
                                       ? (((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->my_cpu__DOT__ext_ram_read_data 
                                                                          >> 0xfU)))))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(vlSelf->my_cpu__DOT__ext_ram_read_data)))))
                                       : ((0x100U & 
                                           vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U])
                                           ? (((- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->my_cpu__DOT__ext_ram_read_data 
                                                                              >> 7U)))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->my_cpu__DOT__ext_ram_read_data)))))
                                           : ((0x20000U 
                                               & vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U])
                                               ? (QData)((IData)(vlSelf->my_cpu__DOT__ext_ram_read_data))
                                               : ((0x800U 
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
                                                                      vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[0U])))))))))) 
                             >> 0x20U));
    vlSelf->my_cpu__DOT__MEM_ID_Bus[0U] = __Vtemp40[0U];
    vlSelf->my_cpu__DOT__MEM_ID_Bus[1U] = __Vtemp40[1U];
    vlSelf->my_cpu__DOT__MEM_ID_Bus[2U] = ((0x20U & 
                                            vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[2U]) 
                                           | (0x1fU 
                                              & vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[2U]));
    vlSelf->we = (1U & (vlSelf->my_cpu__DOT__MEM_ID_Bus[2U] 
                        >> 5U));
    vlSelf->addr = (0x1fU & vlSelf->my_cpu__DOT__MEM_ID_Bus[2U]);
    vlSelf->data = (((QData)((IData)(vlSelf->my_cpu__DOT__MEM_ID_Bus[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->my_cpu__DOT__MEM_ID_Bus[0U])));
    if (vlSelf->rst) {
        vlSelf->my_cpu__DOT__ID__DOT__IF_ID_Bus_Reg = 0ULL;
        vlSelf->my_cpu__DOT__ID__DOT__inst = 0U;
        vlSelf->my_cpu__DOT__ID__DOT__mem_arrive_flag = 0U;
        __Vdly__my_cpu__DOT__ID__DOT__jump_flag = 0U;
        vlSelf->my_cpu__DOT__ID__DOT__inst_mem_domin = 0U;
    } else if ((1U & (~ (IData)(vlSelf->my_cpu__DOT__stop_all)))) {
        if ((0U != (IData)(vlSelf->my_cpu__DOT__ID__DOT__mem_OneHot))) {
            vlSelf->my_cpu__DOT__ID__DOT__IF_ID_Bus_Reg = 0ULL;
            vlSelf->my_cpu__DOT__ID__DOT__inst = 0U;
        } else if ((1U & (~ (IData)(vlSelf->my_cpu__DOT__stop_all)))) {
            if (vlSelf->my_cpu__DOT__ID__DOT__junm_en) {
                __Vdly__my_cpu__DOT__ID__DOT__jump_flag = 1U;
                vlSelf->my_cpu__DOT__ID__DOT__mem_arrive_flag = 0U;
                vlSelf->my_cpu__DOT__ID__DOT__IF_ID_Bus_Reg = 0ULL;
                vlSelf->my_cpu__DOT__ID__DOT__inst = 0U;
                vlSelf->my_cpu__DOT__ID__DOT__inst_mem_domin = 0U;
            } else if (vlSelf->my_cpu__DOT__ID__DOT__jump_flag) {
                __Vdly__my_cpu__DOT__ID__DOT__jump_flag = 0U;
                vlSelf->my_cpu__DOT__ID__DOT__mem_arrive_flag = 0U;
                vlSelf->my_cpu__DOT__ID__DOT__IF_ID_Bus_Reg = 0ULL;
                vlSelf->my_cpu__DOT__ID__DOT__inst = 0U;
                vlSelf->my_cpu__DOT__ID__DOT__inst_mem_domin = 0U;
            } else {
                vlSelf->my_cpu__DOT__ID__DOT__IF_ID_Bus_Reg 
                    = (((QData)((IData)(vlSelf->my_cpu__DOT__IF2__DOT__valid)) 
                        << 0x20U) | (QData)((IData)(vlSelf->my_cpu__DOT__IF2__DOT__IF2_ID_Bus_reg)));
                vlSelf->my_cpu__DOT__ID__DOT__inst 
                    = vlSelf->inst;
                vlSelf->my_cpu__DOT__ID__DOT__mem_arrive_flag = 0U;
                __Vdly__my_cpu__DOT__ID__DOT__jump_flag = 0U;
                vlSelf->my_cpu__DOT__ID__DOT__inst_mem_domin = 0U;
            }
        }
    }
    vlSelf->debug_inst_addr = ((vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                << 0x10U) | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[7U] 
                                             >> 0x10U));
    vlSelf->ext_ram_wen = (1U & ((((vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                    >> 0x19U) | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                                 >> 0x12U)) 
                                  | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                     >> 0x1bU)) | (
                                                   vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                                   >> 0x1aU)));
    vlSelf->IF_we = (1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                           >> 0x10U));
    vlSelf->inst_result_Select = (7U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U] 
                                        >> 7U));
    vlSelf->mul_div_valid = (0U != (0x1fffU & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                               >> 0xbU)));
    vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__adder_cin 
        = ((1U & (((vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                    >> 9U) | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                              >> 8U)) | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                         >> 7U))) ? 1ULL
            : 0ULL);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul_signed 
        = ((1U & (((vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                    >> 0x17U) | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                 >> 0xeU)) | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                              >> 0xbU)))
            ? 3U : ((0x400000U & vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U])
                     ? 1U : 0U));
    vlSelf->Inst_Src2_forwarding = (((QData)((IData)(
                                                     vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[2U])));
    vlSelf->Inst_Src1_forwarding = (((QData)((IData)(
                                                     vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[0U])));
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div_sign 
        = (1U & ((((vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                    >> 0x14U) | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                 >> 0xdU)) | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                              >> 0xcU)) 
                 | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                    >> 0x12U)));
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__shorten 
        = (1U & ((((vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                    >> 0xdU) | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                >> 0x10U)) | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                              >> 0xcU)) 
                 | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                    >> 0xfU)));
    vlSelf->my_cpu__DOT__ID__DOT__jump_flag = __Vdly__my_cpu__DOT__ID__DOT__jump_flag;
    vlSelf->ext_ram_write_data = vlSelf->Inst_Src2_forwarding;
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_abs_flag 
        = (1U & ((IData)((vlSelf->Inst_Src2_forwarding 
                          >> 0x3fU)) & ((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul_signed) 
                                        >> 1U)));
    vlSelf->my_cpu__DOT__EX__DOT__alu_src2 = ((1U & 
                                               vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U])
                                               ? (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[7U] 
                                                                                >> 0xfU)))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (0xfffff000U 
                                                                     & ((vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[7U] 
                                                                         << 0x10U) 
                                                                        | (0xf000U 
                                                                           & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[6U] 
                                                                              >> 0x10U)))))))
                                               : ((2U 
                                                   & vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U])
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[7U] 
                                                                           >> 0xfU))))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (0xfffU 
                                                                      & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[7U] 
                                                                         >> 4U)))))
                                                   : 
                                                  ((4U 
                                                    & vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U])
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[7U] 
                                                                            >> 0xfU))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      ((0xfe0U 
                                                                        & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[7U] 
                                                                           >> 4U)) 
                                                                       | (0x1fU 
                                                                          & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[6U] 
                                                                             >> 0x17U))))))
                                                    : 
                                                   ((8U 
                                                     & vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U])
                                                     ? vlSelf->Inst_Src2_forwarding
                                                     : 0ULL))));
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_abs_flag 
        = (1U & ((IData)((vlSelf->Inst_Src1_forwarding 
                          >> 0x3fU)) & (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul_signed)));
    vlSelf->my_cpu__DOT__EX__DOT__alu_src1 = ((0x10U 
                                               & vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U])
                                               ? (QData)((IData)(
                                                                 ((vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                                                   << 0x10U) 
                                                                  | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[7U] 
                                                                     >> 0x10U))))
                                               : ((0x20U 
                                                   & vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U])
                                                   ? vlSelf->Inst_Src1_forwarding
                                                   : 
                                                  ((0x40U 
                                                    & vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U])
                                                    ? (QData)((IData)(vlSelf->Inst_Src1_forwarding))
                                                    : 0ULL)));
    if (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__shorten) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_sign_flag 
            = ((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div_sign) 
               & (IData)((vlSelf->Inst_Src2_forwarding 
                          >> 0x1fU)));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_sign_flag 
            = ((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div_sign) 
               & (IData)((vlSelf->Inst_Src1_forwarding 
                          >> 0x1fU)));
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_sign_flag 
            = ((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div_sign) 
               & (IData)((vlSelf->Inst_Src2_forwarding 
                          >> 0x3fU)));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_sign_flag 
            = ((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div_sign) 
               & (IData)((vlSelf->Inst_Src1_forwarding 
                          >> 0x3fU)));
    }
    vlSelf->my_cpu__DOT__ID__DOT__inst_addr = (IData)(
                                                      ((IData)(vlSelf->my_cpu__DOT__ID__DOT__mem_arrive_flag)
                                                        ? 0ULL
                                                        : vlSelf->my_cpu__DOT__ID__DOT__IF_ID_Bus_Reg));
    if (vlSelf->rst) {
        vlSelf->my_cpu__DOT__IF2__DOT__valid = 0U;
    } else if ((1U & (IData)((vlSelf->my_cpu__DOT__ID_IF_Bus 
                              >> 0x20U)))) {
        vlSelf->my_cpu__DOT__IF2__DOT__valid = 0U;
    } else if ((1U & (~ ((0U != (IData)(vlSelf->my_cpu__DOT__ID__DOT__mem_OneHot)) 
                         | (IData)(vlSelf->my_cpu__DOT__stop_all))))) {
        vlSelf->my_cpu__DOT__IF2__DOT__valid = 1U;
    }
    if (vlSelf->rst) {
        vlSelf->my_cpu__DOT__IF2__DOT__IF2_ID_Bus_reg = 0U;
    } else if ((1U & (IData)((vlSelf->my_cpu__DOT__ID_IF_Bus 
                              >> 0x20U)))) {
        vlSelf->my_cpu__DOT__IF2__DOT__IF2_ID_Bus_reg = 0U;
    } else if ((1U & (~ ((0U != (IData)(vlSelf->my_cpu__DOT__ID__DOT__mem_OneHot)) 
                         | (IData)(vlSelf->my_cpu__DOT__stop_all))))) {
        vlSelf->my_cpu__DOT__IF2__DOT__IF2_ID_Bus_reg 
            = vlSelf->inst_addr;
    }
    if (vlSelf->rst) {
        __Vdlyvset__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v0 = 1U;
        __Vdly__my_cpu__DOT__cache__DOT__Icache__DOT__icache_state = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_pre = 0U;
        __Vdlyvset__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v1 = 1U;
    } else if (((1U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__icache_state)) 
                & (IData)(vlSelf->RVALID))) {
        __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v16 
            = ((1U & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__index_in))
                ? (IData)((vlSelf->RDATA >> 0x20U))
                : (IData)(vlSelf->RDATA));
        __Vdlyvset__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v16 = 1U;
        __Vdlyvlsb__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v16 
            = (0x1ffU & (((((IData)(1U) + (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__index_in)) 
                           << 5U) - (IData)(1U)) - (IData)(0x1fU)));
        __Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v16 
            = vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__replace_index_reg;
        if (((((1U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__AXI_read_target)) 
               & (IData)(vlSelf->RVALID)) & (IData)(vlSelf->RLAST)) 
             & (2U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_state)))) {
            __Vdly__my_cpu__DOT__cache__DOT__Icache__DOT__icache_state = 0U;
            __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__tag__v16 
                = (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                   >> 6U);
            __Vdlyvset__my_cpu__DOT__cache__DOT__Icache__DOT__tag__v16 = 1U;
            __Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__tag__v16 
                = vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__replace_index_reg;
        }
        __Vdly__my_cpu__DOT__cache__DOT__Icache__DOT__index_in 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__index_in)));
        if (((0xfU & (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                      >> 2U)) == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__index_in))) {
            vlSelf->inst = ((1U & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__index_in))
                             ? (IData)((vlSelf->RDATA 
                                        >> 0x20U)) : (IData)(vlSelf->RDATA));
        }
    } else if ((1U & (~ (IData)(vlSelf->my_cpu__DOT__cache__DOT__dcache_busy)))) {
        if ((0U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__icache_state))) {
            if (((IData)(vlSelf->inst_read_req) & (~ (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_shortcut_icache)))) {
                __Vdly__my_cpu__DOT__cache__DOT__Icache__DOT__icache_state = 1U;
                vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_pre 
                    = vlSelf->inst_addr;
                __Vdly__my_cpu__DOT__cache__DOT__Icache__DOT__index_in = 0U;
                vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__replace_index_reg 
                    = vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__replace_index;
            } else if (((IData)(vlSelf->inst_read_req) 
                        & (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_shortcut_icache))) {
                vlSelf->inst = (((0U == (0x1fU & ((
                                                   (0x3ffU 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (0xfU 
                                                         & (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                                                            >> 2U))) 
                                                       << 5U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(0x1fU))))
                                  ? 0U : (vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[
                                          (((IData)(0x1fU) 
                                            + (0x1ffU 
                                               & (((0x3ffU 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (0xfU 
                                                         & (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                                                            >> 2U))) 
                                                       << 5U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(0x1fU)))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & (((0x3ffU 
                                                      & (((IData)(1U) 
                                                          + 
                                                          (0xfU 
                                                           & (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                                                              >> 2U))) 
                                                         << 5U)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x1fU)))))) 
                                | (vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[
                                   (0xfU & ((((0x3ffU 
                                               & (((IData)(1U) 
                                                   + 
                                                   (0xfU 
                                                    & (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                                                       >> 2U))) 
                                                  << 5U)) 
                                              - (IData)(1U)) 
                                             - (IData)(0x1fU)) 
                                            >> 5U))] 
                                   >> (0x1fU & (((0x3ffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (0xfU 
                                                       & (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                                                          >> 2U))) 
                                                     << 5U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x1fU)))));
                __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[0U] 
                    = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0U];
                __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[1U] 
                    = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[1U];
                __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[2U] 
                    = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[2U];
                __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[3U] 
                    = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[3U];
                __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[4U] 
                    = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[4U];
                __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[5U] 
                    = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[5U];
                __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[6U] 
                    = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[6U];
                __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[7U] 
                    = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[7U];
                __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[8U] 
                    = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[8U];
                __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[9U] 
                    = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[9U];
                __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[0xaU] 
                    = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xaU];
                __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[0xbU] 
                    = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xbU];
                __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[0xcU] 
                    = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xcU];
                __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[0xdU] 
                    = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xdU];
                __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[0xeU] 
                    = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xeU];
                __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[0xfU] 
                    = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xfU];
                __Vdlyvset__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17 = 1U;
                __Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17 
                    = vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__replace_index;
                __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__tag__v17 
                    = (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                       >> 6U);
                __Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__tag__v17 
                    = vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__replace_index;
                vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_pre 
                    = vlSelf->inst_addr;
            } else {
                __Vtemp43[0U] = vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit_index][0U];
                __Vtemp43[1U] = vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit_index][1U];
                __Vtemp43[2U] = vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit_index][2U];
                __Vtemp43[3U] = vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit_index][3U];
                __Vtemp43[4U] = vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit_index][4U];
                __Vtemp43[5U] = vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit_index][5U];
                __Vtemp43[6U] = vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit_index][6U];
                __Vtemp43[7U] = vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit_index][7U];
                __Vtemp43[8U] = vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit_index][8U];
                __Vtemp43[9U] = vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit_index][9U];
                __Vtemp43[0xaU] = vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit_index][0xaU];
                __Vtemp43[0xbU] = vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit_index][0xbU];
                __Vtemp43[0xcU] = vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit_index][0xcU];
                __Vtemp43[0xdU] = vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit_index][0xdU];
                __Vtemp43[0xeU] = vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit_index][0xeU];
                __Vtemp43[0xfU] = vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store
                    [vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit_index][0xfU];
                vlSelf->inst = (((0U == (0x1fU & ((
                                                   (0x3ffU 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (0xfU 
                                                         & (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                                                            >> 2U))) 
                                                       << 5U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(0x1fU))))
                                  ? 0U : (__Vtemp43[
                                          (((IData)(0x1fU) 
                                            + (0x1ffU 
                                               & (((0x3ffU 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (0xfU 
                                                         & (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                                                            >> 2U))) 
                                                       << 5U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(0x1fU)))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & (((0x3ffU 
                                                      & (((IData)(1U) 
                                                          + 
                                                          (0xfU 
                                                           & (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                                                              >> 2U))) 
                                                         << 5U)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x1fU)))))) 
                                | (__Vtemp43[(0xfU 
                                              & ((((0x3ffU 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (0xfU 
                                                         & (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                                                            >> 2U))) 
                                                       << 5U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(0x1fU)) 
                                                 >> 5U))] 
                                   >> (0x1fU & (((0x3ffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (0xfU 
                                                       & (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                                                          >> 2U))) 
                                                     << 5U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x1fU)))));
                vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_pre 
                    = vlSelf->inst_addr;
            }
        }
    }
    vlSelf->my_cpu__DOT__ID__DOT__inst_ori = (IData)(
                                                     (0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_mulh = ((IData)(
                                                       (0x1033U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                               & (1U 
                                                  == 
                                                  (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                   >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_mulhsu = ((IData)(
                                                         (0x2033U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                                 & (1U 
                                                    == 
                                                    (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                     >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_mulhu = ((IData)(
                                                        (0x3033U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                                & (1U 
                                                   == 
                                                   (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                    >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_remu = ((IData)(
                                                       (0x7033U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                               & (1U 
                                                  == 
                                                  (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                   >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_remw = ((IData)(
                                                       (0x603bU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                               & (1U 
                                                  == 
                                                  (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                   >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_rem = ((IData)(
                                                      (0x6033U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                  >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_remuw = ((IData)(
                                                        (0x703bU 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                                & (1U 
                                                   == 
                                                   (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                    >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_divuw = ((IData)(
                                                        (0x503bU 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                                & (1U 
                                                   == 
                                                   (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                    >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_divw = ((IData)(
                                                       (0x403bU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                               & (1U 
                                                  == 
                                                  (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                   >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_divu = ((IData)(
                                                       (0x5033U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                               & (1U 
                                                  == 
                                                  (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                   >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_div = ((IData)(
                                                      (0x4033U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                  >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_srl = ((IData)(
                                                      (0x5033U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                  >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_sra = ((IData)(
                                                      (0x5033U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                  >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_xor = ((IData)(
                                                      (0x4033U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                  >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_slti = (IData)(
                                                      (0x2013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_sll = ((IData)(
                                                      (0x1033U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                  >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_mul = ((IData)(
                                                      (0x33U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                  >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_sraw = ((IData)(
                                                       (0x503bU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                               & (0x20U 
                                                  == 
                                                  (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                   >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_srliw = ((IData)(
                                                        (0x501bU 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                                & (0U 
                                                   == 
                                                   (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                    >> 0x1aU)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_srlw = ((IData)(
                                                       (0x503bU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                               & (0U 
                                                  == 
                                                  (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                   >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_slliw = ((IData)(
                                                        (0x101bU 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                                & (0U 
                                                   == 
                                                   (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                    >> 0x1aU)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_sraiw = ((IData)(
                                                        (0x501bU 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                                & (0x10U 
                                                   == 
                                                   (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                    >> 0x1aU)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_slt = ((IData)(
                                                      (0x2033U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                  >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_subw = ((IData)(
                                                       (0x3bU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                               & (0x20U 
                                                  == 
                                                  (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                   >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_mulw = ((IData)(
                                                       (0x3bU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                               & (1U 
                                                  == 
                                                  (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                   >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_and = ((IData)(
                                                      (0x7033U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                  >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_andi = (IData)(
                                                      (0x7013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_sltu = ((IData)(
                                                       (0x3033U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                               & (0U 
                                                  == 
                                                  (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                   >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_srai = ((IData)(
                                                       (0x5013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                               & (0x10U 
                                                  == 
                                                  (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                   >> 0x1aU)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_add = ((IData)(
                                                      (0x33U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                  >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_addw = ((IData)(
                                                       (0x3bU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                               & (0U 
                                                  == 
                                                  (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                   >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_sltiu = (IData)(
                                                       (0x3013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_sub = ((IData)(
                                                      (0x33U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                  >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_srli = ((IData)(
                                                       (0x5013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                               & (0U 
                                                  == 
                                                  (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                   >> 0x1aU)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_sllw = ((IData)(
                                                       (0x103bU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                               & (0U 
                                                  == 
                                                  (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                   >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_slli = ((IData)(
                                                       (0x1013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                               & (0U 
                                                  == 
                                                  (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                   >> 0x1aU)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_or = ((IData)(
                                                     (0x6033U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                             & (0U 
                                                == 
                                                (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                 >> 0x19U)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_xori = (IData)(
                                                      (0x4013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_addi = (IData)(
                                                      (0x13U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_addiw = (IData)(
                                                       (0x1bU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->my_cpu__DOT__ID__DOT__j_type_imm = ((0x100000U 
                                                 & (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                    >> 0xbU)) 
                                                | ((0xff000U 
                                                    & vlSelf->my_cpu__DOT__ID__DOT__inst) 
                                                   | ((0x800U 
                                                       & (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                            >> 0x14U)))));
    vlSelf->my_cpu__DOT__ID__DOT__b_type_imm = ((0x1000U 
                                                 & (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                            >> 7U)))));
    vlSelf->my_cpu__DOT__ID__DOT__inst_bgeu = (IData)(
                                                      (0x7063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_bne = (IData)(
                                                     (0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_beq = (IData)(
                                                     (0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_blt = (IData)(
                                                     (0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_bge = (IData)(
                                                     (0x5063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_bltu = (IData)(
                                                      (0x6063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_jalr = (IData)(
                                                      (0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->my_cpu__DOT__ID__DOT__src1_addr = (0x1fU 
                                               & (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                  >> 0xfU));
    vlSelf->my_cpu__DOT__ID__DOT__src2_addr = (0x1fU 
                                               & (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                  >> 0x14U));
    vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_map_num 
        = ((0x300U == (vlSelf->my_cpu__DOT__ID__DOT__inst 
                       >> 0x14U)) ? 1U : ((0x304U == 
                                           (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                            >> 0x14U))
                                           ? 2U : (
                                                   (0x305U 
                                                    == 
                                                    (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                     >> 0x14U))
                                                    ? 3U
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                      >> 0x14U))
                                                     ? 4U
                                                     : 
                                                    ((0x342U 
                                                      == 
                                                      (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                       >> 0x14U))
                                                      ? 5U
                                                      : 
                                                     ((0x344U 
                                                       == 
                                                       (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                        >> 0x14U))
                                                       ? 6U
                                                       : 0xfU))))));
    vlSelf->my_cpu__DOT__ID__DOT__inst_csrrs = (IData)(
                                                       (0x2073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_csrrw = (IData)(
                                                       (0x1073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_lb = (IData)(
                                                    (3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_sh = (IData)(
                                                    (0x1023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_sd = (IData)(
                                                    (0x3023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_sw = (IData)(
                                                    (0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_lw = (IData)(
                                                    (0x2003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_lhu = (IData)(
                                                     (0x5003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_lh = (IData)(
                                                    (0x1003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_ld = (IData)(
                                                    (0x3003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_lbu = (IData)(
                                                     (0x4003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_sb = (IData)(
                                                    (0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->my_cpu__DOT__ID__DOT__inst_lwu = (IData)(
                                                     (0x6003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->my_cpu__DOT__ID__DOT__inst)));
    vlSelf->mmio_write_data = vlSelf->ext_ram_write_data;
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
        = ((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_abs_flag)
            ? (1ULL + (~ vlSelf->Inst_Src2_forwarding))
            : vlSelf->Inst_Src2_forwarding);
    vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__adder_b 
        = ((1U & (((vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                    >> 9U) | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                              >> 8U)) | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                         >> 7U))) ? 
           (~ vlSelf->my_cpu__DOT__EX__DOT__alu_src2)
            : vlSelf->my_cpu__DOT__EX__DOT__alu_src2);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
        = ((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_abs_flag)
            ? (1ULL + (~ vlSelf->Inst_Src1_forwarding))
            : vlSelf->Inst_Src1_forwarding);
    vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__sllw_result 
        = ((0xffffffff00000000ULL & vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__sllw_result) 
           | (IData)((IData)(((IData)(vlSelf->my_cpu__DOT__EX__DOT__alu_src1) 
                              << (0x1fU & (IData)(vlSelf->my_cpu__DOT__EX__DOT__alu_src2))))));
    vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__srlw_result 
        = ((0xffffffff00000000ULL & vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__srlw_result) 
           | (IData)((IData)(((IData)(vlSelf->my_cpu__DOT__EX__DOT__alu_src1) 
                              >> (0x1fU & (IData)(vlSelf->my_cpu__DOT__EX__DOT__alu_src2))))));
    vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__sraw_result 
        = ((0xffffffff00000000ULL & vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__sraw_result) 
           | (IData)((IData)(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->my_cpu__DOT__EX__DOT__alu_src1), 
                                            (0x1fU 
                                             & (IData)(vlSelf->my_cpu__DOT__EX__DOT__alu_src2))))));
    if (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__shorten) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs 
            = ((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_sign_flag)
                ? (QData)((IData)(((IData)(1U) + (~ (IData)(vlSelf->Inst_Src2_forwarding)))))
                : (QData)((IData)(vlSelf->Inst_Src2_forwarding)));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
            = ((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_sign_flag)
                ? (QData)((IData)(((IData)(1U) + (~ (IData)(vlSelf->Inst_Src1_forwarding)))))
                : (QData)((IData)(vlSelf->Inst_Src1_forwarding)));
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs 
            = ((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_sign_flag)
                ? (1ULL + (~ vlSelf->Inst_Src2_forwarding))
                : vlSelf->Inst_Src2_forwarding);
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
            = ((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_sign_flag)
                ? (1ULL + (~ vlSelf->Inst_Src1_forwarding))
                : vlSelf->Inst_Src1_forwarding);
    }
    vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__index_in 
        = __Vdly__my_cpu__DOT__cache__DOT__Icache__DOT__index_in;
    vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__replace_index 
        = __Vdly__my_cpu__DOT__cache__DOT__Icache__DOT__replace_index;
    if (__Vdlyvset__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v0) {
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0U][0U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0U][1U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0U][2U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0U][3U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0U][4U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0U][5U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0U][6U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0U][7U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0U][8U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0U][9U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0U][0xaU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0U][0xbU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0U][0xcU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0U][0xdU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0U][0xeU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0U][0xfU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xfU];
    }
    if (__Vdlyvset__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v1) {
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[1U][0U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[1U][1U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[1U][2U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[1U][3U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[1U][4U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[1U][5U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[1U][6U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[1U][7U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[1U][8U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[1U][9U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[1U][0xaU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[1U][0xbU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[1U][0xcU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[1U][0xdU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[1U][0xeU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[1U][0xfU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[2U][0U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[2U][1U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[2U][2U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[2U][3U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[2U][4U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[2U][5U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[2U][6U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[2U][7U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[2U][8U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[2U][9U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[2U][0xaU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[2U][0xbU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[2U][0xcU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[2U][0xdU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[2U][0xeU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[2U][0xfU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[3U][0U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[3U][1U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[3U][2U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[3U][3U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[3U][4U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[3U][5U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[3U][6U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[3U][7U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[3U][8U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[3U][9U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[3U][0xaU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[3U][0xbU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[3U][0xcU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[3U][0xdU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[3U][0xeU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[3U][0xfU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[4U][0U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[4U][1U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[4U][2U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[4U][3U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[4U][4U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[4U][5U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[4U][6U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[4U][7U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[4U][8U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[4U][9U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[4U][0xaU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[4U][0xbU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[4U][0xcU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[4U][0xdU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[4U][0xeU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[4U][0xfU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[5U][0U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[5U][1U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[5U][2U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[5U][3U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[5U][4U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[5U][5U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[5U][6U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[5U][7U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[5U][8U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[5U][9U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[5U][0xaU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[5U][0xbU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[5U][0xcU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[5U][0xdU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[5U][0xeU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[5U][0xfU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[6U][0U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[6U][1U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[6U][2U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[6U][3U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[6U][4U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[6U][5U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[6U][6U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[6U][7U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[6U][8U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[6U][9U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[6U][0xaU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[6U][0xbU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[6U][0xcU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[6U][0xdU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[6U][0xeU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[6U][0xfU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[7U][0U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[7U][1U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[7U][2U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[7U][3U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[7U][4U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[7U][5U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[7U][6U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[7U][7U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[7U][8U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[7U][9U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[7U][0xaU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[7U][0xbU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[7U][0xcU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[7U][0xdU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[7U][0xeU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[7U][0xfU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[8U][0U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[8U][1U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[8U][2U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[8U][3U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[8U][4U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[8U][5U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[8U][6U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[8U][7U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[8U][8U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[8U][9U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[8U][0xaU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[8U][0xbU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[8U][0xcU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[8U][0xdU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[8U][0xeU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[8U][0xfU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[9U][0U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[9U][1U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[9U][2U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[9U][3U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[9U][4U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[9U][5U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[9U][6U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[9U][7U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[9U][8U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[9U][9U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[9U][0xaU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[9U][0xbU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[9U][0xcU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[9U][0xdU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[9U][0xeU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[9U][0xfU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xaU][0U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xaU][1U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xaU][2U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xaU][3U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xaU][4U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xaU][5U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xaU][6U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xaU][7U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xaU][8U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xaU][9U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xaU][0xaU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xaU][0xbU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xaU][0xcU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xaU][0xdU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xaU][0xeU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xaU][0xfU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xbU][0U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xbU][1U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xbU][2U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xbU][3U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xbU][4U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xbU][5U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xbU][6U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xbU][7U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xbU][8U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xbU][9U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xbU][0xaU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xbU][0xbU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xbU][0xcU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xbU][0xdU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xbU][0xeU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xbU][0xfU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xcU][0U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xcU][1U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xcU][2U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xcU][3U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xcU][4U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xcU][5U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xcU][6U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xcU][7U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xcU][8U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xcU][9U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xcU][0xaU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xcU][0xbU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xcU][0xcU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xcU][0xdU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xcU][0xeU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xcU][0xfU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xdU][0U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xdU][1U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xdU][2U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xdU][3U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xdU][4U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xdU][5U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xdU][6U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xdU][7U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xdU][8U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xdU][9U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xdU][0xaU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xdU][0xbU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xdU][0xcU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xdU][0xdU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xdU][0xeU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xdU][0xfU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xeU][0U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xeU][1U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xeU][2U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xeU][3U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xeU][4U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xeU][5U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xeU][6U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xeU][7U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xeU][8U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xeU][9U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xeU][0xaU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xeU][0xbU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xeU][0xcU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xeU][0xdU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xeU][0xeU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xeU][0xfU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xfU][0U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xfU][1U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xfU][2U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xfU][3U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xfU][4U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xfU][5U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xfU][6U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xfU][7U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xfU][8U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xfU][9U] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xfU][0xaU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xfU][0xbU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xfU][0xcU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xfU][0xdU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xfU][0xeU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0xfU][0xfU] 
            = Vmy_cpu__ConstPool__CONST_93e1b771_0[0xfU];
    }
    if (__Vdlyvset__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v16) {
        VL_ASSIGNSEL_WIII(512,32,(IData)(__Vdlyvlsb__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v16), 
                          vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store
                          [__Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v16], __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v16);
    }
    if (__Vdlyvset__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17) {
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17][0U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17][1U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17][2U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17][3U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17][4U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17][5U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17][6U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17][7U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17][8U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17][9U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17][0xaU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17][0xbU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17][0xcU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17][0xdU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17][0xeU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17][0xfU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17[0xfU];
    }
    if (__Vdlyvset__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v0) {
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[0U] = 0U;
    }
    if (__Vdlyvset__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v1) {
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[1U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[2U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[3U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[4U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[5U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[6U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[7U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[8U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[9U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[0xaU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[0xbU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[0xcU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[0xdU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[0xeU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[0xfU] = 0U;
    }
    if (__Vdlyvset__my_cpu__DOT__cache__DOT__Icache__DOT__tag__v16) {
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__tag__v16] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__tag__v16;
    }
    if (__Vdlyvset__my_cpu__DOT__cache__DOT__Icache__DOT__inst_store__v17) {
        vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Icache__DOT__tag__v17] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Icache__DOT__tag__v17;
    }
    vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__icache_state 
        = __Vdly__my_cpu__DOT__cache__DOT__Icache__DOT__icache_state;
    vlSelf->my_cpu__DOT__ID__DOT__junm_en = (((((((
                                                   (((0x73U 
                                                      == vlSelf->my_cpu__DOT__ID__DOT__inst) 
                                                     | (0x30200073U 
                                                        == vlSelf->my_cpu__DOT__ID__DOT__inst)) 
                                                    | (0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_jalr)) 
                                                  | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_bne)) 
                                                 | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_beq)) 
                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_blt)) 
                                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_bge)) 
                                              | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_bgeu)) 
                                             | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_bltu));
    vlSelf->my_cpu__DOT__ID__DOT__IF_we = ((((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->my_cpu__DOT__ID__DOT__inst)) 
                                             | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_jalr)) 
                                            | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrs)) 
                                           | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrw));
    vlSelf->my_cpu__DOT__ID__DOT__csr_OneHot = (((0x73U 
                                                  == vlSelf->my_cpu__DOT__ID__DOT__inst) 
                                                 << 3U) 
                                                | (((0x30200073U 
                                                     == vlSelf->my_cpu__DOT__ID__DOT__inst) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrs) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrw))));
    vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__adder_result 
        = ((vlSelf->my_cpu__DOT__EX__DOT__alu_src1 
            + vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__adder_b) 
           + vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__adder_cin);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__mul_32_1_var 
        = ((((((((((((((((((((((((((((((((QData)((IData)(
                                                         ((1U 
                                                           & (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul))
                                                           ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                           : 0U))) 
                                         + ((QData)((IData)(
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                         >> 1U)))
                                                              ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                              : 0U))) 
                                            << 1U)) 
                                        + ((QData)((IData)(
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                        >> 2U)))
                                                             ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                             : 0U))) 
                                           << 2U)) 
                                       + ((QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                       >> 3U)))
                                                            ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                            : 0U))) 
                                          << 3U)) + 
                                      ((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                    >> 4U)))
                                                         ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                         : 0U))) 
                                       << 4U)) + ((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                               >> 5U)))
                                                                    ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                                    : 0U))) 
                                                  << 5U)) 
                                    + ((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                    >> 6U)))
                                                         ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                         : 0U))) 
                                       << 6U)) + ((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                               >> 7U)))
                                                                    ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                                    : 0U))) 
                                                  << 7U)) 
                                  + ((QData)((IData)(
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                  >> 8U)))
                                                       ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                       : 0U))) 
                                     << 8U)) + ((QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                             >> 9U)))
                                                                  ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                                  : 0U))) 
                                                << 9U)) 
                                + ((QData)((IData)(
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                >> 0xaU)))
                                                     ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                     : 0U))) 
                                   << 0xaU)) + ((QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                             >> 0xbU)))
                                                                  ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                                  : 0U))) 
                                                << 0xbU)) 
                              + ((QData)((IData)(((1U 
                                                   & (IData)(
                                                             (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                              >> 0xcU)))
                                                   ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                   : 0U))) 
                                 << 0xcU)) + ((QData)((IData)(
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                           >> 0xdU)))
                                                                ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                                : 0U))) 
                                              << 0xdU)) 
                            + ((QData)((IData)(((1U 
                                                 & (IData)(
                                                           (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                            >> 0xeU)))
                                                 ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                 : 0U))) 
                               << 0xeU)) + ((QData)((IData)(
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                         >> 0xfU)))
                                                              ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                              : 0U))) 
                                            << 0xfU)) 
                          + ((QData)((IData)(((1U & (IData)(
                                                            (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                             >> 0x10U)))
                                               ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                               : 0U))) 
                             << 0x10U)) + ((QData)((IData)(
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                        >> 0x11U)))
                                                             ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                             : 0U))) 
                                           << 0x11U)) 
                        + ((QData)((IData)(((1U & (IData)(
                                                          (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                           >> 0x12U)))
                                             ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                             : 0U))) 
                           << 0x12U)) + ((QData)((IData)(
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                      >> 0x13U)))
                                                           ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                           : 0U))) 
                                         << 0x13U)) 
                      + ((QData)((IData)(((1U & (IData)(
                                                        (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                         >> 0x14U)))
                                           ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                           : 0U))) 
                         << 0x14U)) + ((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                    >> 0x15U)))
                                                         ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                         : 0U))) 
                                       << 0x15U)) + 
                    ((QData)((IData)(((1U & (IData)(
                                                    (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                     >> 0x16U)))
                                       ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                       : 0U))) << 0x16U)) 
                   + ((QData)((IData)(((1U & (IData)(
                                                     (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                      >> 0x17U)))
                                        ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                        : 0U))) << 0x17U)) 
                  + ((QData)((IData)(((1U & (IData)(
                                                    (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                     >> 0x18U)))
                                       ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                       : 0U))) << 0x18U)) 
                 + ((QData)((IData)(((1U & (IData)(
                                                   (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                    >> 0x19U)))
                                      ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                      : 0U))) << 0x19U)) 
                + ((QData)((IData)(((1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                   >> 0x1aU)))
                                     ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                     : 0U))) << 0x1aU)) 
               + ((QData)((IData)(((1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                  >> 0x1bU)))
                                    ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                    : 0U))) << 0x1bU)) 
              + ((QData)((IData)(((1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                 >> 0x1cU)))
                                   ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                   : 0U))) << 0x1cU)) 
             + ((QData)((IData)(((1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                >> 0x1dU)))
                                  ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                  : 0U))) << 0x1dU)) 
            + ((QData)((IData)(((1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                               >> 0x1eU)))
                                 ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                 : 0U))) << 0x1eU)) 
           + ((QData)((IData)(((1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                              >> 0x1fU)))
                                ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                : 0U))) << 0x1fU));
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__mul_32_2_var 
        = ((((((((((((((((((((((((((((((((QData)((IData)(
                                                         ((1U 
                                                           & (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul))
                                                           ? (IData)(
                                                                     (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                      >> 0x20U))
                                                           : 0U))) 
                                         + ((QData)((IData)(
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                         >> 1U)))
                                                              ? (IData)(
                                                                        (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                         >> 0x20U))
                                                              : 0U))) 
                                            << 1U)) 
                                        + ((QData)((IData)(
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                        >> 2U)))
                                                             ? (IData)(
                                                                       (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                        >> 0x20U))
                                                             : 0U))) 
                                           << 2U)) 
                                       + ((QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                       >> 3U)))
                                                            ? (IData)(
                                                                      (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                       >> 0x20U))
                                                            : 0U))) 
                                          << 3U)) + 
                                      ((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                    >> 4U)))
                                                         ? (IData)(
                                                                   (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                    >> 0x20U))
                                                         : 0U))) 
                                       << 4U)) + ((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                               >> 5U)))
                                                                    ? (IData)(
                                                                              (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                               >> 0x20U))
                                                                    : 0U))) 
                                                  << 5U)) 
                                    + ((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                    >> 6U)))
                                                         ? (IData)(
                                                                   (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                    >> 0x20U))
                                                         : 0U))) 
                                       << 6U)) + ((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                               >> 7U)))
                                                                    ? (IData)(
                                                                              (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                               >> 0x20U))
                                                                    : 0U))) 
                                                  << 7U)) 
                                  + ((QData)((IData)(
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                  >> 8U)))
                                                       ? (IData)(
                                                                 (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                  >> 0x20U))
                                                       : 0U))) 
                                     << 8U)) + ((QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                             >> 9U)))
                                                                  ? (IData)(
                                                                            (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                             >> 0x20U))
                                                                  : 0U))) 
                                                << 9U)) 
                                + ((QData)((IData)(
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                >> 0xaU)))
                                                     ? (IData)(
                                                               (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                >> 0x20U))
                                                     : 0U))) 
                                   << 0xaU)) + ((QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                             >> 0xbU)))
                                                                  ? (IData)(
                                                                            (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                             >> 0x20U))
                                                                  : 0U))) 
                                                << 0xbU)) 
                              + ((QData)((IData)(((1U 
                                                   & (IData)(
                                                             (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                              >> 0xcU)))
                                                   ? (IData)(
                                                             (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                              >> 0x20U))
                                                   : 0U))) 
                                 << 0xcU)) + ((QData)((IData)(
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                           >> 0xdU)))
                                                                ? (IData)(
                                                                          (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                           >> 0x20U))
                                                                : 0U))) 
                                              << 0xdU)) 
                            + ((QData)((IData)(((1U 
                                                 & (IData)(
                                                           (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                            >> 0xeU)))
                                                 ? (IData)(
                                                           (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                            >> 0x20U))
                                                 : 0U))) 
                               << 0xeU)) + ((QData)((IData)(
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                         >> 0xfU)))
                                                              ? (IData)(
                                                                        (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                         >> 0x20U))
                                                              : 0U))) 
                                            << 0xfU)) 
                          + ((QData)((IData)(((1U & (IData)(
                                                            (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                             >> 0x10U)))
                                               ? (IData)(
                                                         (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                          >> 0x20U))
                                               : 0U))) 
                             << 0x10U)) + ((QData)((IData)(
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                        >> 0x11U)))
                                                             ? (IData)(
                                                                       (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                        >> 0x20U))
                                                             : 0U))) 
                                           << 0x11U)) 
                        + ((QData)((IData)(((1U & (IData)(
                                                          (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                           >> 0x12U)))
                                             ? (IData)(
                                                       (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                        >> 0x20U))
                                             : 0U))) 
                           << 0x12U)) + ((QData)((IData)(
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                      >> 0x13U)))
                                                           ? (IData)(
                                                                     (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                      >> 0x20U))
                                                           : 0U))) 
                                         << 0x13U)) 
                      + ((QData)((IData)(((1U & (IData)(
                                                        (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                         >> 0x14U)))
                                           ? (IData)(
                                                     (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                      >> 0x20U))
                                           : 0U))) 
                         << 0x14U)) + ((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                    >> 0x15U)))
                                                         ? (IData)(
                                                                   (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                    >> 0x20U))
                                                         : 0U))) 
                                       << 0x15U)) + 
                    ((QData)((IData)(((1U & (IData)(
                                                    (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                     >> 0x16U)))
                                       ? (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                  >> 0x20U))
                                       : 0U))) << 0x16U)) 
                   + ((QData)((IData)(((1U & (IData)(
                                                     (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                      >> 0x17U)))
                                        ? (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                   >> 0x20U))
                                        : 0U))) << 0x17U)) 
                  + ((QData)((IData)(((1U & (IData)(
                                                    (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                     >> 0x18U)))
                                       ? (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                  >> 0x20U))
                                       : 0U))) << 0x18U)) 
                 + ((QData)((IData)(((1U & (IData)(
                                                   (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                    >> 0x19U)))
                                      ? (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                 >> 0x20U))
                                      : 0U))) << 0x19U)) 
                + ((QData)((IData)(((1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                   >> 0x1aU)))
                                     ? (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                >> 0x20U))
                                     : 0U))) << 0x1aU)) 
               + ((QData)((IData)(((1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                  >> 0x1bU)))
                                    ? (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                               >> 0x20U))
                                    : 0U))) << 0x1bU)) 
              + ((QData)((IData)(((1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                 >> 0x1cU)))
                                   ? (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                              >> 0x20U))
                                   : 0U))) << 0x1cU)) 
             + ((QData)((IData)(((1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                >> 0x1dU)))
                                  ? (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                             >> 0x20U))
                                  : 0U))) << 0x1dU)) 
            + ((QData)((IData)(((1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                               >> 0x1eU)))
                                 ? (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                            >> 0x20U))
                                 : 0U))) << 0x1eU)) 
           + ((QData)((IData)(((1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                              >> 0x1fU)))
                                ? (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                           >> 0x20U))
                                : 0U))) << 0x1fU));
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__mul_32_3_var 
        = ((((((((((((((((((((((((((((((((QData)((IData)(
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                      >> 0x20U)))
                                                           ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                           : 0U))) 
                                         + ((QData)((IData)(
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                         >> 0x21U)))
                                                              ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                              : 0U))) 
                                            << 1U)) 
                                        + ((QData)((IData)(
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                        >> 0x22U)))
                                                             ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                             : 0U))) 
                                           << 2U)) 
                                       + ((QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                       >> 0x23U)))
                                                            ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                            : 0U))) 
                                          << 3U)) + 
                                      ((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                    >> 0x24U)))
                                                         ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                         : 0U))) 
                                       << 4U)) + ((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                               >> 0x25U)))
                                                                    ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                                    : 0U))) 
                                                  << 5U)) 
                                    + ((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                    >> 0x26U)))
                                                         ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                         : 0U))) 
                                       << 6U)) + ((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                               >> 0x27U)))
                                                                    ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                                    : 0U))) 
                                                  << 7U)) 
                                  + ((QData)((IData)(
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                  >> 0x28U)))
                                                       ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                       : 0U))) 
                                     << 8U)) + ((QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                             >> 0x29U)))
                                                                  ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                                  : 0U))) 
                                                << 9U)) 
                                + ((QData)((IData)(
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                >> 0x2aU)))
                                                     ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                     : 0U))) 
                                   << 0xaU)) + ((QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                             >> 0x2bU)))
                                                                  ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                                  : 0U))) 
                                                << 0xbU)) 
                              + ((QData)((IData)(((1U 
                                                   & (IData)(
                                                             (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                              >> 0x2cU)))
                                                   ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                   : 0U))) 
                                 << 0xcU)) + ((QData)((IData)(
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                           >> 0x2dU)))
                                                                ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                                : 0U))) 
                                              << 0xdU)) 
                            + ((QData)((IData)(((1U 
                                                 & (IData)(
                                                           (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                            >> 0x2eU)))
                                                 ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                 : 0U))) 
                               << 0xeU)) + ((QData)((IData)(
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                         >> 0x2fU)))
                                                              ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                              : 0U))) 
                                            << 0xfU)) 
                          + ((QData)((IData)(((1U & (IData)(
                                                            (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                             >> 0x30U)))
                                               ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                               : 0U))) 
                             << 0x10U)) + ((QData)((IData)(
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                        >> 0x31U)))
                                                             ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                             : 0U))) 
                                           << 0x11U)) 
                        + ((QData)((IData)(((1U & (IData)(
                                                          (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                           >> 0x32U)))
                                             ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                             : 0U))) 
                           << 0x12U)) + ((QData)((IData)(
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                      >> 0x33U)))
                                                           ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                           : 0U))) 
                                         << 0x13U)) 
                      + ((QData)((IData)(((1U & (IData)(
                                                        (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                         >> 0x34U)))
                                           ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                           : 0U))) 
                         << 0x14U)) + ((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                    >> 0x35U)))
                                                         ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                                         : 0U))) 
                                       << 0x15U)) + 
                    ((QData)((IData)(((1U & (IData)(
                                                    (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                     >> 0x36U)))
                                       ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                       : 0U))) << 0x16U)) 
                   + ((QData)((IData)(((1U & (IData)(
                                                     (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                      >> 0x37U)))
                                        ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                        : 0U))) << 0x17U)) 
                  + ((QData)((IData)(((1U & (IData)(
                                                    (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                     >> 0x38U)))
                                       ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                       : 0U))) << 0x18U)) 
                 + ((QData)((IData)(((1U & (IData)(
                                                   (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                    >> 0x39U)))
                                      ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                      : 0U))) << 0x19U)) 
                + ((QData)((IData)(((1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                   >> 0x3aU)))
                                     ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                     : 0U))) << 0x1aU)) 
               + ((QData)((IData)(((1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                  >> 0x3bU)))
                                    ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                    : 0U))) << 0x1bU)) 
              + ((QData)((IData)(((1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                 >> 0x3cU)))
                                   ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                   : 0U))) << 0x1cU)) 
             + ((QData)((IData)(((1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                >> 0x3dU)))
                                  ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                  : 0U))) << 0x1dU)) 
            + ((QData)((IData)(((1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                               >> 0x3eU)))
                                 ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                 : 0U))) << 0x1eU)) 
           + ((QData)((IData)(((1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                              >> 0x3fU)))
                                ? (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)
                                : 0U))) << 0x1fU));
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__mul_32_4_var 
        = ((((((((((((((((((((((((((((((((QData)((IData)(
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                      >> 0x20U)))
                                                           ? (IData)(
                                                                     (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                      >> 0x20U))
                                                           : 0U))) 
                                         + ((QData)((IData)(
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                         >> 0x21U)))
                                                              ? (IData)(
                                                                        (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                         >> 0x20U))
                                                              : 0U))) 
                                            << 1U)) 
                                        + ((QData)((IData)(
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                        >> 0x22U)))
                                                             ? (IData)(
                                                                       (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                        >> 0x20U))
                                                             : 0U))) 
                                           << 2U)) 
                                       + ((QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                       >> 0x23U)))
                                                            ? (IData)(
                                                                      (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                       >> 0x20U))
                                                            : 0U))) 
                                          << 3U)) + 
                                      ((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                    >> 0x24U)))
                                                         ? (IData)(
                                                                   (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                    >> 0x20U))
                                                         : 0U))) 
                                       << 4U)) + ((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                               >> 0x25U)))
                                                                    ? (IData)(
                                                                              (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                               >> 0x20U))
                                                                    : 0U))) 
                                                  << 5U)) 
                                    + ((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                    >> 0x26U)))
                                                         ? (IData)(
                                                                   (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                    >> 0x20U))
                                                         : 0U))) 
                                       << 6U)) + ((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                               >> 0x27U)))
                                                                    ? (IData)(
                                                                              (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                               >> 0x20U))
                                                                    : 0U))) 
                                                  << 7U)) 
                                  + ((QData)((IData)(
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                  >> 0x28U)))
                                                       ? (IData)(
                                                                 (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                  >> 0x20U))
                                                       : 0U))) 
                                     << 8U)) + ((QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                             >> 0x29U)))
                                                                  ? (IData)(
                                                                            (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                             >> 0x20U))
                                                                  : 0U))) 
                                                << 9U)) 
                                + ((QData)((IData)(
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                >> 0x2aU)))
                                                     ? (IData)(
                                                               (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                >> 0x20U))
                                                     : 0U))) 
                                   << 0xaU)) + ((QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                             >> 0x2bU)))
                                                                  ? (IData)(
                                                                            (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                             >> 0x20U))
                                                                  : 0U))) 
                                                << 0xbU)) 
                              + ((QData)((IData)(((1U 
                                                   & (IData)(
                                                             (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                              >> 0x2cU)))
                                                   ? (IData)(
                                                             (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                              >> 0x20U))
                                                   : 0U))) 
                                 << 0xcU)) + ((QData)((IData)(
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                           >> 0x2dU)))
                                                                ? (IData)(
                                                                          (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                           >> 0x20U))
                                                                : 0U))) 
                                              << 0xdU)) 
                            + ((QData)((IData)(((1U 
                                                 & (IData)(
                                                           (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                            >> 0x2eU)))
                                                 ? (IData)(
                                                           (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                            >> 0x20U))
                                                 : 0U))) 
                               << 0xeU)) + ((QData)((IData)(
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                         >> 0x2fU)))
                                                              ? (IData)(
                                                                        (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                         >> 0x20U))
                                                              : 0U))) 
                                            << 0xfU)) 
                          + ((QData)((IData)(((1U & (IData)(
                                                            (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                             >> 0x30U)))
                                               ? (IData)(
                                                         (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                          >> 0x20U))
                                               : 0U))) 
                             << 0x10U)) + ((QData)((IData)(
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                        >> 0x31U)))
                                                             ? (IData)(
                                                                       (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                        >> 0x20U))
                                                             : 0U))) 
                                           << 0x11U)) 
                        + ((QData)((IData)(((1U & (IData)(
                                                          (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                           >> 0x32U)))
                                             ? (IData)(
                                                       (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                        >> 0x20U))
                                             : 0U))) 
                           << 0x12U)) + ((QData)((IData)(
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                      >> 0x33U)))
                                                           ? (IData)(
                                                                     (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                      >> 0x20U))
                                                           : 0U))) 
                                         << 0x13U)) 
                      + ((QData)((IData)(((1U & (IData)(
                                                        (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                         >> 0x34U)))
                                           ? (IData)(
                                                     (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                      >> 0x20U))
                                           : 0U))) 
                         << 0x14U)) + ((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                                    >> 0x35U)))
                                                         ? (IData)(
                                                                   (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                                    >> 0x20U))
                                                         : 0U))) 
                                       << 0x15U)) + 
                    ((QData)((IData)(((1U & (IData)(
                                                    (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                     >> 0x36U)))
                                       ? (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                  >> 0x20U))
                                       : 0U))) << 0x16U)) 
                   + ((QData)((IData)(((1U & (IData)(
                                                     (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                      >> 0x37U)))
                                        ? (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                   >> 0x20U))
                                        : 0U))) << 0x17U)) 
                  + ((QData)((IData)(((1U & (IData)(
                                                    (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                     >> 0x38U)))
                                       ? (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                  >> 0x20U))
                                       : 0U))) << 0x18U)) 
                 + ((QData)((IData)(((1U & (IData)(
                                                   (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                    >> 0x39U)))
                                      ? (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                 >> 0x20U))
                                      : 0U))) << 0x19U)) 
                + ((QData)((IData)(((1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                   >> 0x3aU)))
                                     ? (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                >> 0x20U))
                                     : 0U))) << 0x1aU)) 
               + ((QData)((IData)(((1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                  >> 0x3bU)))
                                    ? (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                               >> 0x20U))
                                    : 0U))) << 0x1bU)) 
              + ((QData)((IData)(((1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                 >> 0x3cU)))
                                   ? (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                              >> 0x20U))
                                   : 0U))) << 0x1cU)) 
             + ((QData)((IData)(((1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                >> 0x3dU)))
                                  ? (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                             >> 0x20U))
                                  : 0U))) << 0x1dU)) 
            + ((QData)((IData)(((1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                               >> 0x3eU)))
                                 ? (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                            >> 0x20U))
                                 : 0U))) << 0x1eU)) 
           + ((QData)((IData)(((1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                              >> 0x3fU)))
                                ? (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                           >> 0x20U))
                                : 0U))) << 0x1fU));
    VL_EXTEND_WI(65,1, __Vtemp45, (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                                 >> 0x3fU))));
    VL_EXTEND_WQ(65,64, __Vtemp46, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp47, __Vtemp45, __Vtemp46);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_1_2[0U] 
        = __Vtemp47[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_1_2[1U] 
        = __Vtemp47[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_1_2[2U] 
        = (1U & __Vtemp47[2U]);
    if (vlSelf->rst) {
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[1U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[2U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[3U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[4U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[5U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[6U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[7U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[8U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[9U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xaU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xbU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xcU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xdU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xeU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xfU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x10U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x11U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x12U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x13U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x14U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x15U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x16U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x17U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x18U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x19U] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x1aU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x1bU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x1cU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x1dU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x1eU] = 0U;
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x1fU] = 0U;
    } else if (((IData)(vlSelf->ext_write_req) & (0U 
                                                  == (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_state)))) {
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0U] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0U];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[1U] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][1U];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[2U] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][2U];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[3U] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][3U];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[4U] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][4U];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[5U] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][5U];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[6U] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][6U];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[7U] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][7U];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[8U] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][8U];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[9U] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][9U];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xaU] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xbU] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xcU] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xdU] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xeU] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xfU] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x10U] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x10U];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x11U] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x11U];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x12U] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x12U];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x13U] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x13U];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x14U] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x14U];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x15U] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x15U];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x16U] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x16U];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x17U] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x17U];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x18U] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x18U];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x19U] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x19U];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x1aU] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x1aU];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x1bU] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x1bU];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x1cU] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x1cU];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x1dU] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x1dU];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x1eU] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x1eU];
        vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x1fU] 
            = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x1fU];
    }
    if (vlSelf->rst) {
        vlSelf->my_cpu__DOT__cache__DOT__AXI_read_target = 0U;
    } else if (((IData)(vlSelf->my_cpu__DOT__cache__DOT__read_req) 
                & (0U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_state)))) {
        vlSelf->my_cpu__DOT__cache__DOT__AXI_read_target 
            = (((IData)(vlSelf->ext_read_req) & (~ (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_shortcut_dcache)))
                ? 2U : (((IData)(vlSelf->inst_read_req) 
                         & (~ (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_shortcut_icache)))
                         ? 1U : 0U));
    }
    if (vlSelf->rst) {
        vlSelf->inst_addr = 0x80000000U;
    } else if ((1U & (~ ((0U != (IData)(vlSelf->my_cpu__DOT__ID__DOT__mem_OneHot)) 
                         | (IData)(vlSelf->my_cpu__DOT__stop_all))))) {
        vlSelf->inst_addr = vlSelf->my_cpu__DOT__IF__DOT__inst_addr_next;
    }
    vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__slt_result 
        = (QData)((IData)((1U & (((IData)((vlSelf->my_cpu__DOT__EX__DOT__alu_src1 
                                           >> 0x3fU)) 
                                  & (~ (IData)((vlSelf->my_cpu__DOT__EX__DOT__alu_src2 
                                                >> 0x3fU)))) 
                                 | ((~ ((IData)((vlSelf->my_cpu__DOT__EX__DOT__alu_src1 
                                                 >> 0x3fU)) 
                                        ^ (IData)((vlSelf->my_cpu__DOT__EX__DOT__alu_src2 
                                                   >> 0x3fU)))) 
                                    & (IData)((vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__adder_result 
                                               >> 0x3fU)))))));
    VL_EXTEND_WQ(128,64, __Vtemp50, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__mul_32_1_var);
    VL_EXTEND_WQ(96,64, __Vtemp51, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__mul_32_2_var);
    __Vtemp52[0U] = 0U;
    __Vtemp52[1U] = __Vtemp51[0U];
    __Vtemp52[2U] = __Vtemp51[1U];
    __Vtemp52[3U] = __Vtemp51[2U];
    VL_ADD_W(4, __Vtemp53, __Vtemp50, __Vtemp52);
    VL_EXTEND_WQ(96,64, __Vtemp54, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__mul_32_3_var);
    __Vtemp55[0U] = 0U;
    __Vtemp55[1U] = __Vtemp54[0U];
    __Vtemp55[2U] = __Vtemp54[1U];
    __Vtemp55[3U] = __Vtemp54[2U];
    VL_ADD_W(4, __Vtemp56, __Vtemp53, __Vtemp55);
    __Vtemp57[0U] = 0U;
    __Vtemp57[1U] = 0U;
    __Vtemp57[2U] = (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__mul_32_4_var);
    __Vtemp57[3U] = (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__mul_32_4_var 
                             >> 0x20U));
    VL_ADD_W(4, __Vtemp58, __Vtemp56, __Vtemp57);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result_abs[0U] 
        = __Vtemp58[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result_abs[1U] 
        = __Vtemp58[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result_abs[2U] 
        = __Vtemp58[2U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result_abs[3U] 
        = __Vtemp58[3U];
    VL_EXTEND_WI(65,1, __Vtemp59, (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                                 >> 0x3fU))));
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_1_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_1[0U] 
            = (((IData)((((QData)((IData)(__Vtemp59[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      __Vtemp59[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x3eU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_1[1U] 
            = (((IData)((((QData)((IData)(__Vtemp59[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      __Vtemp59[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        __Vtemp59[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp59[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_1[2U] 
            = ((IData)(((((QData)((IData)(__Vtemp59[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      __Vtemp59[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_1_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_1_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x3eU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_1_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_1_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_1_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_1_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_1_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_1_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index 
        = __Vdly__my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index;
    if (__Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v0) {
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][0U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][1U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][2U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][3U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][4U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][5U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][6U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][7U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][8U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][9U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][0xaU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][0xbU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][0xcU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][0xdU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][0xeU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][0xfU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][0x10U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x10U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][0x11U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x11U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][0x12U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x12U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][0x13U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x13U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][0x14U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x14U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][0x15U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x15U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][0x16U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x16U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][0x17U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x17U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][0x18U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x18U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][0x19U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x19U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][0x1aU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1aU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][0x1bU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1bU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][0x1cU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1cU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][0x1dU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1dU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][0x1eU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1eU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0U][0x1fU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1fU];
    }
    if (__Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v1) {
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][0U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][1U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][2U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][3U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][4U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][5U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][6U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][7U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][8U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][9U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][0xaU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][0xbU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][0xcU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][0xdU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][0xeU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][0xfU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][0x10U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x10U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][0x11U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x11U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][0x12U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x12U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][0x13U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x13U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][0x14U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x14U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][0x15U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x15U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][0x16U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x16U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][0x17U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x17U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][0x18U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x18U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][0x19U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x19U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][0x1aU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1aU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][0x1bU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1bU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][0x1cU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1cU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][0x1dU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1dU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][0x1eU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1eU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1U][0x1fU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1fU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][0U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][1U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][2U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][3U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][4U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][5U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][6U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][7U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][8U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][9U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][0xaU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][0xbU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][0xcU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][0xdU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][0xeU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][0xfU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][0x10U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x10U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][0x11U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x11U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][0x12U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x12U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][0x13U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x13U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][0x14U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x14U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][0x15U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x15U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][0x16U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x16U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][0x17U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x17U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][0x18U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x18U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][0x19U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x19U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][0x1aU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1aU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][0x1bU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1bU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][0x1cU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1cU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][0x1dU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1dU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][0x1eU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1eU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2U][0x1fU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1fU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][0U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][1U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][2U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][3U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][4U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][5U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][6U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][7U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][8U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][9U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][0xaU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][0xbU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][0xcU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][0xdU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][0xeU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][0xfU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][0x10U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x10U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][0x11U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x11U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][0x12U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x12U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][0x13U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x13U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][0x14U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x14U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][0x15U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x15U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][0x16U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x16U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][0x17U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x17U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][0x18U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x18U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][0x19U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x19U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][0x1aU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1aU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][0x1bU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1bU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][0x1cU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1cU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][0x1dU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1dU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][0x1eU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1eU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3U][0x1fU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1fU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][0U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][1U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][2U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][3U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][4U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][5U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][6U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][7U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][8U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][9U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][0xaU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][0xbU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][0xcU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][0xdU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][0xeU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][0xfU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][0x10U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x10U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][0x11U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x11U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][0x12U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x12U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][0x13U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x13U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][0x14U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x14U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][0x15U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x15U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][0x16U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x16U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][0x17U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x17U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][0x18U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x18U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][0x19U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x19U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][0x1aU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1aU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][0x1bU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1bU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][0x1cU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1cU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][0x1dU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1dU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][0x1eU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1eU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4U][0x1fU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1fU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][0U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][1U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][2U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][3U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][4U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][5U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][6U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][7U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][8U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][9U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][0xaU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][0xbU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][0xcU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][0xdU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][0xeU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][0xfU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][0x10U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x10U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][0x11U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x11U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][0x12U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x12U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][0x13U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x13U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][0x14U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x14U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][0x15U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x15U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][0x16U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x16U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][0x17U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x17U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][0x18U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x18U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][0x19U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x19U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][0x1aU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1aU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][0x1bU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1bU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][0x1cU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1cU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][0x1dU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1dU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][0x1eU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1eU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5U][0x1fU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1fU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][0U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][1U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][2U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][3U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][4U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][5U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][6U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][7U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][8U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][9U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][0xaU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][0xbU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][0xcU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][0xdU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][0xeU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][0xfU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][0x10U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x10U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][0x11U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x11U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][0x12U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x12U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][0x13U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x13U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][0x14U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x14U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][0x15U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x15U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][0x16U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x16U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][0x17U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x17U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][0x18U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x18U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][0x19U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x19U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][0x1aU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1aU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][0x1bU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1bU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][0x1cU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1cU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][0x1dU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1dU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][0x1eU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1eU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6U][0x1fU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1fU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][0U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][1U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][2U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][3U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][4U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][5U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][6U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][7U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][8U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][9U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][0xaU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][0xbU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][0xcU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][0xdU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][0xeU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][0xfU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][0x10U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x10U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][0x11U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x11U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][0x12U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x12U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][0x13U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x13U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][0x14U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x14U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][0x15U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x15U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][0x16U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x16U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][0x17U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x17U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][0x18U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x18U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][0x19U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x19U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][0x1aU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1aU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][0x1bU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1bU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][0x1cU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1cU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][0x1dU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1dU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][0x1eU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1eU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7U][0x1fU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1fU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][0U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][1U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][2U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][3U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][4U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][5U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][6U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][7U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][8U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][9U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][0xaU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][0xbU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][0xcU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][0xdU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][0xeU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][0xfU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][0x10U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x10U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][0x11U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x11U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][0x12U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x12U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][0x13U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x13U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][0x14U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x14U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][0x15U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x15U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][0x16U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x16U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][0x17U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x17U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][0x18U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x18U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][0x19U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x19U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][0x1aU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1aU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][0x1bU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1bU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][0x1cU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1cU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][0x1dU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1dU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][0x1eU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1eU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8U][0x1fU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1fU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][0U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][1U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][2U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][3U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][4U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][5U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][6U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][7U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][8U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][9U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][0xaU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][0xbU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][0xcU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][0xdU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][0xeU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][0xfU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][0x10U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x10U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][0x11U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x11U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][0x12U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x12U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][0x13U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x13U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][0x14U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x14U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][0x15U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x15U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][0x16U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x16U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][0x17U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x17U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][0x18U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x18U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][0x19U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x19U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][0x1aU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1aU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][0x1bU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1bU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][0x1cU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1cU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][0x1dU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1dU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][0x1eU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1eU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9U][0x1fU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1fU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][0U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][1U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][2U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][3U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][4U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][5U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][6U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][7U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][8U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][9U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][0xaU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][0xbU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][0xcU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][0xdU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][0xeU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][0xfU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][0x10U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x10U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][0x11U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x11U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][0x12U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x12U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][0x13U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x13U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][0x14U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x14U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][0x15U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x15U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][0x16U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x16U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][0x17U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x17U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][0x18U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x18U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][0x19U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x19U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][0x1aU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1aU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][0x1bU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1bU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][0x1cU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1cU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][0x1dU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1dU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][0x1eU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1eU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xaU][0x1fU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1fU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][0U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][1U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][2U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][3U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][4U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][5U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][6U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][7U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][8U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][9U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][0xaU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][0xbU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][0xcU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][0xdU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][0xeU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][0xfU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][0x10U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x10U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][0x11U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x11U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][0x12U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x12U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][0x13U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x13U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][0x14U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x14U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][0x15U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x15U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][0x16U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x16U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][0x17U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x17U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][0x18U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x18U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][0x19U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x19U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][0x1aU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1aU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][0x1bU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1bU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][0x1cU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1cU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][0x1dU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1dU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][0x1eU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1eU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xbU][0x1fU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1fU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][0U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][1U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][2U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][3U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][4U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][5U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][6U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][7U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][8U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][9U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][0xaU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][0xbU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][0xcU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][0xdU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][0xeU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][0xfU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][0x10U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x10U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][0x11U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x11U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][0x12U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x12U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][0x13U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x13U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][0x14U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x14U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][0x15U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x15U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][0x16U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x16U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][0x17U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x17U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][0x18U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x18U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][0x19U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x19U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][0x1aU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1aU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][0x1bU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1bU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][0x1cU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1cU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][0x1dU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1dU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][0x1eU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1eU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xcU][0x1fU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1fU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][0U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][1U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][2U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][3U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][4U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][5U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][6U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][7U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][8U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][9U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][0xaU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][0xbU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][0xcU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][0xdU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][0xeU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][0xfU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][0x10U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x10U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][0x11U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x11U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][0x12U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x12U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][0x13U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x13U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][0x14U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x14U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][0x15U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x15U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][0x16U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x16U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][0x17U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x17U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][0x18U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x18U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][0x19U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x19U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][0x1aU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1aU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][0x1bU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1bU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][0x1cU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1cU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][0x1dU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1dU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][0x1eU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1eU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xdU][0x1fU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1fU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][0U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][1U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][2U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][3U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][4U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][5U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][6U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][7U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][8U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][9U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][0xaU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][0xbU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][0xcU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][0xdU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][0xeU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][0xfU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][0x10U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x10U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][0x11U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x11U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][0x12U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x12U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][0x13U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x13U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][0x14U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x14U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][0x15U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x15U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][0x16U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x16U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][0x17U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x17U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][0x18U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x18U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][0x19U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x19U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][0x1aU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1aU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][0x1bU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1bU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][0x1cU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1cU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][0x1dU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1dU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][0x1eU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1eU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xeU][0x1fU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1fU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][0U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][1U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][2U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][3U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][4U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][5U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][6U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][7U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][8U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][9U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][0xaU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][0xbU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][0xcU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][0xdU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][0xeU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][0xfU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][0x10U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x10U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][0x11U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x11U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][0x12U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x12U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][0x13U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x13U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][0x14U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x14U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][0x15U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x15U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][0x16U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x16U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][0x17U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x17U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][0x18U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x18U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][0x19U] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x19U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][0x1aU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1aU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][0x1bU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1bU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][0x1cU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1cU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][0x1dU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1dU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][0x1eU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1eU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0xfU][0x1fU] 
            = Vmy_cpu__ConstPool__CONST_d6b7ba52_0[0x1fU];
    }
    if (__Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v16) {
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][0U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][1U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][2U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][3U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][4U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][5U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][6U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][7U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][8U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][9U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][0xaU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][0xbU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][0xcU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][0xdU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][0xeU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][0xfU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][0x10U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x10U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][0x11U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x11U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][0x12U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x12U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][0x13U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x13U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][0x14U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x14U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][0x15U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x15U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][0x16U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x16U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][0x17U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x17U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][0x18U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x18U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][0x19U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x19U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][0x1aU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x1aU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][0x1bU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x1bU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][0x1cU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x1cU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][0x1dU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x1dU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][0x1eU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x1eU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16][0x1fU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v16[0x1fU];
    }
    if (__Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__tag__v17) {
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][0U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][1U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[1U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][2U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[2U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][3U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[3U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][4U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[4U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][5U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[5U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][6U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[6U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][7U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[7U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][8U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[8U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][9U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[9U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][0xaU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][0xbU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][0xcU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][0xdU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][0xeU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][0xfU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][0x10U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x10U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][0x11U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x11U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][0x12U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x12U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][0x13U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x13U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][0x14U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x14U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][0x15U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x15U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][0x16U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x16U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][0x17U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x17U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][0x18U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x18U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][0x19U] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x19U];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][0x1aU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x1aU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][0x1bU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x1bU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][0x1cU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x1cU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][0x1dU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x1dU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][0x1eU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x1eU];
        vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17][0x1fU] 
            = __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v17[0x1fU];
    }
    if (__Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v18) {
        VL_ASSIGNSEL_WIIQ(1024,64,(IData)(__Vdlyvlsb__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v18), 
                          vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                          [__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v18], __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v18);
    }
    if (__Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v19) {
        VL_ASSIGNSEL_WIIQ(1024,64,(IData)(__Vdlyvlsb__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v19), 
                          vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                          [__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v19], __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v19);
    }
    if (__Vdlyvset__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v20) {
        VL_ASSIGNSEL_WIIQ(1024,64,(IData)(__Vdlyvlsb__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v20), 
                          vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                          [__Vdlyvdim0__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v20], __Vdlyvval__my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store__v20);
    }
    vlSelf->my_cpu__DOT__cache__DOT__write_state = __Vdly__my_cpu__DOT__cache__DOT__write_state;
    vlSelf->my_cpu__DOT__cache__DOT__read_state = __Vdly__my_cpu__DOT__cache__DOT__read_state;
    vlSelf->my_cpu__DOT__ID__DOT__mem_OneHot = (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lwu) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sh) 
                                                    << 9U) 
                                                   | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sd) 
                                                       << 8U) 
                                                      | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sw) 
                                                          << 7U) 
                                                         | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ld) 
                                                             << 6U) 
                                                            | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lw) 
                                                                << 5U) 
                                                               | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lhu) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lh) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lbu) 
                                                                         << 2U) 
                                                                        | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_lb) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sb)))))))))));
    VL_EXTEND_WQ(65,64, __Vtemp65, vlSelf->my_cpu__DOT__EX__DOT__alu_src1);
    VL_EXTEND_WQ(65,64, __Vtemp66, vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__adder_b);
    VL_ADD_W(3, __Vtemp67, __Vtemp65, __Vtemp66);
    VL_EXTEND_WQ(65,64, __Vtemp68, vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__adder_cin);
    VL_ADD_W(3, __Vtemp69, __Vtemp67, __Vtemp68);
    vlSelf->my_cpu__DOT__EX__DOT__alu_result = ((((
                                                   ((((((((((- (QData)((IData)(
                                                                               (1U 
                                                                                & ((vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                                                                >> 0xaU) 
                                                                                | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                                                                >> 9U)))))) 
                                                            & vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__adder_result) 
                                                           | ((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                                                                >> 8U))))) 
                                                              & vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__slt_result)) 
                                                          | ((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                                                                >> 7U))))) 
                                                             & (QData)((IData)(
                                                                               (1U 
                                                                                & (~ 
                                                                                (1U 
                                                                                & __Vtemp69[2U]))))))) 
                                                         | ((- (QData)((IData)(
                                                                               (1U 
                                                                                & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                                                                >> 6U))))) 
                                                            & (vlSelf->my_cpu__DOT__EX__DOT__alu_src1 
                                                               & vlSelf->my_cpu__DOT__EX__DOT__alu_src2))) 
                                                        | ((- (QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                                                                >> 5U))))) 
                                                           & (vlSelf->my_cpu__DOT__EX__DOT__alu_src1 
                                                              | vlSelf->my_cpu__DOT__EX__DOT__alu_src2))) 
                                                       | ((- (QData)((IData)(
                                                                             (1U 
                                                                              & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                                                                >> 4U))))) 
                                                          & (vlSelf->my_cpu__DOT__EX__DOT__alu_src1 
                                                             ^ vlSelf->my_cpu__DOT__EX__DOT__alu_src2))) 
                                                      | ((- (QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                                                                >> 3U))))) 
                                                         & (vlSelf->my_cpu__DOT__EX__DOT__alu_src1 
                                                            << 
                                                            (0x3fU 
                                                             & (IData)(vlSelf->my_cpu__DOT__EX__DOT__alu_src2))))) 
                                                     | ((- (QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                                                               >> 2U))))) 
                                                        & (vlSelf->my_cpu__DOT__EX__DOT__alu_src1 
                                                           >> 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->my_cpu__DOT__EX__DOT__alu_src2))))) 
                                                    | ((- (QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                                                              >> 0x1dU))))) 
                                                       & vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__srlw_result)) 
                                                   | ((- (QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                                                             >> 0x1eU))))) 
                                                      & vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__sllw_result)) 
                                                  | ((- (QData)((IData)(
                                                                        (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                                                         >> 0x1fU)))) 
                                                     & vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__sraw_result)) 
                                                 | ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                                                           >> 1U))))) 
                                                    & (vlSelf->my_cpu__DOT__EX__DOT__alu_src1 
                                                       >> 
                                                       (0x3fU 
                                                        & (IData)(vlSelf->my_cpu__DOT__EX__DOT__alu_src2))))) 
                                                | ((- (QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U])))) 
                                                   & vlSelf->my_cpu__DOT__EX__DOT__alu_src2));
    __Vtemp71[0U] = 1U;
    __Vtemp71[1U] = 0U;
    __Vtemp71[2U] = 0U;
    __Vtemp71[3U] = 0U;
    __Vtemp72[0U] = (~ vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result_abs[0U]);
    __Vtemp72[1U] = (~ vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result_abs[1U]);
    __Vtemp72[2U] = (~ vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result_abs[2U]);
    __Vtemp72[3U] = (~ vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result_abs[3U]);
    VL_ADD_W(4, __Vtemp73, __Vtemp71, __Vtemp72);
    if ((((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_abs_flag) 
          ^ (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_abs_flag)) 
         & (3U == (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul_signed)))) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[0U] 
            = __Vtemp73[0U];
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[1U] 
            = __Vtemp73[1U];
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[2U] 
            = __Vtemp73[2U];
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[3U] 
            = __Vtemp73[3U];
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[0U] 
            = vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result_abs[0U];
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[1U] 
            = vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result_abs[1U];
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[2U] 
            = vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result_abs[2U];
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[3U] 
            = vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result_abs[3U];
    }
    VL_EXTEND_WQ(65,64, __Vtemp77, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp78, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_1, __Vtemp77);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_2[0U] 
        = __Vtemp78[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_2[1U] 
        = __Vtemp78[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_2[2U] 
        = (1U & __Vtemp78[2U]);
    vlSelf->WDATA = (((QData)((IData)(vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[
                                      (((IData)(0x3fU) 
                                        + (0x3ffU & 
                                           (((((IData)(1U) 
                                               + (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_index)) 
                                              << 6U) 
                                             - (IData)(1U)) 
                                            - (IData)(0x3fU)))) 
                                       >> 5U)])) << 
                      ((0U == (0x1fU & (((((IData)(1U) 
                                           + (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_index)) 
                                          << 6U) - (IData)(1U)) 
                                        - (IData)(0x3fU))))
                        ? 0x20U : ((IData)(0x40U) - 
                                   (0x1fU & (((((IData)(1U) 
                                                + (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_index)) 
                                               << 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU)))))) 
                     | (((0U == (0x1fU & (((((IData)(1U) 
                                             + (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_index)) 
                                            << 6U) 
                                           - (IData)(1U)) 
                                          - (IData)(0x3fU))))
                          ? 0ULL : ((QData)((IData)(
                                                    vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[
                                                    (((IData)(0x1fU) 
                                                      + 
                                                      (0x3ffU 
                                                       & (((((IData)(1U) 
                                                             + (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_index)) 
                                                            << 6U) 
                                                           - (IData)(1U)) 
                                                          - (IData)(0x3fU)))) 
                                                     >> 5U)])) 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           (((((IData)(1U) 
                                               + (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_index)) 
                                              << 6U) 
                                             - (IData)(1U)) 
                                            - (IData)(0x3fU)))))) 
                        | ((QData)((IData)(vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[
                                           (0x1fU & 
                                            ((((((IData)(1U) 
                                                 + (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_index)) 
                                                << 6U) 
                                               - (IData)(1U)) 
                                              - (IData)(0x3fU)) 
                                             >> 5U))])) 
                           >> (0x1fU & (((((IData)(1U) 
                                           + (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_index)) 
                                          << 6U) - (IData)(1U)) 
                                        - (IData)(0x3fU))))));
    vlSelf->ext_write_addr = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index] 
                              << 7U);
    vlSelf->AWVALID = (1U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_state));
    vlSelf->WVALID = (2U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_state));
    vlSelf->BREADY = (3U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_state));
    vlSelf->ARVALID = (1U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_state));
    vlSelf->RREADY = (2U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_state));
    vlSelf->my_cpu__DOT__cache__DOT__icache_busy = 
        ((0U != (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_state)) 
         & (1U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__AXI_read_target)));
    vlSelf->my_cpu__DOT__cache__DOT__read_shortcut_icache 
        = (vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_addr 
           == vlSelf->inst_addr);
    vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
        = (((1U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__icache_state)) 
            | (0U != (IData)(vlSelf->my_cpu__DOT__ID__DOT__mem_OneHot)))
            ? vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_pre
            : vlSelf->inst_addr);
    vlSelf->mul_div_result = vlSelf->my_cpu__DOT__EX__DOT__alu_result;
    vlSelf->ext_ram_addr = ((IData)((vlSelf->my_cpu__DOT__EX__DOT__alu_result 
                                     >> 3U)) << 3U);
    vlSelf->ext_ram_be_n = ((1U & ((vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                    >> 0x18U) | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                                 >> 0x1aU)))
                             ? 0xffU : ((1U & (((vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                                 >> 0x1cU) 
                                                | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                                   >> 0x17U)) 
                                               | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                                  >> 0x19U)))
                                         ? ((1U & (IData)(
                                                          (vlSelf->my_cpu__DOT__EX__DOT__alu_result 
                                                           >> 2U)))
                                             ? 0xf0U
                                             : 0xfU)
                                         : ((1U & (
                                                   ((vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                                     >> 0x15U) 
                                                    | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                                       >> 0x16U)) 
                                                   | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                                      >> 0x1bU)))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->my_cpu__DOT__EX__DOT__alu_result 
                                                            >> 2U)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->my_cpu__DOT__EX__DOT__alu_result 
                                                             >> 1U)))
                                                  ? 0xc0U
                                                  : 0x30U)
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->my_cpu__DOT__EX__DOT__alu_result 
                                                             >> 1U)))
                                                  ? 0xcU
                                                  : 3U))
                                             : ((1U 
                                                 & (((vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                                      >> 0x13U) 
                                                     | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                                        >> 0x14U)) 
                                                    | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                                       >> 0x12U)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->my_cpu__DOT__EX__DOT__alu_result 
                                                             >> 2U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->my_cpu__DOT__EX__DOT__alu_result 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->my_cpu__DOT__EX__DOT__alu_result))
                                                    ? 0x80U
                                                    : 0x40U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->my_cpu__DOT__EX__DOT__alu_result))
                                                    ? 0x20U
                                                    : 0x10U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->my_cpu__DOT__EX__DOT__alu_result 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->my_cpu__DOT__EX__DOT__alu_result))
                                                    ? 8U
                                                    : 4U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->my_cpu__DOT__EX__DOT__alu_result))
                                                    ? 2U
                                                    : 1U)))
                                                 : 0U))));
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x3dU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x3dU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    vlSelf->base_ram_addr = (0xffffffc0U & vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel);
    vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit 
        = ((0xfffcU & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit)) 
           | (((vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag
                [1U] == (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                         >> 6U)) << 1U) | (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag
                                           [0U] == 
                                           (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                                            >> 6U))));
    vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit 
        = ((0xfff3U & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit)) 
           | (((vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag
                [3U] == (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                         >> 6U)) << 3U) | ((vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag
                                            [2U] == 
                                            (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                                             >> 6U)) 
                                           << 2U)));
    vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit 
        = ((0xffcfU & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit)) 
           | (((vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag
                [5U] == (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                         >> 6U)) << 5U) | ((vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag
                                            [4U] == 
                                            (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                                             >> 6U)) 
                                           << 4U)));
    vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit 
        = ((0xff3fU & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit)) 
           | (((vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag
                [7U] == (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                         >> 6U)) << 7U) | ((vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag
                                            [6U] == 
                                            (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                                             >> 6U)) 
                                           << 6U)));
    vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit 
        = ((0xfcffU & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit)) 
           | (((vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag
                [9U] == (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                         >> 6U)) << 9U) | ((vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag
                                            [8U] == 
                                            (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                                             >> 6U)) 
                                           << 8U)));
    vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit 
        = ((0xf3ffU & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit)) 
           | (((vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag
                [0xbU] == (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                           >> 6U)) << 0xbU) | ((vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag
                                                [0xaU] 
                                                == 
                                                (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                                                 >> 6U)) 
                                               << 0xaU)));
    vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit 
        = ((0xcfffU & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit)) 
           | (((vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag
                [0xdU] == (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                           >> 6U)) << 0xdU) | ((vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag
                                                [0xcU] 
                                                == 
                                                (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                                                 >> 6U)) 
                                               << 0xcU)));
    vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit 
        = ((0x3fffU & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit)) 
           | (((vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag
                [0xfU] == (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                           >> 6U)) << 0xfU) | ((vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag
                                                [0xeU] 
                                                == 
                                                (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                                                 >> 6U)) 
                                               << 0xeU)));
    vlSelf->ext_read_addr = (0xffffff80U & vlSelf->ext_ram_addr);
    vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit 
        = ((0xfffcU & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit)) 
           | (((vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag
                [1U] == (vlSelf->ext_ram_addr >> 7U)) 
               << 1U) | (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag
                         [0U] == (vlSelf->ext_ram_addr 
                                  >> 7U))));
    vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit 
        = ((0xfff3U & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit)) 
           | (((vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag
                [3U] == (vlSelf->ext_ram_addr >> 7U)) 
               << 3U) | ((vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag
                          [2U] == (vlSelf->ext_ram_addr 
                                   >> 7U)) << 2U)));
    vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit 
        = ((0xffcfU & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit)) 
           | (((vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag
                [5U] == (vlSelf->ext_ram_addr >> 7U)) 
               << 5U) | ((vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag
                          [4U] == (vlSelf->ext_ram_addr 
                                   >> 7U)) << 4U)));
    vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit 
        = ((0xff3fU & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit)) 
           | (((vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag
                [7U] == (vlSelf->ext_ram_addr >> 7U)) 
               << 7U) | ((vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag
                          [6U] == (vlSelf->ext_ram_addr 
                                   >> 7U)) << 6U)));
    vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit 
        = ((0xfcffU & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit)) 
           | (((vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag
                [9U] == (vlSelf->ext_ram_addr >> 7U)) 
               << 9U) | ((vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag
                          [8U] == (vlSelf->ext_ram_addr 
                                   >> 7U)) << 8U)));
    vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit 
        = ((0xf3ffU & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit)) 
           | (((vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag
                [0xbU] == (vlSelf->ext_ram_addr >> 7U)) 
               << 0xbU) | ((vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag
                            [0xaU] == (vlSelf->ext_ram_addr 
                                       >> 7U)) << 0xaU)));
    vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit 
        = ((0xcfffU & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit)) 
           | (((vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag
                [0xdU] == (vlSelf->ext_ram_addr >> 7U)) 
               << 0xdU) | ((vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag
                            [0xcU] == (vlSelf->ext_ram_addr 
                                       >> 7U)) << 0xcU)));
    vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit 
        = ((0x3fffU & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit)) 
           | (((vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag
                [0xfU] == (vlSelf->ext_ram_addr >> 7U)) 
               << 0xfU) | ((vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag
                            [0xeU] == (vlSelf->ext_ram_addr 
                                       >> 7U)) << 0xeU)));
    vlSelf->mmio_be_n = vlSelf->ext_ram_be_n;
    VL_EXTEND_WQ(65,64, __Vtemp85, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp86, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_1, __Vtemp85);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_2[0U] 
        = __Vtemp86[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_2[1U] 
        = __Vtemp86[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_2[2U] 
        = (1U & __Vtemp86[2U]);
    vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit_index 
        = (((((((((1U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit)) 
                  | (2U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit))) 
                 | (4U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit))) 
                | (8U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit))) 
               | (0x10U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit))) 
              | (0x20U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit))) 
             | (0x40U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit))) 
            | (0x80U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit)))
            ? ((1U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit))
                ? 0U : ((2U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit))
                         ? 1U : ((4U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit))
                                  ? 2U : ((8U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit))
                                           ? 3U : (
                                                   (0x10U 
                                                    == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit))
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
                                                     == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit))
                                                     ? 5U
                                                     : 
                                                    ((0x40U 
                                                      == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit))
                                                      ? 6U
                                                      : 7U)))))))
            : (((((((((0x100U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit)) 
                      | (0x200U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit))) 
                     | (0x400U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit))) 
                    | (0x800U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit))) 
                   | (0x1000U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit))) 
                  | (0x2000U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit))) 
                 | (0x4000U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit))) 
                | (0x8000U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit)))
                ? ((0x100U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit))
                    ? 8U : ((0x200U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit))
                             ? 9U : ((0x400U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit))
                                      ? 0xaU : ((0x800U 
                                                 == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit))
                                                 ? 0xbU
                                                 : 
                                                ((0x1000U 
                                                  == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit))
                                                  ? 0xcU
                                                  : 
                                                 ((0x2000U 
                                                   == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit))
                                                   ? 0xdU
                                                   : 
                                                  ((0x4000U 
                                                    == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit))
                                                    ? 0xeU
                                                    : 0xfU)))))))
                : 0U));
    vlSelf->inst_read_req = (0U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit));
    vlSelf->my_cpu__DOT__cache__DOT__read_shortcut_dcache 
        = (vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_addr 
           == vlSelf->ext_read_addr);
    vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index 
        = (((((((((1U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit)) 
                  | (2U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))) 
                 | (4U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))) 
                | (8U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))) 
               | (0x10U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))) 
              | (0x20U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))) 
             | (0x40U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))) 
            | (0x80U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit)))
            ? ((1U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))
                ? 0U : ((2U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))
                         ? 1U : ((4U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))
                                  ? 2U : ((8U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))
                                           ? 3U : (
                                                   (0x10U 
                                                    == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
                                                     == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))
                                                     ? 5U
                                                     : 
                                                    ((0x40U 
                                                      == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))
                                                      ? 6U
                                                      : 7U)))))))
            : (((((((((0x100U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit)) 
                      | (0x200U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))) 
                     | (0x400U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))) 
                    | (0x800U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))) 
                   | (0x1000U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))) 
                  | (0x2000U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))) 
                 | (0x4000U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))) 
                | (0x8000U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit)))
                ? ((0x100U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))
                    ? 8U : ((0x200U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))
                             ? 9U : ((0x400U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))
                                      ? 0xaU : ((0x800U 
                                                 == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))
                                                 ? 0xbU
                                                 : 
                                                ((0x1000U 
                                                  == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))
                                                  ? 0xcU
                                                  : 
                                                 ((0x2000U 
                                                   == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))
                                                   ? 0xdU
                                                   : 
                                                  ((0x4000U 
                                                    == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit))
                                                    ? 0xeU
                                                    : 0xfU)))))))
                : 0U));
    vlSelf->my_cpu__DOT__mmio__DOT__total_shift = (
                                                   (0x10U 
                                                    & (IData)(vlSelf->mmio_be_n))
                                                    ? 0ULL
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->mmio_be_n))
                                                     ? 8ULL
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSelf->mmio_be_n))
                                                      ? 0x10ULL
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSelf->mmio_be_n))
                                                       ? 0x18ULL
                                                       : 0ULL))));
    if ((1U & (IData)(vlSelf->mmio_be_n))) {
        vlSelf->my_cpu__DOT__mmio__DOT__total_shift_cut = 0ULL;
        vlSelf->my_cpu__DOT__mmio__DOT__total_shift_in = 0U;
    } else {
        vlSelf->my_cpu__DOT__mmio__DOT__total_shift_cut 
            = ((2U & (IData)(vlSelf->mmio_be_n)) ? 8ULL
                : ((4U & (IData)(vlSelf->mmio_be_n))
                    ? 0x10ULL : ((8U & (IData)(vlSelf->mmio_be_n))
                                  ? 0x18ULL : 0ULL)));
        vlSelf->my_cpu__DOT__mmio__DOT__total_shift_in 
            = ((2U & (IData)(vlSelf->mmio_be_n)) ? 8U
                : ((4U & (IData)(vlSelf->mmio_be_n))
                    ? 0x10U : ((8U & (IData)(vlSelf->mmio_be_n))
                                ? 0x18U : ((0x10U & (IData)(vlSelf->mmio_be_n))
                                            ? 0x20U
                                            : ((0x20U 
                                                & (IData)(vlSelf->mmio_be_n))
                                                ? 0x28U
                                                : (
                                                   (0x40U 
                                                    & (IData)(vlSelf->mmio_be_n))
                                                    ? 0x30U
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSelf->mmio_be_n))
                                                     ? 0x38U
                                                     : 0U)))))));
    }
    vlSelf->mmio_serial_en = ((0xa00003f8U == vlSelf->ext_ram_addr) 
                              & (0U != (IData)(vlSelf->mmio_be_n)));
    vlSelf->mmio_rtc_low_en = ((0xa0000048U == vlSelf->ext_ram_addr) 
                               & (0U != (0xfU & (IData)(vlSelf->mmio_be_n))));
    vlSelf->mmio_vga_ctl_low_en = ((0xa0000100U == vlSelf->ext_ram_addr) 
                                   & (0U != (0xfU & (IData)(vlSelf->mmio_be_n))));
    vlSelf->mmio_vga_ctl_high_en = ((0xa0000100U == vlSelf->ext_ram_addr) 
                                    & (0U != (0xfU 
                                              & ((IData)(vlSelf->mmio_be_n) 
                                                 >> 4U))));
    vlSelf->my_cpu__DOT__mmio_kbd_en = ((0xa0000060U 
                                         == vlSelf->ext_ram_addr) 
                                        & (0U != (IData)(vlSelf->mmio_be_n)));
    vlSelf->mmio_fb_low_en = ((0xa1U == (vlSelf->ext_ram_addr 
                                         >> 0x18U)) 
                              & (0U != (0xfU & (IData)(vlSelf->mmio_be_n))));
    vlSelf->mmio_fb_high_en = ((0xa1U == (vlSelf->ext_ram_addr 
                                          >> 0x18U)) 
                               & (0U != (0xfU & ((IData)(vlSelf->mmio_be_n) 
                                                 >> 4U))));
    vlSelf->mmio_rtc_high_en = ((0xa0000048U == vlSelf->ext_ram_addr) 
                                & (0U != (0xfU & ((IData)(vlSelf->mmio_be_n) 
                                                  >> 4U))));
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x3cU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x3cU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    vlSelf->mmio_addr = ((IData)(vlSelf->mmio_rtc_high_en)
                          ? 0xa000004cU : vlSelf->ext_ram_addr);
    vlSelf->my_cpu__DOT__dcache_wen = ((~ ((((((((IData)(vlSelf->my_cpu__DOT__mmio_kbd_en) 
                                                 | (IData)(vlSelf->mmio_serial_en)) 
                                                | (IData)(vlSelf->mmio_rtc_low_en)) 
                                               | (IData)(vlSelf->mmio_rtc_high_en)) 
                                              | (IData)(vlSelf->mmio_vga_ctl_high_en)) 
                                             | (IData)(vlSelf->mmio_vga_ctl_low_en)) 
                                            | (IData)(vlSelf->mmio_fb_low_en)) 
                                           | (IData)(vlSelf->mmio_fb_high_en))) 
                                       & (IData)(vlSelf->ext_ram_wen));
    vlSelf->mmio_wen = (((((((((IData)(vlSelf->my_cpu__DOT__mmio_kbd_en) 
                               | (IData)(vlSelf->mmio_fb_low_en)) 
                              | (IData)(vlSelf->mmio_fb_high_en)) 
                             | (IData)(vlSelf->mmio_serial_en)) 
                            | (IData)(vlSelf->mmio_rtc_low_en)) 
                           | (IData)(vlSelf->mmio_rtc_high_en)) 
                          | (IData)(vlSelf->mmio_vga_ctl_low_en)) 
                         | (IData)(vlSelf->mmio_vga_ctl_high_en))
                         ? (1U & (IData)(vlSelf->ext_ram_wen))
                         : 0U);
    vlSelf->my_cpu__DOT__dcache_be_n = (((((((((IData)(vlSelf->my_cpu__DOT__mmio_kbd_en) 
                                               | (IData)(vlSelf->mmio_serial_en)) 
                                              | (IData)(vlSelf->mmio_rtc_low_en)) 
                                             | (IData)(vlSelf->mmio_rtc_high_en)) 
                                            | (IData)(vlSelf->mmio_vga_ctl_high_en)) 
                                           | (IData)(vlSelf->mmio_vga_ctl_low_en)) 
                                          | (IData)(vlSelf->mmio_fb_low_en)) 
                                         | (IData)(vlSelf->mmio_fb_high_en))
                                         ? 0U : (IData)(vlSelf->ext_ram_be_n));
    VL_EXTEND_WQ(65,64, __Vtemp93, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp94, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_1, __Vtemp93);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_2[0U] 
        = __Vtemp94[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_2[1U] 
        = __Vtemp94[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_2[2U] 
        = (1U & __Vtemp94[2U]);
    __Vtemp96[0U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0U];
    __Vtemp96[1U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][1U];
    __Vtemp96[2U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][2U];
    __Vtemp96[3U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][3U];
    __Vtemp96[4U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][4U];
    __Vtemp96[5U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][5U];
    __Vtemp96[6U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][6U];
    __Vtemp96[7U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][7U];
    __Vtemp96[8U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][8U];
    __Vtemp96[9U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][9U];
    __Vtemp96[0xaU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xaU];
    __Vtemp96[0xbU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xbU];
    __Vtemp96[0xcU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xcU];
    __Vtemp96[0xdU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xdU];
    __Vtemp96[0xeU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xeU];
    __Vtemp96[0xfU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xfU];
    __Vtemp96[0x10U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x10U];
    __Vtemp96[0x11U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x11U];
    __Vtemp96[0x12U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x12U];
    __Vtemp96[0x13U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x13U];
    __Vtemp96[0x14U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x14U];
    __Vtemp96[0x15U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x15U];
    __Vtemp96[0x16U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x16U];
    __Vtemp96[0x17U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x17U];
    __Vtemp96[0x18U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x18U];
    __Vtemp96[0x19U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x19U];
    __Vtemp96[0x1aU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1aU];
    __Vtemp96[0x1bU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1bU];
    __Vtemp96[0x1cU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1cU];
    __Vtemp96[0x1dU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1dU];
    __Vtemp96[0x1eU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1eU];
    __Vtemp96[0x1fU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1fU];
    vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_already_data 
        = ((((QData)((IData)(__Vtemp96[(((IData)(0x3fU) 
                                         + (0x3c0U 
                                            & (vlSelf->ext_ram_addr 
                                               << 3U))) 
                                        >> 5U)])) << 0x20U) 
            | (QData)((IData)(__Vtemp96[(0x1eU & (vlSelf->ext_ram_addr 
                                                  >> 2U))]))) 
           & (~ (((QData)((IData)((((- (IData)((1U 
                                                & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                   >> 7U)))) 
                                    << 0x18U) | ((0xff0000U 
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
                  << 0x20U) | (QData)((IData)((((- (IData)(
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
                                                                      & (IData)(vlSelf->my_cpu__DOT__dcache_be_n)))))))))))));
    vlSelf->ext_write_req = ((~ ((1U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__dcache_state)) 
                                 | (IData)(vlSelf->my_cpu__DOT__cache__DOT__icache_busy))) 
                             & (((0U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit)) 
                                 & ((IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__dirty_flag) 
                                    >> (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index))) 
                                & (0U != (IData)(vlSelf->my_cpu__DOT__dcache_be_n))));
    vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__total_shift_in 
        = ((1U & (IData)(vlSelf->my_cpu__DOT__dcache_be_n))
            ? 0U : ((2U & (IData)(vlSelf->my_cpu__DOT__dcache_be_n))
                     ? 8U : ((4U & (IData)(vlSelf->my_cpu__DOT__dcache_be_n))
                              ? 0x10U : ((8U & (IData)(vlSelf->my_cpu__DOT__dcache_be_n))
                                          ? 0x18U : 
                                         ((0x10U & (IData)(vlSelf->my_cpu__DOT__dcache_be_n))
                                           ? 0x20U : 
                                          ((0x20U & (IData)(vlSelf->my_cpu__DOT__dcache_be_n))
                                            ? 0x28U
                                            : ((0x40U 
                                                & (IData)(vlSelf->my_cpu__DOT__dcache_be_n))
                                                ? 0x30U
                                                : (
                                                   (0x80U 
                                                    & (IData)(vlSelf->my_cpu__DOT__dcache_be_n))
                                                    ? 0x38U
                                                    : 0U))))))));
    vlSelf->ext_read_req = ((~ (IData)(vlSelf->my_cpu__DOT__cache__DOT__icache_busy)) 
                            & ((0U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit)) 
                               & (0U != (IData)(vlSelf->my_cpu__DOT__dcache_be_n))));
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x3bU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x3bU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_in_data_write_64 
        = (((0x3fU >= (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__total_shift_in))
             ? (vlSelf->ext_ram_write_data << (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__total_shift_in))
             : 0ULL) & (((QData)((IData)((((- (IData)(
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
                         << 0x20U) | (QData)((IData)(
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
                                                                             & (IData)(vlSelf->my_cpu__DOT__dcache_be_n))))))))))));
    vlSelf->my_cpu__DOT__cache__DOT__read_req = ((((IData)(vlSelf->inst_read_req) 
                                                   & (vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_addr 
                                                      != vlSelf->inst_addr)) 
                                                  | ((IData)(vlSelf->ext_read_req) 
                                                     & (vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_addr 
                                                        != vlSelf->ext_read_addr))) 
                                                 & (3U 
                                                    != (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_state)));
    vlSelf->my_cpu__DOT__cache__DOT__dcache_busy = 
        (((IData)(vlSelf->ext_read_req) & (vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_addr 
                                           != vlSelf->ext_read_addr)) 
         | (0U != (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_state)));
    VL_EXTEND_WQ(65,64, __Vtemp102, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp103, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_1, __Vtemp102);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_2[0U] 
        = __Vtemp103[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_2[1U] 
        = __Vtemp103[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_2[2U] 
        = (1U & __Vtemp103[2U]);
    vlSelf->my_cpu__DOT__stop_all = ((0U != (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_state)) 
                                     | (IData)(vlSelf->my_cpu__DOT__cache__DOT__dcache_busy));
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x3aU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x3aU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp110, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp111, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_1, __Vtemp110);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_2[0U] 
        = __Vtemp111[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_2[1U] 
        = __Vtemp111[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_2[2U] 
        = (1U & __Vtemp111[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x39U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x39U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp118, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp119, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_1, __Vtemp118);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_2[0U] 
        = __Vtemp119[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_2[1U] 
        = __Vtemp119[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_2[2U] 
        = (1U & __Vtemp119[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x38U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x38U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp126, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp127, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_1, __Vtemp126);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_2[0U] 
        = __Vtemp127[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_2[1U] 
        = __Vtemp127[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_2[2U] 
        = (1U & __Vtemp127[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x37U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x37U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp134, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp135, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_1, __Vtemp134);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_2[0U] 
        = __Vtemp135[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_2[1U] 
        = __Vtemp135[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_2[2U] 
        = (1U & __Vtemp135[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x36U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x36U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp142, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp143, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_1, __Vtemp142);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_2[0U] 
        = __Vtemp143[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_2[1U] 
        = __Vtemp143[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_2[2U] 
        = (1U & __Vtemp143[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x35U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x35U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp150, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp151, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_1, __Vtemp150);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_2[0U] 
        = __Vtemp151[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_2[1U] 
        = __Vtemp151[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_2[2U] 
        = (1U & __Vtemp151[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x34U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x34U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp158, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp159, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_1, __Vtemp158);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_2[0U] 
        = __Vtemp159[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_2[1U] 
        = __Vtemp159[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_2[2U] 
        = (1U & __Vtemp159[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x33U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x33U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp166, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp167, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_1, __Vtemp166);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_2[0U] 
        = __Vtemp167[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_2[1U] 
        = __Vtemp167[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_2[2U] 
        = (1U & __Vtemp167[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x32U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x32U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp174, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp175, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_1, __Vtemp174);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_2[0U] 
        = __Vtemp175[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_2[1U] 
        = __Vtemp175[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_2[2U] 
        = (1U & __Vtemp175[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x31U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x31U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp182, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp183, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_1, __Vtemp182);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_2[0U] 
        = __Vtemp183[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_2[1U] 
        = __Vtemp183[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_2[2U] 
        = (1U & __Vtemp183[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x30U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x30U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp190, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp191, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_1, __Vtemp190);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_2[0U] 
        = __Vtemp191[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_2[1U] 
        = __Vtemp191[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_2[2U] 
        = (1U & __Vtemp191[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x2fU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x2fU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp198, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp199, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_1, __Vtemp198);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_2[0U] 
        = __Vtemp199[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_2[1U] 
        = __Vtemp199[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_2[2U] 
        = (1U & __Vtemp199[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x2eU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x2eU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp206, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp207, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_1, __Vtemp206);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_2[0U] 
        = __Vtemp207[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_2[1U] 
        = __Vtemp207[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_2[2U] 
        = (1U & __Vtemp207[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x2dU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x2dU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp214, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp215, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_1, __Vtemp214);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_2[0U] 
        = __Vtemp215[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_2[1U] 
        = __Vtemp215[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_2[2U] 
        = (1U & __Vtemp215[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x2cU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x2cU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp222, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp223, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_1, __Vtemp222);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_2[0U] 
        = __Vtemp223[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_2[1U] 
        = __Vtemp223[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_2[2U] 
        = (1U & __Vtemp223[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x2bU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x2bU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp230, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp231, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_1, __Vtemp230);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_2[0U] 
        = __Vtemp231[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_2[1U] 
        = __Vtemp231[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_2[2U] 
        = (1U & __Vtemp231[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x2aU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x2aU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp238, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp239, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_1, __Vtemp238);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_2[0U] 
        = __Vtemp239[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_2[1U] 
        = __Vtemp239[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_2[2U] 
        = (1U & __Vtemp239[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x29U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x29U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp246, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp247, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_1, __Vtemp246);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_2[0U] 
        = __Vtemp247[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_2[1U] 
        = __Vtemp247[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_2[2U] 
        = (1U & __Vtemp247[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x28U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x28U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp254, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp255, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_1, __Vtemp254);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_2[0U] 
        = __Vtemp255[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_2[1U] 
        = __Vtemp255[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_2[2U] 
        = (1U & __Vtemp255[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x27U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x27U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp262, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp263, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_1, __Vtemp262);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_2[0U] 
        = __Vtemp263[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_2[1U] 
        = __Vtemp263[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_2[2U] 
        = (1U & __Vtemp263[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x26U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x26U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp270, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp271, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_1, __Vtemp270);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_2[0U] 
        = __Vtemp271[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_2[1U] 
        = __Vtemp271[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_2[2U] 
        = (1U & __Vtemp271[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x25U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x25U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp278, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp279, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_1, __Vtemp278);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_2[0U] 
        = __Vtemp279[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_2[1U] 
        = __Vtemp279[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_2[2U] 
        = (1U & __Vtemp279[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x24U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x24U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp286, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp287, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_1, __Vtemp286);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_2[0U] 
        = __Vtemp287[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_2[1U] 
        = __Vtemp287[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_2[2U] 
        = (1U & __Vtemp287[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x23U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x23U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp294, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp295, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_1, __Vtemp294);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_2[0U] 
        = __Vtemp295[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_2[1U] 
        = __Vtemp295[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_2[2U] 
        = (1U & __Vtemp295[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x22U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x22U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp302, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp303, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_1, __Vtemp302);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_2[0U] 
        = __Vtemp303[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_2[1U] 
        = __Vtemp303[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_2[2U] 
        = (1U & __Vtemp303[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x21U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x21U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp310, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp311, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_1, __Vtemp310);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_2[0U] 
        = __Vtemp311[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_2[1U] 
        = __Vtemp311[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_2[2U] 
        = (1U & __Vtemp311[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x20U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x20U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp318, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp319, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_1, __Vtemp318);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_2[0U] 
        = __Vtemp319[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_2[1U] 
        = __Vtemp319[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_2[2U] 
        = (1U & __Vtemp319[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x1fU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x1fU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp326, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp327, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_1, __Vtemp326);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_2[0U] 
        = __Vtemp327[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_2[1U] 
        = __Vtemp327[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_2[2U] 
        = (1U & __Vtemp327[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x1eU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x1eU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp334, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp335, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_1, __Vtemp334);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_2[0U] 
        = __Vtemp335[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_2[1U] 
        = __Vtemp335[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_2[2U] 
        = (1U & __Vtemp335[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x1dU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x1dU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp342, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp343, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_1, __Vtemp342);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_2[0U] 
        = __Vtemp343[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_2[1U] 
        = __Vtemp343[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_2[2U] 
        = (1U & __Vtemp343[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x1cU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x1cU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp350, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp351, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_1, __Vtemp350);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_2[0U] 
        = __Vtemp351[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_2[1U] 
        = __Vtemp351[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_2[2U] 
        = (1U & __Vtemp351[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x1bU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x1bU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp358, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp359, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_1, __Vtemp358);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_2[0U] 
        = __Vtemp359[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_2[1U] 
        = __Vtemp359[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_2[2U] 
        = (1U & __Vtemp359[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x1aU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x1aU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp366, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp367, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_1, __Vtemp366);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_2[0U] 
        = __Vtemp367[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_2[1U] 
        = __Vtemp367[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_2[2U] 
        = (1U & __Vtemp367[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x19U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x19U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp374, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp375, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_1, __Vtemp374);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_2[0U] 
        = __Vtemp375[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_2[1U] 
        = __Vtemp375[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_2[2U] 
        = (1U & __Vtemp375[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x18U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x18U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp382, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp383, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_1, __Vtemp382);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_2[0U] 
        = __Vtemp383[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_2[1U] 
        = __Vtemp383[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_2[2U] 
        = (1U & __Vtemp383[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x17U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x17U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp390, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp391, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_1, __Vtemp390);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_2[0U] 
        = __Vtemp391[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_2[1U] 
        = __Vtemp391[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_2[2U] 
        = (1U & __Vtemp391[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x16U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x16U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp398, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp399, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_1, __Vtemp398);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_2[0U] 
        = __Vtemp399[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_2[1U] 
        = __Vtemp399[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_2[2U] 
        = (1U & __Vtemp399[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x15U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x15U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp406, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp407, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_1, __Vtemp406);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_2[0U] 
        = __Vtemp407[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_2[1U] 
        = __Vtemp407[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_2[2U] 
        = (1U & __Vtemp407[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x14U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x14U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp414, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp415, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_1, __Vtemp414);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_2[0U] 
        = __Vtemp415[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_2[1U] 
        = __Vtemp415[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_2[2U] 
        = (1U & __Vtemp415[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x13U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x13U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp422, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp423, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_1, __Vtemp422);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_2[0U] 
        = __Vtemp423[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_2[1U] 
        = __Vtemp423[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_2[2U] 
        = (1U & __Vtemp423[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x12U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x12U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp430, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp431, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_1, __Vtemp430);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_2[0U] 
        = __Vtemp431[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_2[1U] 
        = __Vtemp431[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_2[2U] 
        = (1U & __Vtemp431[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x11U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x11U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp438, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp439, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_1, __Vtemp438);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_2[0U] 
        = __Vtemp439[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_2[1U] 
        = __Vtemp439[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_2[2U] 
        = (1U & __Vtemp439[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x10U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x10U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp446, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp447, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_1, __Vtemp446);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_2[0U] 
        = __Vtemp447[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_2[1U] 
        = __Vtemp447[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_2[2U] 
        = (1U & __Vtemp447[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0xfU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0xfU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp454, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp455, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_1, __Vtemp454);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_2[0U] 
        = __Vtemp455[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_2[1U] 
        = __Vtemp455[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_2[2U] 
        = (1U & __Vtemp455[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0xeU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0xeU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp462, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp463, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_1, __Vtemp462);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_2[0U] 
        = __Vtemp463[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_2[1U] 
        = __Vtemp463[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_2[2U] 
        = (1U & __Vtemp463[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0xdU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0xdU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp470, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp471, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_1, __Vtemp470);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_2[0U] 
        = __Vtemp471[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_2[1U] 
        = __Vtemp471[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_2[2U] 
        = (1U & __Vtemp471[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0xcU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0xcU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp478, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp479, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_1, __Vtemp478);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_2[0U] 
        = __Vtemp479[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_2[1U] 
        = __Vtemp479[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_2[2U] 
        = (1U & __Vtemp479[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0xbU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0xbU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp486, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp487, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_1, __Vtemp486);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_2[0U] 
        = __Vtemp487[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_2[1U] 
        = __Vtemp487[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_2[2U] 
        = (1U & __Vtemp487[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0xaU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0xaU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp494, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp495, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_1, __Vtemp494);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_2[0U] 
        = __Vtemp495[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_2[1U] 
        = __Vtemp495[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_2[2U] 
        = (1U & __Vtemp495[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 9U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 9U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp502, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp503, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_1, __Vtemp502);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_2[0U] 
        = __Vtemp503[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_2[1U] 
        = __Vtemp503[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_2[2U] 
        = (1U & __Vtemp503[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 8U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 8U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp510, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp511, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_1, __Vtemp510);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_2[0U] 
        = __Vtemp511[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_2[1U] 
        = __Vtemp511[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_2[2U] 
        = (1U & __Vtemp511[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 7U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 7U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp518, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp519, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_1, __Vtemp518);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_2[0U] 
        = __Vtemp519[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_2[1U] 
        = __Vtemp519[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_2[2U] 
        = (1U & __Vtemp519[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 6U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 6U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp526, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp527, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_1, __Vtemp526);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_2[0U] 
        = __Vtemp527[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_2[1U] 
        = __Vtemp527[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_2[2U] 
        = (1U & __Vtemp527[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 5U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 5U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp534, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp535, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_1, __Vtemp534);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_2[0U] 
        = __Vtemp535[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_2[1U] 
        = __Vtemp535[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_2[2U] 
        = (1U & __Vtemp535[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 4U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 4U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp542, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp543, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_1, __Vtemp542);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_2[0U] 
        = __Vtemp543[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_2[1U] 
        = __Vtemp543[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_2[2U] 
        = (1U & __Vtemp543[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 3U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 3U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp550, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp551, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_1, __Vtemp550);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_2[0U] 
        = __Vtemp551[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_2[1U] 
        = __Vtemp551[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_2[2U] 
        = (1U & __Vtemp551[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 2U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 2U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp558, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp559, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_1, __Vtemp558);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_2[0U] 
        = __Vtemp559[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_2[1U] 
        = __Vtemp559[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_2[2U] 
        = (1U & __Vtemp559[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_1[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 1U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_2[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 1U))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp566, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp567, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_1, __Vtemp566);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_2[0U] 
        = __Vtemp567[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_2[1U] 
        = __Vtemp567[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_2[2U] 
        = (1U & __Vtemp567[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_64_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_1[0U])))) 
                << 1U) | (1U & (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs)));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_64_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_1[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_1[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_64_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_1[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_1[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_64_1[0U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_2[0U])))) 
                << 1U) | (1U & (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs)));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_64_1[1U] 
            = (((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_2[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_2[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_64_1[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_2[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_2[0U]))) 
                        >> 0x20U)) >> 0x1fU);
    }
    VL_EXTEND_WQ(65,64, __Vtemp574, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp575, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_64_1, __Vtemp574);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_64_2[0U] 
        = __Vtemp575[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_64_2[1U] 
        = __Vtemp575[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_64_2[2U] 
        = (1U & __Vtemp575[2U]);
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_64_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data[0U] 
            = vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_64_1[0U];
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data[1U] 
            = vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_64_1[1U];
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data[2U] 
            = vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_64_1[2U];
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data[0U] 
            = vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_64_2[0U];
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data[1U] 
            = vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_64_2[1U];
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data[2U] 
            = vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_64_2[2U];
    }
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result 
        = (((QData)((IData)((((~ vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_1_2[2U]) 
                              << 0x1fU) | ((0x40000000U 
                                            & ((~ vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_2[2U]) 
                                               << 0x1eU)) 
                                           | ((0x20000000U 
                                               & ((~ 
                                                   vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_2[2U]) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & ((~ 
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_2[2U]) 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & ((~ 
                                                         vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_2[2U]) 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & ((~ 
                                                            vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_2[2U]) 
                                                           << 0x1aU)) 
                                                       | ((0x2000000U 
                                                           & ((~ 
                                                               vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_2[2U]) 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & ((~ 
                                                                  vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_2[2U]) 
                                                                 << 0x18U)) 
                                                             | ((0x800000U 
                                                                 & ((~ 
                                                                     vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_2[2U]) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((~ 
                                                                        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_2[2U]) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & ((~ 
                                                                           vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_2[2U]) 
                                                                          << 0x15U)) 
                                                                      | ((0x100000U 
                                                                          & ((~ 
                                                                              vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_2[2U]) 
                                                                             << 0x14U)) 
                                                                         | ((0x80000U 
                                                                             & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_2[2U]) 
                                                                                << 0x13U)) 
                                                                            | ((0x40000U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_2[2U]) 
                                                                                << 0x12U)) 
                                                                               | ((0x20000U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_2[2U]) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_2[2U]) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_2[2U]) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_2[2U]) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_2[2U]) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_2[2U]) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_2[2U]) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_2[2U]) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_2[2U]) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_2[2U]) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_2[2U]) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_2[2U]) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_2[2U]) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_2[2U]) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_2[2U]) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_2[2U]) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_2[2U]) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_2[2U]))))))))))))))))))))))))))))))))))) 
            << 0x20U) | (QData)((IData)((((~ vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_2[2U]) 
                                          << 0x1fU) 
                                         | ((0x40000000U 
                                             & ((~ 
                                                 vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_2[2U]) 
                                                << 0x1eU)) 
                                            | ((0x20000000U 
                                                & ((~ 
                                                    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_2[2U]) 
                                                   << 0x1dU)) 
                                               | ((0x10000000U 
                                                   & ((~ 
                                                       vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_2[2U]) 
                                                      << 0x1cU)) 
                                                  | ((0x8000000U 
                                                      & ((~ 
                                                          vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_2[2U]) 
                                                         << 0x1bU)) 
                                                     | ((0x4000000U 
                                                         & ((~ 
                                                             vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_2[2U]) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & ((~ 
                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_2[2U]) 
                                                               << 0x19U)) 
                                                           | ((0x1000000U 
                                                               & ((~ 
                                                                   vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_2[2U]) 
                                                                  << 0x18U)) 
                                                              | ((0x800000U 
                                                                  & ((~ 
                                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_2[2U]) 
                                                                     << 0x17U)) 
                                                                 | ((0x400000U 
                                                                     & ((~ 
                                                                         vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_2[2U]) 
                                                                        << 0x16U)) 
                                                                    | ((0x200000U 
                                                                        & ((~ 
                                                                            vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_2[2U]) 
                                                                           << 0x15U)) 
                                                                       | ((0x100000U 
                                                                           & ((~ 
                                                                               vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_2[2U]) 
                                                                              << 0x14U)) 
                                                                          | ((0x80000U 
                                                                              & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_2[2U]) 
                                                                                << 0x13U)) 
                                                                             | ((0x40000U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_2[2U]) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_2[2U]) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_2[2U]) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_2[2U]) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_2[2U]) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_2[2U]) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_2[2U]) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_2[2U]) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_2[2U]) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_2[2U]) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_2[2U]) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_2[2U]) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_2[2U]) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_2[2U]) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_2[2U]) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_2[2U]) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_2[2U]) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_2[2U]) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_64_2[2U]))))))))))))))))))))))))))))))))))));
    if (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__shorten) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__rem_result 
            = ((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_sign_flag)
                ? (((QData)((IData)((- (IData)((((IData)(1U) 
                                                 + 
                                                 (~ 
                                                  vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data[0U])) 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)(((IData)(1U) 
                                                 + 
                                                 (~ 
                                                  vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data[0U])))))
                : (((QData)((IData)((- (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data[0U] 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data[0U]))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div_result 
            = (((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_sign_flag) 
                ^ (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_sign_flag))
                ? (((QData)((IData)((- (IData)((((IData)(1U) 
                                                 + 
                                                 (~ (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result))) 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)(((IData)(1U) 
                                                 + 
                                                 (~ (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result))))))
                : (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result))));
    } else {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__rem_result 
            = ((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_sign_flag)
                ? (1ULL + (~ (((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data[0U])))))
                : (((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data[0U]))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div_result 
            = (((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_sign_flag) 
                ^ (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_sign_flag))
                ? (1ULL + (~ vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result))
                : vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result);
    }
    vlSelf->my_cpu__DOT__EX__DOT__mul_div_result = 
        ((0x4000U & vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U])
          ? (((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[1U])) 
              << 0x20U) | (QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[0U])))
          : ((0x800000U & vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U])
              ? (((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[3U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[2U])))
              : ((0x400000U & vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U])
                  ? (((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[3U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[2U])))
                  : ((0x200000U & vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U])
                      ? (((QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[3U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[2U])))
                      : ((0x800U & vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U])
                          ? (((QData)((IData)((- (IData)(
                                                         (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[0U] 
                                                          >> 0x1fU))))) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[0U])))
                          : ((0x100000U & vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U])
                              ? vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__rem_result
                              : ((0x80000U & vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U])
                                  ? vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__rem_result
                                  : ((0x10000U & vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U])
                                      ? vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__rem_result
                                      : ((0x2000U & 
                                          vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U])
                                          ? vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__rem_result
                                          : ((0x1000U 
                                              & vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U])
                                              ? vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div_result
                                              : ((0x40000U 
                                                  & vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U])
                                                  ? vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div_result
                                                  : 
                                                 ((0x20000U 
                                                   & vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U])
                                                   ? vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div_result
                                                   : 
                                                  ((0x8000U 
                                                    & vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U])
                                                    ? vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div_result
                                                    : 0ULL)))))))))))));
    vlSelf->my_cpu__DOT__EX__DOT__final_result = ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U] 
                                                       >> 0xbU)))
                                                   ? 0ULL
                                                   : 
                                                  ((IData)(vlSelf->IF_we)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[6U])) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[5U])) 
                                                        << 0x10U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U])) 
                                                          >> 0x10U)))
                                                    : 
                                                   ((IData)(vlSelf->mul_div_valid)
                                                     ? vlSelf->my_cpu__DOT__EX__DOT__mul_div_result
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->inst_result_Select))
                                                      ? vlSelf->my_cpu__DOT__EX__DOT__alu_result
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->inst_result_Select))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->my_cpu__DOT__EX__DOT__alu_result 
                                                                                >> 0x1fU))))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->my_cpu__DOT__EX__DOT__alu_result)))
                                                       : 0xffffffffULL)))));
    vlSelf->my_cpu__DOT__EX_ID_Bus[0U] = (IData)(vlSelf->my_cpu__DOT__EX__DOT__final_result);
    vlSelf->my_cpu__DOT__EX_ID_Bus[1U] = (IData)((vlSelf->my_cpu__DOT__EX__DOT__final_result 
                                                  >> 0x20U));
    vlSelf->my_cpu__DOT__EX_ID_Bus[2U] = ((0x20U & 
                                           (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U] 
                                            >> 5U)) 
                                          | (0x1fU 
                                             & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U] 
                                                >> 0xbU)));
    vlSelf->EX_addr = (0x1fU & vlSelf->my_cpu__DOT__EX_ID_Bus[2U]);
    vlSelf->EX_data = (((QData)((IData)(vlSelf->my_cpu__DOT__EX_ID_Bus[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->my_cpu__DOT__EX_ID_Bus[0U])));
    vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding 
        = (((vlSelf->my_cpu__DOT__EX_ID_Bus[2U] >> 5U) 
            & ((0x1fU & vlSelf->my_cpu__DOT__EX_ID_Bus[2U]) 
               == (IData)(vlSelf->my_cpu__DOT__ID__DOT__src1_addr)))
            ? (((QData)((IData)(vlSelf->my_cpu__DOT__EX_ID_Bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->my_cpu__DOT__EX_ID_Bus[0U])))
            : (((vlSelf->my_cpu__DOT__MEM_ID_Bus[2U] 
                 >> 5U) & ((0x1fU & vlSelf->my_cpu__DOT__MEM_ID_Bus[2U]) 
                           == (IData)(vlSelf->my_cpu__DOT__ID__DOT__src1_addr)))
                ? (((QData)((IData)(vlSelf->my_cpu__DOT__MEM_ID_Bus[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->my_cpu__DOT__MEM_ID_Bus[0U])))
                : vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf
               [vlSelf->my_cpu__DOT__ID__DOT__src1_addr]));
    vlSelf->my_cpu__DOT__ID__DOT__Inst_Src2_forwarding 
        = (((vlSelf->my_cpu__DOT__EX_ID_Bus[2U] >> 5U) 
            & ((0x1fU & vlSelf->my_cpu__DOT__EX_ID_Bus[2U]) 
               == (IData)(vlSelf->my_cpu__DOT__ID__DOT__src2_addr)))
            ? (((QData)((IData)(vlSelf->my_cpu__DOT__EX_ID_Bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->my_cpu__DOT__EX_ID_Bus[0U])))
            : (((vlSelf->my_cpu__DOT__MEM_ID_Bus[2U] 
                 >> 5U) & ((0x1fU & vlSelf->my_cpu__DOT__MEM_ID_Bus[2U]) 
                           == (IData)(vlSelf->my_cpu__DOT__ID__DOT__src2_addr)))
                ? (((QData)((IData)(vlSelf->my_cpu__DOT__MEM_ID_Bus[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->my_cpu__DOT__MEM_ID_Bus[0U])))
                : vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf
               [vlSelf->my_cpu__DOT__ID__DOT__src2_addr]));
}
