// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBriey.h for the primary calling header

#include "VBriey.h"
#include "VBriey__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VBriey) {
    VBriey__Syms* __restrict vlSymsp = __VlSymsp = new VBriey__Syms(this, name());
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(Briey, VBriey_Briey);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VBriey::__Vconfigure(VBriey__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VBriey::~VBriey() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VBriey::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBriey::eval\n"); );
    VBriey__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

void VBriey::_eval_initial_loop(VBriey__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VBriey::_combo__TOP__1(VBriey__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBriey::_combo__TOP__1\n"); );
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_vga_videoClock = vlTOPp->io_vgaClk;
}

void VBriey::_settle__TOP__2(VBriey__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBriey::_settle__TOP__2\n"); );
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_vga_videoClock = vlTOPp->io_vgaClk;
    vlTOPp->io_vga_colorEn = vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__videoOn;
    vlTOPp->io_vga_hSync = vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__hSyncDelay;
    vlTOPp->io_uart_txd = vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext;
    vlTOPp->io_gpioB_writeEnable = vlSymsp->TOP__Briey.__PVT__axi_gpioBCtrl__DOT__io_gpio_writeEnable_driver;
    vlTOPp->io_gpioB_write = vlSymsp->TOP__Briey.__PVT__axi_gpioBCtrl__DOT__io_gpio_write_driver;
    vlTOPp->io_gpioA_writeEnable = vlSymsp->TOP__Briey.__PVT__axi_gpioACtrl__DOT__io_gpio_writeEnable_driver;
    vlTOPp->io_gpioA_write = vlSymsp->TOP__Briey.__PVT__axi_gpioACtrl__DOT__io_gpio_write_driver;
    vlTOPp->io_sdram_WEn = vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_WEn;
    vlTOPp->io_sdram_RASn = vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_RASn;
    vlTOPp->io_sdram_CSn = vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_CSn;
    vlTOPp->io_sdram_CKE = vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_CKE;
    vlTOPp->io_sdram_CASn = vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_CASn;
    vlTOPp->io_sdram_DQM = vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_DQM;
    vlTOPp->io_sdram_DQ_writeEnable = vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_DQ_writeEnable;
    vlTOPp->io_sdram_DQ_write = vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_DQ_write;
    vlTOPp->io_sdram_BA = vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_BA;
    vlTOPp->io_sdram_ADDR = vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_ADDR;
    vlTOPp->io_jtag_tdo = vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__jtag_tap_tdoUnbufferd_regNext;
    vlTOPp->io_vga_vSync = vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__vSyncDelay;
}

void VBriey::_settle__TOP__3(VBriey__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBriey::_settle__TOP__3\n"); );
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_vga_rgb_2 = ((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__vga_io_vga_videoOn)
			     ? ((4U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__buffer_2___DOT___zz_5_))
				 ? 0x1fU : 0U) : 0U);
    vlTOPp->io_vga_rgb_1 = ((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__vga_io_vga_videoOn)
			     ? ((2U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__buffer_2___DOT___zz_5_))
				 ? 0x3fU : 0U) : 0U);
    vlTOPp->io_vga_rgb_0 = ((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__vga_io_vga_videoOn)
			     ? ((1U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__buffer_2___DOT___zz_5_))
				 ? 0x1fU : 0U) : 0U);
}

VL_INLINE_OPT void VBriey::_sequent__TOP__4(VBriey__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBriey::_sequent__TOP__4\n"); );
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_sdram_CKE = vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_CKE;
    vlTOPp->io_sdram_CSn = vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_CSn;
    vlTOPp->io_sdram_CASn = vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_CASn;
    vlTOPp->io_sdram_DQ_writeEnable = vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_DQ_writeEnable;
    vlTOPp->io_sdram_WEn = vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_WEn;
    vlTOPp->io_sdram_RASn = vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_RASn;
    vlTOPp->io_sdram_ADDR = vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_ADDR;
    vlTOPp->io_sdram_BA = vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_BA;
    vlTOPp->io_sdram_DQ_write = vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_DQ_write;
    vlTOPp->io_gpioB_write = vlSymsp->TOP__Briey.__PVT__axi_gpioBCtrl__DOT__io_gpio_write_driver;
    vlTOPp->io_gpioA_write = vlSymsp->TOP__Briey.__PVT__axi_gpioACtrl__DOT__io_gpio_write_driver;
    vlTOPp->io_sdram_DQM = vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_DQM;
}

