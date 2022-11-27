// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmy_cpu__Syms.h"


void Vmy_cpu___024root__traceChgSub0(Vmy_cpu___024root* vlSelf, VerilatedVcd* tracep);

void Vmy_cpu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vmy_cpu___024root* const __restrict vlSelf = static_cast<Vmy_cpu___024root*>(voidSelf);
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vmy_cpu___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vmy_cpu___024root__traceChgSub0(Vmy_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp1210;
    VlWide<3>/*95:0*/ __Vtemp1212;
    VlWide<3>/*95:0*/ __Vtemp1213;
    VlWide<3>/*95:0*/ __Vtemp1214;
    VlWide<3>/*95:0*/ __Vtemp1215;
    VlWide<3>/*95:0*/ __Vtemp1216;
    VlWide<3>/*95:0*/ __Vtemp1219;
    VlWide<3>/*95:0*/ __Vtemp1220;
    VlWide<3>/*95:0*/ __Vtemp1221;
    VlWide<3>/*95:0*/ __Vtemp1222;
    VlWide<3>/*95:0*/ __Vtemp1223;
    VlWide<3>/*95:0*/ __Vtemp1225;
    VlWide<32>/*1023:0*/ __Vtemp1226;
    VlWide<16>/*511:0*/ __Vtemp1227;
    VlWide<32>/*1023:0*/ __Vtemp1228;
    VlWide<5>/*159:0*/ __Vtemp1250;
    VlWide<5>/*159:0*/ __Vtemp1252;
    VlWide<5>/*159:0*/ __Vtemp1253;
    VlWide<5>/*159:0*/ __Vtemp1254;
    VlWide<5>/*159:0*/ __Vtemp1255;
    VlWide<10>/*319:0*/ __Vtemp1256;
    VlWide<10>/*319:0*/ __Vtemp1258;
    VlWide<16>/*511:0*/ __Vtemp1263;
    VlWide<32>/*1023:0*/ __Vtemp1264;
    VlWide<32>/*1023:0*/ __Vtemp1265;
    VlWide<31>/*991:0*/ __Vtemp1266;
    VlWide<32>/*1023:0*/ __Vtemp1269;
    VlWide<32>/*1023:0*/ __Vtemp1270;
    VlWide<31>/*991:0*/ __Vtemp1271;
    VlWide<32>/*1023:0*/ __Vtemp1272;
    VlWide<32>/*1023:0*/ __Vtemp1273;
    VlWide<32>/*1023:0*/ __Vtemp1275;
    VlWide<31>/*991:0*/ __Vtemp1277;
    VlWide<32>/*1023:0*/ __Vtemp1278;
    VlWide<32>/*1023:0*/ __Vtemp1279;
    VlWide<32>/*1023:0*/ __Vtemp1281;
    VlWide<32>/*1023:0*/ __Vtemp1282;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->my_cpu__DOT__ext_ram_read_data),64);
            tracep->chgBit(oldp+2,((1U & (vlSelf->my_cpu__DOT__EX_ID_Bus[2U] 
                                          >> 5U))));
            tracep->chgQData(oldp+3,((((QData)((IData)(vlSelf->my_cpu__DOT__IF2__DOT__valid)) 
                                       << 0x20U) | (QData)((IData)(vlSelf->my_cpu__DOT__IF2__DOT__IF2_ID_Bus_reg)))),33);
            tracep->chgWData(oldp+5,(vlSelf->my_cpu__DOT__EX_ID_Bus),70);
            tracep->chgWData(oldp+8,(vlSelf->my_cpu__DOT__MEM_ID_Bus),70);
            __Vtemp1210[0U] = (IData)(vlSelf->my_cpu__DOT__EX__DOT__final_result);
            __Vtemp1210[1U] = (IData)((vlSelf->my_cpu__DOT__EX__DOT__final_result 
                                       >> 0x20U));
            __Vtemp1210[2U] = ((0xffffff80U & ((vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                                << 0x17U) 
                                               | (0x7fff80U 
                                                  & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[7U] 
                                                     >> 9U)))) 
                               | ((0x40U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                            >> 0xbU)) 
                                  | ((0x20U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U] 
                                               >> 5U)) 
                                     | (0x1fU & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U] 
                                                 >> 0xbU)))));
            __Vtemp1210[3U] = ((0x40000U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                            >> 6U)) 
                               | ((0x3ff80U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                               >> 0xbU)) 
                                  | (0x7fU & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                              >> 9U))));
            tracep->chgWData(oldp+11,(__Vtemp1210),115);
            tracep->chgBit(oldp+15,((0U != (IData)(vlSelf->my_cpu__DOT__ID__DOT__mem_OneHot))));
            tracep->chgQData(oldp+16,(vlSelf->my_cpu__DOT__mmio_read_data),64);
            tracep->chgBit(oldp+18,(vlSelf->my_cpu__DOT__mmio_en_reg));
            tracep->chgBit(oldp+19,(vlSelf->my_cpu__DOT__mmio_kbd_en));
            tracep->chgBit(oldp+20,(vlSelf->my_cpu__DOT__stop_all));
            tracep->chgCData(oldp+21,(vlSelf->my_cpu__DOT__dcache_be_n),8);
            tracep->chgBit(oldp+22,(vlSelf->my_cpu__DOT__dcache_wen));
            tracep->chgQData(oldp+23,(VL_SHIFTR_QQQ(64,64,64, 
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
            tracep->chgBit(oldp+25,((0x100fU == vlSelf->my_cpu__DOT__ID__DOT__inst)));
            tracep->chgQData(oldp+26,(vlSelf->my_cpu__DOT__mmio__DOT__total_shift),64);
            tracep->chgQData(oldp+28,(vlSelf->my_cpu__DOT__mmio__DOT__total_shift_cut),64);
            tracep->chgSData(oldp+30,(vlSelf->my_cpu__DOT__mmio__DOT__total_shift_in),10);
            tracep->chgQData(oldp+31,(vlSelf->my_cpu__DOT__mmio__DOT__serial_read_data),64);
            tracep->chgIData(oldp+33,(vlSelf->my_cpu__DOT__mmio__DOT__vga_ctl_low_read_data),32);
            tracep->chgIData(oldp+34,(vlSelf->my_cpu__DOT__mmio__DOT__unnamedblk1__DOT__i),32);
            tracep->chgBit(oldp+35,(vlSelf->my_cpu__DOT__IF__DOT__pause_mem_sec));
            tracep->chgBit(oldp+36,(vlSelf->my_cpu__DOT__IF2__DOT__valid));
            tracep->chgIData(oldp+37,(vlSelf->my_cpu__DOT__IF2__DOT__IF2_ID_Bus_reg),32);
            tracep->chgQData(oldp+38,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf
                                      [vlSelf->my_cpu__DOT__ID__DOT__src1_addr]),64);
            tracep->chgQData(oldp+40,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf
                                      [vlSelf->my_cpu__DOT__ID__DOT__src2_addr]),64);
            tracep->chgQData(oldp+42,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf
                                      [0x11U]),64);
            tracep->chgCData(oldp+44,((0x1fU & vlSelf->my_cpu__DOT__EX_ID_Bus[2U])),5);
            tracep->chgCData(oldp+45,((0x1fU & vlSelf->my_cpu__DOT__MEM_ID_Bus[2U])),5);
            tracep->chgCData(oldp+46,((0x1fU & (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                >> 7U))),5);
            tracep->chgQData(oldp+47,((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__EX_ID_Bus[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__EX_ID_Bus[0U])))),64);
            tracep->chgQData(oldp+49,((((QData)((IData)(
                                                        vlSelf->my_cpu__DOT__MEM_ID_Bus[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->my_cpu__DOT__MEM_ID_Bus[0U])))),64);
            tracep->chgBit(oldp+51,((1U & (vlSelf->my_cpu__DOT__MEM_ID_Bus[2U] 
                                           >> 5U))));
            tracep->chgBit(oldp+52,(vlSelf->my_cpu__DOT__ID__DOT__IF_we));
            tracep->chgIData(oldp+53,(vlSelf->my_cpu__DOT__ID__DOT__inst),32);
            tracep->chgIData(oldp+54,(vlSelf->my_cpu__DOT__ID__DOT__inst_mem_domin),32);
            tracep->chgQData(oldp+55,(vlSelf->my_cpu__DOT__ID__DOT__IF_ID_Bus_Reg),33);
            tracep->chgBit(oldp+57,((1U & (IData)((
                                                   ((IData)(vlSelf->my_cpu__DOT__ID__DOT__mem_arrive_flag)
                                                     ? 0ULL
                                                     : vlSelf->my_cpu__DOT__ID__DOT__IF_ID_Bus_Reg) 
                                                   >> 0x20U)))));
            tracep->chgBit(oldp+58,(vlSelf->my_cpu__DOT__ID__DOT__mem_arrive_flag));
            tracep->chgBit(oldp+59,(vlSelf->my_cpu__DOT__ID__DOT__jump_flag));
            tracep->chgIData(oldp+60,(vlSelf->my_cpu__DOT__ID__DOT__inst_addr),32);
            tracep->chgBit(oldp+61,((((((((((((((((
                                                   ((((((((((((((((((((((((((((((((((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ori) 
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
            tracep->chgCData(oldp+62,((0x1fU & ((IData)(vlSelf->my_cpu__DOT__ID__DOT__IF_we)
                                                 ? 
                                                (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                 >> 7U)
                                                 : 
                                                (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                 >> 7U)))),5);
            tracep->chgCData(oldp+63,(vlSelf->my_cpu__DOT__ID__DOT__src1_addr),5);
            tracep->chgCData(oldp+64,(vlSelf->my_cpu__DOT__ID__DOT__src2_addr),5);
            tracep->chgCData(oldp+65,((7U & (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+66,((0x7fU & vlSelf->my_cpu__DOT__ID__DOT__inst)),7);
            tracep->chgCData(oldp+67,((vlSelf->my_cpu__DOT__ID__DOT__inst 
                                       >> 0x19U)),7);
            tracep->chgCData(oldp+68,((0x3fU & (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                >> 0x14U))),6);
            tracep->chgSData(oldp+69,((vlSelf->my_cpu__DOT__ID__DOT__inst 
                                       >> 0x14U)),12);
            tracep->chgBit(oldp+70,((0x17U == (0x7fU 
                                               & vlSelf->my_cpu__DOT__ID__DOT__inst))));
            tracep->chgBit(oldp+71,(vlSelf->my_cpu__DOT__ID__DOT__inst_addi));
            tracep->chgBit(oldp+72,((0x100073U == vlSelf->my_cpu__DOT__ID__DOT__inst)));
            tracep->chgBit(oldp+73,(vlSelf->my_cpu__DOT__ID__DOT__inst_addiw));
            tracep->chgBit(oldp+74,(vlSelf->my_cpu__DOT__ID__DOT__inst_addw));
            tracep->chgBit(oldp+75,(vlSelf->my_cpu__DOT__ID__DOT__inst_add));
            tracep->chgBit(oldp+76,(vlSelf->my_cpu__DOT__ID__DOT__inst_subw));
            tracep->chgBit(oldp+77,(vlSelf->my_cpu__DOT__ID__DOT__inst_lwu));
            tracep->chgBit(oldp+78,(vlSelf->my_cpu__DOT__ID__DOT__inst_sh));
            tracep->chgBit(oldp+79,(vlSelf->my_cpu__DOT__ID__DOT__inst_sb));
            tracep->chgBit(oldp+80,(vlSelf->my_cpu__DOT__ID__DOT__inst_sd));
            tracep->chgBit(oldp+81,(vlSelf->my_cpu__DOT__ID__DOT__inst_sw));
            tracep->chgBit(oldp+82,(vlSelf->my_cpu__DOT__ID__DOT__inst_ld));
            tracep->chgBit(oldp+83,(vlSelf->my_cpu__DOT__ID__DOT__inst_lw));
            tracep->chgBit(oldp+84,(vlSelf->my_cpu__DOT__ID__DOT__inst_lhu));
            tracep->chgBit(oldp+85,(vlSelf->my_cpu__DOT__ID__DOT__inst_lh));
            tracep->chgBit(oldp+86,(vlSelf->my_cpu__DOT__ID__DOT__inst_lbu));
            tracep->chgBit(oldp+87,(vlSelf->my_cpu__DOT__ID__DOT__inst_lb));
            tracep->chgBit(oldp+88,(vlSelf->my_cpu__DOT__ID__DOT__inst_sub));
            tracep->chgBit(oldp+89,(vlSelf->my_cpu__DOT__ID__DOT__inst_srli));
            tracep->chgBit(oldp+90,(vlSelf->my_cpu__DOT__ID__DOT__inst_sllw));
            tracep->chgBit(oldp+91,(vlSelf->my_cpu__DOT__ID__DOT__inst_slli));
            tracep->chgBit(oldp+92,(vlSelf->my_cpu__DOT__ID__DOT__inst_sltiu));
            tracep->chgBit(oldp+93,(vlSelf->my_cpu__DOT__ID__DOT__inst_srai));
            tracep->chgBit(oldp+94,(vlSelf->my_cpu__DOT__ID__DOT__inst_sltu));
            tracep->chgBit(oldp+95,(vlSelf->my_cpu__DOT__ID__DOT__inst_slt));
            tracep->chgBit(oldp+96,(vlSelf->my_cpu__DOT__ID__DOT__inst_slliw));
            tracep->chgBit(oldp+97,(vlSelf->my_cpu__DOT__ID__DOT__inst_sraiw));
            tracep->chgBit(oldp+98,(vlSelf->my_cpu__DOT__ID__DOT__inst_sraw));
            tracep->chgBit(oldp+99,(vlSelf->my_cpu__DOT__ID__DOT__inst_srliw));
            tracep->chgBit(oldp+100,(vlSelf->my_cpu__DOT__ID__DOT__inst_srlw));
            tracep->chgBit(oldp+101,(vlSelf->my_cpu__DOT__ID__DOT__inst_sll));
            tracep->chgBit(oldp+102,(vlSelf->my_cpu__DOT__ID__DOT__inst_srl));
            tracep->chgBit(oldp+103,(vlSelf->my_cpu__DOT__ID__DOT__inst_sra));
            tracep->chgBit(oldp+104,(vlSelf->my_cpu__DOT__ID__DOT__inst_xor));
            tracep->chgBit(oldp+105,(vlSelf->my_cpu__DOT__ID__DOT__inst_slti));
            tracep->chgBit(oldp+106,(vlSelf->my_cpu__DOT__ID__DOT__inst_or));
            tracep->chgBit(oldp+107,(vlSelf->my_cpu__DOT__ID__DOT__inst_xori));
            tracep->chgBit(oldp+108,(vlSelf->my_cpu__DOT__ID__DOT__inst_and));
            tracep->chgBit(oldp+109,(vlSelf->my_cpu__DOT__ID__DOT__inst_andi));
            tracep->chgBit(oldp+110,((0x37U == (0x7fU 
                                                & vlSelf->my_cpu__DOT__ID__DOT__inst))));
            tracep->chgBit(oldp+111,(vlSelf->my_cpu__DOT__ID__DOT__inst_ori));
            tracep->chgBit(oldp+112,(vlSelf->my_cpu__DOT__ID__DOT__inst_mulw));
            tracep->chgBit(oldp+113,(vlSelf->my_cpu__DOT__ID__DOT__inst_divw));
            tracep->chgBit(oldp+114,(vlSelf->my_cpu__DOT__ID__DOT__inst_remw));
            tracep->chgBit(oldp+115,(vlSelf->my_cpu__DOT__ID__DOT__inst_mul));
            tracep->chgBit(oldp+116,(vlSelf->my_cpu__DOT__ID__DOT__inst_divuw));
            tracep->chgBit(oldp+117,(vlSelf->my_cpu__DOT__ID__DOT__inst_remuw));
            tracep->chgBit(oldp+118,(vlSelf->my_cpu__DOT__ID__DOT__inst_div));
            tracep->chgBit(oldp+119,(vlSelf->my_cpu__DOT__ID__DOT__inst_divu));
            tracep->chgBit(oldp+120,(vlSelf->my_cpu__DOT__ID__DOT__inst_rem));
            tracep->chgBit(oldp+121,(vlSelf->my_cpu__DOT__ID__DOT__inst_remu));
            tracep->chgBit(oldp+122,(vlSelf->my_cpu__DOT__ID__DOT__inst_mulh));
            tracep->chgBit(oldp+123,(vlSelf->my_cpu__DOT__ID__DOT__inst_mulhsu));
            tracep->chgBit(oldp+124,(vlSelf->my_cpu__DOT__ID__DOT__inst_mulhu));
            tracep->chgBit(oldp+125,(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrs));
            tracep->chgBit(oldp+126,(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrw));
            tracep->chgBit(oldp+127,((0x30200073U == vlSelf->my_cpu__DOT__ID__DOT__inst)));
            tracep->chgBit(oldp+128,((0x73U == vlSelf->my_cpu__DOT__ID__DOT__inst)));
            tracep->chgCData(oldp+129,(((0x17U == (0x7fU 
                                                   & vlSelf->my_cpu__DOT__ID__DOT__inst))
                                         ? 1U : (((
                                                   ((((((((((((((((((((((((((((((((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sll) 
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
                                                  : 
                                                 (((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraiw) 
                                                     | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraw)) 
                                                    | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srlw)) 
                                                   | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srliw))
                                                   ? 4U
                                                   : 0U)))),3);
            tracep->chgCData(oldp+130,((((0x37U == 
                                          (0x7fU & vlSelf->my_cpu__DOT__ID__DOT__inst)) 
                                         | (0x17U == 
                                            (0x7fU 
                                             & vlSelf->my_cpu__DOT__ID__DOT__inst)))
                                         ? 1U : (((
                                                   ((((((((((((((((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ori) 
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
                                                  : 
                                                 (((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sd) 
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
            tracep->chgCData(oldp+131,(((((((((((((
                                                   ((((((((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ori) 
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
                                         ? 1U : (((
                                                   (((((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraiw) 
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
            tracep->chgSData(oldp+132,(vlSelf->my_cpu__DOT__ID__DOT__mem_OneHot),11);
            tracep->chgSData(oldp+133,(((((((((((((
                                                   ((((((0x17U 
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
                                         << 0xdU) | 
                                        ((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sub) 
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
            tracep->chgSData(oldp+134,((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_mulh) 
                                         << 0xcU) | 
                                        (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_mulhsu) 
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
            tracep->chgCData(oldp+135,(vlSelf->my_cpu__DOT__ID__DOT__csr_OneHot),4);
            tracep->chgBit(oldp+136,(((((((((((((((
                                                   ((0x17U 
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
            tracep->chgBit(oldp+137,(((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sub) 
                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_subw))));
            tracep->chgBit(oldp+138,(((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slt) 
                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slti))));
            tracep->chgBit(oldp+139,(((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sltiu) 
                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sltu))));
            tracep->chgBit(oldp+140,(((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_and) 
                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_andi))));
            tracep->chgBit(oldp+141,(((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_or) 
                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ori))));
            tracep->chgBit(oldp+142,(((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_xori) 
                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_xor))));
            tracep->chgBit(oldp+143,(((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slli) 
                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sll))));
            tracep->chgBit(oldp+144,(((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srli) 
                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srl))));
            tracep->chgBit(oldp+145,(((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srai) 
                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sra))));
            tracep->chgBit(oldp+146,(((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraiw) 
                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraw))));
            tracep->chgBit(oldp+147,(((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sllw) 
                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_slliw))));
            tracep->chgBit(oldp+148,(((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srlw) 
                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srliw))));
            tracep->chgQData(oldp+149,(vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding),64);
            tracep->chgQData(oldp+151,(vlSelf->my_cpu__DOT__ID__DOT__Inst_Src2_forwarding),64);
            tracep->chgQData(oldp+153,((((vlSelf->my_cpu__DOT__EX_ID_Bus[2U] 
                                          >> 5U) & 
                                         (0x11U == 
                                          (0x1fU & 
                                           vlSelf->my_cpu__DOT__EX_ID_Bus[2U])))
                                         ? (((QData)((IData)(
                                                             vlSelf->my_cpu__DOT__EX_ID_Bus[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->my_cpu__DOT__EX_ID_Bus[0U])))
                                         : (((vlSelf->my_cpu__DOT__MEM_ID_Bus[2U] 
                                              >> 5U) 
                                             & (0x11U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->my_cpu__DOT__MEM_ID_Bus[2U])))
                                             ? (((QData)((IData)(
                                                                 vlSelf->my_cpu__DOT__MEM_ID_Bus[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->my_cpu__DOT__MEM_ID_Bus[0U])))
                                             : vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf
                                            [0x11U]))),64);
            tracep->chgIData(oldp+155,((vlSelf->my_cpu__DOT__ID__DOT__inst_addr 
                                        + (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->my_cpu__DOT__ID__DOT__j_type_imm 
                                                           >> 0x14U)))) 
                                            << 0x15U) 
                                           | vlSelf->my_cpu__DOT__ID__DOT__j_type_imm))),32);
            tracep->chgIData(oldp+156,(((IData)(vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding) 
                                        + (((- (IData)(
                                                       (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                              >> 0x14U)))),32);
            tracep->chgIData(oldp+157,(((vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding 
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
            tracep->chgIData(oldp+158,(((vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding 
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
            tracep->chgIData(oldp+159,(((vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding 
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
            tracep->chgIData(oldp+160,(((1U & (((IData)(
                                                        (vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding 
                                                         >> 0x3fU)) 
                                                & (~ (IData)(
                                                             (vlSelf->my_cpu__DOT__ID__DOT__Inst_Src2_forwarding 
                                                              >> 0x3fU)))) 
                                               | ((~ 
                                                   ((IData)(
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
            tracep->chgIData(oldp+161,(((1U & (((~ (IData)(
                                                           (vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding 
                                                            >> 0x3fU))) 
                                                & (IData)(
                                                          (vlSelf->my_cpu__DOT__ID__DOT__Inst_Src2_forwarding 
                                                           >> 0x3fU))) 
                                               | ((~ 
                                                   ((IData)(
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
            tracep->chgIData(oldp+162,(((vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding 
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
            tracep->chgIData(oldp+163,(vlSelf->my_cpu__DOT__ID__DOT__j_type_imm),21);
            tracep->chgSData(oldp+164,(vlSelf->my_cpu__DOT__ID__DOT__b_type_imm),13);
            tracep->chgBit(oldp+165,((0x6fU == (0x7fU 
                                                & vlSelf->my_cpu__DOT__ID__DOT__inst))));
            tracep->chgBit(oldp+166,(vlSelf->my_cpu__DOT__ID__DOT__inst_jalr));
            tracep->chgBit(oldp+167,(vlSelf->my_cpu__DOT__ID__DOT__inst_bne));
            tracep->chgBit(oldp+168,(vlSelf->my_cpu__DOT__ID__DOT__inst_beq));
            tracep->chgBit(oldp+169,(vlSelf->my_cpu__DOT__ID__DOT__inst_blt));
            tracep->chgBit(oldp+170,(vlSelf->my_cpu__DOT__ID__DOT__inst_bge));
            tracep->chgBit(oldp+171,(vlSelf->my_cpu__DOT__ID__DOT__inst_bgeu));
            tracep->chgBit(oldp+172,(vlSelf->my_cpu__DOT__ID__DOT__inst_bltu));
            tracep->chgBit(oldp+173,(vlSelf->my_cpu__DOT__ID__DOT__junm_en));
            tracep->chgQData(oldp+174,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[0]),64);
            tracep->chgQData(oldp+176,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[1]),64);
            tracep->chgQData(oldp+178,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[2]),64);
            tracep->chgQData(oldp+180,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[3]),64);
            tracep->chgQData(oldp+182,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[4]),64);
            tracep->chgQData(oldp+184,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[5]),64);
            tracep->chgQData(oldp+186,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[6]),64);
            tracep->chgQData(oldp+188,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[7]),64);
            tracep->chgQData(oldp+190,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[8]),64);
            tracep->chgQData(oldp+192,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[9]),64);
            tracep->chgQData(oldp+194,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[10]),64);
            tracep->chgQData(oldp+196,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[11]),64);
            tracep->chgQData(oldp+198,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[12]),64);
            tracep->chgQData(oldp+200,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[13]),64);
            tracep->chgQData(oldp+202,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[14]),64);
            tracep->chgQData(oldp+204,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[15]),64);
            tracep->chgQData(oldp+206,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[16]),64);
            tracep->chgQData(oldp+208,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[17]),64);
            tracep->chgQData(oldp+210,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[18]),64);
            tracep->chgQData(oldp+212,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[19]),64);
            tracep->chgQData(oldp+214,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[20]),64);
            tracep->chgQData(oldp+216,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[21]),64);
            tracep->chgQData(oldp+218,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[22]),64);
            tracep->chgQData(oldp+220,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[23]),64);
            tracep->chgQData(oldp+222,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[24]),64);
            tracep->chgQData(oldp+224,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[25]),64);
            tracep->chgQData(oldp+226,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[26]),64);
            tracep->chgQData(oldp+228,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[27]),64);
            tracep->chgQData(oldp+230,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[28]),64);
            tracep->chgQData(oldp+232,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[29]),64);
            tracep->chgQData(oldp+234,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[30]),64);
            tracep->chgQData(oldp+236,(vlSelf->my_cpu__DOT__ID__DOT__regesiterfile__DOT__rf[31]),64);
            tracep->chgCData(oldp+238,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_map_num),4);
            tracep->chgBit(oldp+239,((1U & ((IData)(vlSelf->my_cpu__DOT__ID__DOT__csr_OneHot) 
                                            >> 3U))));
            tracep->chgBit(oldp+240,((1U & ((IData)(vlSelf->my_cpu__DOT__ID__DOT__csr_OneHot) 
                                            >> 2U))));
            tracep->chgBit(oldp+241,((1U & ((IData)(vlSelf->my_cpu__DOT__ID__DOT__csr_OneHot) 
                                            >> 1U))));
            tracep->chgBit(oldp+242,((1U & (IData)(vlSelf->my_cpu__DOT__ID__DOT__csr_OneHot))));
            tracep->chgBit(oldp+243,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__time_interrupt_flag));
            tracep->chgQData(oldp+244,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[0]),64);
            tracep->chgQData(oldp+246,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[1]),64);
            tracep->chgQData(oldp+248,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[2]),64);
            tracep->chgQData(oldp+250,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[3]),64);
            tracep->chgQData(oldp+252,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[4]),64);
            tracep->chgQData(oldp+254,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[5]),64);
            tracep->chgQData(oldp+256,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[6]),64);
            tracep->chgQData(oldp+258,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[7]),64);
            tracep->chgQData(oldp+260,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[8]),64);
            tracep->chgQData(oldp+262,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[9]),64);
            tracep->chgQData(oldp+264,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[10]),64);
            tracep->chgQData(oldp+266,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[11]),64);
            tracep->chgQData(oldp+268,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[12]),64);
            tracep->chgQData(oldp+270,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[13]),64);
            tracep->chgQData(oldp+272,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[14]),64);
            tracep->chgQData(oldp+274,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__csr_reg[15]),64);
            tracep->chgIData(oldp+276,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__unnamedblk1__DOT__i),32);
            tracep->chgWData(oldp+277,(vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg),313);
            tracep->chgBit(oldp+287,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+288,((7U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U] 
                                              >> 4U))),3);
            tracep->chgCData(oldp+289,((0xfU & vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U])),4);
            tracep->chgBit(oldp+290,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+291,((0x1fU & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U] 
                                                 >> 0xbU))),5);
            tracep->chgQData(oldp+292,((((QData)((IData)(
                                                         vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[6U])) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[5U])) 
                                            << 0x10U) 
                                           | ((QData)((IData)(
                                                              vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[4U])) 
                                              >> 0x10U)))),64);
            tracep->chgIData(oldp+294,(((vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[7U] 
                                         << 0x10U) 
                                        | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[6U] 
                                           >> 0x10U))),32);
            tracep->chgIData(oldp+295,(((vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                         << 0x10U) 
                                        | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[7U] 
                                           >> 0x10U))),32);
            tracep->chgBit(oldp+296,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+297,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+298,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+299,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+300,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+301,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+302,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+303,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+304,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+305,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+306,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                            >> 0x12U))));
            tracep->chgSData(oldp+307,((0x7ffU & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                                  >> 0x12U))),11);
            tracep->chgSData(oldp+308,((0x3fffU & (
                                                   (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                                    << 3U) 
                                                   | (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                                      >> 0x1dU)))),14);
            tracep->chgSData(oldp+309,((0x1fffU & (
                                                   vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                                   >> 0xbU))),13);
            tracep->chgBit(oldp+310,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                            >> 0x18U))));
            tracep->chgQData(oldp+311,(vlSelf->my_cpu__DOT__EX__DOT__alu_result),64);
            tracep->chgQData(oldp+313,(vlSelf->my_cpu__DOT__EX__DOT__alu_src1),64);
            tracep->chgQData(oldp+315,(vlSelf->my_cpu__DOT__EX__DOT__alu_src2),64);
            tracep->chgQData(oldp+317,(vlSelf->my_cpu__DOT__EX__DOT__final_result),64);
            tracep->chgCData(oldp+319,(((1U & (IData)(
                                                      (vlSelf->my_cpu__DOT__EX__DOT__alu_result 
                                                       >> 2U)))
                                         ? ((1U & (IData)(
                                                          (vlSelf->my_cpu__DOT__EX__DOT__alu_result 
                                                           >> 1U)))
                                             ? ((1U 
                                                 & (IData)(vlSelf->my_cpu__DOT__EX__DOT__alu_result))
                                                 ? 0x80U
                                                 : 0x40U)
                                             : ((1U 
                                                 & (IData)(vlSelf->my_cpu__DOT__EX__DOT__alu_result))
                                                 ? 0x20U
                                                 : 0x10U))
                                         : ((1U & (IData)(
                                                          (vlSelf->my_cpu__DOT__EX__DOT__alu_result 
                                                           >> 1U)))
                                             ? ((1U 
                                                 & (IData)(vlSelf->my_cpu__DOT__EX__DOT__alu_result))
                                                 ? 8U
                                                 : 4U)
                                             : ((1U 
                                                 & (IData)(vlSelf->my_cpu__DOT__EX__DOT__alu_result))
                                                 ? 2U
                                                 : 1U)))),8);
            tracep->chgCData(oldp+320,(((1U & (IData)(
                                                      (vlSelf->my_cpu__DOT__EX__DOT__alu_result 
                                                       >> 2U)))
                                         ? ((1U & (IData)(
                                                          (vlSelf->my_cpu__DOT__EX__DOT__alu_result 
                                                           >> 1U)))
                                             ? 0xc0U
                                             : 0x30U)
                                         : ((1U & (IData)(
                                                          (vlSelf->my_cpu__DOT__EX__DOT__alu_result 
                                                           >> 1U)))
                                             ? 0xcU
                                             : 3U))),8);
            tracep->chgCData(oldp+321,(((1U & (IData)(
                                                      (vlSelf->my_cpu__DOT__EX__DOT__alu_result 
                                                       >> 2U)))
                                         ? 0xf0U : 0xfU)),8);
            tracep->chgQData(oldp+322,(vlSelf->my_cpu__DOT__EX__DOT__mul_div_result),64);
            tracep->chgBit(oldp+324,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+325,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                            >> 9U))));
            tracep->chgBit(oldp+326,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                            >> 8U))));
            tracep->chgBit(oldp+327,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                            >> 7U))));
            tracep->chgBit(oldp+328,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                            >> 6U))));
            tracep->chgBit(oldp+329,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                            >> 5U))));
            tracep->chgBit(oldp+330,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                            >> 4U))));
            tracep->chgBit(oldp+331,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                            >> 3U))));
            tracep->chgBit(oldp+332,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                            >> 2U))));
            tracep->chgBit(oldp+333,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                            >> 1U))));
            tracep->chgBit(oldp+334,((1U & vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U])));
            tracep->chgBit(oldp+335,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+336,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+337,((vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[8U] 
                                      >> 0x1fU)));
            tracep->chgQData(oldp+338,(vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__adder_result),64);
            tracep->chgQData(oldp+340,(vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__slt_result),64);
            VL_EXTEND_WQ(65,64, __Vtemp1212, vlSelf->my_cpu__DOT__EX__DOT__alu_src1);
            VL_EXTEND_WQ(65,64, __Vtemp1213, vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__adder_b);
            VL_ADD_W(3, __Vtemp1214, __Vtemp1212, __Vtemp1213);
            VL_EXTEND_WQ(65,64, __Vtemp1215, vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__adder_cin);
            VL_ADD_W(3, __Vtemp1216, __Vtemp1214, __Vtemp1215);
            tracep->chgQData(oldp+342,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp1216[2U])))))),64);
            tracep->chgQData(oldp+344,((vlSelf->my_cpu__DOT__EX__DOT__alu_src1 
                                        & vlSelf->my_cpu__DOT__EX__DOT__alu_src2)),64);
            tracep->chgQData(oldp+346,((vlSelf->my_cpu__DOT__EX__DOT__alu_src1 
                                        | vlSelf->my_cpu__DOT__EX__DOT__alu_src2)),64);
            tracep->chgQData(oldp+348,((vlSelf->my_cpu__DOT__EX__DOT__alu_src1 
                                        ^ vlSelf->my_cpu__DOT__EX__DOT__alu_src2)),64);
            tracep->chgQData(oldp+350,((vlSelf->my_cpu__DOT__EX__DOT__alu_src1 
                                        << (0x3fU & (IData)(vlSelf->my_cpu__DOT__EX__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+352,((vlSelf->my_cpu__DOT__EX__DOT__alu_src1 
                                        >> (0x3fU & (IData)(vlSelf->my_cpu__DOT__EX__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+354,(vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__sraw_result),64);
            tracep->chgQData(oldp+356,(vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__srlw_result),64);
            tracep->chgQData(oldp+358,(vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__sllw_result),64);
            tracep->chgQData(oldp+360,(vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__adder_b),64);
            tracep->chgQData(oldp+362,(vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__adder_cin),64);
            VL_EXTEND_WQ(65,64, __Vtemp1219, vlSelf->my_cpu__DOT__EX__DOT__alu_src1);
            VL_EXTEND_WQ(65,64, __Vtemp1220, vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__adder_b);
            VL_ADD_W(3, __Vtemp1221, __Vtemp1219, __Vtemp1220);
            VL_EXTEND_WQ(65,64, __Vtemp1222, vlSelf->my_cpu__DOT__EX__DOT__alu_1__DOT__adder_cin);
            VL_ADD_W(3, __Vtemp1223, __Vtemp1221, __Vtemp1222);
            tracep->chgBit(oldp+364,((1U & __Vtemp1223[2U])));
            tracep->chgBit(oldp+365,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+366,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+367,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+368,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+369,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+370,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+371,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+372,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+373,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+374,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+375,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+376,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+377,((1U & (vlSelf->my_cpu__DOT__EX__DOT__ID_EX_Bus_Reg[9U] 
                                            >> 0xbU))));
            tracep->chgQData(oldp+378,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div_result),64);
            tracep->chgQData(oldp+380,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__rem_result),64);
            tracep->chgQData(oldp+382,((((QData)((IData)(
                                                         vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[2U])))),64);
            tracep->chgQData(oldp+384,((((QData)((IData)(
                                                         vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result[0U])))),64);
            tracep->chgCData(oldp+386,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul_signed),2);
            tracep->chgBit(oldp+387,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div_sign));
            tracep->chgBit(oldp+388,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__shorten));
            tracep->chgBit(oldp+389,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_abs_flag));
            tracep->chgBit(oldp+390,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_abs_flag));
            tracep->chgQData(oldp+391,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul),64);
            tracep->chgQData(oldp+393,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul),64);
            tracep->chgQData(oldp+395,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__mul_32_1_var),64);
            tracep->chgQData(oldp+397,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__mul_32_2_var),64);
            tracep->chgQData(oldp+399,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__mul_32_3_var),64);
            tracep->chgQData(oldp+401,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__mul_32_4_var),64);
            tracep->chgWData(oldp+403,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result_abs),128);
            tracep->chgBit(oldp+407,((((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_abs_flag) 
                                       ^ (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_abs_flag)) 
                                      & (3U == (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul_signed)))));
            tracep->chgWData(oldp+408,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__result),128);
            tracep->chgIData(oldp+412,((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul)),32);
            tracep->chgIData(oldp+413,((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul)),32);
            tracep->chgIData(oldp+414,((IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src2_mul 
                                                >> 0x20U))),32);
            tracep->chgIData(oldp+415,((IData)((vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__src1_mul 
                                                >> 0x20U))),32);
            tracep->chgWData(oldp+416,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data),65);
            tracep->chgQData(oldp+419,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result),64);
            tracep->chgQData(oldp+421,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs),64);
            tracep->chgQData(oldp+423,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_data_abs),64);
            tracep->chgBit(oldp+425,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_sign_flag));
            tracep->chgBit(oldp+426,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_sign_flag));
            VL_EXTEND_WI(65,1, __Vtemp1225, (1U & (IData)(
                                                          (vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_data_abs 
                                                           >> 0x3fU))));
            tracep->chgWData(oldp+427,(__Vtemp1225),65);
            tracep->chgWData(oldp+430,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_1_2),65);
            tracep->chgWData(oldp+433,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_1),65);
            tracep->chgWData(oldp+436,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_2_2),65);
            tracep->chgWData(oldp+439,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_1),65);
            tracep->chgWData(oldp+442,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_3_2),65);
            tracep->chgWData(oldp+445,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_1),65);
            tracep->chgWData(oldp+448,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_4_2),65);
            tracep->chgWData(oldp+451,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_1),65);
            tracep->chgWData(oldp+454,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_5_2),65);
            tracep->chgWData(oldp+457,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_1),65);
            tracep->chgWData(oldp+460,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_6_2),65);
            tracep->chgWData(oldp+463,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_1),65);
            tracep->chgWData(oldp+466,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_7_2),65);
            tracep->chgWData(oldp+469,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_1),65);
            tracep->chgWData(oldp+472,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_8_2),65);
            tracep->chgWData(oldp+475,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_1),65);
            tracep->chgWData(oldp+478,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_9_2),65);
            tracep->chgWData(oldp+481,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_1),65);
            tracep->chgWData(oldp+484,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_10_2),65);
            tracep->chgWData(oldp+487,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_1),65);
            tracep->chgWData(oldp+490,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_11_2),65);
            tracep->chgWData(oldp+493,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_1),65);
            tracep->chgWData(oldp+496,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_12_2),65);
            tracep->chgWData(oldp+499,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_1),65);
            tracep->chgWData(oldp+502,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_13_2),65);
            tracep->chgWData(oldp+505,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_1),65);
            tracep->chgWData(oldp+508,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_14_2),65);
            tracep->chgWData(oldp+511,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_1),65);
            tracep->chgWData(oldp+514,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_15_2),65);
            tracep->chgWData(oldp+517,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_1),65);
            tracep->chgWData(oldp+520,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_16_2),65);
            tracep->chgWData(oldp+523,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_1),65);
            tracep->chgWData(oldp+526,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_17_2),65);
            tracep->chgWData(oldp+529,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_1),65);
            tracep->chgWData(oldp+532,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_18_2),65);
            tracep->chgWData(oldp+535,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_1),65);
            tracep->chgWData(oldp+538,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_19_2),65);
            tracep->chgWData(oldp+541,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_1),65);
            tracep->chgWData(oldp+544,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_20_2),65);
            tracep->chgWData(oldp+547,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_1),65);
            tracep->chgWData(oldp+550,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_21_2),65);
            tracep->chgWData(oldp+553,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_1),65);
            tracep->chgWData(oldp+556,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_22_2),65);
            tracep->chgWData(oldp+559,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_1),65);
            tracep->chgWData(oldp+562,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_23_2),65);
            tracep->chgWData(oldp+565,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_1),65);
            tracep->chgWData(oldp+568,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_24_2),65);
            tracep->chgWData(oldp+571,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_1),65);
            tracep->chgWData(oldp+574,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_25_2),65);
            tracep->chgWData(oldp+577,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_1),65);
            tracep->chgWData(oldp+580,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_26_2),65);
            tracep->chgWData(oldp+583,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_1),65);
            tracep->chgWData(oldp+586,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_27_2),65);
            tracep->chgWData(oldp+589,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_1),65);
            tracep->chgWData(oldp+592,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_28_2),65);
            tracep->chgWData(oldp+595,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_1),65);
            tracep->chgWData(oldp+598,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_29_2),65);
            tracep->chgWData(oldp+601,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_1),65);
            tracep->chgWData(oldp+604,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_30_2),65);
            tracep->chgWData(oldp+607,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_1),65);
            tracep->chgWData(oldp+610,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_31_2),65);
            tracep->chgWData(oldp+613,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_1),65);
            tracep->chgWData(oldp+616,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_32_2),65);
            tracep->chgWData(oldp+619,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_1),65);
            tracep->chgWData(oldp+622,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_33_2),65);
            tracep->chgWData(oldp+625,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_1),65);
            tracep->chgWData(oldp+628,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_34_2),65);
            tracep->chgWData(oldp+631,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_1),65);
            tracep->chgWData(oldp+634,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_35_2),65);
            tracep->chgWData(oldp+637,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_1),65);
            tracep->chgWData(oldp+640,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_36_2),65);
            tracep->chgWData(oldp+643,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_1),65);
            tracep->chgWData(oldp+646,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_37_2),65);
            tracep->chgWData(oldp+649,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_1),65);
            tracep->chgWData(oldp+652,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_38_2),65);
            tracep->chgWData(oldp+655,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_1),65);
            tracep->chgWData(oldp+658,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_39_2),65);
            tracep->chgWData(oldp+661,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_1),65);
            tracep->chgWData(oldp+664,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_40_2),65);
            tracep->chgWData(oldp+667,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_1),65);
            tracep->chgWData(oldp+670,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_41_2),65);
            tracep->chgWData(oldp+673,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_1),65);
            tracep->chgWData(oldp+676,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_42_2),65);
            tracep->chgWData(oldp+679,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_1),65);
            tracep->chgWData(oldp+682,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_43_2),65);
            tracep->chgWData(oldp+685,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_1),65);
            tracep->chgWData(oldp+688,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_44_2),65);
            tracep->chgWData(oldp+691,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_1),65);
            tracep->chgWData(oldp+694,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_45_2),65);
            tracep->chgWData(oldp+697,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_1),65);
            tracep->chgWData(oldp+700,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_46_2),65);
            tracep->chgWData(oldp+703,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_1),65);
            tracep->chgWData(oldp+706,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_47_2),65);
            tracep->chgWData(oldp+709,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_1),65);
            tracep->chgWData(oldp+712,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_48_2),65);
            tracep->chgWData(oldp+715,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_1),65);
            tracep->chgWData(oldp+718,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_49_2),65);
            tracep->chgWData(oldp+721,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_1),65);
            tracep->chgWData(oldp+724,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_50_2),65);
            tracep->chgWData(oldp+727,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_1),65);
            tracep->chgWData(oldp+730,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_51_2),65);
            tracep->chgWData(oldp+733,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_1),65);
            tracep->chgWData(oldp+736,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_52_2),65);
            tracep->chgWData(oldp+739,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_1),65);
            tracep->chgWData(oldp+742,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_53_2),65);
            tracep->chgWData(oldp+745,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_1),65);
            tracep->chgWData(oldp+748,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_54_2),65);
            tracep->chgWData(oldp+751,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_1),65);
            tracep->chgWData(oldp+754,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_55_2),65);
            tracep->chgWData(oldp+757,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_1),65);
            tracep->chgWData(oldp+760,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_56_2),65);
            tracep->chgWData(oldp+763,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_1),65);
            tracep->chgWData(oldp+766,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_57_2),65);
            tracep->chgWData(oldp+769,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_1),65);
            tracep->chgWData(oldp+772,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_58_2),65);
            tracep->chgWData(oldp+775,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_1),65);
            tracep->chgWData(oldp+778,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_59_2),65);
            tracep->chgWData(oldp+781,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_1),65);
            tracep->chgWData(oldp+784,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_60_2),65);
            tracep->chgWData(oldp+787,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_1),65);
            tracep->chgWData(oldp+790,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_61_2),65);
            tracep->chgWData(oldp+793,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_1),65);
            tracep->chgWData(oldp+796,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_62_2),65);
            tracep->chgWData(oldp+799,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_1),65);
            tracep->chgWData(oldp+802,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_63_2),65);
            tracep->chgWData(oldp+805,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_64_1),65);
            tracep->chgWData(oldp+808,(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data_64_2),65);
            tracep->chgIData(oldp+811,(((IData)(1U) 
                                        + (~ vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__remain_data[0U]))),32);
            tracep->chgQData(oldp+812,(((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_sign_flag)
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
            tracep->chgIData(oldp+814,(((IData)(1U) 
                                        + (~ (IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result)))),32);
            tracep->chgQData(oldp+815,((((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_sign_flag) 
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
            tracep->chgWData(oldp+817,(vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg),115);
            tracep->chgBit(oldp+821,((1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+822,((1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+823,((1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+824,((1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+825,((1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+826,((1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+827,((1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+828,((1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+829,((1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                                            >> 9U))));
            tracep->chgBit(oldp+830,((1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                                            >> 8U))));
            tracep->chgBit(oldp+831,((1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                                            >> 7U))));
            tracep->chgSData(oldp+832,((0x7ffU & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U] 
                                                  >> 7U))),11);
            tracep->chgQData(oldp+833,((((QData)((IData)(
                                                         vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[0U])))),64);
            tracep->chgQData(oldp+835,(((0x2000U & 
                                         vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U])
                                         ? vlSelf->my_cpu__DOT__ext_ram_read_data
                                         : ((0x1000U 
                                             & vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[3U])
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
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->my_cpu__DOT__ext_ram_read_data 
                                                                                >> 0xfU)))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->my_cpu__DOT__ext_ram_read_data)))))
                                                 : 
                                                ((0x100U 
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
            tracep->chgCData(oldp+837,((0x1fU & vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[2U])),5);
            tracep->chgBit(oldp+838,((1U & (vlSelf->my_cpu__DOT__MEM__DOT__EX_MEM_Bus_Reg[2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+839,(vlSelf->my_cpu__DOT__cache__DOT__read_shortcut_icache));
            tracep->chgBit(oldp+840,(vlSelf->my_cpu__DOT__cache__DOT__read_shortcut_dcache));
            tracep->chgBit(oldp+841,(vlSelf->my_cpu__DOT__cache__DOT__icache_busy));
            tracep->chgBit(oldp+842,(vlSelf->my_cpu__DOT__cache__DOT__dcache_busy));
            tracep->chgBit(oldp+843,((0U != (IData)(vlSelf->my_cpu__DOT__dcache_be_n))));
            __Vtemp1226[0U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0U];
            __Vtemp1226[1U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][1U];
            __Vtemp1226[2U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][2U];
            __Vtemp1226[3U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][3U];
            __Vtemp1226[4U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][4U];
            __Vtemp1226[5U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][5U];
            __Vtemp1226[6U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][6U];
            __Vtemp1226[7U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][7U];
            __Vtemp1226[8U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][8U];
            __Vtemp1226[9U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][9U];
            __Vtemp1226[0xaU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0xaU];
            __Vtemp1226[0xbU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0xbU];
            __Vtemp1226[0xcU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0xcU];
            __Vtemp1226[0xdU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0xdU];
            __Vtemp1226[0xeU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0xeU];
            __Vtemp1226[0xfU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0xfU];
            __Vtemp1226[0x10U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x10U];
            __Vtemp1226[0x11U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x11U];
            __Vtemp1226[0x12U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x12U];
            __Vtemp1226[0x13U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x13U];
            __Vtemp1226[0x14U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x14U];
            __Vtemp1226[0x15U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x15U];
            __Vtemp1226[0x16U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x16U];
            __Vtemp1226[0x17U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x17U];
            __Vtemp1226[0x18U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x18U];
            __Vtemp1226[0x19U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x19U];
            __Vtemp1226[0x1aU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x1aU];
            __Vtemp1226[0x1bU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x1bU];
            __Vtemp1226[0x1cU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x1cU];
            __Vtemp1226[0x1dU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x1dU];
            __Vtemp1226[0x1eU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x1eU];
            __Vtemp1226[0x1fU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index][0x1fU];
            tracep->chgWData(oldp+844,(__Vtemp1226),1024);
            tracep->chgWData(oldp+876,(vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data),1024);
            tracep->chgIData(oldp+908,(vlSelf->my_cpu__DOT__cache__DOT__AXI_read_addr),32);
            tracep->chgCData(oldp+909,(vlSelf->my_cpu__DOT__cache__DOT__read_state),3);
            tracep->chgCData(oldp+910,(vlSelf->my_cpu__DOT__cache__DOT__read_index),4);
            tracep->chgCData(oldp+911,(vlSelf->my_cpu__DOT__cache__DOT__AXI_read_size),3);
            tracep->chgCData(oldp+912,(vlSelf->my_cpu__DOT__cache__DOT__AXI_read_target),2);
            tracep->chgBit(oldp+913,(vlSelf->my_cpu__DOT__cache__DOT__read_req));
            tracep->chgWData(oldp+914,(vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data),1024);
            tracep->chgIData(oldp+946,(vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_addr),32);
            tracep->chgQData(oldp+947,(vlSelf->my_cpu__DOT__cache__DOT__AXI_write_data),64);
            tracep->chgIData(oldp+949,(vlSelf->my_cpu__DOT__cache__DOT__AXI_write_addr),32);
            tracep->chgCData(oldp+950,(vlSelf->my_cpu__DOT__cache__DOT__write_index),4);
            tracep->chgCData(oldp+951,(vlSelf->my_cpu__DOT__cache__DOT__write_state),4);
            __Vtemp1227[0U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0U];
            __Vtemp1227[1U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[1U];
            __Vtemp1227[2U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[2U];
            __Vtemp1227[3U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[3U];
            __Vtemp1227[4U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[4U];
            __Vtemp1227[5U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[5U];
            __Vtemp1227[6U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[6U];
            __Vtemp1227[7U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[7U];
            __Vtemp1227[8U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[8U];
            __Vtemp1227[9U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[9U];
            __Vtemp1227[0xaU] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xaU];
            __Vtemp1227[0xbU] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xbU];
            __Vtemp1227[0xcU] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xcU];
            __Vtemp1227[0xdU] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xdU];
            __Vtemp1227[0xeU] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xeU];
            __Vtemp1227[0xfU] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xfU];
            tracep->chgWData(oldp+952,(__Vtemp1227),512);
            tracep->chgSData(oldp+968,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit),16);
            tracep->chgIData(oldp+969,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[0]),26);
            tracep->chgIData(oldp+970,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[1]),26);
            tracep->chgIData(oldp+971,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[2]),26);
            tracep->chgIData(oldp+972,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[3]),26);
            tracep->chgIData(oldp+973,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[4]),26);
            tracep->chgIData(oldp+974,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[5]),26);
            tracep->chgIData(oldp+975,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[6]),26);
            tracep->chgIData(oldp+976,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[7]),26);
            tracep->chgIData(oldp+977,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[8]),26);
            tracep->chgIData(oldp+978,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[9]),26);
            tracep->chgIData(oldp+979,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[10]),26);
            tracep->chgIData(oldp+980,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[11]),26);
            tracep->chgIData(oldp+981,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[12]),26);
            tracep->chgIData(oldp+982,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[13]),26);
            tracep->chgIData(oldp+983,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[14]),26);
            tracep->chgIData(oldp+984,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__tag[15]),26);
            tracep->chgWData(oldp+985,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[0]),512);
            tracep->chgWData(oldp+1001,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[1]),512);
            tracep->chgWData(oldp+1017,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[2]),512);
            tracep->chgWData(oldp+1033,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[3]),512);
            tracep->chgWData(oldp+1049,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[4]),512);
            tracep->chgWData(oldp+1065,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[5]),512);
            tracep->chgWData(oldp+1081,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[6]),512);
            tracep->chgWData(oldp+1097,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[7]),512);
            tracep->chgWData(oldp+1113,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[8]),512);
            tracep->chgWData(oldp+1129,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[9]),512);
            tracep->chgWData(oldp+1145,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[10]),512);
            tracep->chgWData(oldp+1161,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[11]),512);
            tracep->chgWData(oldp+1177,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[12]),512);
            tracep->chgWData(oldp+1193,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[13]),512);
            tracep->chgWData(oldp+1209,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[14]),512);
            tracep->chgWData(oldp+1225,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_store[15]),512);
            tracep->chgSData(oldp+1241,((0x3ffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (0xfU 
                                                     & (vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel 
                                                        >> 2U))) 
                                                   << 5U))),10);
            tracep->chgIData(oldp+1242,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_pre),32);
            tracep->chgIData(oldp+1243,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__inst_addr_sel),32);
            tracep->chgCData(oldp+1244,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__replace_index),4);
            tracep->chgCData(oldp+1245,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__hit_index),4);
            tracep->chgCData(oldp+1246,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__icache_state),2);
            tracep->chgCData(oldp+1247,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__index_in),4);
            tracep->chgCData(oldp+1248,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__replace_index_reg),4);
            tracep->chgIData(oldp+1249,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+1250,(vlSelf->my_cpu__DOT__cache__DOT__Icache__DOT__unnamedblk2__DOT__j),32);
            tracep->chgQData(oldp+1251,(((1U & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg))
                                          ? 0ULL : 
                                         ((2U & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg))
                                           ? 8ULL : 
                                          ((4U & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg))
                                            ? 0x10ULL
                                            : ((8U 
                                                & (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg))
                                                ? 0x18ULL
                                                : (
                                                   (0x10U 
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
            tracep->chgSData(oldp+1253,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit),16);
            tracep->chgSData(oldp+1254,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__dirty_flag),16);
            tracep->chgIData(oldp+1255,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[0]),25);
            tracep->chgIData(oldp+1256,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[1]),25);
            tracep->chgIData(oldp+1257,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[2]),25);
            tracep->chgIData(oldp+1258,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[3]),25);
            tracep->chgIData(oldp+1259,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[4]),25);
            tracep->chgIData(oldp+1260,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[5]),25);
            tracep->chgIData(oldp+1261,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[6]),25);
            tracep->chgIData(oldp+1262,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[7]),25);
            tracep->chgIData(oldp+1263,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[8]),25);
            tracep->chgIData(oldp+1264,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[9]),25);
            tracep->chgIData(oldp+1265,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[10]),25);
            tracep->chgIData(oldp+1266,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[11]),25);
            tracep->chgIData(oldp+1267,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[12]),25);
            tracep->chgIData(oldp+1268,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[13]),25);
            tracep->chgIData(oldp+1269,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[14]),25);
            tracep->chgIData(oldp+1270,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__tag[15]),25);
            tracep->chgWData(oldp+1271,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[0]),1024);
            tracep->chgWData(oldp+1303,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[1]),1024);
            tracep->chgWData(oldp+1335,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[2]),1024);
            tracep->chgWData(oldp+1367,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[3]),1024);
            tracep->chgWData(oldp+1399,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[4]),1024);
            tracep->chgWData(oldp+1431,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[5]),1024);
            tracep->chgWData(oldp+1463,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[6]),1024);
            tracep->chgWData(oldp+1495,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[7]),1024);
            tracep->chgWData(oldp+1527,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[8]),1024);
            tracep->chgWData(oldp+1559,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[9]),1024);
            tracep->chgWData(oldp+1591,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[10]),1024);
            tracep->chgWData(oldp+1623,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[11]),1024);
            tracep->chgWData(oldp+1655,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[12]),1024);
            tracep->chgWData(oldp+1687,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[13]),1024);
            tracep->chgWData(oldp+1719,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[14]),1024);
            tracep->chgWData(oldp+1751,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store[15]),1024);
            tracep->chgQData(oldp+1783,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_out_index),64);
            tracep->chgSData(oldp+1785,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__offset),11);
            tracep->chgCData(oldp+1786,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index),4);
            tracep->chgCData(oldp+1787,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_data_be_reg),8);
            tracep->chgSData(oldp+1788,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__total_shift_in),10);
            tracep->chgQData(oldp+1789,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_in_data_write_64),64);
            tracep->chgCData(oldp+1791,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index),4);
            tracep->chgCData(oldp+1792,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__replace_index_already_write),4);
            tracep->chgCData(oldp+1793,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__dcache_state),2);
            tracep->chgBit(oldp+1794,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__indata_target));
            tracep->chgCData(oldp+1795,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__write_index),4);
            __Vtemp1228[0U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][0U];
            __Vtemp1228[1U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][1U];
            __Vtemp1228[2U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][2U];
            __Vtemp1228[3U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][3U];
            __Vtemp1228[4U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][4U];
            __Vtemp1228[5U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][5U];
            __Vtemp1228[6U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][6U];
            __Vtemp1228[7U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][7U];
            __Vtemp1228[8U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][8U];
            __Vtemp1228[9U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][9U];
            __Vtemp1228[0xaU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][0xaU];
            __Vtemp1228[0xbU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][0xbU];
            __Vtemp1228[0xcU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][0xcU];
            __Vtemp1228[0xdU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][0xdU];
            __Vtemp1228[0xeU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][0xeU];
            __Vtemp1228[0xfU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][0xfU];
            __Vtemp1228[0x10U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][0x10U];
            __Vtemp1228[0x11U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][0x11U];
            __Vtemp1228[0x12U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][0x12U];
            __Vtemp1228[0x13U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][0x13U];
            __Vtemp1228[0x14U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][0x14U];
            __Vtemp1228[0x15U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][0x15U];
            __Vtemp1228[0x16U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][0x16U];
            __Vtemp1228[0x17U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][0x17U];
            __Vtemp1228[0x18U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][0x18U];
            __Vtemp1228[0x19U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][0x19U];
            __Vtemp1228[0x1aU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][0x1aU];
            __Vtemp1228[0x1bU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][0x1bU];
            __Vtemp1228[0x1cU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][0x1cU];
            __Vtemp1228[0x1dU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][0x1dU];
            __Vtemp1228[0x1eU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][0x1eU];
            __Vtemp1228[0x1fU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                [7U][0x1fU];
            tracep->chgWData(oldp+1796,(__Vtemp1228),1024);
            tracep->chgQData(oldp+1828,((((QData)((IData)(
                                                          vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                          [7U][1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                           [7U][0U])))),64);
            tracep->chgQData(oldp+1830,((((QData)((IData)(
                                                          vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                          [7U][3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                           [7U][2U])))),64);
            tracep->chgQData(oldp+1832,((((QData)((IData)(
                                                          vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                          [7U][5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                           [7U][4U])))),64);
            tracep->chgQData(oldp+1834,((((QData)((IData)(
                                                          vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                          [7U][7U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                           [7U][6U])))),64);
            tracep->chgQData(oldp+1836,((((QData)((IData)(
                                                          vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                          [7U][9U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                           [7U][8U])))),64);
            tracep->chgQData(oldp+1838,((((QData)((IData)(
                                                          vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                          [7U][0xbU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                           [7U][0xaU])))),64);
            tracep->chgQData(oldp+1840,((((QData)((IData)(
                                                          vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                          [7U][0xdU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                           [7U][0xcU])))),64);
            tracep->chgQData(oldp+1842,((((QData)((IData)(
                                                          vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                          [7U][0xfU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                           [7U][0xeU])))),64);
            tracep->chgQData(oldp+1844,((((QData)((IData)(
                                                          vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                          [7U][0x11U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                           [7U][0x10U])))),64);
            tracep->chgQData(oldp+1846,((((QData)((IData)(
                                                          vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                          [7U][0x13U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                           [7U][0x12U])))),64);
            tracep->chgQData(oldp+1848,((((QData)((IData)(
                                                          vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                          [7U][0x15U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                           [7U][0x14U])))),64);
            tracep->chgQData(oldp+1850,((((QData)((IData)(
                                                          vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                          [7U][0x17U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                           [7U][0x16U])))),64);
            tracep->chgQData(oldp+1852,((((QData)((IData)(
                                                          vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                          [7U][0x19U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                           [7U][0x18U])))),64);
            tracep->chgQData(oldp+1854,((((QData)((IData)(
                                                          vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                          [7U][0x1bU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                           [7U][0x1aU])))),64);
            tracep->chgQData(oldp+1856,((((QData)((IData)(
                                                          vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                          [7U][0x1dU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                           [7U][0x1cU])))),64);
            tracep->chgQData(oldp+1858,((((QData)((IData)(
                                                          vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                          [7U][0x1fU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                                                           [7U][0x1eU])))),64);
            tracep->chgIData(oldp+1860,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+1861,(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__unnamedblk2__DOT__j),32);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            __Vtemp1250[4U] = ((0xfffc0000U & (((((
                                                   (((((((((((((0x17U 
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
                                              << 6U) 
                                             | (((IData)(vlSelf->my_cpu__DOT__ID__DOT__IF_we) 
                                                 << 5U) 
                                                | ((IData)(
                                                           ((((QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addr)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                                            >> 0x20U)) 
                                                   >> 0x1bU)))));
            __Vtemp1252[4U] = (((0x37U == (0x7fU & vlSelf->my_cpu__DOT__ID__DOT__inst)) 
                                | (0x17U == (0x7fU 
                                             & vlSelf->my_cpu__DOT__ID__DOT__inst)))
                                ? 1U : ((((((((((((
                                                   (((((((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ori) 
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
                                         ? 2U : (((
                                                   ((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sd) 
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
                                                   : 0U))));
            __Vtemp1253[4U] = ((((0x17U == (0x7fU & vlSelf->my_cpu__DOT__ID__DOT__inst))
                                  ? 1U : ((((((((((
                                                   (((((((((((((((((((((((((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sll) 
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
                                           ? 2U : (
                                                   ((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraiw) 
                                                      | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_sraw)) 
                                                     | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srlw)) 
                                                    | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_srliw))
                                                    ? 4U
                                                    : 0U))) 
                                << 4U) | __Vtemp1252[4U]);
            __Vtemp1254[4U] = (((((((((((((((((((((
                                                   (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ori) 
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
                                             == (0x7fU 
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
                                << 7U) | __Vtemp1253[4U]);
            __Vtemp1255[4U] = (((((((((((((((((((((
                                                   ((((((((((((((((((((((((((((((((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_ori) 
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
                                << 0xaU) | __Vtemp1254[4U]);
            __Vtemp1256[5U] = ((0x7ffU & ((IData)((
                                                   ((0x6fU 
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
                               | ((0xf800U & ((IData)(
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
                                  | ((IData)(((((0x6fU 
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
                                                    : 0ULL)) 
                                              >> 0x20U)) 
                                     << 0x10U)));
            __Vtemp1256[6U] = ((0x7ffU & ((IData)((
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
                                                      : 0ULL)) 
                                                   >> 0x20U)) 
                                          >> 0x10U)) 
                               | ((0xf800U & ((IData)(
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
                                  | ((IData)((((QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addr)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst)))) 
                                     << 0x10U)));
            __Vtemp1256[7U] = ((0x7ffU & ((IData)((
                                                   ((QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addr)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst)))) 
                                          >> 0x10U)) 
                               | ((0xf800U & ((IData)(
                                                      (((QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addr)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst)))) 
                                              >> 0x10U)) 
                                  | ((IData)(((((QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addr)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                              >> 0x20U)) 
                                     << 0x10U)));
            __Vtemp1258[0U] = (IData)(vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding);
            __Vtemp1258[1U] = (IData)((vlSelf->my_cpu__DOT__ID__DOT__Inst_Src1_forwarding 
                                       >> 0x20U));
            __Vtemp1258[2U] = (IData)(vlSelf->my_cpu__DOT__ID__DOT__Inst_Src2_forwarding);
            __Vtemp1258[3U] = (IData)((vlSelf->my_cpu__DOT__ID__DOT__Inst_Src2_forwarding 
                                       >> 0x20U));
            __Vtemp1258[4U] = ((((IData)((((0x6fU == 
                                            (0x7fU 
                                             & vlSelf->my_cpu__DOT__ID__DOT__inst)) 
                                           | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_jalr))
                                           ? (QData)((IData)(
                                                             ((IData)(4U) 
                                                              + vlSelf->my_cpu__DOT__ID__DOT__inst_addr)))
                                           : (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrs) 
                                               | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrw))
                                               ? vlSelf->my_cpu__DOT__ID__DOT__csr_result
                                               : 0ULL))) 
                                 << 0x10U) | (0xf800U 
                                              & (((IData)(vlSelf->my_cpu__DOT__ID__DOT__IF_we)
                                                   ? 
                                                  (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                   >> 7U)
                                                   : 
                                                  (vlSelf->my_cpu__DOT__ID__DOT__inst 
                                                   >> 7U)) 
                                                 << 0xbU))) 
                               | __Vtemp1255[4U]);
            __Vtemp1258[5U] = __Vtemp1256[5U];
            __Vtemp1258[6U] = __Vtemp1256[6U];
            __Vtemp1258[7U] = __Vtemp1256[7U];
            __Vtemp1258[8U] = ((0x7ffU & ((IData)((
                                                   (((QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_addr)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst))) 
                                                   >> 0x20U)) 
                                          >> 0x10U)) 
                               | (__Vtemp1250[4U] << 0xbU));
            __Vtemp1258[9U] = ((0x1000000U & ((IData)(
                                                      (((IData)(vlSelf->my_cpu__DOT__ID__DOT__mem_arrive_flag)
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
                                  | (__Vtemp1250[4U] 
                                     >> 0x15U)));
            tracep->chgWData(oldp+1862,(__Vtemp1258),313);
            tracep->chgQData(oldp+1872,((((0x6fU == 
                                           (0x7fU & vlSelf->my_cpu__DOT__ID__DOT__inst)) 
                                          | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_jalr))
                                          ? (QData)((IData)(
                                                            ((IData)(4U) 
                                                             + vlSelf->my_cpu__DOT__ID__DOT__inst_addr)))
                                          : (((IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrs) 
                                              | (IData)(vlSelf->my_cpu__DOT__ID__DOT__inst_csrrw))
                                              ? vlSelf->my_cpu__DOT__ID__DOT__csr_result
                                              : 0ULL))),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+1874,(vlSelf->my_cpu__DOT__ID_IF_Bus),33);
            tracep->chgIData(oldp+1876,((IData)(vlSelf->my_cpu__DOT__ID_IF_Bus)),32);
            tracep->chgBit(oldp+1877,((1U & (IData)(
                                                    (vlSelf->my_cpu__DOT__ID_IF_Bus 
                                                     >> 0x20U)))));
            tracep->chgQData(oldp+1878,(vlSelf->my_cpu__DOT__ID__DOT__csr_result),64);
            tracep->chgIData(oldp+1880,(vlSelf->my_cpu__DOT__ID__DOT__inst_addr_next),32);
            tracep->chgBit(oldp+1881,(vlSelf->my_cpu__DOT__ID__DOT__csr__DOT__time_interrupt));
            tracep->chgWData(oldp+1882,(vlSelf->my_cpu__DOT__cache__DOT__ext_in_data),1024);
        }
        tracep->chgBit(oldp+1914,(vlSelf->clk));
        tracep->chgBit(oldp+1915,(vlSelf->rst));
        tracep->chgBit(oldp+1916,(vlSelf->int_time));
        tracep->chgBit(oldp+1917,(vlSelf->inst_read_req));
        tracep->chgIData(oldp+1918,(vlSelf->ext_read_addr),32);
        tracep->chgIData(oldp+1919,(vlSelf->ext_write_addr),32);
        tracep->chgBit(oldp+1920,(vlSelf->ext_write_req));
        tracep->chgBit(oldp+1921,(vlSelf->ext_read_req));
        tracep->chgIData(oldp+1922,(vlSelf->base_ram_addr),32);
        tracep->chgBit(oldp+1923,(vlSelf->inst_ebreak));
        tracep->chgBit(oldp+1924,(vlSelf->we));
        tracep->chgQData(oldp+1925,(vlSelf->data),64);
        tracep->chgCData(oldp+1927,(vlSelf->addr),5);
        tracep->chgQData(oldp+1928,(vlSelf->Inst_Src2_forwarding),64);
        tracep->chgQData(oldp+1930,(vlSelf->Inst_Src1_forwarding),64);
        tracep->chgQData(oldp+1932,(vlSelf->mul_div_result),64);
        tracep->chgQData(oldp+1934,(vlSelf->mmio_serial_data),64);
        tracep->chgQData(oldp+1936,(vlSelf->mmio_rtc_low_data),64);
        tracep->chgQData(oldp+1938,(vlSelf->mmio_rtc_high_data),64);
        tracep->chgQData(oldp+1940,(vlSelf->mmio_vga_ctl_low_data),64);
        tracep->chgQData(oldp+1942,(vlSelf->mmio_vga_ctl_high_data),64);
        tracep->chgQData(oldp+1944,(vlSelf->mmio_write_data),64);
        tracep->chgBit(oldp+1946,(vlSelf->mmio_wen));
        tracep->chgCData(oldp+1947,(vlSelf->mmio_be_n),8);
        tracep->chgBit(oldp+1948,(vlSelf->mmio_serial_en));
        tracep->chgBit(oldp+1949,(vlSelf->mmio_rtc_low_en));
        tracep->chgBit(oldp+1950,(vlSelf->mmio_rtc_high_en));
        tracep->chgBit(oldp+1951,(vlSelf->mmio_vga_ctl_low_en));
        tracep->chgBit(oldp+1952,(vlSelf->mmio_vga_ctl_high_en));
        tracep->chgBit(oldp+1953,(vlSelf->mmio_fb_low_en));
        tracep->chgBit(oldp+1954,(vlSelf->mmio_fb_high_en));
        tracep->chgIData(oldp+1955,(vlSelf->mmio_addr),32);
        tracep->chgBit(oldp+1956,(vlSelf->mul_div_valid));
        tracep->chgBit(oldp+1957,(vlSelf->IF_we));
        tracep->chgCData(oldp+1958,(vlSelf->inst_result_Select),3);
        tracep->chgQData(oldp+1959,(vlSelf->EX_data),64);
        tracep->chgCData(oldp+1961,(vlSelf->EX_addr),5);
        tracep->chgIData(oldp+1962,(vlSelf->inst_addr),32);
        tracep->chgIData(oldp+1963,(vlSelf->ext_ram_addr),32);
        tracep->chgCData(oldp+1964,(vlSelf->ext_ram_be_n),8);
        tracep->chgBit(oldp+1965,(vlSelf->ext_ram_wen));
        tracep->chgQData(oldp+1966,(vlSelf->ext_ram_write_data),64);
        tracep->chgBit(oldp+1968,(vlSelf->valid));
        tracep->chgIData(oldp+1969,(vlSelf->debug_pc),32);
        tracep->chgIData(oldp+1970,(vlSelf->debug_inst_addr),32);
        tracep->chgIData(oldp+1971,(vlSelf->inst),32);
        tracep->chgCData(oldp+1972,(vlSelf->AWID),4);
        tracep->chgIData(oldp+1973,(vlSelf->AWADDR),32);
        tracep->chgCData(oldp+1974,(vlSelf->AWLEN),8);
        tracep->chgCData(oldp+1975,(vlSelf->AWSIZE),3);
        tracep->chgCData(oldp+1976,(vlSelf->AWBURST),2);
        tracep->chgBit(oldp+1977,(vlSelf->AWVALID));
        tracep->chgBit(oldp+1978,(vlSelf->AWREADY));
        tracep->chgQData(oldp+1979,(vlSelf->WDATA),64);
        tracep->chgCData(oldp+1981,(vlSelf->WSTRB),8);
        tracep->chgBit(oldp+1982,(vlSelf->WLAST));
        tracep->chgBit(oldp+1983,(vlSelf->WVALID));
        tracep->chgBit(oldp+1984,(vlSelf->WREADY));
        tracep->chgCData(oldp+1985,(vlSelf->BID),4);
        tracep->chgCData(oldp+1986,(vlSelf->BRESP),2);
        tracep->chgBit(oldp+1987,(vlSelf->BVALID));
        tracep->chgBit(oldp+1988,(vlSelf->BREADY));
        tracep->chgIData(oldp+1989,(vlSelf->ARADDR),32);
        tracep->chgCData(oldp+1990,(vlSelf->ARLEN),8);
        tracep->chgCData(oldp+1991,(vlSelf->ARSIZE),3);
        tracep->chgCData(oldp+1992,(vlSelf->ARBURST),2);
        tracep->chgBit(oldp+1993,(vlSelf->ARVALID));
        tracep->chgBit(oldp+1994,(vlSelf->ARREADY));
        tracep->chgCData(oldp+1995,(vlSelf->RID),4);
        tracep->chgQData(oldp+1996,(vlSelf->RDATA),64);
        tracep->chgCData(oldp+1998,(vlSelf->RRESP),2);
        tracep->chgBit(oldp+1999,(vlSelf->RLAST));
        tracep->chgBit(oldp+2000,(vlSelf->RVALID));
        tracep->chgBit(oldp+2001,(vlSelf->RREADY));
        tracep->chgCData(oldp+2002,(vlSelf->ARID),4);
        tracep->chgIData(oldp+2003,(((1U & (IData)(
                                                   (vlSelf->my_cpu__DOT__ID_IF_Bus 
                                                    >> 0x20U)))
                                      ? (IData)(vlSelf->my_cpu__DOT__ID_IF_Bus)
                                      : ((IData)(4U) 
                                         + vlSelf->inst_addr))),32);
        tracep->chgQData(oldp+2004,(((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__div_sign_flag)
                                      ? (QData)((IData)(
                                                        ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(vlSelf->Inst_Src1_forwarding)))))
                                      : (QData)((IData)(vlSelf->Inst_Src1_forwarding)))),64);
        tracep->chgQData(oldp+2006,(((IData)(vlSelf->my_cpu__DOT__EX__DOT__mdu__DOT__div__DOT__dived_sign_flag)
                                      ? (QData)((IData)(
                                                        ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(vlSelf->Inst_Src2_forwarding)))))
                                      : (QData)((IData)(vlSelf->Inst_Src2_forwarding)))),64);
        if (((IData)(vlSelf->inst_read_req) & (vlSelf->inst_addr 
                                               == vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_addr))) {
            __Vtemp1263[0U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0U];
            __Vtemp1263[1U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[1U];
            __Vtemp1263[2U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[2U];
            __Vtemp1263[3U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[3U];
            __Vtemp1263[4U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[4U];
            __Vtemp1263[5U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[5U];
            __Vtemp1263[6U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[6U];
            __Vtemp1263[7U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[7U];
            __Vtemp1263[8U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[8U];
            __Vtemp1263[9U] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[9U];
            __Vtemp1263[0xaU] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xaU];
            __Vtemp1263[0xbU] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xbU];
            __Vtemp1263[0xcU] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xcU];
            __Vtemp1263[0xdU] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xdU];
            __Vtemp1263[0xeU] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xeU];
            __Vtemp1263[0xfU] = vlSelf->my_cpu__DOT__cache__DOT__wdata_buffer_data[0xfU];
        } else {
            __Vtemp1263[0U] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0U];
            __Vtemp1263[1U] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[1U];
            __Vtemp1263[2U] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[2U];
            __Vtemp1263[3U] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[3U];
            __Vtemp1263[4U] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[4U];
            __Vtemp1263[5U] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[5U];
            __Vtemp1263[6U] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[6U];
            __Vtemp1263[7U] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[7U];
            __Vtemp1263[8U] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[8U];
            __Vtemp1263[9U] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[9U];
            __Vtemp1263[0xaU] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0xaU];
            __Vtemp1263[0xbU] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0xbU];
            __Vtemp1263[0xcU] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0xcU];
            __Vtemp1263[0xdU] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0xdU];
            __Vtemp1263[0xeU] = vlSelf->my_cpu__DOT__cache__DOT__rdata_buffer_data[0xeU];
            __Vtemp1263[0xfU] = (IData)((vlSelf->RDATA 
                                         >> 0x20U));
        }
        tracep->chgWData(oldp+2008,(__Vtemp1263),512);
        tracep->chgBit(oldp+2024,(((((2U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__AXI_read_target)) 
                                     & (IData)(vlSelf->RVALID)) 
                                    & (IData)(vlSelf->RLAST)) 
                                   & (2U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_state)))));
        tracep->chgBit(oldp+2025,(((((1U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__AXI_read_target)) 
                                     & (IData)(vlSelf->RVALID)) 
                                    & (IData)(vlSelf->RLAST)) 
                                   & (2U == (IData)(vlSelf->my_cpu__DOT__cache__DOT__read_state)))));
        VL_EXTEND_WQ(1024,64, __Vtemp1264, vlSelf->ext_ram_write_data);
        VL_SHIFTL_WWI(1024,1024,10, __Vtemp1265, __Vtemp1264, (IData)(vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__total_shift_in));
        VL_EXTEND_WI(968,8, __Vtemp1266, (0xffU & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
                                                                 >> 7U))))));
        __Vtemp1269[0U] = (__Vtemp1265[0U] & (((- (IData)(
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
        __Vtemp1269[1U] = (__Vtemp1265[1U] & ((__Vtemp1266[0U] 
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
        __Vtemp1269[2U] = (__Vtemp1265[2U] & ((__Vtemp1266[0U] 
                                               >> 8U) 
                                              | (__Vtemp1266[1U] 
                                                 << 0x18U)));
        __Vtemp1269[3U] = (__Vtemp1265[3U] & ((__Vtemp1266[1U] 
                                               >> 8U) 
                                              | (__Vtemp1266[2U] 
                                                 << 0x18U)));
        __Vtemp1269[4U] = (__Vtemp1265[4U] & ((__Vtemp1266[2U] 
                                               >> 8U) 
                                              | (__Vtemp1266[3U] 
                                                 << 0x18U)));
        __Vtemp1269[5U] = (__Vtemp1265[5U] & ((__Vtemp1266[3U] 
                                               >> 8U) 
                                              | (__Vtemp1266[4U] 
                                                 << 0x18U)));
        __Vtemp1269[6U] = (__Vtemp1265[6U] & ((__Vtemp1266[4U] 
                                               >> 8U) 
                                              | (__Vtemp1266[5U] 
                                                 << 0x18U)));
        __Vtemp1269[7U] = (__Vtemp1265[7U] & ((__Vtemp1266[5U] 
                                               >> 8U) 
                                              | (__Vtemp1266[6U] 
                                                 << 0x18U)));
        __Vtemp1269[8U] = (__Vtemp1265[8U] & ((__Vtemp1266[6U] 
                                               >> 8U) 
                                              | (__Vtemp1266[7U] 
                                                 << 0x18U)));
        __Vtemp1269[9U] = (__Vtemp1265[9U] & ((__Vtemp1266[7U] 
                                               >> 8U) 
                                              | (__Vtemp1266[8U] 
                                                 << 0x18U)));
        __Vtemp1269[0xaU] = (__Vtemp1265[0xaU] & ((
                                                   __Vtemp1266[8U] 
                                                   >> 8U) 
                                                  | (__Vtemp1266[9U] 
                                                     << 0x18U)));
        __Vtemp1269[0xbU] = (__Vtemp1265[0xbU] & ((
                                                   __Vtemp1266[9U] 
                                                   >> 8U) 
                                                  | (__Vtemp1266[0xaU] 
                                                     << 0x18U)));
        __Vtemp1269[0xcU] = (__Vtemp1265[0xcU] & ((
                                                   __Vtemp1266[0xaU] 
                                                   >> 8U) 
                                                  | (__Vtemp1266[0xbU] 
                                                     << 0x18U)));
        __Vtemp1269[0xdU] = (__Vtemp1265[0xdU] & ((
                                                   __Vtemp1266[0xbU] 
                                                   >> 8U) 
                                                  | (__Vtemp1266[0xcU] 
                                                     << 0x18U)));
        __Vtemp1269[0xeU] = (__Vtemp1265[0xeU] & ((
                                                   __Vtemp1266[0xcU] 
                                                   >> 8U) 
                                                  | (__Vtemp1266[0xdU] 
                                                     << 0x18U)));
        __Vtemp1269[0xfU] = (__Vtemp1265[0xfU] & ((
                                                   __Vtemp1266[0xdU] 
                                                   >> 8U) 
                                                  | (__Vtemp1266[0xeU] 
                                                     << 0x18U)));
        __Vtemp1269[0x10U] = (__Vtemp1265[0x10U] & 
                              ((__Vtemp1266[0xeU] >> 8U) 
                               | (__Vtemp1266[0xfU] 
                                  << 0x18U)));
        __Vtemp1269[0x11U] = (__Vtemp1265[0x11U] & 
                              ((__Vtemp1266[0xfU] >> 8U) 
                               | (__Vtemp1266[0x10U] 
                                  << 0x18U)));
        __Vtemp1269[0x12U] = (__Vtemp1265[0x12U] & 
                              ((__Vtemp1266[0x10U] 
                                >> 8U) | (__Vtemp1266[0x11U] 
                                          << 0x18U)));
        __Vtemp1269[0x13U] = (__Vtemp1265[0x13U] & 
                              ((__Vtemp1266[0x11U] 
                                >> 8U) | (__Vtemp1266[0x12U] 
                                          << 0x18U)));
        __Vtemp1269[0x14U] = (__Vtemp1265[0x14U] & 
                              ((__Vtemp1266[0x12U] 
                                >> 8U) | (__Vtemp1266[0x13U] 
                                          << 0x18U)));
        __Vtemp1269[0x15U] = (__Vtemp1265[0x15U] & 
                              ((__Vtemp1266[0x13U] 
                                >> 8U) | (__Vtemp1266[0x14U] 
                                          << 0x18U)));
        __Vtemp1269[0x16U] = (__Vtemp1265[0x16U] & 
                              ((__Vtemp1266[0x14U] 
                                >> 8U) | (__Vtemp1266[0x15U] 
                                          << 0x18U)));
        __Vtemp1269[0x17U] = (__Vtemp1265[0x17U] & 
                              ((__Vtemp1266[0x15U] 
                                >> 8U) | (__Vtemp1266[0x16U] 
                                          << 0x18U)));
        __Vtemp1269[0x18U] = (__Vtemp1265[0x18U] & 
                              ((__Vtemp1266[0x16U] 
                                >> 8U) | (__Vtemp1266[0x17U] 
                                          << 0x18U)));
        __Vtemp1269[0x19U] = (__Vtemp1265[0x19U] & 
                              ((__Vtemp1266[0x17U] 
                                >> 8U) | (__Vtemp1266[0x18U] 
                                          << 0x18U)));
        __Vtemp1269[0x1aU] = (__Vtemp1265[0x1aU] & 
                              ((__Vtemp1266[0x18U] 
                                >> 8U) | (__Vtemp1266[0x19U] 
                                          << 0x18U)));
        __Vtemp1269[0x1bU] = (__Vtemp1265[0x1bU] & 
                              ((__Vtemp1266[0x19U] 
                                >> 8U) | (__Vtemp1266[0x1aU] 
                                          << 0x18U)));
        __Vtemp1269[0x1cU] = (__Vtemp1265[0x1cU] & 
                              ((__Vtemp1266[0x1aU] 
                                >> 8U) | (__Vtemp1266[0x1bU] 
                                          << 0x18U)));
        __Vtemp1269[0x1dU] = (__Vtemp1265[0x1dU] & 
                              ((__Vtemp1266[0x1bU] 
                                >> 8U) | (__Vtemp1266[0x1cU] 
                                          << 0x18U)));
        __Vtemp1269[0x1eU] = (__Vtemp1265[0x1eU] & 
                              ((__Vtemp1266[0x1cU] 
                                >> 8U) | (__Vtemp1266[0x1dU] 
                                          << 0x18U)));
        __Vtemp1269[0x1fU] = (__Vtemp1265[0x1fU] & 
                              ((__Vtemp1266[0x1dU] 
                                >> 8U) | (__Vtemp1266[0x1eU] 
                                          << 0x18U)));
        VL_SHIFTL_WWI(1024,1024,10, __Vtemp1270, __Vtemp1269, 
                      (0x3c0U & (vlSelf->ext_ram_addr 
                                 << 3U)));
        tracep->chgWData(oldp+2026,(__Vtemp1270),1024);
        VL_EXTEND_WI(992,32, __Vtemp1271, (((- (IData)(
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
        __Vtemp1272[0U] = (((- (IData)((1U & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
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
        __Vtemp1272[1U] = __Vtemp1271[0U];
        __Vtemp1272[2U] = __Vtemp1271[1U];
        __Vtemp1272[3U] = __Vtemp1271[2U];
        __Vtemp1272[4U] = __Vtemp1271[3U];
        __Vtemp1272[5U] = __Vtemp1271[4U];
        __Vtemp1272[6U] = __Vtemp1271[5U];
        __Vtemp1272[7U] = __Vtemp1271[6U];
        __Vtemp1272[8U] = __Vtemp1271[7U];
        __Vtemp1272[9U] = __Vtemp1271[8U];
        __Vtemp1272[0xaU] = __Vtemp1271[9U];
        __Vtemp1272[0xbU] = __Vtemp1271[0xaU];
        __Vtemp1272[0xcU] = __Vtemp1271[0xbU];
        __Vtemp1272[0xdU] = __Vtemp1271[0xcU];
        __Vtemp1272[0xeU] = __Vtemp1271[0xdU];
        __Vtemp1272[0xfU] = __Vtemp1271[0xeU];
        __Vtemp1272[0x10U] = __Vtemp1271[0xfU];
        __Vtemp1272[0x11U] = __Vtemp1271[0x10U];
        __Vtemp1272[0x12U] = __Vtemp1271[0x11U];
        __Vtemp1272[0x13U] = __Vtemp1271[0x12U];
        __Vtemp1272[0x14U] = __Vtemp1271[0x13U];
        __Vtemp1272[0x15U] = __Vtemp1271[0x14U];
        __Vtemp1272[0x16U] = __Vtemp1271[0x15U];
        __Vtemp1272[0x17U] = __Vtemp1271[0x16U];
        __Vtemp1272[0x18U] = __Vtemp1271[0x17U];
        __Vtemp1272[0x19U] = __Vtemp1271[0x18U];
        __Vtemp1272[0x1aU] = __Vtemp1271[0x19U];
        __Vtemp1272[0x1bU] = __Vtemp1271[0x1aU];
        __Vtemp1272[0x1cU] = __Vtemp1271[0x1bU];
        __Vtemp1272[0x1dU] = __Vtemp1271[0x1cU];
        __Vtemp1272[0x1eU] = __Vtemp1271[0x1dU];
        __Vtemp1272[0x1fU] = __Vtemp1271[0x1eU];
        VL_SHIFTL_WWI(1024,1024,10, __Vtemp1273, __Vtemp1272, 
                      (0x3c0U & (vlSelf->ext_ram_addr 
                                 << 3U)));
        __Vtemp1275[0U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0U] 
                           & (~ __Vtemp1273[0U]));
        __Vtemp1275[1U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[1U] 
                           & (~ __Vtemp1273[1U]));
        __Vtemp1275[2U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[2U] 
                           & (~ __Vtemp1273[2U]));
        __Vtemp1275[3U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[3U] 
                           & (~ __Vtemp1273[3U]));
        __Vtemp1275[4U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[4U] 
                           & (~ __Vtemp1273[4U]));
        __Vtemp1275[5U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[5U] 
                           & (~ __Vtemp1273[5U]));
        __Vtemp1275[6U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[6U] 
                           & (~ __Vtemp1273[6U]));
        __Vtemp1275[7U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[7U] 
                           & (~ __Vtemp1273[7U]));
        __Vtemp1275[8U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[8U] 
                           & (~ __Vtemp1273[8U]));
        __Vtemp1275[9U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[9U] 
                           & (~ __Vtemp1273[9U]));
        __Vtemp1275[0xaU] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xaU] 
                             & (~ __Vtemp1273[0xaU]));
        __Vtemp1275[0xbU] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xbU] 
                             & (~ __Vtemp1273[0xbU]));
        __Vtemp1275[0xcU] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xcU] 
                             & (~ __Vtemp1273[0xcU]));
        __Vtemp1275[0xdU] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xdU] 
                             & (~ __Vtemp1273[0xdU]));
        __Vtemp1275[0xeU] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xeU] 
                             & (~ __Vtemp1273[0xeU]));
        __Vtemp1275[0xfU] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0xfU] 
                             & (~ __Vtemp1273[0xfU]));
        __Vtemp1275[0x10U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x10U] 
                              & (~ __Vtemp1273[0x10U]));
        __Vtemp1275[0x11U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x11U] 
                              & (~ __Vtemp1273[0x11U]));
        __Vtemp1275[0x12U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x12U] 
                              & (~ __Vtemp1273[0x12U]));
        __Vtemp1275[0x13U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x13U] 
                              & (~ __Vtemp1273[0x13U]));
        __Vtemp1275[0x14U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x14U] 
                              & (~ __Vtemp1273[0x14U]));
        __Vtemp1275[0x15U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x15U] 
                              & (~ __Vtemp1273[0x15U]));
        __Vtemp1275[0x16U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x16U] 
                              & (~ __Vtemp1273[0x16U]));
        __Vtemp1275[0x17U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x17U] 
                              & (~ __Vtemp1273[0x17U]));
        __Vtemp1275[0x18U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x18U] 
                              & (~ __Vtemp1273[0x18U]));
        __Vtemp1275[0x19U] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x19U] 
                              & (~ __Vtemp1273[0x19U]));
        __Vtemp1275[0x1aU] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1aU] 
                              & (~ __Vtemp1273[0x1aU]));
        __Vtemp1275[0x1bU] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1bU] 
                              & (~ __Vtemp1273[0x1bU]));
        __Vtemp1275[0x1cU] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1cU] 
                              & (~ __Vtemp1273[0x1cU]));
        __Vtemp1275[0x1dU] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1dU] 
                              & (~ __Vtemp1273[0x1dU]));
        __Vtemp1275[0x1eU] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1eU] 
                              & (~ __Vtemp1273[0x1eU]));
        __Vtemp1275[0x1fU] = (vlSelf->my_cpu__DOT__cache__DOT__ext_in_data[0x1fU] 
                              & (~ __Vtemp1273[0x1fU]));
        tracep->chgWData(oldp+2058,(__Vtemp1275),1024);
        VL_EXTEND_WI(992,32, __Vtemp1277, (((- (IData)(
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
        __Vtemp1278[0U] = (((- (IData)((1U & ((IData)(vlSelf->my_cpu__DOT__dcache_be_n) 
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
        __Vtemp1278[1U] = __Vtemp1277[0U];
        __Vtemp1278[2U] = __Vtemp1277[1U];
        __Vtemp1278[3U] = __Vtemp1277[2U];
        __Vtemp1278[4U] = __Vtemp1277[3U];
        __Vtemp1278[5U] = __Vtemp1277[4U];
        __Vtemp1278[6U] = __Vtemp1277[5U];
        __Vtemp1278[7U] = __Vtemp1277[6U];
        __Vtemp1278[8U] = __Vtemp1277[7U];
        __Vtemp1278[9U] = __Vtemp1277[8U];
        __Vtemp1278[0xaU] = __Vtemp1277[9U];
        __Vtemp1278[0xbU] = __Vtemp1277[0xaU];
        __Vtemp1278[0xcU] = __Vtemp1277[0xbU];
        __Vtemp1278[0xdU] = __Vtemp1277[0xcU];
        __Vtemp1278[0xeU] = __Vtemp1277[0xdU];
        __Vtemp1278[0xfU] = __Vtemp1277[0xeU];
        __Vtemp1278[0x10U] = __Vtemp1277[0xfU];
        __Vtemp1278[0x11U] = __Vtemp1277[0x10U];
        __Vtemp1278[0x12U] = __Vtemp1277[0x11U];
        __Vtemp1278[0x13U] = __Vtemp1277[0x12U];
        __Vtemp1278[0x14U] = __Vtemp1277[0x13U];
        __Vtemp1278[0x15U] = __Vtemp1277[0x14U];
        __Vtemp1278[0x16U] = __Vtemp1277[0x15U];
        __Vtemp1278[0x17U] = __Vtemp1277[0x16U];
        __Vtemp1278[0x18U] = __Vtemp1277[0x17U];
        __Vtemp1278[0x19U] = __Vtemp1277[0x18U];
        __Vtemp1278[0x1aU] = __Vtemp1277[0x19U];
        __Vtemp1278[0x1bU] = __Vtemp1277[0x1aU];
        __Vtemp1278[0x1cU] = __Vtemp1277[0x1bU];
        __Vtemp1278[0x1dU] = __Vtemp1277[0x1cU];
        __Vtemp1278[0x1eU] = __Vtemp1277[0x1dU];
        __Vtemp1278[0x1fU] = __Vtemp1277[0x1eU];
        VL_SHIFTL_WWI(1024,1024,10, __Vtemp1279, __Vtemp1278, 
                      (0x3c0U & (vlSelf->ext_ram_addr 
                                 << 3U)));
        __Vtemp1281[0U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                           [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0U] 
                           & (~ __Vtemp1279[0U]));
        __Vtemp1281[1U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                           [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][1U] 
                           & (~ __Vtemp1279[1U]));
        __Vtemp1281[2U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                           [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][2U] 
                           & (~ __Vtemp1279[2U]));
        __Vtemp1281[3U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                           [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][3U] 
                           & (~ __Vtemp1279[3U]));
        __Vtemp1281[4U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                           [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][4U] 
                           & (~ __Vtemp1279[4U]));
        __Vtemp1281[5U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                           [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][5U] 
                           & (~ __Vtemp1279[5U]));
        __Vtemp1281[6U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                           [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][6U] 
                           & (~ __Vtemp1279[6U]));
        __Vtemp1281[7U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                           [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][7U] 
                           & (~ __Vtemp1279[7U]));
        __Vtemp1281[8U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                           [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][8U] 
                           & (~ __Vtemp1279[8U]));
        __Vtemp1281[9U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                           [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][9U] 
                           & (~ __Vtemp1279[9U]));
        __Vtemp1281[0xaU] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                             [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xaU] 
                             & (~ __Vtemp1279[0xaU]));
        __Vtemp1281[0xbU] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                             [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xbU] 
                             & (~ __Vtemp1279[0xbU]));
        __Vtemp1281[0xcU] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                             [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xcU] 
                             & (~ __Vtemp1279[0xcU]));
        __Vtemp1281[0xdU] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                             [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xdU] 
                             & (~ __Vtemp1279[0xdU]));
        __Vtemp1281[0xeU] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                             [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xeU] 
                             & (~ __Vtemp1279[0xeU]));
        __Vtemp1281[0xfU] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                             [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xfU] 
                             & (~ __Vtemp1279[0xfU]));
        __Vtemp1281[0x10U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x10U] 
                              & (~ __Vtemp1279[0x10U]));
        __Vtemp1281[0x11U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x11U] 
                              & (~ __Vtemp1279[0x11U]));
        __Vtemp1281[0x12U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x12U] 
                              & (~ __Vtemp1279[0x12U]));
        __Vtemp1281[0x13U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x13U] 
                              & (~ __Vtemp1279[0x13U]));
        __Vtemp1281[0x14U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x14U] 
                              & (~ __Vtemp1279[0x14U]));
        __Vtemp1281[0x15U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x15U] 
                              & (~ __Vtemp1279[0x15U]));
        __Vtemp1281[0x16U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x16U] 
                              & (~ __Vtemp1279[0x16U]));
        __Vtemp1281[0x17U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x17U] 
                              & (~ __Vtemp1279[0x17U]));
        __Vtemp1281[0x18U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x18U] 
                              & (~ __Vtemp1279[0x18U]));
        __Vtemp1281[0x19U] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x19U] 
                              & (~ __Vtemp1279[0x19U]));
        __Vtemp1281[0x1aU] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1aU] 
                              & (~ __Vtemp1279[0x1aU]));
        __Vtemp1281[0x1bU] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1bU] 
                              & (~ __Vtemp1279[0x1bU]));
        __Vtemp1281[0x1cU] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1cU] 
                              & (~ __Vtemp1279[0x1cU]));
        __Vtemp1281[0x1dU] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1dU] 
                              & (~ __Vtemp1279[0x1dU]));
        __Vtemp1281[0x1eU] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1eU] 
                              & (~ __Vtemp1279[0x1eU]));
        __Vtemp1281[0x1fU] = (vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
                              [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1fU] 
                              & (~ __Vtemp1279[0x1fU]));
        tracep->chgWData(oldp+2090,(__Vtemp1281),1024);
        tracep->chgSData(oldp+2122,((0x3c0U & (vlSelf->ext_ram_addr 
                                               << 3U))),10);
        tracep->chgQData(oldp+2123,((vlSelf->RDATA 
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
        __Vtemp1282[0U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0U];
        __Vtemp1282[1U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][1U];
        __Vtemp1282[2U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][2U];
        __Vtemp1282[3U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][3U];
        __Vtemp1282[4U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][4U];
        __Vtemp1282[5U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][5U];
        __Vtemp1282[6U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][6U];
        __Vtemp1282[7U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][7U];
        __Vtemp1282[8U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][8U];
        __Vtemp1282[9U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][9U];
        __Vtemp1282[0xaU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xaU];
        __Vtemp1282[0xbU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xbU];
        __Vtemp1282[0xcU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xcU];
        __Vtemp1282[0xdU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xdU];
        __Vtemp1282[0xeU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xeU];
        __Vtemp1282[0xfU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0xfU];
        __Vtemp1282[0x10U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x10U];
        __Vtemp1282[0x11U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x11U];
        __Vtemp1282[0x12U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x12U];
        __Vtemp1282[0x13U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x13U];
        __Vtemp1282[0x14U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x14U];
        __Vtemp1282[0x15U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x15U];
        __Vtemp1282[0x16U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x16U];
        __Vtemp1282[0x17U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x17U];
        __Vtemp1282[0x18U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x18U];
        __Vtemp1282[0x19U] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x19U];
        __Vtemp1282[0x1aU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1aU];
        __Vtemp1282[0x1bU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1bU];
        __Vtemp1282[0x1cU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1cU];
        __Vtemp1282[0x1dU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1dU];
        __Vtemp1282[0x1eU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1eU];
        __Vtemp1282[0x1fU] = vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__ext_store
            [vlSelf->my_cpu__DOT__cache__DOT__Dcache__DOT__hit_index][0x1fU];
        tracep->chgQData(oldp+2125,(((((QData)((IData)(
                                                       __Vtemp1282[
                                                       (((IData)(0x3fU) 
                                                         + 
                                                         (0x3c0U 
                                                          & (vlSelf->ext_ram_addr 
                                                             << 3U))) 
                                                        >> 5U)])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vtemp1282[
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
    }
}

void Vmy_cpu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vmy_cpu___024root* const __restrict vlSelf = static_cast<Vmy_cpu___024root*>(voidSelf);
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
