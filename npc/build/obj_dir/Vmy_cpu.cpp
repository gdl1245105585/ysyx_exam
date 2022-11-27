// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmy_cpu.h"
#include "Vmy_cpu__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vmy_cpu::Vmy_cpu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vmy_cpu__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , int_time{vlSymsp->TOP.int_time}
    , inst_read_req{vlSymsp->TOP.inst_read_req}
    , ext_read_addr{vlSymsp->TOP.ext_read_addr}
    , ext_write_addr{vlSymsp->TOP.ext_write_addr}
    , ext_write_req{vlSymsp->TOP.ext_write_req}
    , ext_read_req{vlSymsp->TOP.ext_read_req}
    , base_ram_addr{vlSymsp->TOP.base_ram_addr}
    , inst_ebreak{vlSymsp->TOP.inst_ebreak}
    , we{vlSymsp->TOP.we}
    , data{vlSymsp->TOP.data}
    , addr{vlSymsp->TOP.addr}
    , Inst_Src2_forwarding{vlSymsp->TOP.Inst_Src2_forwarding}
    , Inst_Src1_forwarding{vlSymsp->TOP.Inst_Src1_forwarding}
    , mul_div_result{vlSymsp->TOP.mul_div_result}
    , mmio_serial_data{vlSymsp->TOP.mmio_serial_data}
    , mmio_rtc_low_data{vlSymsp->TOP.mmio_rtc_low_data}
    , mmio_rtc_high_data{vlSymsp->TOP.mmio_rtc_high_data}
    , mmio_vga_ctl_low_data{vlSymsp->TOP.mmio_vga_ctl_low_data}
    , mmio_vga_ctl_high_data{vlSymsp->TOP.mmio_vga_ctl_high_data}
    , mmio_write_data{vlSymsp->TOP.mmio_write_data}
    , mmio_wen{vlSymsp->TOP.mmio_wen}
    , mmio_be_n{vlSymsp->TOP.mmio_be_n}
    , mmio_serial_en{vlSymsp->TOP.mmio_serial_en}
    , mmio_rtc_low_en{vlSymsp->TOP.mmio_rtc_low_en}
    , mmio_rtc_high_en{vlSymsp->TOP.mmio_rtc_high_en}
    , mmio_vga_ctl_low_en{vlSymsp->TOP.mmio_vga_ctl_low_en}
    , mmio_vga_ctl_high_en{vlSymsp->TOP.mmio_vga_ctl_high_en}
    , mmio_fb_low_en{vlSymsp->TOP.mmio_fb_low_en}
    , mmio_fb_high_en{vlSymsp->TOP.mmio_fb_high_en}
    , mmio_addr{vlSymsp->TOP.mmio_addr}
    , mul_div_valid{vlSymsp->TOP.mul_div_valid}
    , IF_we{vlSymsp->TOP.IF_we}
    , inst_result_Select{vlSymsp->TOP.inst_result_Select}
    , EX_data{vlSymsp->TOP.EX_data}
    , EX_addr{vlSymsp->TOP.EX_addr}
    , inst_addr{vlSymsp->TOP.inst_addr}
    , ext_ram_addr{vlSymsp->TOP.ext_ram_addr}
    , ext_ram_be_n{vlSymsp->TOP.ext_ram_be_n}
    , ext_ram_wen{vlSymsp->TOP.ext_ram_wen}
    , ext_ram_write_data{vlSymsp->TOP.ext_ram_write_data}
    , valid{vlSymsp->TOP.valid}
    , debug_pc{vlSymsp->TOP.debug_pc}
    , debug_inst_addr{vlSymsp->TOP.debug_inst_addr}
    , inst{vlSymsp->TOP.inst}
    , AWID{vlSymsp->TOP.AWID}
    , AWADDR{vlSymsp->TOP.AWADDR}
    , AWLEN{vlSymsp->TOP.AWLEN}
    , AWSIZE{vlSymsp->TOP.AWSIZE}
    , AWBURST{vlSymsp->TOP.AWBURST}
    , AWVALID{vlSymsp->TOP.AWVALID}
    , AWREADY{vlSymsp->TOP.AWREADY}
    , WDATA{vlSymsp->TOP.WDATA}
    , WSTRB{vlSymsp->TOP.WSTRB}
    , WLAST{vlSymsp->TOP.WLAST}
    , WVALID{vlSymsp->TOP.WVALID}
    , WREADY{vlSymsp->TOP.WREADY}
    , BID{vlSymsp->TOP.BID}
    , BRESP{vlSymsp->TOP.BRESP}
    , BVALID{vlSymsp->TOP.BVALID}
    , BREADY{vlSymsp->TOP.BREADY}
    , ARADDR{vlSymsp->TOP.ARADDR}
    , ARLEN{vlSymsp->TOP.ARLEN}
    , ARSIZE{vlSymsp->TOP.ARSIZE}
    , ARBURST{vlSymsp->TOP.ARBURST}
    , ARVALID{vlSymsp->TOP.ARVALID}
    , ARREADY{vlSymsp->TOP.ARREADY}
    , RID{vlSymsp->TOP.RID}
    , RDATA{vlSymsp->TOP.RDATA}
    , RRESP{vlSymsp->TOP.RRESP}
    , RLAST{vlSymsp->TOP.RLAST}
    , RVALID{vlSymsp->TOP.RVALID}
    , RREADY{vlSymsp->TOP.RREADY}
    , ARID{vlSymsp->TOP.ARID}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
}

Vmy_cpu::Vmy_cpu(const char* _vcname__)
    : Vmy_cpu(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vmy_cpu::~Vmy_cpu() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vmy_cpu___024root___eval_initial(Vmy_cpu___024root* vlSelf);
void Vmy_cpu___024root___eval_settle(Vmy_cpu___024root* vlSelf);
void Vmy_cpu___024root___eval(Vmy_cpu___024root* vlSelf);
QData Vmy_cpu___024root___change_request(Vmy_cpu___024root* vlSelf);
#ifdef VL_DEBUG
void Vmy_cpu___024root___eval_debug_assertions(Vmy_cpu___024root* vlSelf);
#endif  // VL_DEBUG
void Vmy_cpu___024root___final(Vmy_cpu___024root* vlSelf);

static void _eval_initial_loop(Vmy_cpu__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vmy_cpu___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vmy_cpu___024root___eval_settle(&(vlSymsp->TOP));
        Vmy_cpu___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vmy_cpu___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/guodl/Desktop/ysyx_exam/npc/vsrc/my_cpu.v", 4, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vmy_cpu___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vmy_cpu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmy_cpu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmy_cpu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vmy_cpu___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vmy_cpu___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/guodl/Desktop/ysyx_exam/npc/vsrc/my_cpu.v", 4, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vmy_cpu___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vmy_cpu::final() {
    Vmy_cpu___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vmy_cpu::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vmy_cpu::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vmy_cpu___024root__traceInitTop(Vmy_cpu___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmy_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmy_cpu___024root*>(voidSelf);
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vmy_cpu___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vmy_cpu___024root__traceRegister(Vmy_cpu___024root* vlSelf, VerilatedVcd* tracep);

void Vmy_cpu::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vmy_cpu___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