VL_INLINE_OPT void VBriey::_sequent__TOP__5(VBriey__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBriey::_sequent__TOP__5\n"); );
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_jtag_tdo = vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__jtag_tap_tdoUnbufferd_regNext;
}

VL_INLINE_OPT void VBriey::_sequent__TOP__6(VBriey__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBriey::_sequent__TOP__6\n"); );
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_uart_txd = vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext;
    vlTOPp->io_vga_colorEn = vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__videoOn;
    vlTOPp->io_vga_hSync = vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__hSyncDelay;
    vlTOPp->io_gpioB_writeEnable = vlSymsp->TOP__Briey.__PVT__axi_gpioBCtrl__DOT__io_gpio_writeEnable_driver;
    vlTOPp->io_gpioA_writeEnable = vlSymsp->TOP__Briey.__PVT__axi_gpioACtrl__DOT__io_gpio_writeEnable_driver;
    vlTOPp->io_vga_vSync = vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__vSyncDelay;
    vlTOPp->io_vga_rgb_2 = ((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__vga_io_vga_videoOn)
			     ? ((4U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__buffer_2___DOT___zz_5_))
				 ? 0x1fU : 0U) : 0U);
    vlTOPp->io_vga_rgb_1 = ((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__vga_io_vga_videoOn)
			     ? ((2U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__buffer_2___DOT___zz_5_))
				 ? 0x3fU : 0U) : 0U);
    vlTOPp->io_vga_rgb_0 = ((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__vga_io_vga_videoOn)
			     ? ((1U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__buffer_2___DOT___zz_5_))
				 ? 0x1fU : 0U) : 0U);
}

