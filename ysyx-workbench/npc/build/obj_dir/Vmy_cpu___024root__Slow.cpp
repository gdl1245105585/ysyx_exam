// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmy_cpu.h for the primary calling header

#include "Vmy_cpu___024root.h"
#include "Vmy_cpu__Syms.h"

#include "verilated_dpi.h"

//==========


void Vmy_cpu___024root___ctor_var_reset(Vmy_cpu___024root* vlSelf);

Vmy_cpu___024root::Vmy_cpu___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vmy_cpu___024root___ctor_var_reset(this);
}

void Vmy_cpu___024root::__Vconfigure(Vmy_cpu__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vmy_cpu___024root::~Vmy_cpu___024root() {
}

void Vmy_cpu___024root____Vdpiimwrap_my_cpu__DOT__mmio__DOT__set_vmem_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 120000> &a);
void Vmy_cpu___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vmy_cpu___024root___initial__TOP__1(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->ARLEN = 0xfU;
    vlSelf->ARBURST = 1U;
    vlSelf->ARID = 0U;
    vlSelf->AWID = 0U;
    vlSelf->AWLEN = 0xfU;
    vlSelf->AWSIZE = 3U;
    vlSelf->AWBURST = 1U;
    vlSelf->WSTRB = 0xffU;
    Vmy_cpu___024root____Vdpiimwrap_my_cpu__DOT__mmio__DOT__set_vmem_ptr__Vdpioc2_TOP(vlSelf->my_cpu__DOT__mmio__DOT__vmem);
    Vmy_cpu___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf);
}

