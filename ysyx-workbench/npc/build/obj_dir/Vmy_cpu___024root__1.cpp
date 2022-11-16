// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmy_cpu.h for the primary calling header

#include "Vmy_cpu___024root.h"
#include "Vmy_cpu__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vmy_cpu___024root___combo__TOP__4(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___combo__TOP__4\n"); );
    // Body
    vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__time_interrupt 
        = (((IData)(vlSelf->int_time) & (IData)((vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg
                                                 [1U] 
                                                 >> 3U))) 
           & (IData)((vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg
                      [2U] >> 7U)));
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

void Vmy_cpu___024root___sequent__TOP__2(Vmy_cpu___024root* vlSelf);

void Vmy_cpu___024root___eval(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vmy_cpu___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vmy_cpu___024root___combo__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vmy_cpu___024root___change_request_1(Vmy_cpu___024root* vlSelf);

VL_INLINE_OPT QData Vmy_cpu___024root___change_request(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___change_request\n"); );
    // Body
    return (Vmy_cpu___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vmy_cpu___024root___change_request_1(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vmy_cpu___024root___eval_debug_assertions(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->int_time & 0xfeU))) {
        Verilated::overWidthError("int_time");}
    if (VL_UNLIKELY((vlSelf->AWREADY & 0xfeU))) {
        Verilated::overWidthError("AWREADY");}
    if (VL_UNLIKELY((vlSelf->WREADY & 0xfeU))) {
        Verilated::overWidthError("WREADY");}
    if (VL_UNLIKELY((vlSelf->BID & 0xf0U))) {
        Verilated::overWidthError("BID");}
    if (VL_UNLIKELY((vlSelf->BRESP & 0xfcU))) {
        Verilated::overWidthError("BRESP");}
    if (VL_UNLIKELY((vlSelf->BVALID & 0xfeU))) {
        Verilated::overWidthError("BVALID");}
    if (VL_UNLIKELY((vlSelf->ARREADY & 0xfeU))) {
        Verilated::overWidthError("ARREADY");}
    if (VL_UNLIKELY((vlSelf->RID & 0xf0U))) {
        Verilated::overWidthError("RID");}
    if (VL_UNLIKELY((vlSelf->RRESP & 0xfcU))) {
        Verilated::overWidthError("RRESP");}
    if (VL_UNLIKELY((vlSelf->RLAST & 0xfeU))) {
        Verilated::overWidthError("RLAST");}
    if (VL_UNLIKELY((vlSelf->RVALID & 0xfeU))) {
        Verilated::overWidthError("RVALID");}
}
#endif  // VL_DEBUG