void VBriey::_eval(VBriey__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBriey::_eval\n"); );
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    if (((IData)(vlTOPp->io_axiClk) & (~ (IData)(vlTOPp->__Vclklast__TOP__io_axiClk)))) {
	vlSymsp->TOP__Briey._sequent__TOP__Briey__4(vlSymsp);
	vlSymsp->TOP__Briey__axi_core_cpu._sequent__TOP__Briey__axi_core_cpu__3(vlSymsp);
	vlTOPp->_sequent__TOP__4(vlSymsp);
	vlSymsp->TOP__Briey._sequent__TOP__Briey__5(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->io_jtag_tck)) & (IData)(vlTOPp->__Vclklast__TOP__io_jtag_tck))) {
	vlSymsp->TOP__Briey._sequent__TOP__Briey__6(vlSymsp);
	vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    if (((IData)(vlTOPp->io_jtag_tck) & (~ (IData)(vlTOPp->__Vclklast__TOP__io_jtag_tck)))) {
	vlSymsp->TOP__Briey._sequent__TOP__Briey__7(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Briey____PVT__resetCtrl_systemReset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Briey____PVT__resetCtrl_systemReset))) 
	 | ((IData)(vlTOPp->io_axiClk) & (~ (IData)(vlTOPp->__Vclklast__TOP__io_axiClk))))) {
	vlSymsp->TOP__Briey._sequent__TOP__Briey__8(vlSymsp);
	vlSymsp->TOP__Briey__axi_core_cpu._sequent__TOP__Briey__axi_core_cpu__4(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Briey____PVT__resetCtrl_axiReset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Briey____PVT__resetCtrl_axiReset))) 
	 | ((IData)(vlTOPp->io_axiClk) & (~ (IData)(vlTOPp->__Vclklast__TOP__io_axiClk))))) {
	vlSymsp->TOP__Briey._sequent__TOP__Briey__9(vlSymsp);
	vlSymsp->TOP__Briey__axi_core_cpu._sequent__TOP__Briey__axi_core_cpu__5(vlSymsp);
	vlTOPp->_sequent__TOP__6(vlSymsp);
	vlSymsp->TOP__Briey._sequent__TOP__Briey__10(vlSymsp);
	vlSymsp->TOP__Briey__axi_core_cpu._sequent__TOP__Briey__axi_core_cpu__6(vlSymsp);
    }
    if (((IData)(vlTOPp->io_axiClk) & (~ (IData)(vlTOPp->__Vclklast__TOP__io_axiClk)))) {
	vlSymsp->TOP__Briey._sequent__TOP__Briey__11(vlSymsp);
	vlSymsp->TOP__Briey__axi_core_cpu._sequent__TOP__Briey__axi_core_cpu__7(vlSymsp);
    }
    vlSymsp->TOP__Briey._combo__TOP__Briey__12(vlSymsp);
    if ((((IData)(vlTOPp->__VinpClk__TOP__Briey____PVT__resetCtrl_systemReset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Briey____PVT__resetCtrl_systemReset))) 
	 | ((IData)(vlTOPp->io_axiClk) & (~ (IData)(vlTOPp->__Vclklast__TOP__io_axiClk))))) {
	vlSymsp->TOP__Briey__axi_core_cpu._sequent__TOP__Briey__axi_core_cpu__8(vlSymsp);
	vlSymsp->TOP__Briey._sequent__TOP__Briey__13(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Briey____PVT__resetCtrl_axiReset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Briey____PVT__resetCtrl_axiReset))) 
	 | ((IData)(vlTOPp->io_axiClk) & (~ (IData)(vlTOPp->__Vclklast__TOP__io_axiClk))))) {
	vlSymsp->TOP__Briey._sequent__TOP__Briey__15(vlSymsp);
	vlSymsp->TOP__Briey__axi_core_cpu._sequent__TOP__Briey__axi_core_cpu__9(vlSymsp);
    }
    if (((IData)(vlTOPp->io_jtag_tck) & (~ (IData)(vlTOPp->__Vclklast__TOP__io_jtag_tck)))) {
	vlSymsp->TOP__Briey._sequent__TOP__Briey__16(vlSymsp);
    }
    if (((((IData)(vlTOPp->__VinpClk__TOP__Briey____PVT__resetCtrl_axiReset) 
	   & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Briey____PVT__resetCtrl_axiReset))) 
	  | ((IData)(vlTOPp->__VinpClk__TOP__Briey____PVT__resetCtrl_systemReset) 
	     & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Briey____PVT__resetCtrl_systemReset)))) 
	 | ((IData)(vlTOPp->io_axiClk) & (~ (IData)(vlTOPp->__Vclklast__TOP__io_axiClk))))) {
	vlSymsp->TOP__Briey__axi_core_cpu._multiclk__TOP__Briey__axi_core_cpu__10(vlSymsp);
    }
    if (((IData)(vlTOPp->io_axiClk) & (~ (IData)(vlTOPp->__Vclklast__TOP__io_axiClk)))) {
	vlSymsp->TOP__Briey._sequent__TOP__Briey__17(vlSymsp);
	vlSymsp->TOP__Briey__axi_core_cpu._sequent__TOP__Briey__axi_core_cpu__11(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Briey____PVT__resetCtrl_systemReset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Briey____PVT__resetCtrl_systemReset))) 
	 | ((IData)(vlTOPp->io_axiClk) & (~ (IData)(vlTOPp->__Vclklast__TOP__io_axiClk))))) {
	vlSymsp->TOP__Briey__axi_core_cpu._sequent__TOP__Briey__axi_core_cpu__12(vlSymsp);
	vlSymsp->TOP__Briey._sequent__TOP__Briey__18(vlSymsp);
    }
    if (((IData)(vlTOPp->io_axiClk) & (~ (IData)(vlTOPp->__Vclklast__TOP__io_axiClk)))) {
	vlSymsp->TOP__Briey._sequent__TOP__Briey__19(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Briey____PVT__resetCtrl_systemReset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Briey____PVT__resetCtrl_systemReset))) 
	 | ((IData)(vlTOPp->io_axiClk) & (~ (IData)(vlTOPp->__Vclklast__TOP__io_axiClk))))) {
	vlSymsp->TOP__Briey__axi_core_cpu._sequent__TOP__Briey__axi_core_cpu__13(vlSymsp);
    }
    if (((((IData)(vlTOPp->__VinpClk__TOP__Briey____PVT__resetCtrl_axiReset) 
	   & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Briey____PVT__resetCtrl_axiReset))) 
	  | ((IData)(vlTOPp->__VinpClk__TOP__Briey____PVT__resetCtrl_systemReset) 
	     & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Briey____PVT__resetCtrl_systemReset)))) 
	 | ((IData)(vlTOPp->io_axiClk) & (~ (IData)(vlTOPp->__Vclklast__TOP__io_axiClk))))) {
	vlSymsp->TOP__Briey__axi_core_cpu._multiclk__TOP__Briey__axi_core_cpu__14(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__io_axiClk = vlTOPp->io_axiClk;
    vlTOPp->__Vclklast__TOP__io_jtag_tck = vlTOPp->io_jtag_tck;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__Briey____PVT__resetCtrl_systemReset 
	= vlTOPp->__VinpClk__TOP__Briey____PVT__resetCtrl_systemReset;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__Briey____PVT__resetCtrl_axiReset 
	= vlTOPp->__VinpClk__TOP__Briey____PVT__resetCtrl_axiReset;
    vlTOPp->__VinpClk__TOP__Briey____PVT__resetCtrl_systemReset 
	= vlSymsp->TOP__Briey.__PVT__resetCtrl_systemReset;
    vlTOPp->__VinpClk__TOP__Briey____PVT__resetCtrl_axiReset 
	= vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset;
}

void VBriey::_eval_initial(VBriey__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBriey::_eval_initial\n"); );
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Briey__axi_core_cpu._initial__TOP__Briey__axi_core_cpu__1(vlSymsp);
    vlSymsp->TOP__Briey._initial__TOP__Briey__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__io_axiClk = vlTOPp->io_axiClk;
    vlTOPp->__Vclklast__TOP__io_jtag_tck = vlTOPp->io_jtag_tck;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__Briey____PVT__resetCtrl_systemReset 
	= vlTOPp->__VinpClk__TOP__Briey____PVT__resetCtrl_systemReset;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__Briey____PVT__resetCtrl_axiReset 
	= vlTOPp->__VinpClk__TOP__Briey____PVT__resetCtrl_axiReset;
}

void VBriey::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBriey::final\n"); );
    // Variables
    VBriey__Syms* __restrict vlSymsp = this->__VlSymsp;
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBriey::_eval_settle(VBriey__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBriey::_eval_settle\n"); );
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlSymsp->TOP__Briey._settle__TOP__Briey__2(vlSymsp);
    vlSymsp->TOP__Briey__axi_core_cpu._settle__TOP__Briey__axi_core_cpu__2(vlSymsp);
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlSymsp->TOP__Briey._settle__TOP__Briey__3(vlSymsp);
    vlSymsp->TOP__Briey._settle__TOP__Briey__14(vlSymsp);
}

VL_INLINE_OPT QData VBriey::_change_request(VBriey__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBriey::_change_request\n"); );
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSymsp->TOP__Briey.__PVT__resetCtrl_systemReset ^ vlTOPp->__Vchglast__TOP__Briey__resetCtrl_systemReset)
	 | (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset ^ vlTOPp->__Vchglast__TOP__Briey__resetCtrl_axiReset));
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__Briey.__PVT__resetCtrl_systemReset ^ vlTOPp->__Vchglast__TOP__Briey__resetCtrl_systemReset))) VL_DBG_MSGF("        CHANGE: ../../../../Briey.v:19949: resetCtrl_systemReset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset ^ vlTOPp->__Vchglast__TOP__Briey__resetCtrl_axiReset))) VL_DBG_MSGF("        CHANGE: ../../../../Briey.v:19950: resetCtrl_axiReset\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__Briey__resetCtrl_systemReset 
	= vlSymsp->TOP__Briey.__PVT__resetCtrl_systemReset;
    vlTOPp->__Vchglast__TOP__Briey__resetCtrl_axiReset 
	= vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset;
    return __req;
}

