// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VMY_CPU_H_
#define VERILATED_VMY_CPU_H_  // guard

#include "verilated_heavy.h"
#include "svdpi.h"

class Vmy_cpu__Syms;
class Vmy_cpu___024root;
class VerilatedVcdC;
class Vmy_cpu_VerilatedVcd;
class Vmy_cpu___024unit;


// This class is the main interface to the Verilated model
class Vmy_cpu VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vmy_cpu__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst,0,0);
    VL_IN8(&int_time,0,0);
    VL_OUT8(&inst_read_req,0,0);
    VL_OUT(&ext_read_addr,31,0);
    VL_OUT(&ext_write_addr,31,0);
    VL_OUT8(&ext_write_req,0,0);
    VL_OUT8(&ext_read_req,0,0);
    VL_OUT(&base_ram_addr,31,0);
    VL_OUT8(&inst_ebreak,0,0);
    VL_OUT8(&we,0,0);
    VL_OUT64(&data,63,0);
    VL_OUT8(&addr,4,0);
    VL_OUT64(&Inst_Src2_forwarding,63,0);
    VL_OUT64(&Inst_Src1_forwarding,63,0);
    VL_OUT64(&mul_div_result,63,0);
    VL_IN64(&mmio_serial_data,63,0);
    VL_IN64(&mmio_rtc_low_data,63,0);
    VL_IN64(&mmio_rtc_high_data,63,0);
    VL_IN64(&mmio_vga_ctl_low_data,63,0);
    VL_IN64(&mmio_vga_ctl_high_data,63,0);
    VL_OUT64(&mmio_write_data,63,0);
    VL_OUT8(&mmio_wen,0,0);
    VL_OUT8(&mmio_be_n,7,0);
    VL_OUT8(&mmio_serial_en,0,0);
    VL_OUT8(&mmio_rtc_low_en,0,0);
    VL_OUT8(&mmio_rtc_high_en,0,0);
    VL_OUT8(&mmio_vga_ctl_low_en,0,0);
    VL_OUT8(&mmio_vga_ctl_high_en,0,0);
    VL_OUT8(&mmio_fb_low_en,0,0);
    VL_OUT8(&mmio_fb_high_en,0,0);
    VL_OUT(&mmio_addr,31,0);
    VL_OUT8(&mul_div_valid,0,0);
    VL_OUT8(&IF_we,0,0);
    VL_OUT8(&inst_result_Select,2,0);
    VL_OUT64(&EX_data,63,0);
    VL_OUT8(&EX_addr,4,0);
    VL_OUT(&inst_addr,31,0);
    VL_OUT(&ext_ram_addr,31,0);
    VL_OUT8(&ext_ram_be_n,7,0);
    VL_OUT8(&ext_ram_wen,0,0);
    VL_OUT64(&ext_ram_write_data,63,0);
    VL_OUT8(&valid,0,0);
    VL_OUT(&debug_pc,31,0);
    VL_OUT(&debug_inst_addr,31,0);
    VL_OUT(&inst,31,0);
    VL_OUT8(&AWID,3,0);
    VL_OUT(&AWADDR,31,0);
    VL_OUT8(&AWLEN,7,0);
    VL_OUT8(&AWSIZE,2,0);
    VL_OUT8(&AWBURST,1,0);
    VL_OUT8(&AWVALID,0,0);
    VL_IN8(&AWREADY,0,0);
    VL_OUT64(&WDATA,63,0);
    VL_OUT8(&WSTRB,7,0);
    VL_OUT8(&WLAST,0,0);
    VL_OUT8(&WVALID,0,0);
    VL_IN8(&WREADY,0,0);
    VL_IN8(&BID,3,0);
    VL_IN8(&BRESP,1,0);
    VL_IN8(&BVALID,0,0);
    VL_OUT8(&BREADY,0,0);
    VL_OUT(&ARADDR,31,0);
    VL_OUT8(&ARLEN,7,0);
    VL_OUT8(&ARSIZE,2,0);
    VL_OUT8(&ARBURST,1,0);
    VL_OUT8(&ARVALID,0,0);
    VL_IN8(&ARREADY,0,0);
    VL_IN8(&RID,3,0);
    VL_IN64(&RDATA,63,0);
    VL_IN8(&RRESP,1,0);
    VL_IN8(&RLAST,0,0);
    VL_IN8(&RVALID,0,0);
    VL_OUT8(&RREADY,0,0);
    VL_OUT8(&ARID,3,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vmy_cpu___024unit* const __PVT____024unit;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vmy_cpu___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vmy_cpu(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vmy_cpu(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vmy_cpu();
  private:
    VL_UNCOPYABLE(Vmy_cpu);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
