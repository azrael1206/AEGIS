// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VBriey_H_
#define _VBriey_H_

#include "verilated_heavy.h"
#include "VBriey__Dpi.h"

class VBriey__Syms;
class VBriey_Briey;

//----------

VL_MODULE(VBriey) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    VBriey_Briey*      	Briey;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint  all: 
    VL_IN8(io_axiClk,0,0);
    VL_IN8(io_jtag_tck,0,0);
    VL_IN8(io_asyncReset,0,0);
    VL_IN8(io_vgaClk,0,0);
    VL_IN8(io_jtag_tms,0,0);
    VL_IN8(io_jtag_tdi,0,0);
    VL_OUT8(io_jtag_tdo,0,0);
    VL_OUT8(io_sdram_BA,1,0);
    VL_OUT8(io_sdram_DQ_writeEnable,0,0);
    VL_OUT8(io_sdram_DQM,1,0);
    VL_OUT8(io_sdram_CASn,0,0);
    VL_OUT8(io_sdram_CKE,0,0);
    VL_OUT8(io_sdram_CSn,0,0);
    VL_OUT8(io_sdram_RASn,0,0);
    VL_OUT8(io_sdram_WEn,0,0);
    VL_OUT8(io_uart_txd,0,0);
    VL_IN8(io_uart_rxd,0,0);
    VL_OUT8(io_vga_hSync,0,0);
    VL_OUT8(io_vga_vSync,0,0);
    VL_OUT8(io_vga_rgb_0,4,0);
    VL_OUT8(io_vga_rgb_1,5,0);
    VL_OUT8(io_vga_rgb_2,4,0);
    VL_OUT8(io_vga_colorEn,0,0);
    VL_OUT8(io_vga_videoClock,0,0);
    VL_IN8(io_timerExternal_clear,0,0);
    VL_IN8(io_timerExternal_tick,0,0);
    VL_IN8(io_coreInterrupt,0,0);
    VL_OUT16(io_sdram_ADDR,12,0);
    VL_IN16(io_sdram_DQ_read,15,0);
    VL_OUT16(io_sdram_DQ_write,15,0);
    VL_IN(io_gpioA_read,31,0);
    VL_OUT(io_gpioA_write,31,0);
    VL_OUT(io_gpioA_writeEnable,31,0);
    VL_IN(io_gpioB_read,31,0);
    VL_OUT(io_gpioB_write,31,0);
    VL_OUT(io_gpioB_writeEnable,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 
    VL_SIG8(__VinpClk__TOP__Briey____PVT__resetCtrl_systemReset,0,0);
    VL_SIG8(__VinpClk__TOP__Briey____PVT__resetCtrl_axiReset,0,0);
    VL_SIG8(__Vclklast__TOP__io_axiClk,0,0);
    VL_SIG8(__Vclklast__TOP__io_jtag_tck,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__Briey____PVT__resetCtrl_systemReset,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__Briey____PVT__resetCtrl_axiReset,0,0);
    VL_SIG8(__Vchglast__TOP__Briey__resetCtrl_systemReset,0,0);
    VL_SIG8(__Vchglast__TOP__Briey__resetCtrl_axiReset,0,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VBriey__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VBriey);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VBriey(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VBriey();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VBriey__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VBriey__Syms* symsp, bool first);
  private:
    static QData _change_request(VBriey__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VBriey__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(VBriey__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VBriey__Syms* __restrict vlSymsp);
    static void _eval_settle(VBriey__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VBriey__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VBriey__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VBriey__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VBriey__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VBriey__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