#ifdef VL_DEBUG
void VBriey::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBriey::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((io_asyncReset & 0xfeU))) {
	Verilated::overWidthError("io_asyncReset");}
    if (VL_UNLIKELY((io_axiClk & 0xfeU))) {
	Verilated::overWidthError("io_axiClk");}
    if (VL_UNLIKELY((io_vgaClk & 0xfeU))) {
	Verilated::overWidthError("io_vgaClk");}
    if (VL_UNLIKELY((io_jtag_tms & 0xfeU))) {
	Verilated::overWidthError("io_jtag_tms");}
    if (VL_UNLIKELY((io_jtag_tdi & 0xfeU))) {
	Verilated::overWidthError("io_jtag_tdi");}
    if (VL_UNLIKELY((io_jtag_tck & 0xfeU))) {
	Verilated::overWidthError("io_jtag_tck");}
    if (VL_UNLIKELY((io_uart_rxd & 0xfeU))) {
	Verilated::overWidthError("io_uart_rxd");}
    if (VL_UNLIKELY((io_timerExternal_clear & 0xfeU))) {
	Verilated::overWidthError("io_timerExternal_clear");}
    if (VL_UNLIKELY((io_timerExternal_tick & 0xfeU))) {
	Verilated::overWidthError("io_timerExternal_tick");}
    if (VL_UNLIKELY((io_coreInterrupt & 0xfeU))) {
	Verilated::overWidthError("io_coreInterrupt");}
}
#endif // VL_DEBUG

void VBriey::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBriey::_ctor_var_reset\n"); );
    // Body
    io_asyncReset = VL_RAND_RESET_I(1);
    io_axiClk = VL_RAND_RESET_I(1);
    io_vgaClk = VL_RAND_RESET_I(1);
    io_jtag_tms = VL_RAND_RESET_I(1);
    io_jtag_tdi = VL_RAND_RESET_I(1);
    io_jtag_tdo = VL_RAND_RESET_I(1);
    io_jtag_tck = VL_RAND_RESET_I(1);
    io_sdram_ADDR = VL_RAND_RESET_I(13);
    io_sdram_BA = VL_RAND_RESET_I(2);
    io_sdram_DQ_read = VL_RAND_RESET_I(16);
    io_sdram_DQ_write = VL_RAND_RESET_I(16);
    io_sdram_DQ_writeEnable = VL_RAND_RESET_I(1);
    io_sdram_DQM = VL_RAND_RESET_I(2);
    io_sdram_CASn = VL_RAND_RESET_I(1);
    io_sdram_CKE = VL_RAND_RESET_I(1);
    io_sdram_CSn = VL_RAND_RESET_I(1);
    io_sdram_RASn = VL_RAND_RESET_I(1);
    io_sdram_WEn = VL_RAND_RESET_I(1);
    io_gpioA_read = VL_RAND_RESET_I(32);
    io_gpioA_write = VL_RAND_RESET_I(32);
    io_gpioA_writeEnable = VL_RAND_RESET_I(32);
    io_gpioB_read = VL_RAND_RESET_I(32);
    io_gpioB_write = VL_RAND_RESET_I(32);
    io_gpioB_writeEnable = VL_RAND_RESET_I(32);
    io_uart_txd = VL_RAND_RESET_I(1);
    io_uart_rxd = VL_RAND_RESET_I(1);
    io_vga_hSync = VL_RAND_RESET_I(1);
    io_vga_vSync = VL_RAND_RESET_I(1);
    io_vga_rgb_0 = VL_RAND_RESET_I(5);
    io_vga_rgb_1 = VL_RAND_RESET_I(6);
    io_vga_rgb_2 = VL_RAND_RESET_I(5);
    io_vga_colorEn = VL_RAND_RESET_I(1);
    io_vga_videoClock = VL_RAND_RESET_I(1);
    io_timerExternal_clear = VL_RAND_RESET_I(1);
    io_timerExternal_tick = VL_RAND_RESET_I(1);
    io_coreInterrupt = VL_RAND_RESET_I(1);
    __VinpClk__TOP__Briey____PVT__resetCtrl_systemReset = VL_RAND_RESET_I(1);
    __VinpClk__TOP__Briey____PVT__resetCtrl_axiReset = VL_RAND_RESET_I(1);
    __Vchglast__TOP__Briey__resetCtrl_systemReset = VL_RAND_RESET_I(1);
    __Vchglast__TOP__Briey__resetCtrl_axiReset = VL_RAND_RESET_I(1);
}