void Vmy_cpu___024root___settle__TOP__3(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___settle__TOP__3\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp581;
    VlWide<3>/*95:0*/ __Vtemp584;
    VlWide<3>/*95:0*/ __Vtemp585;
    VlWide<3>/*95:0*/ __Vtemp586;
    VlWide<4>/*127:0*/ __Vtemp588;
    VlWide<3>/*95:0*/ __Vtemp589;
    VlWide<4>/*127:0*/ __Vtemp590;
    VlWide<4>/*127:0*/ __Vtemp591;
    VlWide<3>/*95:0*/ __Vtemp592;
    VlWide<4>/*127:0*/ __Vtemp593;
    VlWide<4>/*127:0*/ __Vtemp594;
    VlWide<4>/*127:0*/ __Vtemp595;
    VlWide<4>/*127:0*/ __Vtemp596;
    VlWide<3>/*95:0*/ __Vtemp597;
    VlWide<3>/*95:0*/ __Vtemp603;
    VlWide<3>/*95:0*/ __Vtemp604;
    VlWide<3>/*95:0*/ __Vtemp605;
    VlWide<3>/*95:0*/ __Vtemp606;
    VlWide<3>/*95:0*/ __Vtemp607;
    VlWide<4>/*127:0*/ __Vtemp609;
    VlWide<4>/*127:0*/ __Vtemp610;
    VlWide<4>/*127:0*/ __Vtemp611;
    VlWide<3>/*95:0*/ __Vtemp615;
    VlWide<3>/*95:0*/ __Vtemp616;
    VlWide<3>/*95:0*/ __Vtemp623;
    VlWide<3>/*95:0*/ __Vtemp624;
    VlWide<3>/*95:0*/ __Vtemp631;
    VlWide<3>/*95:0*/ __Vtemp632;
    VlWide<32>/*1023:0*/ __Vtemp634;
    VlWide<3>/*95:0*/ __Vtemp644;
    VlWide<3>/*95:0*/ __Vtemp645;
    VlWide<3>/*95:0*/ __Vtemp652;
    VlWide<3>/*95:0*/ __Vtemp653;
    VlWide<3>/*95:0*/ __Vtemp660;
    VlWide<3>/*95:0*/ __Vtemp661;
    VlWide<3>/*95:0*/ __Vtemp668;
    VlWide<3>/*95:0*/ __Vtemp669;
    VlWide<3>/*95:0*/ __Vtemp676;
    VlWide<3>/*95:0*/ __Vtemp677;
    VlWide<3>/*95:0*/ __Vtemp684;
    VlWide<3>/*95:0*/ __Vtemp685;
    VlWide<3>/*95:0*/ __Vtemp692;
    VlWide<3>/*95:0*/ __Vtemp693;
    VlWide<3>/*95:0*/ __Vtemp700;
    VlWide<3>/*95:0*/ __Vtemp701;
    VlWide<3>/*95:0*/ __Vtemp708;
    VlWide<3>/*95:0*/ __Vtemp709;
    VlWide<3>/*95:0*/ __Vtemp716;
    VlWide<3>/*95:0*/ __Vtemp717;
    VlWide<3>/*95:0*/ __Vtemp724;
    VlWide<3>/*95:0*/ __Vtemp725;
    VlWide<3>/*95:0*/ __Vtemp732;
    VlWide<3>/*95:0*/ __Vtemp733;
    VlWide<3>/*95:0*/ __Vtemp740;
    VlWide<3>/*95:0*/ __Vtemp741;
    VlWide<3>/*95:0*/ __Vtemp748;
    VlWide<3>/*95:0*/ __Vtemp749;
    VlWide<3>/*95:0*/ __Vtemp756;
    VlWide<3>/*95:0*/ __Vtemp757;
    VlWide<3>/*95:0*/ __Vtemp764;
    VlWide<3>/*95:0*/ __Vtemp765;
    VlWide<3>/*95:0*/ __Vtemp772;
    VlWide<3>/*95:0*/ __Vtemp773;
    VlWide<3>/*95:0*/ __Vtemp780;
    VlWide<3>/*95:0*/ __Vtemp781;
    VlWide<3>/*95:0*/ __Vtemp788;
    VlWide<3>/*95:0*/ __Vtemp789;
    VlWide<3>/*95:0*/ __Vtemp796;
    VlWide<3>/*95:0*/ __Vtemp797;
    VlWide<3>/*95:0*/ __Vtemp804;
    VlWide<3>/*95:0*/ __Vtemp805;
    VlWide<3>/*95:0*/ __Vtemp812;
    VlWide<3>/*95:0*/ __Vtemp813;
    VlWide<3>/*95:0*/ __Vtemp820;
    VlWide<3>/*95:0*/ __Vtemp821;
    VlWide<3>/*95:0*/ __Vtemp828;
    VlWide<3>/*95:0*/ __Vtemp829;
    VlWide<3>/*95:0*/ __Vtemp836;
    VlWide<3>/*95:0*/ __Vtemp837;
    VlWide<3>/*95:0*/ __Vtemp844;
    VlWide<3>/*95:0*/ __Vtemp845;
    VlWide<3>/*95:0*/ __Vtemp852;
    VlWide<3>/*95:0*/ __Vtemp853;
    VlWide<3>/*95:0*/ __Vtemp860;
    VlWide<3>/*95:0*/ __Vtemp861;
    VlWide<3>/*95:0*/ __Vtemp868;
    VlWide<3>/*95:0*/ __Vtemp869;
    VlWide<3>/*95:0*/ __Vtemp876;
    VlWide<3>/*95:0*/ __Vtemp877;
    VlWide<3>/*95:0*/ __Vtemp884;
    VlWide<3>/*95:0*/ __Vtemp885;
    VlWide<3>/*95:0*/ __Vtemp892;
    VlWide<3>/*95:0*/ __Vtemp893;
    VlWide<3>/*95:0*/ __Vtemp900;
    VlWide<3>/*95:0*/ __Vtemp901;
    VlWide<3>/*95:0*/ __Vtemp908;
    VlWide<3>/*95:0*/ __Vtemp909;
    VlWide<3>/*95:0*/ __Vtemp916;
    VlWide<3>/*95:0*/ __Vtemp917;
    VlWide<3>/*95:0*/ __Vtemp924;
    VlWide<3>/*95:0*/ __Vtemp925;
    VlWide<3>/*95:0*/ __Vtemp932;
    VlWide<3>/*95:0*/ __Vtemp933;
    VlWide<3>/*95:0*/ __Vtemp940;
    VlWide<3>/*95:0*/ __Vtemp941;
    VlWide<3>/*95:0*/ __Vtemp948;
    VlWide<3>/*95:0*/ __Vtemp949;
    VlWide<3>/*95:0*/ __Vtemp956;
    VlWide<3>/*95:0*/ __Vtemp957;
    VlWide<3>/*95:0*/ __Vtemp964;
    VlWide<3>/*95:0*/ __Vtemp965;
    VlWide<3>/*95:0*/ __Vtemp972;
    VlWide<3>/*95:0*/ __Vtemp973;
    VlWide<3>/*95:0*/ __Vtemp980;
    VlWide<3>/*95:0*/ __Vtemp981;
    VlWide<3>/*95:0*/ __Vtemp988;
    VlWide<3>/*95:0*/ __Vtemp989;
    VlWide<3>/*95:0*/ __Vtemp996;
    VlWide<3>/*95:0*/ __Vtemp997;
    VlWide<3>/*95:0*/ __Vtemp1004;
    VlWide<3>/*95:0*/ __Vtemp1005;
    VlWide<3>/*95:0*/ __Vtemp1012;
    VlWide<3>/*95:0*/ __Vtemp1013;
    VlWide<3>/*95:0*/ __Vtemp1020;
    VlWide<3>/*95:0*/ __Vtemp1021;
    VlWide<3>/*95:0*/ __Vtemp1028;
    VlWide<3>/*95:0*/ __Vtemp1029;
    VlWide<3>/*95:0*/ __Vtemp1036;
    VlWide<3>/*95:0*/ __Vtemp1037;
    VlWide<3>/*95:0*/ __Vtemp1044;
    VlWide<3>/*95:0*/ __Vtemp1045;
    VlWide<3>/*95:0*/ __Vtemp1052;
    VlWide<3>/*95:0*/ __Vtemp1053;
    VlWide<3>/*95:0*/ __Vtemp1060;
    VlWide<3>/*95:0*/ __Vtemp1061;
    VlWide<3>/*95:0*/ __Vtemp1068;
    VlWide<3>/*95:0*/ __Vtemp1069;
    VlWide<3>/*95:0*/ __Vtemp1076;
    VlWide<3>/*95:0*/ __Vtemp1077;
    VlWide<3>/*95:0*/ __Vtemp1084;
    VlWide<3>/*95:0*/ __Vtemp1085;
    VlWide<3>/*95:0*/ __Vtemp1092;
    VlWide<3>/*95:0*/ __Vtemp1093;
    VlWide<3>/*95:0*/ __Vtemp1100;
    VlWide<3>/*95:0*/ __Vtemp1101;
    VlWide<3>/*95:0*/ __Vtemp1108;
    VlWide<3>/*95:0*/ __Vtemp1109;
    VlWide<3>/*95:0*/ __Vtemp1116;
    VlWide<3>/*95:0*/ __Vtemp1117;
    // Body
    vlSelf->valid = (1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                           >> 0x12U));
    vlSelf->debug_pc = ((vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                         << 0x19U) | (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[2U] 
                                      >> 7U));
    vlSelf->inst_ebreak = (1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[2U] 
                                 >> 6U));
    vlSelf->ARADDR = vlSelf->my_cpu__DOT__cache__DOT__AXI_read_addr;
    vlSelf->ARSIZE = vlSelf->my_cpu__DOT__cache__DOT__AXI_read_size;
    vlSelf->AWADDR = vlSelf->my_cpu__DOT__cache__DOT__AXI_write_addr;
    vlSelf->WLAST = (0xfU == (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_index));
    vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__time_interrupt 
        = (((IData)(vlSelf->int_time) & (IData)((vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg
                                                 [1U] 
                                                 >> 3U))) 
           & (IData)((vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg
                      [2U] >> 7U)));
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
    vlSelf->my_cpu__DOT__ID__DOT__inst_addr = (IData)(
                                                      ((IData)(vlSelf->my_cpu__DOT__ID__DOT__mem_arrive_flag)
                                                        ? 0ULL
                                                        : vlSelf->my_cpu__DOT__ID__DOT__IF_ID_Bus_Reg));
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
    vlSelf->ARVALID = (1U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_state));
    vlSelf->RREADY = (2U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_state));
    vlSelf->AWVALID = (1U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_state));
    vlSelf->WVALID = (2U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_state));
    vlSelf->BREADY = (3U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_state));
    vlSelf->my_cpu__DOT__cache__DOT__read_shortcut_icache 
        = (vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_addr 
           == vlSelf->inst_addr);
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
    vlSelf->my_cpu__DOT__cache__DOT__icache_busy = 
        ((0U != (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_state)) 
         & (1U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__AXI_read_target)));
    __Vtemp581[0U] = (IData)(((0x2000U & vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U])
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
    __Vtemp581[1U] = (IData)((((0x2000U & vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U])
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
                                        : ((0x100U 
                                            & vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U])
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
                                                : (
                                                   (0x800U 
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
    vlSelf->my_cpu__DOT__MEM_ID_Bus[0U] = __Vtemp581[0U];
    vlSelf->my_cpu__DOT__MEM_ID_Bus[1U] = __Vtemp581[1U];
    vlSelf->my_cpu__DOT__MEM_ID_Bus[2U] = ((0x20U & 
                                            vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[2U]) 
                                           | (0x1fU 
                                              & vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[2U]));
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
    vlSelf->we = (1U & (vlSelf->my_cpu__DOT__MEM_ID_Bus[2U] 
                        >> 5U));
    vlSelf->addr = (0x1fU & vlSelf->my_cpu__DOT__MEM_ID_Bus[2U]);
    vlSelf->data = (((QData)((IData)(vlSelf->my_cpu__DOT__MEM_ID_Bus[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->my_cpu__DOT__MEM_ID_Bus[0U])));
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
    vlSelf->my_cpu__DOT__ID__DOT__csr_result = ((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(vlSelf->my_cpu__DOT__ID__DOT__csr_OneHot))))
                                                 ? 
                                                vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg
                                                [vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_map_num]
                                                 : 
                                                ((1U 
                                                  & (((IData)(vlSelf->my_cpu__DOT__ID__DOT__csr_OneHot) 
                                                      >> 2U) 
                                                     & (~ (IData)(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__time_interrupt_flag))))
                                                  ? 
                                                 (4ULL 
                                                  + 
                                                  vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg
                                                  [4U])
                                                  : 
                                                 ((((IData)(vlSelf->my_cpu__DOT__ID__DOT__csr_OneHot) 
                                                    >> 2U) 
                                                   & (IData)(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__time_interrupt_flag))
                                                   ? 
                                                  vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg
                                                  [4U]
                                                   : 
                                                  ((1U 
                                                    & (((IData)(vlSelf->my_cpu__DOT__ID__DOT__csr_OneHot) 
                                                        >> 3U) 
                                                       | (IData)(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__time_interrupt)))
                                                    ? 
                                                   vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg
                                                   [3U]
                                                    : 0ULL))));
    vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
        = (((1U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__icache_state)) 
            | (0U != (IData)(vlSelf->my_cpu__DOT__ID__DOT__mem_OneHot)))
            ? vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_pre
            : vlSelf->inst_addr);
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
    VL_EXTEND_WI(65,1, __Vtemp584, (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                                  >> 0x3fU))));
    VL_EXTEND_WQ(65,64, __Vtemp585, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp586, __Vtemp584, __Vtemp585);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_1_2[0U] 
        = __Vtemp586[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_1_2[1U] 
        = __Vtemp586[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_1_2[2U] 
        = (1U & __Vtemp586[2U]);
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
    VL_EXTEND_WQ(128,64, __Vtemp588, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__mul_32_1_var);
    VL_EXTEND_WQ(96,64, __Vtemp589, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__mul_32_2_var);
    __Vtemp590[0U] = 0U;
    __Vtemp590[1U] = __Vtemp589[0U];
    __Vtemp590[2U] = __Vtemp589[1U];
    __Vtemp590[3U] = __Vtemp589[2U];
    VL_ADD_W(4, __Vtemp591, __Vtemp588, __Vtemp590);
    VL_EXTEND_WQ(96,64, __Vtemp592, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__mul_32_3_var);
    __Vtemp593[0U] = 0U;
    __Vtemp593[1U] = __Vtemp592[0U];
    __Vtemp593[2U] = __Vtemp592[1U];
    __Vtemp593[3U] = __Vtemp592[2U];
    VL_ADD_W(4, __Vtemp594, __Vtemp591, __Vtemp593);
    __Vtemp595[0U] = 0U;
    __Vtemp595[1U] = 0U;
    __Vtemp595[2U] = (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__mul_32_4_var);
    __Vtemp595[3U] = (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__mul_32_4_var 
                              >> 0x20U));
    VL_ADD_W(4, __Vtemp596, __Vtemp594, __Vtemp595);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result_abs[0U] 
        = __Vtemp596[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result_abs[1U] 
        = __Vtemp596[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result_abs[2U] 
        = __Vtemp596[2U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result_abs[3U] 
        = __Vtemp596[3U];
    VL_EXTEND_WI(65,1, __Vtemp597, (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                                  >> 0x3fU))));
    if ((1U & vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_1_2[2U])) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_1[0U] 
            = (((IData)((((QData)((IData)(__Vtemp597[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      __Vtemp597[0U])))) 
                << 1U) | (1U & (IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                        >> 0x3eU))));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_1[1U] 
            = (((IData)((((QData)((IData)(__Vtemp597[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      __Vtemp597[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        __Vtemp597[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp597[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_1[2U] 
            = ((IData)(((((QData)((IData)(__Vtemp597[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      __Vtemp597[0U]))) 
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
    VL_EXTEND_WQ(65,64, __Vtemp603, vlSelf->my_cpu__DOT__EX__DOT__alu_src1);
    VL_EXTEND_WQ(65,64, __Vtemp604, vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__adder_b);
    VL_ADD_W(3, __Vtemp605, __Vtemp603, __Vtemp604);
    VL_EXTEND_WQ(65,64, __Vtemp606, vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__adder_cin);
    VL_ADD_W(3, __Vtemp607, __Vtemp605, __Vtemp606);
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
                                                                                & __Vtemp607[2U]))))))) 
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
    __Vtemp609[0U] = 1U;
    __Vtemp609[1U] = 0U;
    __Vtemp609[2U] = 0U;
    __Vtemp609[3U] = 0U;
    __Vtemp610[0U] = (~ vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result_abs[0U]);
    __Vtemp610[1U] = (~ vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result_abs[1U]);
    __Vtemp610[2U] = (~ vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result_abs[2U]);
    __Vtemp610[3U] = (~ vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result_abs[3U]);
    VL_ADD_W(4, __Vtemp611, __Vtemp609, __Vtemp610);
    if ((((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_abs_flag) 
          ^ (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_abs_flag)) 
         & (3U == (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul_signed)))) {
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[0U] 
            = __Vtemp611[0U];
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[1U] 
            = __Vtemp611[1U];
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[2U] 
            = __Vtemp611[2U];
        vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[3U] 
            = __Vtemp611[3U];
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
    VL_EXTEND_WQ(65,64, __Vtemp615, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp616, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_1, __Vtemp615);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_2[0U] 
        = __Vtemp616[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_2[1U] 
        = __Vtemp616[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_2[2U] 
        = (1U & __Vtemp616[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp623, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp624, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_1, __Vtemp623);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_2[0U] 
        = __Vtemp624[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_2[1U] 
        = __Vtemp624[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_2[2U] 
        = (1U & __Vtemp624[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp631, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp632, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_1, __Vtemp631);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_2[0U] 
        = __Vtemp632[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_2[1U] 
        = __Vtemp632[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_2[2U] 
        = (1U & __Vtemp632[2U]);
    __Vtemp634[0U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0U];
    __Vtemp634[1U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][1U];
    __Vtemp634[2U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][2U];
    __Vtemp634[3U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][3U];
    __Vtemp634[4U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][4U];
    __Vtemp634[5U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][5U];
    __Vtemp634[6U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][6U];
    __Vtemp634[7U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][7U];
    __Vtemp634[8U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][8U];
    __Vtemp634[9U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][9U];
    __Vtemp634[0xaU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xaU];
    __Vtemp634[0xbU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xbU];
    __Vtemp634[0xcU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xcU];
    __Vtemp634[0xdU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xdU];
    __Vtemp634[0xeU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xeU];
    __Vtemp634[0xfU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xfU];
    __Vtemp634[0x10U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x10U];
    __Vtemp634[0x11U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x11U];
    __Vtemp634[0x12U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x12U];
    __Vtemp634[0x13U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x13U];
    __Vtemp634[0x14U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x14U];
    __Vtemp634[0x15U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x15U];
    __Vtemp634[0x16U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x16U];
    __Vtemp634[0x17U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x17U];
    __Vtemp634[0x18U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x18U];
    __Vtemp634[0x19U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x19U];
    __Vtemp634[0x1aU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1aU];
    __Vtemp634[0x1bU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1bU];
    __Vtemp634[0x1cU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1cU];
    __Vtemp634[0x1dU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1dU];
    __Vtemp634[0x1eU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1eU];
    __Vtemp634[0x1fU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
        [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1fU];
    vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_already_data 
        = ((((QData)((IData)(__Vtemp634[(((IData)(0x3fU) 
                                          + (0x3c0U 
                                             & (vlSelf->ext_ram_addr 
                                                << 3U))) 
                                         >> 5U)])) 
             << 0x20U) | (QData)((IData)(__Vtemp634[
                                         (0x1eU & (vlSelf->ext_ram_addr 
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
    if (((IData)(vlSelf->ext_read_req) & (vlSelf->ext_read_addr 
                                          == vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_addr))) {
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0U] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[1U] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[1U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[2U] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[2U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[3U] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[3U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[4U] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[4U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[5U] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[5U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[6U] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[6U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[7U] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[7U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[8U] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[8U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[9U] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[9U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xaU] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xbU] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xcU] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xdU] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xeU] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xfU] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x10U] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x10U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x11U] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x11U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x12U] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x12U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x13U] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x13U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x14U] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x14U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x15U] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x15U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x16U] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x16U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x17U] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x17U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x18U] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x18U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x19U] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x19U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1aU] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x1aU];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1bU] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x1bU];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1cU] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x1cU];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1dU] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x1dU];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1eU] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x1eU];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1fU] 
            = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0x1fU];
    } else {
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0U] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[1U] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[1U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[2U] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[2U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[3U] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[3U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[4U] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[4U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[5U] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[5U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[6U] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[6U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[7U] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[7U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[8U] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[8U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[9U] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[9U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xaU] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0xaU];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xbU] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0xbU];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xcU] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0xcU];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xdU] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0xdU];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xeU] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0xeU];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xfU] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0xfU];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x10U] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x10U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x11U] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x11U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x12U] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x12U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x13U] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x13U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x14U] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x14U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x15U] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x15U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x16U] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x16U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x17U] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x17U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x18U] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x18U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x19U] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x19U];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1aU] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x1aU];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1bU] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x1bU];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1cU] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x1cU];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1dU] 
            = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0x1dU];
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1eU] 
            = (IData)(vlSelf->RDATA);
        vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1fU] 
            = (IData)((vlSelf->RDATA >> 0x20U));
    }
    vlSelf->my_cpu__DOT__cache__DOT__dcache_busy = 
        (((IData)(vlSelf->ext_read_req) & (vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_addr 
                                           != vlSelf->ext_read_addr)) 
         | (0U != (IData)(vlSelf->my_cpu__DOT__cache__DOT__write_state)));
    VL_EXTEND_WQ(65,64, __Vtemp644, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp645, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_1, __Vtemp644);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_2[0U] 
        = __Vtemp645[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_2[1U] 
        = __Vtemp645[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_2[2U] 
        = (1U & __Vtemp645[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp652, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp653, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_1, __Vtemp652);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_2[0U] 
        = __Vtemp653[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_2[1U] 
        = __Vtemp653[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_2[2U] 
        = (1U & __Vtemp653[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp660, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp661, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_1, __Vtemp660);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_2[0U] 
        = __Vtemp661[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_2[1U] 
        = __Vtemp661[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_2[2U] 
        = (1U & __Vtemp661[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp668, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp669, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_1, __Vtemp668);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_2[0U] 
        = __Vtemp669[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_2[1U] 
        = __Vtemp669[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_2[2U] 
        = (1U & __Vtemp669[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp676, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp677, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_1, __Vtemp676);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_2[0U] 
        = __Vtemp677[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_2[1U] 
        = __Vtemp677[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_2[2U] 
        = (1U & __Vtemp677[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp684, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp685, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_1, __Vtemp684);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_2[0U] 
        = __Vtemp685[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_2[1U] 
        = __Vtemp685[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_2[2U] 
        = (1U & __Vtemp685[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp692, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp693, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_1, __Vtemp692);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_2[0U] 
        = __Vtemp693[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_2[1U] 
        = __Vtemp693[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_2[2U] 
        = (1U & __Vtemp693[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp700, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp701, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_1, __Vtemp700);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_2[0U] 
        = __Vtemp701[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_2[1U] 
        = __Vtemp701[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_2[2U] 
        = (1U & __Vtemp701[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp708, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp709, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_1, __Vtemp708);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_2[0U] 
        = __Vtemp709[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_2[1U] 
        = __Vtemp709[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_2[2U] 
        = (1U & __Vtemp709[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp716, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp717, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_1, __Vtemp716);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_2[0U] 
        = __Vtemp717[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_2[1U] 
        = __Vtemp717[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_2[2U] 
        = (1U & __Vtemp717[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp724, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp725, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_1, __Vtemp724);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_2[0U] 
        = __Vtemp725[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_2[1U] 
        = __Vtemp725[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_2[2U] 
        = (1U & __Vtemp725[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp732, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp733, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_1, __Vtemp732);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_2[0U] 
        = __Vtemp733[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_2[1U] 
        = __Vtemp733[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_2[2U] 
        = (1U & __Vtemp733[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp740, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp741, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_1, __Vtemp740);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_2[0U] 
        = __Vtemp741[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_2[1U] 
        = __Vtemp741[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_2[2U] 
        = (1U & __Vtemp741[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp748, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp749, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_1, __Vtemp748);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_2[0U] 
        = __Vtemp749[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_2[1U] 
        = __Vtemp749[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_2[2U] 
        = (1U & __Vtemp749[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp756, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp757, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_1, __Vtemp756);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_2[0U] 
        = __Vtemp757[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_2[1U] 
        = __Vtemp757[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_2[2U] 
        = (1U & __Vtemp757[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp764, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp765, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_1, __Vtemp764);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_2[0U] 
        = __Vtemp765[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_2[1U] 
        = __Vtemp765[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_2[2U] 
        = (1U & __Vtemp765[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp772, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp773, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_1, __Vtemp772);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_2[0U] 
        = __Vtemp773[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_2[1U] 
        = __Vtemp773[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_2[2U] 
        = (1U & __Vtemp773[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp780, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp781, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_1, __Vtemp780);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_2[0U] 
        = __Vtemp781[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_2[1U] 
        = __Vtemp781[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_2[2U] 
        = (1U & __Vtemp781[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp788, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp789, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_1, __Vtemp788);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_2[0U] 
        = __Vtemp789[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_2[1U] 
        = __Vtemp789[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_2[2U] 
        = (1U & __Vtemp789[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp796, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp797, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_1, __Vtemp796);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_2[0U] 
        = __Vtemp797[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_2[1U] 
        = __Vtemp797[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_2[2U] 
        = (1U & __Vtemp797[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp804, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp805, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_1, __Vtemp804);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_2[0U] 
        = __Vtemp805[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_2[1U] 
        = __Vtemp805[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_2[2U] 
        = (1U & __Vtemp805[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp812, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp813, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_1, __Vtemp812);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_2[0U] 
        = __Vtemp813[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_2[1U] 
        = __Vtemp813[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_2[2U] 
        = (1U & __Vtemp813[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp820, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp821, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_1, __Vtemp820);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_2[0U] 
        = __Vtemp821[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_2[1U] 
        = __Vtemp821[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_2[2U] 
        = (1U & __Vtemp821[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp828, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp829, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_1, __Vtemp828);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_2[0U] 
        = __Vtemp829[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_2[1U] 
        = __Vtemp829[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_2[2U] 
        = (1U & __Vtemp829[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp836, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp837, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_1, __Vtemp836);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_2[0U] 
        = __Vtemp837[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_2[1U] 
        = __Vtemp837[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_2[2U] 
        = (1U & __Vtemp837[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp844, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp845, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_1, __Vtemp844);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_2[0U] 
        = __Vtemp845[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_2[1U] 
        = __Vtemp845[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_2[2U] 
        = (1U & __Vtemp845[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp852, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp853, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_1, __Vtemp852);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_2[0U] 
        = __Vtemp853[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_2[1U] 
        = __Vtemp853[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_2[2U] 
        = (1U & __Vtemp853[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp860, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp861, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_1, __Vtemp860);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_2[0U] 
        = __Vtemp861[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_2[1U] 
        = __Vtemp861[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_2[2U] 
        = (1U & __Vtemp861[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp868, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp869, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_1, __Vtemp868);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_2[0U] 
        = __Vtemp869[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_2[1U] 
        = __Vtemp869[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_2[2U] 
        = (1U & __Vtemp869[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp876, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp877, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_1, __Vtemp876);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_2[0U] 
        = __Vtemp877[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_2[1U] 
        = __Vtemp877[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_2[2U] 
        = (1U & __Vtemp877[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp884, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp885, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_1, __Vtemp884);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_2[0U] 
        = __Vtemp885[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_2[1U] 
        = __Vtemp885[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_2[2U] 
        = (1U & __Vtemp885[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp892, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp893, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_1, __Vtemp892);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_2[0U] 
        = __Vtemp893[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_2[1U] 
        = __Vtemp893[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_2[2U] 
        = (1U & __Vtemp893[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp900, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp901, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_1, __Vtemp900);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_2[0U] 
        = __Vtemp901[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_2[1U] 
        = __Vtemp901[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_2[2U] 
        = (1U & __Vtemp901[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp908, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp909, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_1, __Vtemp908);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_2[0U] 
        = __Vtemp909[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_2[1U] 
        = __Vtemp909[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_2[2U] 
        = (1U & __Vtemp909[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp916, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp917, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_1, __Vtemp916);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_2[0U] 
        = __Vtemp917[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_2[1U] 
        = __Vtemp917[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_2[2U] 
        = (1U & __Vtemp917[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp924, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp925, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_1, __Vtemp924);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_2[0U] 
        = __Vtemp925[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_2[1U] 
        = __Vtemp925[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_2[2U] 
        = (1U & __Vtemp925[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp932, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp933, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_1, __Vtemp932);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_2[0U] 
        = __Vtemp933[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_2[1U] 
        = __Vtemp933[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_2[2U] 
        = (1U & __Vtemp933[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp940, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp941, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_1, __Vtemp940);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_2[0U] 
        = __Vtemp941[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_2[1U] 
        = __Vtemp941[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_2[2U] 
        = (1U & __Vtemp941[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp948, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp949, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_1, __Vtemp948);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_2[0U] 
        = __Vtemp949[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_2[1U] 
        = __Vtemp949[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_2[2U] 
        = (1U & __Vtemp949[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp956, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp957, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_1, __Vtemp956);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_2[0U] 
        = __Vtemp957[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_2[1U] 
        = __Vtemp957[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_2[2U] 
        = (1U & __Vtemp957[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp964, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp965, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_1, __Vtemp964);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_2[0U] 
        = __Vtemp965[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_2[1U] 
        = __Vtemp965[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_2[2U] 
        = (1U & __Vtemp965[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp972, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp973, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_1, __Vtemp972);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_2[0U] 
        = __Vtemp973[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_2[1U] 
        = __Vtemp973[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_2[2U] 
        = (1U & __Vtemp973[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp980, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp981, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_1, __Vtemp980);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_2[0U] 
        = __Vtemp981[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_2[1U] 
        = __Vtemp981[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_2[2U] 
        = (1U & __Vtemp981[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp988, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp989, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_1, __Vtemp988);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_2[0U] 
        = __Vtemp989[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_2[1U] 
        = __Vtemp989[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_2[2U] 
        = (1U & __Vtemp989[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp996, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp997, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_1, __Vtemp996);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_2[0U] 
        = __Vtemp997[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_2[1U] 
        = __Vtemp997[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_2[2U] 
        = (1U & __Vtemp997[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp1004, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp1005, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_1, __Vtemp1004);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_2[0U] 
        = __Vtemp1005[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_2[1U] 
        = __Vtemp1005[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_2[2U] 
        = (1U & __Vtemp1005[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp1012, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp1013, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_1, __Vtemp1012);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_2[0U] 
        = __Vtemp1013[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_2[1U] 
        = __Vtemp1013[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_2[2U] 
        = (1U & __Vtemp1013[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp1020, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp1021, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_1, __Vtemp1020);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_2[0U] 
        = __Vtemp1021[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_2[1U] 
        = __Vtemp1021[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_2[2U] 
        = (1U & __Vtemp1021[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp1028, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp1029, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_1, __Vtemp1028);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_2[0U] 
        = __Vtemp1029[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_2[1U] 
        = __Vtemp1029[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_2[2U] 
        = (1U & __Vtemp1029[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp1036, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp1037, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_1, __Vtemp1036);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_2[0U] 
        = __Vtemp1037[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_2[1U] 
        = __Vtemp1037[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_2[2U] 
        = (1U & __Vtemp1037[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp1044, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp1045, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_1, __Vtemp1044);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_2[0U] 
        = __Vtemp1045[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_2[1U] 
        = __Vtemp1045[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_2[2U] 
        = (1U & __Vtemp1045[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp1052, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp1053, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_1, __Vtemp1052);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_2[0U] 
        = __Vtemp1053[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_2[1U] 
        = __Vtemp1053[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_2[2U] 
        = (1U & __Vtemp1053[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp1060, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp1061, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_1, __Vtemp1060);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_2[0U] 
        = __Vtemp1061[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_2[1U] 
        = __Vtemp1061[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_2[2U] 
        = (1U & __Vtemp1061[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp1068, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp1069, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_1, __Vtemp1068);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_2[0U] 
        = __Vtemp1069[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_2[1U] 
        = __Vtemp1069[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_2[2U] 
        = (1U & __Vtemp1069[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp1076, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp1077, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_1, __Vtemp1076);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_2[0U] 
        = __Vtemp1077[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_2[1U] 
        = __Vtemp1077[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_2[2U] 
        = (1U & __Vtemp1077[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp1084, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp1085, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_1, __Vtemp1084);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_2[0U] 
        = __Vtemp1085[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_2[1U] 
        = __Vtemp1085[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_2[2U] 
        = (1U & __Vtemp1085[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp1092, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp1093, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_1, __Vtemp1092);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_2[0U] 
        = __Vtemp1093[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_2[1U] 
        = __Vtemp1093[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_2[2U] 
        = (1U & __Vtemp1093[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp1100, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp1101, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_1, __Vtemp1100);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_2[0U] 
        = __Vtemp1101[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_2[1U] 
        = __Vtemp1101[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_2[2U] 
        = (1U & __Vtemp1101[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp1108, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp1109, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_1, __Vtemp1108);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_2[0U] 
        = __Vtemp1109[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_2[1U] 
        = __Vtemp1109[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_2[2U] 
        = (1U & __Vtemp1109[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp1116, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs);
    VL_SUB_W(3, __Vtemp1117, vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_64_1, __Vtemp1116);
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_64_2[0U] 
        = __Vtemp1117[0U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_64_2[1U] 
        = __Vtemp1117[1U];
    vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_64_2[2U] 
        = (1U & __Vtemp1117[2U]);
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
    vlSelf->my_cpu__DOT__ID__DOT__inst_addr_next = 
        (((0x30200073U == vlSelf->my_cpu__DOT__ID__DOT__inst) 
          | (0x73U == vlSelf->my_cpu__DOT__ID__DOT__inst))
          ? (IData)(vlSelf->my_cpu__DOT__ID__DOT__csr_result)
          : ((0x6fU == (0x7fU & vlSelf->my_cpu__DOT__ID__DOT__inst))
              ? (vlSelf->my_cpu__DOT__ID__DOT__inst_addr 
                 + (((- (IData)((1U & (vlSelf->my_cpu__DOT__ID__DOT__j_type_imm 
                                       >> 0x14U)))) 
                     << 0x15U) | vlSelf->my_cpu__DOT__ID__DOT__j_type_imm))
              : ((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_bltu)
                  ? ((vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding 
                      < vlSelf->my_cpu__DOT__ID__DOT__Inst_Src2_forwarding)
                      ? (vlSelf->my_cpu__DOT__ID__DOT__inst_addr 
                         + (((- (IData)((1U & ((IData)(vlSelf->my_cpu__DOT__ID__DOT__b_type_imm) 
                                               >> 0xcU)))) 
                             << 0xdU) | (IData)(vlSelf->my_cpu__DOT__ID__DOT__b_type_imm)))
                      : ((IData)(4U) + vlSelf->my_cpu__DOT__ID__DOT__inst_addr))
                  : ((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_bne)
                      ? ((vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding 
                          != vlSelf->my_cpu__DOT__ID__DOT__Inst_Src2_forwarding)
                          ? (vlSelf->my_cpu__DOT__ID__DOT__inst_addr 
                             + (((- (IData)((1U & ((IData)(vlSelf->my_cpu__DOT__ID__DOT__b_type_imm) 
                                                   >> 0xcU)))) 
                                 << 0xdU) | (IData)(vlSelf->my_cpu__DOT__ID__DOT__b_type_imm)))
                          : ((IData)(4U) + vlSelf->my_cpu__DOT__ID__DOT__inst_addr))
                      : ((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_beq)
                          ? ((vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding 
                              == vlSelf->my_cpu__DOT__ID__DOT__Inst_Src2_forwarding)
                              ? (vlSelf->my_cpu__DOT__ID__DOT__inst_addr 
                                 + (((- (IData)((1U 
                                                 & ((IData)(vlSelf->my_cpu__DOT__ID__DOT__b_type_imm) 
                                                    >> 0xcU)))) 
                                     << 0xdU) | (IData)(vlSelf->my_cpu__DOT__ID__DOT__b_type_imm)))
                              : ((IData)(4U) + vlSelf->my_cpu__DOT__ID__DOT__inst_addr))
                          : ((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_bge)
                              ? ((1U & (((~ (IData)(
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
                                         << 0xdU) | (IData)(vlSelf->my_cpu__DOT__ID__DOT__b_type_imm)))
                                  : ((IData)(4U) + vlSelf->my_cpu__DOT__ID__DOT__inst_addr))
                              : ((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_blt)
                                  ? ((1U & (((IData)(
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
                                         + vlSelf->my_cpu__DOT__ID__DOT__inst_addr))
                                  : ((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_bgeu)
                                      ? ((vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding 
                                          >= vlSelf->my_cpu__DOT__ID__DOT__Inst_Src2_forwarding)
                                          ? (vlSelf->my_cpu__DOT__ID__DOT__inst_addr 
                                             + (((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->my_cpu__DOT__ID__DOT__b_type_imm) 
                                                                >> 0xcU)))) 
                                                 << 0xdU) 
                                                | (IData)(vlSelf->my_cpu__DOT__ID__DOT__b_type_imm)))
                                          : ((IData)(4U) 
                                             + vlSelf->my_cpu__DOT__ID__DOT__inst_addr))
                                      : ((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_jalr)
                                          ? (0xfffffffeU 
                                             & ((IData)(vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding) 
                                                + (
                                                   ((- (IData)(
                                                               (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                      >> 0x14U))))
                                          : ((IData)(4U) 
                                             + vlSelf->my_cpu__DOT__ID__DOT__inst_addr))))))))));
    vlSelf->my_cpu__DOT__ID_IF_Bus = (((QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__junm_en)) 
                                       << 0x20U) | (QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addr_next)));
    vlSelf->my_cpu__DOT__IF__DOT__inst_addr_next = 
        ((1U & (IData)((vlSelf->my_cpu__DOT__ID_IF_Bus 
                        >> 0x20U))) ? (IData)(vlSelf->my_cpu__DOT__ID_IF_Bus)
          : ((IData)(4U) + vlSelf->inst_addr));
}
