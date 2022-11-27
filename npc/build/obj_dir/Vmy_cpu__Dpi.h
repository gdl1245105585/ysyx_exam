// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/guodl/Desktop/ysyx_exam/npc/vsrc/regfile.v:2:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/guodl/Desktop/ysyx_exam/npc/vsrc/ram.v:1:30
    extern void set_ram_ptr(const svOpenArrayHandle a);
    // DPI import at /home/guodl/Desktop/ysyx_exam/npc/vsrc/mmio.v:143:30
    extern void set_vmem_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif
