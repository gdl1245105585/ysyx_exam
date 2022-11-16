// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmy_cpu.h for the primary calling header

#ifndef VERILATED_VMY_CPU___024UNIT_H_
#define VERILATED_VMY_CPU___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vmy_cpu__Syms;
class Vmy_cpu_VerilatedVcd;


//----------

VL_MODULE(Vmy_cpu___024unit) {
  public:

    // INTERNAL VARIABLES
    Vmy_cpu__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmy_cpu___024unit);  ///< Copying not allowed
  public:
    Vmy_cpu___024unit(const char* name);
    ~Vmy_cpu___024unit();

    // INTERNAL METHODS
    void __Vconfigure(Vmy_cpu__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
