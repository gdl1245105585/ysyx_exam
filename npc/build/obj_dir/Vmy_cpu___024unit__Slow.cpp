// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmy_cpu.h for the primary calling header

#include "Vmy_cpu___024unit.h"
#include "Vmy_cpu__Syms.h"

#include "verilated_dpi.h"

//==========


void Vmy_cpu___024unit___ctor_var_reset(Vmy_cpu___024unit* vlSelf);

Vmy_cpu___024unit::Vmy_cpu___024unit(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vmy_cpu___024unit___ctor_var_reset(this);
}

void Vmy_cpu___024unit::__Vconfigure(Vmy_cpu__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vmy_cpu___024unit::~Vmy_cpu___024unit() {
}

void Vmy_cpu___024unit___ctor_var_reset(Vmy_cpu___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmy_cpu___024unit___ctor_var_reset\n"); );
}
