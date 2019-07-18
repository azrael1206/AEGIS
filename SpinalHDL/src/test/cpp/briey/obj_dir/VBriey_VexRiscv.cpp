// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBriey.h for the primary calling header

#include "VBriey_VexRiscv.h"
#include "VBriey__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VBriey_VexRiscv) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VBriey_VexRiscv::__Vconfigure(VBriey__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VBriey_VexRiscv::~VBriey_VexRiscv() {
}

//--------------------
// Internal Methods

void VBriey_VexRiscv::_initial__TOP__Briey__axi_core_cpu__1(VBriey__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VBriey_VexRiscv::_initial__TOP__Briey__axi_core_cpu__1\n"); );
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at ../../../../Briey.v:16260
    vlSymsp->TOP__Briey__axi_core_cpu.execute_CsrPlugin_inWfi = 0U;
    // INITIAL at ../../../../Briey.v:4108
    vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand14 
	= VL_RAND_RESET_I(1);
    // INITIAL at ../../../../Briey.v:15340
    vlSymsp->TOP__Briey__axi_core_cpu.__Vxrand2 = VL_RAND_RESET_I(4);
    // INITIAL at ../../../../Briey.v:3861
    vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand7 
	= VL_RAND_RESET_I(24);
    // INITIAL at ../../../../Briey.v:3844
    vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand5 
	= VL_RAND_RESET_I(1);
    // INITIAL at ../../../../Briey.v:3804
    vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand2 
	= VL_RAND_RESET_I(6);
    // INITIAL at ../../../../Briey.v:3790
    vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand1 
	= VL_RAND_RESET_I(3);
    // INITIAL at ../../../../Briey.v:4093
    vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand13 
	= VL_RAND_RESET_I(3);
    // INITIAL at ../../../../Briey.v:3854
    vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand6 
	= VL_RAND_RESET_I(1);
    // INITIAL at ../../../../Briey.v:3834
    vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand4 
	= VL_RAND_RESET_I(3);
    // INITIAL at ../../../../Briey.v:4078
    vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand12 
	= VL_RAND_RESET_I(32);
    // INITIAL at ../../../../Briey.v:15433
    vlSymsp->TOP__Briey__axi_core_cpu.__Vxrand3 = VL_RAND_RESET_I(4);
    // INITIAL at ../../../../Briey.v:3929
    vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand11 
	= VL_RAND_RESET_I(4);
    // INITIAL at ../../../../Briey.v:3915
    vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand10 
	= VL_RAND_RESET_I(32);
    // INITIAL at ../../../../Briey.v:3901
    vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand9 
	= VL_RAND_RESET_I(6);
    // INITIAL at ../../../../Briey.v:3824
    vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand3 
	= VL_RAND_RESET_I(1);
    // INITIAL at ../../../../Briey.v:3887
    vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand8 
	= VL_RAND_RESET_I(1);
    // INITIAL at ../../../../Briey.v:15006
    vlSymsp->TOP__Briey__axi_core_cpu.__Vxrand1 = VL_RAND_RESET_I(32);
    // INITIAL at ../../../../Briey.v:16247
    vlSymsp->TOP__Briey__axi_core_cpu.__Vxrand5 = VL_RAND_RESET_I(30);
}

void VBriey_VexRiscv::_settle__TOP__Briey__axi_core_cpu__2(VBriey__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VBriey_VexRiscv::_settle__TOP__Briey__axi_core_cpu__2\n"); );
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp7,95,0,3);
    VL_SIGW(__Vtemp8,95,0,3);
    VL_SIGW(__Vtemp9,95,0,3);
    VL_SIGW(__Vtemp10,95,0,3);
    // Body
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_13_ 
	= (1U & (~ ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
		    >> 3U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_22_ 
	= (3U & VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_waysAllocator))));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_194_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mip_MTIP) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mie_MTIE));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_195_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mip_MSIP) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mie_MSIE));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_196_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mip_MEIP) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mie_MEIE));
    // ALWAYS at ../../../../Briey.v:14988
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_103_ = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_godmode) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_103_ = 1U;
    }
    // ALWAYS at ../../../../Briey.v:16452
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injectionPort_ready = 0U;
    if ((4U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_200_))) {
	if ((1U & (~ ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_200_) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_200_)))) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injectionPort_ready = 1U;
	    }
	}
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_160_ 
	= (((QData)((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_accumulator[0U])) 
	    << 1U) | (QData)((IData)((1U & (IData)(
						   (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_rs1 
						    >> 0x1fU))))));
    // ALWAYS at ../../../../Briey.v:15763
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfffffffeU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
		    >> 0x1fU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfffffffdU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (2U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
		    >> 0x1dU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfffffffbU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (4U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
		    >> 0x1bU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfffffff7U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (8U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
		    >> 0x19U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xffffffefU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x10U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
		       >> 0x17U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xffffffdfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x20U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
		       >> 0x15U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xffffffbfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x40U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
		       >> 0x13U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xffffff7fU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x80U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
		       >> 0x11U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfffffeffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x100U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			>> 0xfU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfffffdffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x200U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			>> 0xdU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfffffbffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x400U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			>> 0xbU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfffff7ffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x800U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			>> 9U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xffffefffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x1000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			 >> 7U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xffffdfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x2000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			 >> 5U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xffffbfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x4000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			 >> 3U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xffff7fffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x8000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			 >> 1U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfffeffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x10000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			  << 1U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfffdffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x20000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			  << 3U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfffbffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x40000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			  << 5U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfff7ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x80000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			  << 7U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xffefffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x100000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			   << 9U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xffdfffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x200000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			   << 0xbU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xffbfffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x400000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			   << 0xdU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xff7fffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x800000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			   << 0xfU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfeffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x1000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			    << 0x11U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfdffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x2000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			    << 0x13U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfbffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x4000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			    << 0x15U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xf7ffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x8000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			    << 0x17U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xefffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x10000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			     << 0x19U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xdfffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x20000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			     << 0x1bU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xbfffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x40000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			     << 0x1dU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0x7fffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x80000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			     << 0x1fU)));
    // ALWAYS at ../../../../Briey.v:15021
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_forceMachineWire = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_godmode) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_forceMachineWire = 1U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_15_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_valid) 
	   & (IData)(vlSymsp->TOP__Briey.__PVT___zz_55_));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid) 
	   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent)));
    // ALWAYS at ../../../../Briey.v:14796
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_haltItself = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_200_) 
		  >> 2U)))) {
	if ((2U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_200_))) {
	    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_200_)))) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_haltItself = 1U;
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:4135
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)
	    ? vlSymsp->TOP__Briey.__PVT___zz_56_ : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_dataReadRsp_0);
    // ALWAYS at ../../../../Briey.v:3467
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_word 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_10_;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_dataBypassValid_regNextWhen) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_word 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_dataBypass_regNextWhen;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_14_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_waysHits) 
	   | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_wr));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_207_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_119_) 
	   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_dataBypassValid_regNextWhen)));
    // ALWAYS at ../../../../Briey.v:15035
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_allowException = 1U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_godmode) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_allowException = 0U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.lastStagePc = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_PC;
    // ALWAYS at ../../../../Briey.v:16228
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_trapCause 
	= vlSymsp->TOP__Briey__axi_core_cpu.CsrPlugin_interrupt_code;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_hadException) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_trapCause 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_14_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending) 
	   & (~ ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid) 
		 | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_117_) 
		    & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit))))));
    // ALWAYS at ../../../../Briey.v:14981
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_incomingInstruction = 0U;
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_117_) 
	 | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_119_))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_incomingInstruction = 1U;
    }
    // ALWAYS at ../../../../Briey.v:15028
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_allowInterrupts = 1U;
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_haltIt) 
	 | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_stepIt))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_allowInterrupts = 0U;
    }
    // ALWAYS at ../../../../Briey.v:4043
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_accessError 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)
	    ? ((IData)(vlSymsp->TOP__Briey.__PVT___zz_55_) 
	       & (0U != (IData)(vlSymsp->TOP__Briey.__PVT___zz_57_)))
	    : ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_waysHits) 
	       & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_tagsReadRsp_0_error)));
    vlSymsp->TOP__Briey__axi_core_cpu.lastStageInstruction 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION;
    vlSymsp->TOP__Briey__axi_core_cpu.lastStageIsValid 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid;
    vlSymsp->TOP__Briey__axi_core_cpu.lastStageRegFileWrite_payload_address 
	= (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION 
		    >> 7U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_224_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_238_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_ENV_CTRL));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MEMORY_ENABLE));
    // ALWAYS at ../../../../Briey.v:15875
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_165_ 
	= ((VL_ULL(0xffffffff) & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_165_) 
	   | ((QData)((IData)(((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_RS1_SIGNED) 
			       & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS1 
				  >> 0x1fU)))) << 0x20U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_165_ 
	= ((VL_ULL(0x100000000) & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_165_) 
	   | (IData)((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS1)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_162_ 
	= ((0x2000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_INSTRUCTION)
	    ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_accumulator[0U]
	    : (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_rs1));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_164_ 
	= (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_DIV) 
	    & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS1 
	       >> 0x1fU)) & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_RS1_SIGNED));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_226_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__BranchPlugin_branchExceptionPort_valid 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid) 
	   & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_BRANCH_DO) 
	      & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_BRANCH_CALC 
		 >> 1U)));
    // ALWAYS at ../../../../Briey.v:15131
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_readyForError = 1U;
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_readyForError = 0U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_blockedBySideEffects 
	= (0U != (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid) 
		   << 1U) | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_247_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_235_ 
	= (0U == (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid) 
		   << 1U) | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_228_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_IS_DIV));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_227_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_223_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_CSR));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_249_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_211_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_MEMORY_ENABLE));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_234_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_DO_EBREAK));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_219_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_MEMORY_MANAGMENT));
    // ALWAYS at ../../../../Briey.v:16210
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_pipelineLiberator_done 
	= ((0U == (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid) 
		    << 2U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid) 
			       << 1U) | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid)))) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4));
    if ((0U != (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack) 
		 << 2U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory) 
			    << 1U) | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute))))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_hadException) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_163_ 
	= ((vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS2 
	    >> 0x1fU) & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_RS2_SIGNED));
    // ALWAYS at ../../../../Briey.v:16066
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0x7ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x80000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xcU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xbffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x40000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xdU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xdffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x20000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xeU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xeffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x10000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xfU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xf7fffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x8000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x10U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xfbfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x4000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x11U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xfdfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x2000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x12U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xfefffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x1000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x13U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xff7ffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x800U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x14U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xffbffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x400U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x15U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xffdffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x200U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x16U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xffeffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x100U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x17U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xfff7fU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x80U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x18U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xfffbfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x40U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x19U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xfffdfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x20U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x1aU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xfffefU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x10U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x1bU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xffff7U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (8U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1cU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xffffbU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (4U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1dU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xffffdU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (2U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1eU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xffffeU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1fU)));
    // ALWAYS at ../../../../Briey.v:16104
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_ 
	= ((0x3ffU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_)) 
	   | (0x400U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x15U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_ 
	= ((0x5ffU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_)) 
	   | (0x200U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x16U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_ 
	= ((0x6ffU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_)) 
	   | (0x100U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x17U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_ 
	= ((0x77fU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_)) 
	   | (0x80U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x18U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_ 
	= ((0x7bfU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_)) 
	   | (0x40U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x19U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_ 
	= ((0x7dfU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_)) 
	   | (0x20U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x1aU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_ 
	= ((0x7efU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_)) 
	   | (0x10U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x1bU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_ 
	= ((0x7f7U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_)) 
	   | (8U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1cU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_ 
	= ((0x7fbU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_)) 
	   | (4U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1dU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_ 
	= ((0x7fdU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_)) 
	   | (2U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1eU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_ 
	= ((0x7feU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_)) 
	   | (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1fU)));
    // ALWAYS at ../../../../Briey.v:16119
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x3ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x40000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xdU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x5ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x20000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xeU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x6ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x10000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xfU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x77fffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x8000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x10U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7bfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x4000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x11U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7dfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x2000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x12U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7efffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x1000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x13U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7f7ffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x800U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x14U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7fbffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x400U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x15U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7fdffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x200U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x16U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7feffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x100U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x17U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7ff7fU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x80U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x18U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7ffbfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x40U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x19U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7ffdfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x20U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x1aU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7ffefU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x10U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x1bU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7fff7U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (8U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1cU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7fffbU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (4U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1dU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7fffdU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (2U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1eU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7fffeU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1fU)));
    // ALWAYS at ../../../../Briey.v:16307
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData = 0U;
    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		  >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
		if ((0x10000000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				  >> 0x1bU)))) {
			if ((0x4000000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffff7ffU 
							  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mip_MEIP) 
							    << 0xbU));
						    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffff7fU 
							  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mip_MTIP) 
							    << 7U));
						    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffff7U 
							  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mip_MSIP) 
							    << 3U));
						}
					    }
					} else {
					    if ((0x200000U 
						 & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
						    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
							= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mtval;
						} else {
						    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
							= 
							((0x7fffffffU 
							  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mcause_interrupt) 
							    << 0x1fU));
						    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffff0U 
							  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData) 
							 | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mcause_exceptionCode));
						}
					    } else {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
						    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
							= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mepc;
						}
					    }
					}
				    }
				}
			    }
			} else {
			    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffff7ffU 
							  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mie_MEIE) 
							    << 0xbU));
						    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffff7fU 
							  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mie_MTIE) 
							    << 7U));
						    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffff7U 
							  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mie_MSIE) 
							    << 3U));
						}
					    }
					} else {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffe7ffU 
							  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mstatus_MPP) 
							    << 0xbU));
						    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffff7fU 
							  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mstatus_MPIE) 
							    << 7U));
						    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffff7U 
							  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mstatus_MIE) 
							    << 3U));
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:15630
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
	= ((0U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC1_CTRL))
	    ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS1
	    : ((2U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC1_CTRL))
	        ? 4U : ((1U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC1_CTRL))
			 ? (0xfffff000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)
			 : (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				     >> 0xfU)))));
    // ALWAYS at ../../../../Briey.v:15649
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0x7ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x80000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xcU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xbffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x40000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xdU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xdffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x20000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xeU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xeffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x10000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xfU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xf7fffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x8000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x10U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xfbfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x4000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x11U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xfdfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x2000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x12U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xfefffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x1000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x13U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xff7ffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x800U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x14U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xffbffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x400U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x15U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xffdffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x200U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x16U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xffeffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x100U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x17U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xfff7fU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x80U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x18U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xfffbfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x40U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x19U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xfffdfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x20U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x1aU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xfffefU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x10U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x1bU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xffff7U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (8U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1cU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xffffbU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (4U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1dU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xffffdU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (2U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1eU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xffffeU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1fU)));
    // ALWAYS at ../../../../Briey.v:15673
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0x7ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x80000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xcU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xbffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x40000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xdU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xdffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x20000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xeU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xeffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x10000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xfU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xf7fffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x8000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x10U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xfbfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x4000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x11U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xfdfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x2000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x12U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xfefffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x1000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x13U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xff7ffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x800U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x14U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xffbffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x400U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x15U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xffdffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x200U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x16U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xffeffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x100U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x17U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xfff7fU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x80U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x18U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xfffbfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x40U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x19U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xfffdfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x20U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x1aU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xfffefU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x10U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x1bU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xffff7U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (8U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1cU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xffffbU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (4U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1dU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xffffdU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (2U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1eU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xffffeU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1fU)));
    // ALWAYS at ../../../../Briey.v:16374
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_rsp_data 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_busReadDataReg;
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_199_)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_rsp_data 
	    = ((0xfffffffeU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_rsp_data) 
	       | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_resetIt));
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_rsp_data 
	    = ((0xfffffffdU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_rsp_data) 
	       | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_haltIt) 
		  << 1U));
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_rsp_data 
	    = ((0xfffffffbU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_rsp_data) 
	       | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_isPipBusy) 
		  << 2U));
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_rsp_data 
	    = ((0xfffffff7U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_rsp_data) 
	       | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_haltedByBreak) 
		  << 3U));
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_rsp_data 
	    = ((0xffffffefU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_rsp_data) 
	       | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_stepIt) 
		  << 4U));
    }
    // ALWAYS at ../../../../Briey.v:16385
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injectionPort_valid = 0U;
    if (vlSymsp->TOP__Briey.__PVT__systemDebugger_1___05Fio_mem_cmd_valid) {
	if ((0U != (0x3fU & ((vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[1U] 
			      << 0x1eU) | (vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[0U] 
					   >> 2U))))) {
	    if ((1U == (0x3fU & ((vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[1U] 
				  << 0x1eU) | (vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[0U] 
					       >> 2U))))) {
		if ((1U & vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[2U])) {
		    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injectionPort_valid = 1U;
		}
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:3389
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_1_ = 0U;
    if (vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder_io_input_r_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_1_ = 1U;
    }
    // ALWAYS at ../../../../Briey.v:3404
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire = 0U;
    if (vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder_io_input_r_valid) {
	if ((7U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire = 1U;
	}
    }
    // ALWAYS at ../../../../Briey.v:15392
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_215_ 
	= (0xfU == (0xfU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
			    >> 0x1cU)));
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_103_) 
	 & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageA_request_wr)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_215_ = 1U;
    }
    // ALWAYS at ../../../../Briey.v:16357
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_cmd_ready = 1U;
    if (vlSymsp->TOP__Briey.__PVT__systemDebugger_1___05Fio_mem_cmd_valid) {
	if ((0U != (0x3fU & ((vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[1U] 
			      << 0x1eU) | (vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[0U] 
					   >> 2U))))) {
	    if ((1U == (0x3fU & ((vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[1U] 
				  << 0x1eU) | (vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[0U] 
					       >> 2U))))) {
		if ((1U & vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[2U])) {
		    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_cmd_ready 
			= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injectionPort_ready;
		}
	    }
	}
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_161_ 
	= (VL_ULL(0x1ffffffff) & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_160_ 
				  - (QData)((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_rs2))));
    // ALWAYS at ../../../../Briey.v:16149
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_privilege = 3U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_forceMachineWire) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_privilege = 3U;
    }
    // ALWAYS at ../../../../Briey.v:4144
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willIncrement = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_15_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willIncrement = 1U;
    }
    // ALWAYS at ../../../../Briey.v:15447
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_DBusCachedPlugin_rspShifted 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_data;
    if ((1U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_DBusCachedPlugin_rspShifted 
	    = ((0xffffff00U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_DBusCachedPlugin_rspShifted) 
	       | (0xffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			   >> 8U)));
    } else {
	if ((2U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_DBusCachedPlugin_rspShifted 
		= ((0xffff0000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_DBusCachedPlugin_rspShifted) 
		   | (0xffffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				 >> 0x10U)));
	} else {
	    if ((3U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_DBusCachedPlugin_rspShifted 
		    = ((0xffffff00U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_DBusCachedPlugin_rspShifted) 
		       | (0xffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				   >> 0x18U)));
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:14769
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_word;
    if ((0U != (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_200_))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injectionPort_payload_regNext;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_232_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_207_) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_239_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_stepIt) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_incomingInstruction));
    // ALWAYS at ../../../../Briey.v:4107
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_payload_last 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand14;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_payload_last = 1U;
    }
    // ALWAYS at ../../../../Briey.v:4092
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_payload_length 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand13;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_payload_length 
	    = ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)
	        ? 0U : ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_14_)
			 ? 0U : 7U));
    }
    // ALWAYS at ../../../../Briey.v:4122
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_payload_wr 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_wr;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_14_)))) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_payload_wr = 0U;
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:4077
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_payload_address 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand12;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_payload_address 
	    = ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)
	        ? (0xfffffffcU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress)
	        : ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_14_)
		    ? (0xfffffffcU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress)
		    : (0xffffffe0U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress)));
    }
    // ALWAYS at ../../../../Briey.v:3900
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand9;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_14_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address 
		    = (0x3fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
				>> 2U));
	    }
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_15_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address 
	    = ((0x38U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
			 >> 2U)) | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_value));
    }
    // ALWAYS at ../../../../Briey.v:3886
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_way 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand8;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_14_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_way 
		    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_waysHits;
	    }
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_15_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_way 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_waysAllocator;
    }
    // ALWAYS at ../../../../Briey.v:4024
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_redo = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_14_) {
		if (((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_wr)) 
		     & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_colisions) 
			& (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_waysHits)))) {
		    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_redo = 1U;
		}
	    }
	}
    }
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) 
	 & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_exception))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_redo = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_redo = 1U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_unalignedAccess 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) 
	   & (((2U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_size)) 
	       & (0U != (3U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress))) 
	      | ((1U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_size)) 
		 & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_mmuException 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) 
	   & (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_exception) 
	       | ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_allowWrite)) 
		  & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_wr))) 
	      | ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_allowWrite)) 
		 & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_wr)))));
    // ALWAYS at ../../../../Briey.v:3928
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand11;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_14_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask 
		    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mask;
	    }
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_15_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask = 0xfU;
    }
    // ALWAYS at ../../../../Briey.v:3914
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_data 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand10;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_14_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_data 
		    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_data;
	    }
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_15_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_data 
	    = vlSymsp->TOP__Briey.__PVT___zz_56_;
    }
    // ALWAYS at ../../../../Briey.v:15840
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_willIncrement = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_228_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_done)))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_willIncrement = 1U;
	}
    }
    // ALWAYS at ../../../../Briey.v:14655
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_44_ 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_REGFILE_WRITE_DATA;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid) {
	if ((1U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_CTRL))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_44_ 
		= vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_;
	} else {
	    if (((2U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_CTRL)) 
		 | (3U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_CTRL)))) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_44_ 
		    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT;
	    }
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_228_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_44_ 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_result;
    }
    // ALWAYS at ../../../../Briey.v:14886
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_haltItself = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_228_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_done)))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_haltItself = 1U;
	}
    }
    // ALWAYS at ../../../../Briey.v:14972
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherflushIt = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_234_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_235_) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherflushIt = 1U;
	}
    }
    // ALWAYS at ../../../../Briey.v:14857
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_haltByOther = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_234_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_haltByOther = 1U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.CsrPlugin_interruptJump 
	= (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_interrupt_valid) 
	    & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_pipelineLiberator_done)) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_allowInterrupts));
    // ALWAYS at ../../../../Briey.v:16089
    if ((3U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BRANCH_CTRL))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_BranchPlugin_branch_src2 
	    = ((vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
		<< 0xcU) | (0xfffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x14U)));
    } else {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_BranchPlugin_branch_src2 
	    = ((2U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BRANCH_CTRL))
	        ? (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_) 
		    << 0x15U) | ((0x100000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					       >> 0xbU)) 
				 | ((0xff000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION) 
				    | ((0x800U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						  >> 9U)) 
				       | (0x7feU & 
					  (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					   >> 0x14U))))))
	        : ((vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
		    << 0xdU) | ((0x1000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					    >> 0x13U)) 
				| ((0x800U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					      << 4U)) 
				   | ((0x7e0U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						 >> 0x14U)) 
				      | (0x1eU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						  >> 7U)))))));
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_BranchPlugin_branch_src2 = 4U;
	}
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_MulPlugin_aHigh 
	= ((0x10000U & ((((1U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					>> 0xcU))) 
			  | (2U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0xcU)))) 
			 << 0x10U) & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
				      >> 0xfU))) | 
	   (0xffffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
		       >> 0x10U)));
    // ALWAYS at ../../../../Briey.v:16345
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_writeData 
	= ((0x2000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)
	    ? ((0x1000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)
	        ? (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
		   & (~ vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_))
	        : (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
		   | vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_))
	    : vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_);
    // ALWAYS at ../../../../Briey.v:15726
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfffffffeU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
		    >> 0x1fU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfffffffdU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (2U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
		    >> 0x1dU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfffffffbU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (4U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
		    >> 0x1bU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfffffff7U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (8U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
		    >> 0x19U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xffffffefU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x10U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
		       >> 0x17U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xffffffdfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x20U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
		       >> 0x15U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xffffffbfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x40U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
		       >> 0x13U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xffffff7fU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x80U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
		       >> 0x11U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfffffeffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x100U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			>> 0xfU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfffffdffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x200U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			>> 0xdU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfffffbffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x400U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			>> 0xbU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfffff7ffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x800U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			>> 9U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xffffefffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x1000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			 >> 7U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xffffdfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x2000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			 >> 5U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xffffbfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x4000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			 >> 3U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xffff7fffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x8000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			 >> 1U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfffeffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x10000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			  << 1U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfffdffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x20000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			  << 3U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfffbffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x40000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			  << 5U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfff7ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x80000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			  << 7U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xffefffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x100000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			   << 9U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xffdfffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x200000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			   << 0xbU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xffbfffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x400000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			   << 0xdU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xff7fffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x800000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			   << 0xfU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfeffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x1000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			    << 0x11U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfdffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x2000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			    << 0x13U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfbffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x4000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			    << 0x15U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xf7ffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x8000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			    << 0x17U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xefffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x10000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			     << 0x19U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xdfffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x20000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			     << 0x1bU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xbfffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x40000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			     << 0x1dU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0x7fffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x80000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			     << 0x1fU)));
    // ALWAYS at ../../../../Briey.v:15696
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_ 
	= ((0U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC2_CTRL))
	    ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS2
	    : ((1U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC2_CTRL))
	        ? ((vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
		    << 0xcU) | (0xfffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x14U)))
	        : ((2U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC2_CTRL))
		    ? ((vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
			<< 0xcU) | ((0xfe0U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					       >> 0x14U)) 
				    | (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						>> 7U))))
		    : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_PC)));
    // ALWAYS at ../../../../Briey.v:3396
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_2_ = 0U;
    if ((1U & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) 
	       | (~ ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
		     >> 3U))))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_2_ = 1U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_321_ 
	= (((QData)((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_rs1)) 
	    << 1U) | (QData)((IData)((1U & (~ (IData)(
						      (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_161_ 
						       >> 0x20U)))))));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_252_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mstatus_MIE) 
	   | (3U > (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_privilege)));
    // ALWAYS at ../../../../Briey.v:16221
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_targetPrivilege 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_interrupt_targetPrivilege;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_hadException) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_targetPrivilege 
	    = ((3U > (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_privilege))
	        ? 3U : (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_privilege));
    }
    // ALWAYS at ../../../../Briey.v:4154
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_valueNext 
	= (7U & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_value) 
		 + (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willIncrement)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willOverflow 
	= ((7U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_value)) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willIncrement));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_ 
	= (1U & ((vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_DBusCachedPlugin_rspShifted 
		  >> 7U) & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION 
			       >> 0xeU))));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_ 
	= (1U & ((vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_DBusCachedPlugin_rspShifted 
		  >> 0xfU) & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION 
				 >> 0xeU))));
    // ALWAYS at ../../../../Briey.v:15247
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_ 
	= ((0x3ffU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_)) 
	   | (0x400U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			>> 0x15U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_ 
	= ((0x5ffU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_)) 
	   | (0x200U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			>> 0x16U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_ 
	= ((0x6ffU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_)) 
	   | (0x100U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			>> 0x17U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_ 
	= ((0x77fU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_)) 
	   | (0x80U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		       >> 0x18U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_ 
	= ((0x7bfU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_)) 
	   | (0x40U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		       >> 0x19U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_ 
	= ((0x7dfU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_)) 
	   | (0x20U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		       >> 0x1aU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_ 
	= ((0x7efU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_)) 
	   | (0x10U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		       >> 0x1bU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_ 
	= ((0x7f7U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_)) 
	   | (8U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		    >> 0x1cU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_ 
	= ((0x7fbU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_)) 
	   | (4U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		    >> 0x1dU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_ 
	= ((0x7fdU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_)) 
	   | (2U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		    >> 0x1eU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_ 
	= ((0x7feU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_)) 
	   | (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		    >> 0x1fU)));
    // ALWAYS at ../../../../Briey.v:15262
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x3ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x40000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			  >> 0xdU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x5ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x20000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			  >> 0xeU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x6ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x10000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			  >> 0xfU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x77fffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x8000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			 >> 0x10U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7bfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x4000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			 >> 0x11U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7dfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x2000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			 >> 0x12U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7efffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x1000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			 >> 0x13U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7f7ffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x800U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			>> 0x14U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7fbffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x400U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			>> 0x15U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7fdffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x200U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			>> 0x16U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7feffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x100U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			>> 0x17U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7ff7fU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x80U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		       >> 0x18U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7ffbfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x40U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		       >> 0x19U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7ffdfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x20U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		       >> 0x1aU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7ffefU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x10U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		       >> 0x1bU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7fff7U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (8U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		    >> 0x1cU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7fffbU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (4U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		    >> 0x1dU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7fffdU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (2U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		    >> 0x1eU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7fffeU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		    >> 0x1fU)));
    // ALWAYS at ../../../../Briey.v:15167
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x3ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x40000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			  >> 0xdU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x5ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x20000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			  >> 0xeU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x6ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x10000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			  >> 0xfU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x77fffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x8000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			 >> 0x10U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7bfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x4000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			 >> 0x11U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7dfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x2000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			 >> 0x12U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7efffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x1000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			 >> 0x13U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7f7ffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x800U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			>> 0x14U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7fbffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x400U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			>> 0x15U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7fdffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x200U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			>> 0x16U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7feffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x100U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			>> 0x17U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7ff7fU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x80U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		       >> 0x18U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7ffbfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x40U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		       >> 0x19U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7ffdfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x20U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		       >> 0x1aU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7ffefU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x10U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		       >> 0x1bU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7fff7U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (8U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		    >> 0x1cU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7fffbU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (4U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		    >> 0x1dU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7fffdU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (2U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		    >> 0x1eU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7fffeU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		    >> 0x1fU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_90_ 
	= (0U != (((0x17U == (0x5fU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
		   << 0x13U) | (((0x6fU == (0x7fU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
				 << 0x12U) | (((3U 
						== 
						(0x106fU 
						 & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
					       << 0x11U) 
					      | (((0x1073U 
						   == 
						   (0x107fU 
						    & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
						  << 0x10U) 
						 | (((0x2073U 
						      == 
						      (0x207fU 
						       & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
						     << 0xfU) 
						    | (((0x4063U 
							 == 
							 (0x407fU 
							  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
							<< 0xeU) 
						       | (((0x2013U 
							    == 
							    (0x207fU 
							     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
							   << 0xdU) 
							  | (((0x23U 
							       == 
							       (0x603fU 
								& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
							      << 0xcU) 
							     | (((3U 
								  == 
								  (0x207fU 
								   & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
								 << 0xbU) 
								| (((3U 
								     == 
								     (0x505fU 
								      & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
								    << 0xaU) 
								   | (((0x63U 
									== 
									(0x707bU 
									 & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
								       << 9U) 
								      | (((0xfU 
									   == 
									   (0x607fU 
									    & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
									  << 8U) 
									 | (((0x33U 
									      == 
									      (0xfc00007fU 
									       & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
									     << 7U) 
									    | (((0x500fU 
										== 
										(0x1f0707fU 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 6U) 
									       | (((0x5013U 
										== 
										(0xbc00707fU 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 5U) 
										| (((0x1013U 
										== 
										(0xfc00307fU 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 4U) 
										| (((0x5033U 
										== 
										(0xbe00707fU 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 3U) 
										| (((0x33U 
										== 
										(0xbe00707fU 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 2U) 
										| (((0x10200073U 
										== 
										(0xdfffffffU 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 1U) 
										| (0x100073U 
										== vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)))))))))))))))))))));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_174_ 
	= ((0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_INSTRUCTION 
		     >> 7U)) == (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
					  >> 0xfU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_175_ 
	= ((0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_INSTRUCTION 
		     >> 7U)) == (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
					  >> 0x14U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_176_ 
	= ((0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		     >> 7U)) == (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
					  >> 0xfU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_177_ 
	= ((0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		     >> 7U)) == (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
					  >> 0x14U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
	= (((0U != (((0x48U == (0x48U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
		     << 5U) | (((0x1010U == (0x1010U 
					     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
				<< 4U) | (((0x2010U 
					    == (0x2010U 
						& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
					   << 3U) | 
					  (((0x10U 
					     == (0x50U 
						 & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
					    << 2U) 
					   | (((4U 
						== 
						(0xcU 
						 & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
					       << 1U) 
					      | (0U 
						 == 
						 (0x28U 
						  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)))))))) 
	    << 0x1fU) | (((0x50U == (0x103050U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
			  << 0x1eU) | (((0U != (((4U 
						  == 
						  (0x14U 
						   & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
						 << 1U) 
						| (0x4050U 
						   == 
						   (0x4050U 
						    & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)))) 
					<< 0x1dU) | 
				       (((0U != (((4U 
						   == 
						   (0x44U 
						    & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
						  << 1U) 
						 | (0x4050U 
						    == 
						    (0x4050U 
						     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)))) 
					 << 0x1cU) 
					| (((0U == 
					     (0x1000U 
					      & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
					    << 0x1bU) 
					   | (((0x2004020U 
						== 
						(0x2004064U 
						 & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
					       << 0x1aU) 
					      | (((0U 
						   != 
						   (((0x1050U 
						      == 
						      (0x1050U 
						       & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
						     << 1U) 
						    | (0x2050U 
						       == 
						       (0x2050U 
							& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)))) 
						  << 0x19U) 
						 | (((0U 
						      != 
						      (((0U 
							 == 
							 (0x44U 
							  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
							<< 3U) 
						       | (((0U 
							    == 
							    (0x18U 
							     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
							   << 2U) 
							  | (((0x2000U 
							       == 
							       (0x6004U 
								& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
							      << 1U) 
							     | (0x1000U 
								== 
								(0x5004U 
								 & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)))))) 
						     << 0x18U) 
						    | (((0U 
							 != 
							 (((0x48U 
							    == 
							    (0x48U 
							     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
							   << 1U) 
							  | (4U 
							     == 
							     (0x1cU 
							      & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)))) 
							<< 0x17U) 
						       | (((0x40U 
							    == 
							    (0x58U 
							     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
							   << 0x16U) 
							  | (((0U 
							       != 
							       (((0x20U 
								  == 
								  (0x34U 
								   & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
								 << 1U) 
								| (0x20U 
								   == 
								   (0x64U 
								    & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)))) 
							      << 0x15U) 
							     | (((0U 
								  != 
								  (((4U 
								     == 
								     (4U 
								      & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
								    << 4U) 
								   | (((0x2010U 
									== 
									(0x2030U 
									 & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
								       << 3U) 
								      | (((0x10U 
									   == 
									   (0x1030U 
									    & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
									  << 2U) 
									 | (((0x2020U 
									      == 
									      (0x2002060U 
									       & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
									     << 1U) 
									    | (0x20U 
									       == 
									       (0x2003020U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION))))))) 
								 << 0x14U) 
								| (((0U 
								     != 
								     (((0x40U 
									== 
									(0x50U 
									 & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
								       << 2U) 
								      | (((0U 
									   == 
									   (0x38U 
									    & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
									  << 1U) 
									 | (0x40U 
									    == 
									    (0x103040U 
									     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION))))) 
								    << 0x13U) 
								   | (((0U 
									!= 
									(((0x2000U 
									   == 
									   (0x2010U 
									    & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
									  << 1U) 
									 | (0x1000U 
									    == 
									    (0x5000U 
									     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)))) 
								       << 0x12U) 
								      | (((0x2000030U 
									   == 
									   (0x2004074U 
									    & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
									  << 0x11U) 
									 | (((0x1008U 
									      == 
									      (0x5048U 
									       & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
									     << 0x10U) 
									    | (((0U 
										!= 
										(((0x40U 
										== 
										(0x40U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 4U) 
										| (((4U 
										== 
										(4U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 3U) 
										| (((0x4020U 
										== 
										(0x4020U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 2U) 
										| (((0x10U 
										== 
										(0x30U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 1U) 
										| (0x20U 
										== 
										(0x2000020U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION))))))) 
										<< 0xfU) 
									       | (((0x20U 
										== 
										(0x20U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 0xeU) 
										| (((0U 
										== 
										(0x58U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 0xdU) 
										| (((0U 
										!= 
										(((0x40U 
										== 
										(0x44U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 2U) 
										| (((0x2010U 
										== 
										(0x2014U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 1U) 
										| (0x40000030U 
										== 
										(0x40000034U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION))))) 
										<< 0xcU) 
										| (((0x4008U 
										== 
										(0x4048U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 0xbU) 
										| (((0x24U 
										== 
										(0x64U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 0xaU) 
										| (((0x1000U 
										== 
										(0x1000U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 9U) 
										| (((0x2000U 
										== 
										(0x3000U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 8U) 
										| (((0U 
										== 
										(0x1000U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 7U) 
										| (((0x50U 
										== 
										(0x10003050U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 6U) 
										| (((0x4010U 
										== 
										(0x4014U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 5U) 
										| (((0x2010U 
										== 
										(0x6014U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 4U) 
										| (((0U 
										!= 
										(((0x5010U 
										== 
										(0x7034U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 1U) 
										| (0x5020U 
										== 
										(0x2007064U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)))) 
										<< 3U) 
										| (((0U 
										!= 
										(((0x40001010U 
										== 
										(0x40003054U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 2U) 
										| (((0x1010U 
										== 
										(0x7034U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 1U) 
										| (0x1010U 
										== 
										(0x2007054U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION))))) 
										<< 2U) 
										| (((0U 
										!= 
										(((4U 
										== 
										(4U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 1U) 
										| (0x20U 
										== 
										(0x70U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)))) 
										<< 1U) 
										| (0U 
										!= 
										(((4U 
										== 
										(4U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 1U) 
										| (0U 
										== 
										(0x20U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)))))))))))))))))))))))))))))))))));
    // ALWAYS at ../../../../Briey.v:14761
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_95_ = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_232_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_95_ = 1U;
    }
    // ALWAYS at ../../../../Briey.v:15403
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_redoBranch_valid = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_redo) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_redoBranch_valid = 1U;
	}
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_16_ 
	= (((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_219_) 
	      & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_211_))) 
	     & (~ ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid) 
		   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MEMORY_ENABLE)))) 
	    & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_))) 
	   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_redo)));
    // ALWAYS at ../../../../Briey.v:15432
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_payload_code 
	= vlSymsp->TOP__Briey__axi_core_cpu.__Vxrand3;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_accessError) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_payload_code 
		= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MEMORY_WR)
		    ? 7U : 5U);
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_unalignedAccess) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_payload_code 
		= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MEMORY_WR)
		    ? 6U : 4U);
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_mmuException) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_payload_code 
		= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MEMORY_WR)
		    ? 0xfU : 0xdU);
	}
    }
    // ALWAYS at ../../../../Briey.v:15413
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_valid = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_accessError) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_unalignedAccess) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_mmuException) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_redo) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_valid = 0U;
	}
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_13_ 
	= ((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_exception) 
	     | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_accessError)) 
	    | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_mmuException)) 
	   | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_unalignedAccess));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_237_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_hadException) 
	   | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.CsrPlugin_interruptJump));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_FullBarrelShifterPlugin_reversed 
	= ((1U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SHIFT_CTRL))
	    ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_
	    : vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_);
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_MulPlugin_bHigh 
	= ((0x10000U & (((1U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				       >> 0xcU))) << 0x10U) 
			& (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_ 
			   >> 0xfU))) | (0xffffU & 
					 (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_ 
					  >> 0x10U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_BranchPlugin_eq 
	= (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
	   == vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_);
    // ALWAYS at ../../../../Briey.v:15714
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_addSub 
	= ((vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
	    + ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC_USE_SUB_LESS)
	        ? (~ vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_)
	        : vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_)) 
	   + ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC_USE_SUB_LESS)
	       ? 1U : 0U));
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC2_FORCE_ZERO) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_addSub 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_;
    }
    // ALWAYS at ../../../../Briey.v:16246
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_xtvec_base 
	= vlSymsp->TOP__Briey__axi_core_cpu.__Vxrand5;
    if ((3U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_targetPrivilege))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_xtvec_base = 0x20000008U;
    }
    // ALWAYS at ../../../../Briey.v:3843
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_valid 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand5;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_flusher_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_valid = 0U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_valid = 1U;
    }
    // ALWAYS at ../../../../Briey.v:3860
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_address 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand7;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_address 
	    = (0xffffffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
			    >> 8U));
    }
    // ALWAYS at ../../../../Briey.v:3833
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_address 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand4;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_flusher_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_address 
	    = (7U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
		     >> 5U));
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_address 
	    = (7U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
		     >> 5U));
    }
    // ALWAYS at ../../../../Briey.v:3853
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_error 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand6;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_error 
	    = ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_error) 
	       | (0U != (IData)(vlSymsp->TOP__Briey.__PVT___zz_57_)));
    }
    // ALWAYS at ../../../../Briey.v:3823
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_way 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand3;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_flusher_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_way = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_way 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_waysAllocator;
    }
    // ALWAYS at ../../../../Briey.v:15465
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0x7fffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x1fU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xbfffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x1eU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xdfffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x1dU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xefffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x1cU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xf7ffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x1bU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xfbffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x1aU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xfdffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x19U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xfeffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x18U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xff7fffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x17U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xffbfffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x16U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xffdfffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x15U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xffefffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x14U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xfff7ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x13U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xfffbffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x12U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xfffdffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x11U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xfffeffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x10U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xffff7fffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0xfU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xffffbfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0xeU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xffffdfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0xdU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xffffefffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0xcU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xfffff7ffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0xbU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xfffffbffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0xaU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xfffffdffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 9U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xfffffeffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 8U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xffffff00U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | (0xffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_DBusCachedPlugin_rspShifted));
    // ALWAYS at ../../../../Briey.v:15494
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0x7fffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x1fU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xbfffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x1eU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xdfffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x1dU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xefffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x1cU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xf7ffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x1bU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xfbffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x1aU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xfdffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x19U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xfeffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x18U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xff7fffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x17U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xffbfffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x16U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xffdfffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x15U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xffefffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x14U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xfff7ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x13U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xfffbffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x12U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xfffdffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x11U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xfffeffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x10U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xffff0000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | (0xffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_DBusCachedPlugin_rspShifted));
    // ALWAYS at ../../../../Briey.v:14700
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_REGFILE_WRITE_VALID 
	= (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
		 >> 0x1fU));
    if ((0U == (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			 >> 7U)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_REGFILE_WRITE_VALID = 0U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_pcs_4 
	= (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress 
	   + ((2U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
			    >> 0x16U))) ? (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_) 
					    << 0x15U) 
					   | ((0x100000U 
					       & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
						  >> 0xbU)) 
					      | ((0xff000U 
						  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION) 
						 | ((0x800U 
						     & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
							>> 9U)) 
						    | (0x7feU 
						       & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
							  >> 0x14U))))))
	       : ((vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
		   << 0xdU) | ((0x1000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
					   >> 0x13U)) 
			       | ((0x800U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
					     << 4U)) 
				  | ((0x7e0U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
						>> 0x14U)) 
				     | (0x1eU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
						 >> 7U))))))));
    // ALWAYS at ../../../../Briey.v:15189
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch 
	= ((2U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
			 >> 0x16U))) | ((1U == (3U 
						& (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
						   >> 0x16U))) 
					& (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
					   >> 0x12U)));
    if ((1U & ((2U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
			     >> 0x16U))) ? (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
					    >> 0x15U)
	        : (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		   >> 8U)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch = 0U;
    }
    // ALWAYS at ../../../../Briey.v:15880
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_166_ = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_247_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_174_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_166_ = 1U;
	    }
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_249_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_176_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_166_ = 1U;
	    }
	}
    }
    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
		  >> 0x18U)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_166_ = 0U;
    }
    // ALWAYS at ../../../../Briey.v:15908
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_167_ = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_247_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_175_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_167_ = 1U;
	    }
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_249_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_177_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_167_ = 1U;
	    }
	}
    }
    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
		  >> 0x15U)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_167_ = 0U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_231_ 
	= (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_207_) 
	    & ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)) 
	       & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit) 
		  | (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute))))) 
	   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_95_)));
    // ALWAYS at ../../../../Briey.v:14937
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_flushAll = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_redoBranch_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_flushAll = 1U;
    }
    // ALWAYS at ../../../../Briey.v:4015
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_flush_ready = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_16_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_flush_ready = 1U;
    }
    // ALWAYS at ../../../../Briey.v:4055
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_valid = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_valid 
		= (1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_memCmdSent)));
	} else {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_14_) {
		if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_wr) {
		    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_valid = 1U;
		}
	    } else {
		if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_memCmdSent)))) {
		    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_valid = 1U;
		}
	    }
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_13_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_valid = 0U;
    }
    // ALWAYS at ../../../../Briey.v:3810
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_valid = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_flusher_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_valid 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_flusher_valid;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_13_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_valid = 0U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_valid = 1U;
    }
    // ALWAYS at ../../../../Briey.v:3867
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_valid = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_14_) {
		if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_wr) 
		     & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_waysHits))) {
		    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_valid = 1U;
		}
	    }
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_13_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_valid = 0U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_15_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_valid = 1U;
    }
    // ALWAYS at ../../../../Briey.v:3976
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_loaderValid = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_14_)))) {
		if (vlSymsp->TOP__Briey.__PVT___zz_93_) {
		    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_loaderValid = 1U;
		}
	    }
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_13_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_loaderValid = 0U;
    }
    // ALWAYS at ../../../../Briey.v:3992
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_flusher_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess) {
	    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_wr)
		  ? (IData)(vlSymsp->TOP__Briey.__PVT___zz_93_)
		  : (IData)(vlSymsp->TOP__Briey.__PVT___zz_55_))) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt = 0U;
	    }
	} else {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_14_) {
		if ((1U & ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_wr)) 
			   | (IData)(vlSymsp->TOP__Briey.__PVT___zz_93_)))) {
		    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt = 0U;
		}
	    }
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_13_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt = 0U;
    }
    // ALWAYS at ../../../../Briey.v:14995
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_jumpInterface_valid = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_237_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_jumpInterface_valid = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_238_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_jumpInterface_valid = 1U;
    }
    // ALWAYS at ../../../../Briey.v:14906
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_flushAll = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_flushAll = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_237_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_flushAll = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_238_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_flushAll = 1U;
    }
    // ALWAYS at ../../../../Briey.v:14948
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherHalt = 0U;
    if ((0U != (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack) 
		 << 3U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory) 
			    << 2U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute) 
				       << 1U) | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode)))))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_237_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_238_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_234_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_235_) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherHalt = 1U;
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_haltIt) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_239_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stage0_mask 
	= (0xfU & (((0U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				  >> 0xcU))) ? 1U : 
		    ((1U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				   >> 0xcU))) ? 3U : 0xfU)) 
		   << (3U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_addSub)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_less 
	= (1U & (((1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			 >> 0x1fU)) == (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_ 
					      >> 0x1fU)))
		  ? (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_addSub 
		     >> 0x1fU) : ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC_LESS_UNSIGNED)
				   ? (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_ 
				      >> 0x1fU) : (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
						   >> 0x1fU))));
    // ALWAYS at ../../../../Briey.v:15005
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_jumpInterface_payload 
	= vlSymsp->TOP__Briey__axi_core_cpu.__Vxrand1;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_237_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_jumpInterface_payload 
	    = (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_xtvec_base 
	       << 2U);
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_238_) {
	if ((3U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION 
			  >> 0x1cU)))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_jumpInterface_payload 
		= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mepc;
	}
    }
    // ALWAYS at ../../../../Briey.v:14709
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_91_ 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA;
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid) 
	 & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MEMORY_ENABLE))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_91_ 
	    = ((0U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION 
			     >> 0xcU))) ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_
	        : ((1U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION 
				 >> 0xcU))) ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_
		    : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_DBusCachedPlugin_rspShifted));
    }
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid) 
	 & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_IS_MUL))) {
	__Vtemp7[0U] = (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MUL_LOW);
	__Vtemp7[1U] = ((0xfff00000U & (VL_NEGATE_I((IData)(
							    (1U 
							     & (IData)(
								       (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MUL_LOW 
									>> 0x33U))))) 
					<< 0x14U)) 
			| (IData)((vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MUL_LOW 
				   >> 0x20U)));
	__Vtemp7[2U] = (3U & (VL_NEGATE_I((IData)((1U 
						   & (IData)(
							     (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MUL_LOW 
							      >> 0x33U))))) 
			      >> 0xcU));
	VL_EXTEND_WQ(66,34, __Vtemp8, vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MUL_HH);
	VL_SHIFTL_WWI(66,66,32, __Vtemp9, __Vtemp8, 0x20U);
	VL_ADD_W(3, __Vtemp10, __Vtemp7, __Vtemp9);
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_91_ 
	    = ((0U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION 
			     >> 0xcU))) ? (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MUL_LOW)
	        : __Vtemp10[1U]);
    }
    // ALWAYS at ../../../../Briey.v:14754
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_94_ 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_95_;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_231_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_94_ = 1U;
    }
    // ALWAYS at ../../../../Briey.v:16194
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_flushAll) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack = 0U;
    }
    // ALWAYS at ../../../../Briey.v:14927
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_removeIt = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_flushAll) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_removeIt = 1U;
    }
    // ALWAYS at ../../../../Briey.v:14842
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_haltItself = 0U;
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_219_) 
	 & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_flush_ready)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_haltItself = 1U;
    }
    if ((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_redo) 
	  & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid)) 
	 & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_MEMORY_ENABLE))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_haltItself = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_223_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_blockedBySideEffects) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_haltItself = 1U;
	}
    }
    // ALWAYS at ../../../../Briey.v:3767
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_2_ = 0U;
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_valid) 
	 & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_way))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_2_ = 1U;
    }
    // ALWAYS at ../../../../Briey.v:3760
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_1_ = 0U;
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_valid) 
	 & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_way))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_1_ = 1U;
    }
    // ALWAYS at ../../../../Briey.v:3966
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRspFreeze = 0U;
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_loaderValid) 
	 | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_valid))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRspFreeze = 1U;
    }
    // ALWAYS at ../../../../Briey.v:14919
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself = 1U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isFlushed 
	= (0U != (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_flushAll) 
		   << 1U) | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_flushAll)));
    // ALWAYS at ../../../../Briey.v:15958
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_180_ 
	= ((0U != (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BRANCH_CTRL)) 
	   & ((2U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BRANCH_CTRL)) 
	      | ((3U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BRANCH_CTRL)) 
		 | ((0U == (7U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				  >> 0xcU))) ? (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_BranchPlugin_eq)
		     : ((1U == (7U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0xcU))) ? 
			(~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_BranchPlugin_eq))
			 : ((5U == (5U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0xcU)))
			     ? (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_less))
			     : (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_less)))))));
    // ALWAYS at ../../../../Briey.v:14570
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_38_ 
	= ((2U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ALU_CTRL))
	    ? ((2U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
	        ? (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
		   & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_)
	        : ((1U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
		    ? (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
		       | vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_)
		    : (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
		       ^ vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_)))
	    : ((1U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ALU_CTRL))
	        ? (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_less)
	        : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_addSub));
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_223_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_38_ 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.lastStageRegFileWrite_payload_data 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_91_;
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_230_ 
	= (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_207_) 
	    & (~ ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_tags_0_valid) 
		  & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_tags_0_address 
		     == (0xffffffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress 
				      >> 8U)))))) & 
	   (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_94_)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_17_ 
	= (1U & ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)) 
		 & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRspFreeze))));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isFiring 
	= (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid) 
	    & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself))) 
	   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_removeIt)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__BranchPlugin_jumpInterface_valid 
	= (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid) 
	    & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself))) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_BRANCH_DO));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_haltItself) 
	   | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself));
    // ALWAYS at ../../../../Briey.v:14896
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__BranchPlugin_branchExceptionPort_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_removeIt = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isFlushed) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_removeIt = 1U;
    }
    // ALWAYS at ../../../../Briey.v:16184
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__BranchPlugin_branchExceptionPort_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isFlushed) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory = 0U;
    }
    // ALWAYS at ../../../../Briey.v:14582
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_RS2 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_221_;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_169_) {
	if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_170_) 
	     == (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			  >> 0x14U)))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_RS2 
		= vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_171_;
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_224_) {
	if (((0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION 
		       >> 7U)) == (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
					    >> 0x14U)))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_RS2 
		= vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_91_;
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_226_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_175_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_RS2 
		    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_44_;
	    }
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_227_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_177_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_RS2 
		    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_38_;
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:14612
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_RS1 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_220_;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_169_) {
	if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_170_) 
	     == (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			  >> 0xfU)))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_RS1 
		= vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_171_;
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_224_) {
	if (((0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION 
		       >> 7U)) == (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
					    >> 0xfU)))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_RS1 
		= vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_91_;
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_226_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_174_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_RS1 
		    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_44_;
	    }
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_227_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_176_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_RS1 
		    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_38_;
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:15303
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_rsp_redoFetch = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_232_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_rsp_redoFetch = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_230_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_rsp_redoFetch = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_readyForError)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_rsp_redoFetch = 0U;
    }
    // ALWAYS at ../../../../Briey.v:14747
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_93_ 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_94_;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_230_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_93_ = 1U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.lastStageIsFiring 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isFiring;
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_168_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isFiring));
    // ALWAYS at ../../../../Briey.v:15591
    vlSymsp->TOP__Briey__axi_core_cpu.lastStageRegFileWrite_valid 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isFiring));
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_149_) {
	vlSymsp->TOP__Briey__axi_core_cpu.lastStageRegFileWrite_valid = 1U;
    }
    // ALWAYS at ../../../../Briey.v:14871
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_flushAll = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__BranchPlugin_jumpInterface_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_flushAll = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__BranchPlugin_branchExceptionPort_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_flushAll = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_234_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_235_) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_flushAll = 1U;
	}
    }
    // ALWAYS at ../../../../Briey.v:15849
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_willClear = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_willClear = 1U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_12_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_211_) 
	   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuckByOthers 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_haltByOther) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck) 
	      | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)));
    // ALWAYS at ../../../../Briey.v:15316
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_210_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_rsp_redoFetch) 
	   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)));
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_230_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_210_ = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_readyForError)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_210_ = 0U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_229_ 
	= (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_207_) 
	    & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_tags_0_error)) 
	   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_93_)));
    // ALWAYS at ../../../../Briey.v:14692
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_62_ = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.lastStageRegFileWrite_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_62_ = 1U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isFlushed 
	= (0U != (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_flushAll) 
		   << 2U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_flushAll) 
			      << 1U) | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_flushAll))));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isFlushed 
	= (0U != (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_flushAll) 
		   << 3U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_flushAll) 
			      << 2U) | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_flushAll) 
					<< 1U))));
    // ALWAYS at ../../../../Briey.v:15858
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_valueNext 
	= (0x3fU & (((0x21U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_value)) 
		     & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_willIncrement))
		     ? 0U : ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_value) 
			     + (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_willIncrement))));
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_willClear) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_valueNext = 0U;
    }
    // ALWAYS at ../../../../Briey.v:3782
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsReadCmd_valid = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_12_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsReadCmd_valid = 1U;
    }
    // ALWAYS at ../../../../Briey.v:3796
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataReadCmd_valid = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_12_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataReadCmd_valid = 1U;
    }
    // ALWAYS at ../../../../Briey.v:3789
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsReadCmd_payload 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand1;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_12_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsReadCmd_payload 
	    = (7U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_addSub 
		     >> 5U));
    }
    // ALWAYS at ../../../../Briey.v:3803
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataReadCmd_payload 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand2;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_12_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataReadCmd_payload 
	    = (0x3fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_addSub 
			>> 2U));
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_writeEnable 
	= (((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid) 
	      & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_CSR)) 
	     & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_CSR_WRITE_OPCODE)) 
	    & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_blockedBySideEffects))) 
	   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuckByOthers)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_haltItself) 
	   | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuckByOthers));
    // ALWAYS at ../../../../Briey.v:15339
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code 
	= vlSymsp->TOP__Briey__axi_core_cpu.__Vxrand2;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_231_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = 0xcU;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_229_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = 1U;
    }
    // ALWAYS at ../../../../Briey.v:14740
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_rsp_issueDetected 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_93_;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_229_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_rsp_issueDetected = 1U;
    }
    // ALWAYS at ../../../../Briey.v:15326
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodeExceptionPort_valid = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_231_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodeExceptionPort_valid 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_readyForError;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_229_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodeExceptionPort_valid 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_readyForError;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherHalt) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodeExceptionPort_valid = 0U;
    }
    // ALWAYS at ../../../../Briey.v:14864
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isFlushed) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_removeIt = 1U;
    }
    // ALWAYS at ../../../../Briey.v:16177
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isFlushed) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute = 0U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_5_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataReadCmd_valid) 
	   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)));
    // ALWAYS at ../../../../Briey.v:15111
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_halt = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_rsp_issueDetected) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_halt = 1U;
    }
    // ALWAYS at ../../../../Briey.v:15143
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isValid 
	= (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_119_) 
	    & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_halt))) 
	   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_decodeRemoved)));
    if ((1U & (~ ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_200_) 
		  >> 2U)))) {
	if ((2U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_200_))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isValid = 1U;
	}
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_201_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isValid) 
	   & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
	      >> 0x10U));
    // ALWAYS at ../../../../Briey.v:14818
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_haltByOther = 0U;
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isValid) 
	 & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_166_) 
	    | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_167_)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_haltByOther = 1U;
    }
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_interrupt_valid) 
	 & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_allowInterrupts))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_haltByOther 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isValid;
    }
    if ((0U != ((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid) 
		  & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_ENV_CTRL)) 
		 << 2U) | ((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid) 
			     & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_ENV_CTRL)) 
			    << 1U) | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid) 
				      & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ENV_CTRL)))))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_haltByOther = 1U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decodeExceptionPort_valid 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isValid) 
	   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_90_)));
    // ALWAYS at ../../../../Briey.v:3413
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid) 
	   | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
    if ((1U & (~ ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
		  >> 3U)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_3_)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_201_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isStuck 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_haltItself) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_haltByOther) 
	      | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck) 
		  | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)) 
		 | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself))));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_197_ 
	= (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decodeExceptionPort_valid) 
	    << 1U) | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodeExceptionPort_valid));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_233_ 
	= (0U != (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decodeExceptionPort_valid) 
		   << 1U) | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodeExceptionPort_valid)));
    // ALWAYS at ../../../../Briey.v:15089
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt = 1U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_96_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isStuck)
	    ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION
	    : ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)
	        ? 0U : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_12_));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready 
	= (1U & ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isStuck)) 
		 & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_halt))));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_343_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_197_) 
	   & (~ ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_197_) 
		 - (IData)(1U))));
    // ALWAYS at ../../../../Briey.v:16167
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_233_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isFlushed) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = 0U;
    }
    // ALWAYS at ../../../../Briey.v:14831
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_233_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_removeIt = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isFlushed) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_removeIt = 1U;
    }
    // ALWAYS at ../../../../Briey.v:15054
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_propagatePc = 0U;
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_117_) 
	 & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_propagatePc = 1U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_241_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_111_) 
	   & (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) 
	       & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt))) 
	      & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherHalt))));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_predictionJumpInterface_valid 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch) 
	   & (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isValid) 
	       & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isStuck))) 
	      & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_removeIt))));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_jump_pcLoad_valid 
	= (0U != (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_jumpInterface_valid) 
		   << 4U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__BranchPlugin_jumpInterface_valid) 
			      << 3U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_redoBranch_valid) 
					 << 2U) | (
						   ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_rsp_redoFetch) 
						    << 1U) 
						   | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_predictionJumpInterface_valid))))));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_104_ 
	= (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_predictionJumpInterface_valid) 
	    << 4U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_rsp_redoFetch) 
		       << 3U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__BranchPlugin_jumpInterface_valid) 
				  << 2U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_jumpInterface_valid) 
					     << 1U) 
					    | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_redoBranch_valid)))));
    // ALWAYS at ../../../../Briey.v:15070
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_samplePcNext = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_propagatePc) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_samplePcNext = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_jump_pcLoad_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_samplePcNext = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_241_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_samplePcNext = 1U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_105_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_104_) 
	   & (~ ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_104_) 
		 - (IData)(1U))));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_353_ 
	= ((4U & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_105_) 
		  >> 2U)) | ((2U & ((0x7ffffffeU & 
				     ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_105_) 
				      >> 1U)) | (0x3ffffffeU 
						 & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_105_) 
						    >> 2U)))) 
			     | (1U & (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_105_) 
				       >> 1U) | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_105_) 
						 >> 3U)))));
    // ALWAYS at ../../../../Briey.v:15061
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_pc 
	= (vlSymsp->TOP__Briey__axi_core_cpu.IBusCachedPlugin_fetchPc_pcReg 
	   + ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_inc) 
	      << 2U));
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_jump_pcLoad_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_pc 
	    = ((4U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_353_))
	        ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_pcs_4
	        : ((2U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_353_))
		    ? ((1U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_353_))
		        ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress
		        : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_BRANCH_CALC)
		    : ((1U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_353_))
		        ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_jumpInterface_payload
		        : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_PC)));
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_pc 
	= (0xfffffffeU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_pc);
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_pc 
	= (0xfffffffdU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_pc);
}

VL_INLINE_OPT void VBriey_VexRiscv::_sequent__TOP__Briey__axi_core_cpu__3(VBriey__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VBriey_VexRiscv::_sequent__TOP__Briey__axi_core_cpu__3\n"); );
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vdlyvdim0__RegFilePlugin_regFile__v0,4,0);
    VL_SIG8(__Vdlyvset__RegFilePlugin_regFile__v0,0,0);
    VL_SIG8(__Vdlyvdim0__IBusCachedPlugin_cache__DOT__ways_0_tags__v0,2,0);
    VL_SIG8(__Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_tags__v0,0,0);
    VL_SIG8(__Vdlyvdim0__IBusCachedPlugin_cache__DOT__ways_0_datas__v0,5,0);
    VL_SIG8(__Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_datas__v0,0,0);
    VL_SIG8(__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter,3,0);
    VL_SIG8(__Vdlyvdim0__dataCache_1___DOT__ways_0_tags__v0,2,0);
    VL_SIG8(__Vdlyvset__dataCache_1___DOT__ways_0_tags__v0,0,0);
    VL_SIG8(__Vdlyvdim0__dataCache_1___DOT__ways_0_data_symbol1__v0,5,0);
    VL_SIG8(__Vdlyvval__dataCache_1___DOT__ways_0_data_symbol1__v0,7,0);
    VL_SIG8(__Vdlyvset__dataCache_1___DOT__ways_0_data_symbol1__v0,0,0);
    VL_SIG8(__Vdlyvdim0__dataCache_1___DOT__ways_0_data_symbol0__v0,5,0);
    VL_SIG8(__Vdlyvval__dataCache_1___DOT__ways_0_data_symbol0__v0,7,0);
    VL_SIG8(__Vdlyvset__dataCache_1___DOT__ways_0_data_symbol0__v0,0,0);
    VL_SIG8(__Vdlyvdim0__dataCache_1___DOT__ways_0_data_symbol3__v0,5,0);
    VL_SIG8(__Vdlyvval__dataCache_1___DOT__ways_0_data_symbol3__v0,7,0);
    VL_SIG8(__Vdlyvset__dataCache_1___DOT__ways_0_data_symbol3__v0,0,0);
    VL_SIG8(__Vdlyvdim0__dataCache_1___DOT__ways_0_data_symbol2__v0,5,0);
    VL_SIG8(__Vdlyvval__dataCache_1___DOT__ways_0_data_symbol2__v0,7,0);
    VL_SIG8(__Vdlyvset__dataCache_1___DOT__ways_0_data_symbol2__v0,0,0);
    VL_SIG(__Vdlyvval__RegFilePlugin_regFile__v0,31,0);
    VL_SIG(__Vdlyvval__IBusCachedPlugin_cache__DOT__ways_0_tags__v0,25,0);
    VL_SIG(__Vdlyvval__IBusCachedPlugin_cache__DOT__ways_0_datas__v0,31,0);
    VL_SIG(__Vdlyvval__dataCache_1___DOT__ways_0_tags__v0,25,0);
    // Body
    __Vdlyvset__RegFilePlugin_regFile__v0 = 0U;
    __Vdlyvset__dataCache_1___DOT__ways_0_tags__v0 = 0U;
    __Vdlyvset__dataCache_1___DOT__ways_0_data_symbol2__v0 = 0U;
    __Vdlyvset__dataCache_1___DOT__ways_0_data_symbol3__v0 = 0U;
    __Vdlyvset__dataCache_1___DOT__ways_0_data_symbol0__v0 = 0U;
    __Vdlyvset__dataCache_1___DOT__ways_0_data_symbol1__v0 = 0U;
    __Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter;
    __Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 = 0U;
    __Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_datas__v0 = 0U;
    // ALWAYS at ../../../../Briey.v:4161
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) 
		      & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt))) 
		     & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)))) {
	VL_WRITEF("ERROR writeBack stuck by another plugin is not allowed\n");
    }
    // ALWAYS at ../../../../Briey.v:13717
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_62_) {
	__Vdlyvval__RegFilePlugin_regFile__v0 = vlSymsp->TOP__Briey__axi_core_cpu.lastStageRegFileWrite_payload_data;
	__Vdlyvset__RegFilePlugin_regFile__v0 = 1U;
	__Vdlyvdim0__RegFilePlugin_regFile__v0 = vlSymsp->TOP__Briey__axi_core_cpu.lastStageRegFileWrite_payload_address;
    }
    // ALWAYS at ../../../../Briey.v:3721
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_2_) {
	__Vdlyvval__dataCache_1___DOT__ways_0_tags__v0 
	    = ((vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_address 
		<< 2U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_error) 
			   << 1U) | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_valid)));
	__Vdlyvset__dataCache_1___DOT__ways_0_tags__v0 = 1U;
	__Vdlyvdim0__dataCache_1___DOT__ways_0_tags__v0 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_address;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_252_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_194_) {
	    vlSymsp->TOP__Briey__axi_core_cpu.CsrPlugin_interrupt_code = 7U;
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_195_) {
	    vlSymsp->TOP__Briey__axi_core_cpu.CsrPlugin_interrupt_code = 3U;
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_196_) {
	    vlSymsp->TOP__Briey__axi_core_cpu.CsrPlugin_interrupt_code = 0xbU;
	}
    }
    // ALWAYS at ../../../../Briey.v:17001
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_199_ 
	= (1U & (vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[0U] 
		 >> 2U));
    // ALWAYS at ../../../../Briey.v:3736
    if ((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask) 
	  >> 2U) & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_1_))) {
	__Vdlyvval__dataCache_1___DOT__ways_0_data_symbol2__v0 
	    = (0xffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_data 
			>> 0x10U));
	__Vdlyvset__dataCache_1___DOT__ways_0_data_symbol2__v0 = 1U;
	__Vdlyvdim0__dataCache_1___DOT__ways_0_data_symbol2__v0 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address;
    }
    // ALWAYS at ../../../../Briey.v:3736
    if ((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask) 
	  >> 3U) & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_1_))) {
	__Vdlyvval__dataCache_1___DOT__ways_0_data_symbol3__v0 
	    = (0xffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_data 
			>> 0x18U));
	__Vdlyvset__dataCache_1___DOT__ways_0_data_symbol3__v0 = 1U;
	__Vdlyvdim0__dataCache_1___DOT__ways_0_data_symbol3__v0 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address;
    }
    // ALWAYS at ../../../../Briey.v:3736
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask) 
	 & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_1_))) {
	__Vdlyvval__dataCache_1___DOT__ways_0_data_symbol0__v0 
	    = (0xffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_data);
	__Vdlyvset__dataCache_1___DOT__ways_0_data_symbol0__v0 = 1U;
	__Vdlyvdim0__dataCache_1___DOT__ways_0_data_symbol0__v0 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address;
    }
    // ALWAYS at ../../../../Briey.v:3736
    if ((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask) 
	  >> 1U) & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_1_))) {
	__Vdlyvval__dataCache_1___DOT__ways_0_data_symbol1__v0 
	    = (0xffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_data 
			>> 8U));
	__Vdlyvset__dataCache_1___DOT__ways_0_data_symbol1__v0 = 1U;
	__Vdlyvdim0__dataCache_1___DOT__ways_0_data_symbol1__v0 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address;
    }
    // ALWAYS at ../../../../Briey.v:13729
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_221_ 
	= vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile
	[(0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_96_ 
		   >> 0x14U))];
    // ALWAYS at ../../../../Briey.v:13723
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_220_ 
	= vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile
	[(0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_96_ 
		   >> 0xfU))];
    // ALWAYS at ../../../../Briey.v:16715
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_168_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_171_ 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_91_;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_252_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_194_) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_195_) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_196_) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
	}
    }
    // ALWAYS at ../../../../Briey.v:3518
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_13_) {
	__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter 
	    = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)));
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_3_ 
	= (1U & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
		 >> 3U));
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_14_) {
	__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter = 0U;
    }
    // ALWAYS at ../../../../Briey.v:16715
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mip_MEIP 
	= vlSymsp->TOP__Briey.__PVT__bufferCC_10___DOT__buffers_1;
    // ALWAYS at ../../../../Briey.v:16715
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mip_MTIP 
	= (0U != (IData)(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__interruptCtrl_1___05Fio_pendings));
    // ALWAYS at ../../../../Briey.v:16715
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_233_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code 
	    = ((1U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_343_))
	        ? (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code)
	        : 2U);
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__BranchPlugin_branchExceptionPort_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code = 0U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_payload_code;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_rs2 
	    = (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_163_)
		 ? (~ vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS2)
		 : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS2) 
	       + (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_163_));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_RS1_SIGNED 
	    = (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
		     >> 0x1bU));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ALU_CTRL 
	    = (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
		     >> 4U));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ALU_BITWISE_CTRL 
	    = (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
		     >> 8U));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC_LESS_UNSIGNED 
	    = (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
		     >> 0x12U));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_237_) {
	if ((3U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_targetPrivilege))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mcause_exceptionCode 
		= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_trapCause;
	}
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC2_FORCE_ZERO 
	    = (1U & ((vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
		      >> 0xaU) & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
				     >> 0xcU))));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC_USE_SUB_LESS 
	    = (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
		     >> 0xcU));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC2_CTRL 
	    = (3U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_);
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC1_CTRL 
	    = (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
		     >> 0x1cU));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_CTRL 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SHIFT_CTRL;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
	    = (IData)((VL_ULL(0x1ffffffff) & VL_SHIFTRS_QQI(33,33,5, 
							    (((QData)((IData)(
									      ((3U 
										== (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SHIFT_CTRL)) 
									       & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_FullBarrelShifterPlugin_reversed 
										>> 0x1fU)))) 
							      << 0x20U) 
							     | (QData)((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_FullBarrelShifterPlugin_reversed))), 
							    (0x1fU 
							     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_))));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE 
	    = (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
		     >> 0x14U));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_CSR 
	    = (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
		     >> 0x19U));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE;
    }
    // ALWAYS at ../../../../Briey.v:4161
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mask 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageA_mask;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MUL_HH 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MUL_HH;
    }
    // ALWAYS at ../../../../Briey.v:4161
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_dataReadRsp_0 
	    = (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_27_) 
		<< 0x18U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_26_) 
			      << 0x10U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_25_) 
					    << 8U) 
					   | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_24_))));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MEMORY_ADDRESS_LOW;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MEMORY_WR 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MEMORY_WR;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_IS_MUL 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_IS_MUL;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MUL_LOW 
	    = (VL_ULL(0xfffffffffffff) & (((((QData)((IData)(
							     (0x7ffffU 
							      & VL_NEGATE_I((IData)(
										(1U 
										& (IData)(
										((QData)((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MUL_LL)) 
										>> 0x20U)))))))) 
					     << 0x21U) 
					    | (QData)((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MUL_LL))) 
					   + (((QData)((IData)(
							       (3U 
								& VL_NEGATE_I((IData)(
										(1U 
										& (IData)(
										(VL_ULL(1) 
										& (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MUL_LH 
										>> 0x21U))))))))) 
					       << 0x32U) 
					      | (VL_ULL(0x3ffffffffffff) 
						 & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MUL_LH 
						    << 0x10U)))) 
					  + (((QData)((IData)(
							      (3U 
							       & VL_NEGATE_I((IData)(
										(1U 
										& (IData)(
										(VL_ULL(1) 
										& (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MUL_HL 
										>> 0x21U))))))))) 
					      << 0x32U) 
					     | (VL_ULL(0x3ffffffffffff) 
						& (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MUL_HL 
						   << 0x10U)))));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_CSR_WRITE_OPCODE 
	    = (1U & (~ (((1U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
				       >> 0xdU))) & 
			 (0U == (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
					  >> 0xfU)))) 
			| ((3U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
					 >> 0xdU))) 
			   & (0U == (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
					      >> 0xfU)))))));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_228_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_done)))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_rs1 
		= ((VL_ULL(0x100000000) & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_rs1) 
		   | (IData)((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_321_)));
	}
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_rs1 
	    = (VL_ULL(0x1ffffffff) & (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_164_)
				        ? (~ vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_165_)
				        : vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_165_) 
				      + (QData)((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_164_))));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_228_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_done)))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_accumulator[0U] 
		= ((1U & (IData)((vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_161_ 
				  >> 0x20U))) ? (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_160_)
		    : (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_161_));
	}
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_accumulator[0U] = 0U;
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_accumulator[1U] = 0U;
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_accumulator[2U] = 0U;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_MEMORY_MANAGMENT 
	    = (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
		     >> 0xbU));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_IS_DIV 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_DIV;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_REGFILE_WRITE_VALID;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_ENV_CTRL 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_ENV_CTRL;
    }
    // ALWAYS at ../../../../Briey.v:16715
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mip_MSIP = 0U;
    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		  >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
		if ((0x10000000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				  >> 0x1bU)))) {
			if ((0x4000000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_writeEnable) {
							vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mip_MSIP 
							    = 
							    (1U 
							     & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_writeData 
								>> 3U));
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:4161
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_data 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageA_request_data;
    }
    // ALWAYS at ../../../../Briey.v:4161
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_colisions 
	    = ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stage0_colisions_regNextWhen) 
	       | ((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_valid) 
		    & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_way)) 
		   & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address) 
		      == (0x3fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
				   >> 2U)))) & (0U 
						!= 
						((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageA_mask) 
						 & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask)))));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_BRANCH_DO 
	    = (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2) 
		!= (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_180_)) 
	       | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_180_) 
		  & ((3U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BRANCH_CTRL))
		      ? ((vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x15U) ^ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS1 
				       >> 1U)) : ((2U 
						   == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BRANCH_CTRL))
						   ? 
						  (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						   >> 0x15U)
						   : 
						  (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						   >> 8U)))));
    }
    // ALWAYS at ../../../../Briey.v:3518
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_tags_0_error 
	    = (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_11_ 
		     >> 1U));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_168_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_170_ 
	    = (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION 
			>> 7U));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_237_) {
	if ((3U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_targetPrivilege))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mcause_interrupt 
		= (1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_hadException)));
	}
    }
    // ALWAYS at ../../../../Briey.v:17074
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injectionPort_payload_regNext 
	= vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[1U];
    // ALWAYS at ../../../../Briey.v:16715
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_228_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_done)))) {
	    if ((0x20U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_value))) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_result 
		    = (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_needRevert)
			 ? (~ vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_162_)
			 : vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_162_) 
		       + (IData)((QData)((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_needRevert))));
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_DO_EBREAK 
	    = (1U & ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_haltIt)) 
		     & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
			>> 6U)));
    }
    // ALWAYS at ../../../../Briey.v:3551
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_dataBypass_regNextWhen = 0U;
    }
    // ALWAYS at ../../../../Briey.v:3518
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_10_ 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_12_;
    }
    // ALWAYS at ../../../../Briey.v:4161
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_17_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_allowWrite = 1U;
    }
    // ALWAYS at ../../../../Briey.v:4161
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_tagsReadRsp_0_error 
	    = (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_10_ 
		     >> 1U));
    }
    // ALWAYS at ../../../../Briey.v:4161
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_size 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageA_request_size;
    }
    // ALWAYS at ../../../../Briey.v:4161
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_17_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_215_;
    }
    // ALWAYS at ../../../../Briey.v:3518
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_tags_0_address 
	    = (0xffffffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_11_ 
			    >> 2U));
    }
    // ALWAYS at ../../../../Briey.v:3518
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_tags_0_valid 
	    = (1U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_11_);
    }
    // ALWAYS at ../../../../Briey.v:3365
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_2_) {
	__Vdlyvval__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 
	    = ((0x3fffffcU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
			      >> 6U)) | ((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError) 
					   | (0U != (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder_io_input_r_payload_resp))) 
					  << 1U) | 
					 (1U & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
						>> 3U))));
	__Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 = 1U;
	__Vdlyvdim0__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 
	    = (7U & ((8U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter))
		      ? (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
			 >> 5U) : (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)));
    }
    // ALWAYS at ../../../../Briey.v:3377
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_1_) {
	__Vdlyvval__IBusCachedPlugin_cache__DOT__ways_0_datas__v0 
	    = ((1U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__pendingSels))
	        ? vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrlBusAdapted_rsp_payload_data
	        : vlSymsp->TOP__Briey.__PVT__axi_ram__DOT___zz_13_);
	__Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_datas__v0 = 1U;
	__Vdlyvdim0__IBusCachedPlugin_cache__DOT__ways_0_datas__v0 
	    = ((0x38U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
			 >> 2U)) | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex));
    }
    // ALWAYS at ../../../../Briey.v:4161
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_17_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_exception = 0U;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_237_) {
	if ((3U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_targetPrivilege))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mepc 
		= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_PC;
	}
    }
    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		  >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
		if ((0x10000000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				  >> 0x1bU)))) {
			if ((0x4000000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_writeEnable) {
							vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mepc 
							    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_writeData;
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:4161
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_waysHits 
	    = (((0xffffffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
			      >> 8U)) == (0xffffffU 
					  & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_10_ 
					     >> 2U))) 
	       & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_10_);
    }
    // ALWAYS at ../../../../Briey.v:4161
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_wr 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageA_request_wr;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_237_) {
	if ((3U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_targetPrivilege))) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_hadException) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mtval 
		    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr;
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MEMORY_ENABLE 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MEMORY_ENABLE;
    }
    // ALWAYS at ../../../../Briey.v:17001
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_busReadDataReg 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_91_;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_234_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_busReadDataReg 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_PC;
    }
    // ALWAYS at ../../../../Briey.v:3518
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute = 1U;
    }
    // ALWAYS at ../../../../Briey.v:3518
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_dataBypassValid_regNextWhen 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit;
    }
    // ALWAYSPOST at ../../../../Briey.v:13719
    if (__Vdlyvset__RegFilePlugin_regFile__v0) {
	vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[__Vdlyvdim0__RegFilePlugin_regFile__v0] 
	    = __Vdlyvval__RegFilePlugin_regFile__v0;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter 
	= __Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter;
    // ALWAYS at ../../../../Briey.v:15763
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfffffffeU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
		    >> 0x1fU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfffffffdU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (2U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
		    >> 0x1dU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfffffffbU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (4U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
		    >> 0x1bU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfffffff7U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (8U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
		    >> 0x19U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xffffffefU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x10U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
		       >> 0x17U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xffffffdfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x20U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
		       >> 0x15U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xffffffbfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x40U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
		       >> 0x13U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xffffff7fU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x80U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
		       >> 0x11U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfffffeffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x100U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			>> 0xfU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfffffdffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x200U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			>> 0xdU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfffffbffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x400U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			>> 0xbU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfffff7ffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x800U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			>> 9U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xffffefffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x1000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			 >> 7U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xffffdfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x2000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			 >> 5U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xffffbfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x4000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			 >> 3U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xffff7fffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x8000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			 >> 1U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfffeffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x10000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			  << 1U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfffdffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x20000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			  << 3U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfffbffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x40000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			  << 5U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfff7ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x80000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			  << 7U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xffefffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x100000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			   << 9U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xffdfffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x200000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			   << 0xbU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xffbfffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x400000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			   << 0xdU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xff7fffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x800000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			   << 0xfU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfeffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x1000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			    << 0x11U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfdffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x2000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			    << 0x13U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xfbffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x4000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			    << 0x15U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xf7ffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x8000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			    << 0x17U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xefffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x10000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			     << 0x19U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xdfffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x20000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			     << 0x1bU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0xbfffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x40000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			     << 0x1dU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_ 
	= ((0x7fffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_) 
	   | (0x80000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
			     << 0x1fU)));
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SHIFT_CTRL 
	    = (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
		     >> 2U));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE 
	    = (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
		     >> 0xfU));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MUL_HH 
	    = (VL_ULL(0x3ffffffff) & VL_MULS_QQQ(34,34,34, 
						 (VL_ULL(0x3ffffffff) 
						  & VL_EXTENDS_QI(34,17, vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_MulPlugin_aHigh)), 
						 (VL_ULL(0x3ffffffff) 
						  & VL_EXTENDS_QI(34,17, vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_MulPlugin_bHigh))));
    }
    // ALWAYS at ../../../../Briey.v:3751
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_5_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_27_ 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__ways_0_data_symbol3
	    [vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataReadCmd_payload];
    }
    // ALWAYS at ../../../../Briey.v:3751
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_5_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_26_ 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__ways_0_data_symbol2
	    [vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataReadCmd_payload];
    }
    // ALWAYS at ../../../../Briey.v:3751
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_5_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_25_ 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__ways_0_data_symbol1
	    [vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataReadCmd_payload];
    }
    // ALWAYS at ../../../../Briey.v:3751
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_5_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_24_ 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__ways_0_data_symbol0
	    [vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataReadCmd_payload];
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MEMORY_ADDRESS_LOW 
	    = (3U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_addSub);
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MEMORY_WR 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_MEMORY_WR;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_IS_MUL 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_MUL;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MUL_HL 
	    = (VL_ULL(0x3ffffffff) & VL_MULS_QQQ(34,34,34, 
						 (VL_ULL(0x3ffffffff) 
						  & VL_EXTENDS_QI(34,17, vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_MulPlugin_aHigh)), 
						 (VL_ULL(0x3ffffffff) 
						  & VL_EXTENDS_QI(34,17, 
								  (0xffffU 
								   & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_)))));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MUL_LH 
	    = (VL_ULL(0x3ffffffff) & VL_MULS_QQQ(34,34,34, 
						 (VL_ULL(0x3ffffffff) 
						  & VL_EXTENDS_QI(34,17, 
								  (0xffffU 
								   & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_))), 
						 (VL_ULL(0x3ffffffff) 
						  & VL_EXTENDS_QI(34,17, vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_MulPlugin_bHigh))));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MUL_LL 
	    = ((0xffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_) 
	       * (0xffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_));
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_160_ 
	= (((QData)((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_accumulator[0U])) 
	    << 1U) | (QData)((IData)((1U & (IData)(
						   (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_rs1 
						    >> 0x1fU))))));
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_DIV 
	    = (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
		     >> 0x1aU));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_REGFILE_WRITE_VALID 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_REGFILE_WRITE_VALID;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_ENV_CTRL 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ENV_CTRL;
    }
    // ALWAYS at ../../../../Briey.v:4161
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageA_request_data 
	    = ((0U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			     >> 0xcU))) ? ((0xff000000U 
					    & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS2 
					       << 0x18U)) 
					   | ((0xff0000U 
					       & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS2 
						  << 0x10U)) 
					      | ((0xff00U 
						  & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS2 
						     << 8U)) 
						 | (0xffU 
						    & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS2))))
	        : ((1U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				 >> 0xcU))) ? ((0xffff0000U 
						& (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS2 
						   << 0x10U)) 
					       | (0xffffU 
						  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS2))
		    : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS2));
    }
    // ALWAYS at ../../../../Briey.v:4161
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stage0_colisions_regNextWhen 
	    = ((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_valid) 
		 & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_way)) 
		& ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address) 
		   == (0x3fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_addSub 
				>> 2U)))) & (0U != 
					     ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stage0_mask) 
					      & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask))));
    }
    // ALWAYS at ../../../../Briey.v:4161
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageA_mask 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stage0_mask;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((0x20U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_value))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_done = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_done = 0U;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_needRevert 
	    = (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_164_) 
		^ ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_163_) 
		   & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0xdU)))) & (~ (((0U == vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS2) 
					    & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_RS2_SIGNED)) 
					   & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						 >> 0xdU)))));
    }
    // ALWAYS at ../../../../Briey.v:3383
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_12_ 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__ways_0_datas
	    [(0x3fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_pc 
		       >> 2U))];
    }
    // ALWAYS at ../../../../Briey.v:4161
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageA_request_size 
	    = (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		     >> 0xcU));
    }
    // ALWAYS at ../../../../Briey.v:4135
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)
	    ? vlSymsp->TOP__Briey.__PVT___zz_56_ : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_dataReadRsp_0);
    // ALWAYS at ../../../../Briey.v:3371
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_11_ 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__ways_0_tags
	    [(7U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_pc 
		    >> 5U))];
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_13_ 
	= (1U & (~ ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
		    >> 3U)));
    // ALWAYS at ../../../../Briey.v:3518
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_210_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)) 
	       & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack))))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_PC 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_PC;
    }
    // ALWAYS at ../../../../Briey.v:3727
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsReadCmd_valid) 
	 & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_10_ 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__ways_0_tags
	    [vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsReadCmd_payload];
    }
    // ALWAYS at ../../../../Briey.v:4161
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageA_request_wr 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_MEMORY_WR;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_14_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_waysHits) 
	   | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_wr));
    // ALWAYS at ../../../../Briey.v:16715
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_233_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr 
	    = ((1U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_343_))
	        ? (0xfffffffcU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress)
	        : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION);
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__BranchPlugin_branchExceptionPort_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_BRANCH_CALC;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MEMORY_ENABLE 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_MEMORY_ENABLE;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit = 0U;
    }
    // ALWAYS at ../../../../Briey.v:3467
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_word 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_10_;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_dataBypassValid_regNextWhen) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_word 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_dataBypass_regNextWhen;
    }
    // ALWAYSPOST at ../../../../Briey.v:3747
    if (__Vdlyvset__dataCache_1___DOT__ways_0_data_symbol3__v0) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__ways_0_data_symbol3[__Vdlyvdim0__dataCache_1___DOT__ways_0_data_symbol3__v0] 
	    = __Vdlyvval__dataCache_1___DOT__ways_0_data_symbol3__v0;
    }
    // ALWAYSPOST at ../../../../Briey.v:3744
    if (__Vdlyvset__dataCache_1___DOT__ways_0_data_symbol2__v0) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__ways_0_data_symbol2[__Vdlyvdim0__dataCache_1___DOT__ways_0_data_symbol2__v0] 
	    = __Vdlyvval__dataCache_1___DOT__ways_0_data_symbol2__v0;
    }
    // ALWAYSPOST at ../../../../Briey.v:3741
    if (__Vdlyvset__dataCache_1___DOT__ways_0_data_symbol1__v0) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__ways_0_data_symbol1[__Vdlyvdim0__dataCache_1___DOT__ways_0_data_symbol1__v0] 
	    = __Vdlyvval__dataCache_1___DOT__ways_0_data_symbol1__v0;
    }
    // ALWAYSPOST at ../../../../Briey.v:3738
    if (__Vdlyvset__dataCache_1___DOT__ways_0_data_symbol0__v0) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__ways_0_data_symbol0[__Vdlyvdim0__dataCache_1___DOT__ways_0_data_symbol0__v0] 
	    = __Vdlyvval__dataCache_1___DOT__ways_0_data_symbol0__v0;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_161_ 
	= (VL_ULL(0x1ffffffff) & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_160_ 
				  - (QData)((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_rs2))));
    // ALWAYSPOST at ../../../../Briey.v:3379
    if (__Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_datas__v0) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__ways_0_datas[__Vdlyvdim0__IBusCachedPlugin_cache__DOT__ways_0_datas__v0] 
	    = __Vdlyvval__IBusCachedPlugin_cache__DOT__ways_0_datas__v0;
    }
    // ALWAYS at ../../../../Briey.v:15447
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_DBusCachedPlugin_rspShifted 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_data;
    if ((1U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_DBusCachedPlugin_rspShifted 
	    = ((0xffffff00U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_DBusCachedPlugin_rspShifted) 
	       | (0xffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			   >> 8U)));
    } else {
	if ((2U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_DBusCachedPlugin_rspShifted 
		= ((0xffff0000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_DBusCachedPlugin_rspShifted) 
		   | (0xffffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				 >> 0x10U)));
	} else {
	    if ((3U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_DBusCachedPlugin_rspShifted 
		    = ((0xffffff00U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_DBusCachedPlugin_rspShifted) 
		       | (0xffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				   >> 0x18U)));
	    }
	}
    }
    // ALWAYSPOST at ../../../../Briey.v:3367
    if (__Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_tags__v0) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__ways_0_tags[__Vdlyvdim0__IBusCachedPlugin_cache__DOT__ways_0_tags__v0] 
	    = __Vdlyvval__IBusCachedPlugin_cache__DOT__ways_0_tags__v0;
    }
    // ALWAYSPOST at ../../../../Briey.v:3723
    if (__Vdlyvset__dataCache_1___DOT__ways_0_tags__v0) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__ways_0_tags[__Vdlyvdim0__dataCache_1___DOT__ways_0_tags__v0] 
	    = __Vdlyvval__dataCache_1___DOT__ways_0_tags__v0;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_MUL 
	    = (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
		     >> 0x11U));
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_321_ 
	= (((QData)((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_rs1)) 
	    << 1U) | (QData)((IData)((1U & (~ (IData)(
						      (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_161_ 
						       >> 0x20U)))))));
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_REGFILE_WRITE_VALID 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_REGFILE_WRITE_VALID;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ENV_CTRL 
	    = (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
		     >> 0x1eU));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_RS2_SIGNED 
	    = (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
		     >> 7U));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS2 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_RS2;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.lastStagePc = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_PC;
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_PC 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_PC;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_MEMORY_WR 
	    = (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
		     >> 0xeU));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_BRANCH_CALC 
	    = (0xfffffffeU & (((3U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BRANCH_CTRL))
			        ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS1
			        : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_PC) 
			      + vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_BranchPlugin_branch_src2));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_MEMORY_ENABLE 
	    = (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
		     >> 0xdU));
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_163_ 
	= ((vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS2 
	    >> 0x1fU) & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_RS2_SIGNED));
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS1 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_RS1;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BRANCH_CTRL 
	    = (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
		     >> 0x16U));
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_PC 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress;
    }
    // ALWAYS at ../../../../Briey.v:15875
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_165_ 
	= ((VL_ULL(0xffffffff) & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_165_) 
	   | ((QData)((IData)(((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_RS1_SIGNED) 
			       & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS1 
				  >> 0x1fU)))) << 0x20U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_165_ 
	= ((VL_ULL(0x100000000) & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_165_) 
	   | (IData)((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS1)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_164_ 
	= (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_DIV) 
	    & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS1 
	       >> 0x1fU)) & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_RS1_SIGNED));
    // ALWAYS at ../../../../Briey.v:3518
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress 
	    = vlSymsp->TOP__Briey__axi_core_cpu.IBusCachedPlugin_fetchPc_pcReg;
    }
}

VL_INLINE_OPT void VBriey_VexRiscv::_sequent__TOP__Briey__axi_core_cpu__4(VBriey__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VBriey_VexRiscv::_sequent__TOP__Briey__axi_core_cpu__4\n"); );
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../../Briey.v:17018
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_systemReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_haltedByBreak = 0U;
    } else {
	if (vlSymsp->TOP__Briey.__PVT__systemDebugger_1___05Fio_mem_cmd_valid) {
	    if ((0U == (0x3fU & ((vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[1U] 
				  << 0x1eU) | (vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[0U] 
					       >> 2U))))) {
		if ((1U & vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[2U])) {
		    if ((0x2000000U & vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[1U])) {
			vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_haltedByBreak = 0U;
		    }
		}
	    }
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_234_) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_235_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_haltedByBreak = 1U;
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:17018
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_systemReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_stepIt = 0U;
    } else {
	if (vlSymsp->TOP__Briey.__PVT__systemDebugger_1___05Fio_mem_cmd_valid) {
	    if ((0U == (0x3fU & ((vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[1U] 
				  << 0x1eU) | (vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[0U] 
					       >> 2U))))) {
		if ((1U & vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[2U])) {
		    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_stepIt 
			= (1U & (vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[1U] 
				 >> 4U));
		}
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:17018
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_systemReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_godmode = 0U;
    } else {
	if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_haltIt) 
	     & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_isPipBusy)))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_godmode = 1U;
	}
	if (vlSymsp->TOP__Briey.__PVT__systemDebugger_1___05Fio_mem_cmd_valid) {
	    if ((0U == (0x3fU & ((vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[1U] 
				  << 0x1eU) | (vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[0U] 
					       >> 2U))))) {
		if ((1U & vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[2U])) {
		    if ((0x2000000U & vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[1U])) {
			vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_godmode = 0U;
		    }
		}
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:14988
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_103_ = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_godmode) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_103_ = 1U;
    }
    // ALWAYS at ../../../../Briey.v:15021
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_forceMachineWire = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_godmode) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_forceMachineWire = 1U;
    }
    // ALWAYS at ../../../../Briey.v:17018
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_systemReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_haltIt = 0U;
    } else {
	if (vlSymsp->TOP__Briey.__PVT__systemDebugger_1___05Fio_mem_cmd_valid) {
	    if ((0U == (0x3fU & ((vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[1U] 
				  << 0x1eU) | (vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[0U] 
					       >> 2U))))) {
		if ((1U & vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[2U])) {
		    if ((0x20000U & vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[1U])) {
			vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_haltIt = 1U;
		    }
		    if ((0x2000000U & vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[1U])) {
			vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_haltIt = 0U;
		    }
		}
	    }
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_234_) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_235_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_haltIt = 1U;
	    }
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_239_) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isValid) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_haltIt = 1U;
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:15028
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_allowInterrupts = 1U;
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_haltIt) 
	 | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_stepIt))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_allowInterrupts = 0U;
    }
}

VL_INLINE_OPT void VBriey_VexRiscv::_sequent__TOP__Briey__axi_core_cpu__5(VBriey__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VBriey_VexRiscv::_sequent__TOP__Briey__axi_core_cpu__5\n"); );
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vdly__CsrPlugin_mstatus_MIE,0,0);
    VL_SIG8(__Vdly___zz_200_,2,0);
    VL_SIG8(__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex,2,0);
    VL_SIG8(__Vdly__dataCache_1___DOT__stageB_flusher_valid,0,0);
    VL_SIG8(__Vdly__dataCache_1___DOT__loader_error,0,0);
    VL_SIG(__Vdly__dataCache_1___DOT__stageB_mmuRsp_physicalAddress,31,0);
    // Body
    __Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex;
    __Vdly___zz_200_ = vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_200_;
    __Vdly__dataCache_1___DOT__loader_error = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_error;
    __Vdly__dataCache_1___DOT__stageB_flusher_valid 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_flusher_valid;
    __Vdly__CsrPlugin_mstatus_MIE = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mstatus_MIE;
    __Vdly__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress;
    // ALWAYS at ../../../../Briey.v:16471
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_value 
	= ((IData)(vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset)
	    ? 0U : (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_valueNext));
    // ALWAYS at ../../../../Briey.v:16471
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_149_ 
	= vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset;
    // ALWAYS at ../../../../Briey.v:16471
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.IBusCachedPlugin_fetchPc_pcReg = 0x80000000U;
    } else {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_samplePcNext) {
	    vlSymsp->TOP__Briey__axi_core_cpu.IBusCachedPlugin_fetchPc_pcReg 
		= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_pc;
	}
    }
    // ALWAYS at ../../../../Briey.v:3480
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError = 0U;
    } else {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError = 0U;
	}
	if (vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder_io_input_r_valid) {
	    if ((0U != (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder_io_input_r_payload_resp))) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError = 1U;
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:16471
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_169_ 
	= ((~ (IData)(vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset)) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_168_));
    // ALWAYS at ../../../../Briey.v:16471
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_inc = 0U;
    } else {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_propagatePc) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_inc = 0U;
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_jump_pcLoad_valid) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_inc = 0U;
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_241_) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_inc = 1U;
	}
    }
    // ALWAYS at ../../../../Briey.v:3480
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex = 0U;
    } else {
	if (vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder_io_input_r_valid) {
	    __Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex 
		= (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex)));
	}
    }
    // ALWAYS at ../../../../Briey.v:4214
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_waysAllocator = 1U;
    } else {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_waysAllocator 
		= (1U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_22_));
	}
    }
    // ALWAYS at ../../../../Briey.v:4214
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_value 
	= ((IData)(vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset)
	    ? 0U : (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_valueNext));
    // ALWAYS at ../../../../Briey.v:3480
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending = 1U;
    } else {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_201_) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending = 1U;
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_14_) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending = 0U;
	}
    }
    // ALWAYS at ../../../../Briey.v:3480
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid = 0U;
    } else {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid = 0U;
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_210_) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid = 1U;
	}
    }
    // ALWAYS at ../../../../Briey.v:3480
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent = 0U;
    } else {
	if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
	     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder_io_input_ar_ready))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent = 1U;
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent = 0U;
	}
    }
    // ALWAYS at ../../../../Briey.v:16471
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode 
	= ((~ (IData)(vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset)) 
	   & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isStuck) 
	      & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode)));
    // ALWAYS at ../../../../Briey.v:16471
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_decodeRemoved = 0U;
    } else {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_removeIt) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_decodeRemoved = 1U;
	}
	if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_jump_pcLoad_valid) 
	     | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherflushIt))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_decodeRemoved = 0U;
	}
    }
    // ALWAYS at ../../../../Briey.v:16471
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA = 0U;
    } else {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA 
		= vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_44_;
	}
    }
    // ALWAYS at ../../../../Briey.v:16471
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_interrupt_valid = 0U;
    } else {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_interrupt_valid = 0U;
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_252_) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_194_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_interrupt_valid = 1U;
	    }
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_195_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_interrupt_valid = 1U;
	    }
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_196_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_interrupt_valid = 1U;
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:16471
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mie_MSIE = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((0x400000U 
						 & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mie_MSIE 
								= 
								(1U 
								 & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_writeData 
								    >> 3U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:16471
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mie_MTIE = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((0x400000U 
						 & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mie_MTIE 
								= 
								(1U 
								 & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_writeData 
								    >> 7U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:16471
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mie_MEIE = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((0x400000U 
						 & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mie_MEIE 
								= 
								(1U 
								 & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_writeData 
								    >> 0xbU));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:4214
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_valid = 0U;
    } else {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_loaderValid) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_valid = 1U;
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_valid = 0U;
	}
    }
    // ALWAYS at ../../../../Briey.v:4214
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_memCmdSent = 0U;
    } else {
	if (vlSymsp->TOP__Briey.__PVT___zz_93_) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_memCmdSent = 1U;
	}
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_memCmdSent = 0U;
	}
    }
    // ALWAYS at ../../../../Briey.v:16471
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute 
	= ((~ (IData)(vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset)) 
	   & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)
	       ? (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute)
	       : ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode) 
		  & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isStuck)))));
    // ALWAYS at ../../../../Briey.v:16471
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory 
	= ((~ (IData)(vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset)) 
	   & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)
	       ? (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory)
	       : ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute) 
		  & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))));
    // ALWAYS at ../../../../Briey.v:16471
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_hadException 
	= ((~ (IData)(vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset)) 
	   & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack) 
	      & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_allowException)));
    // ALWAYS at ../../../../Briey.v:16471
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack 
	= ((~ (IData)(vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset)) 
	   & ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)) 
	      & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory) 
		 & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))));
    // ALWAYS at ../../../../Briey.v:16471
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4 = 0U;
    } else {
	if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_jump_pcLoad_valid) 
	     | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherflushIt))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4 = 0U;
	}
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4 
		= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3;
	}
	if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_jump_pcLoad_valid) 
	     | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherflushIt))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4 = 0U;
	}
    }
    // ALWAYS at ../../../../Briey.v:16471
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	__Vdly___zz_200_ = 0U;
    } else {
	if ((4U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_200_))) {
	    if ((1U & (~ ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_200_) 
			  >> 1U)))) {
		if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_200_)))) {
		    __Vdly___zz_200_ = 0U;
		}
	    }
	} else {
	    if ((2U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_200_))) {
		if ((1U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_200_))) {
		    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isStuck)))) {
			__Vdly___zz_200_ = 4U;
		    }
		} else {
		    __Vdly___zz_200_ = 3U;
		}
	    } else {
		if ((1U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_200_))) {
		    __Vdly___zz_200_ = 2U;
		} else {
		    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injectionPort_valid) {
			__Vdly___zz_200_ = 1U;
		    }
		}
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:16471
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mstatus_MPP = 3U;
    } else {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_237_) {
	    if ((3U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_targetPrivilege))) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mstatus_MPP 
		    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_privilege;
	    }
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_238_) {
	    if ((3U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION 
			      >> 0x1cU)))) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mstatus_MPP = 0U;
	    }
	}
	if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mstatus_MPP 
								= 
								(3U 
								 & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_writeData 
								    >> 0xbU));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:4214
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	__Vdly__dataCache_1___DOT__loader_error = 0U;
    } else {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_15_) {
	    __Vdly__dataCache_1___DOT__loader_error 
		= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_error) 
		   | (0U != (IData)(vlSymsp->TOP__Briey.__PVT___zz_57_)));
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	    __Vdly__dataCache_1___DOT__loader_error = 0U;
	}
    }
    // ALWAYS at ../../../../Briey.v:16471
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	__Vdly__CsrPlugin_mstatus_MIE = 0U;
    } else {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_237_) {
	    if ((3U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_targetPrivilege))) {
		__Vdly__CsrPlugin_mstatus_MIE = 0U;
	    }
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_238_) {
	    if ((3U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION 
			      >> 0x1cU)))) {
		__Vdly__CsrPlugin_mstatus_MIE = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mstatus_MPIE;
	    }
	}
	if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_writeEnable) {
							    __Vdly__CsrPlugin_mstatus_MIE 
								= 
								(1U 
								 & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_writeData 
								    >> 3U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:4214
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	__Vdly__dataCache_1___DOT__stageB_flusher_valid = 1U;
	__Vdly__dataCache_1___DOT__stageB_mmuRsp_physicalAddress = 0U;
    } else {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_17_) {
	    __Vdly__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
		= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_REGFILE_WRITE_DATA;
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_flusher_valid) {
	    if ((7U != (7U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
			      >> 5U)))) {
		__Vdly__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
		    = ((0xffffff1fU & __Vdly__dataCache_1___DOT__stageB_mmuRsp_physicalAddress) 
		       | (0xe0U & (((IData)(1U) + (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
						   >> 5U)) 
				   << 5U)));
	    } else {
		__Vdly__dataCache_1___DOT__stageB_flusher_valid = 0U;
	    }
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_16_) {
	    __Vdly__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
		= (0xffffff1fU & __Vdly__dataCache_1___DOT__stageB_mmuRsp_physicalAddress);
	    __Vdly__dataCache_1___DOT__stageB_flusher_valid = 1U;
	}
    }
    // ALWAYS at ../../../../Briey.v:16471
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_119_ = 0U;
    } else {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_119_ 
		= vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_117_;
	}
	if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_jump_pcLoad_valid) 
	     | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherflushIt))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_119_ = 0U;
	}
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex 
	= __Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex;
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_200_ 
	= __Vdly___zz_200_;
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_error 
	= __Vdly__dataCache_1___DOT__loader_error;
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_flusher_valid 
	= __Vdly__dataCache_1___DOT__stageB_flusher_valid;
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
	= __Vdly__dataCache_1___DOT__stageB_mmuRsp_physicalAddress;
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_22_ 
	= (3U & VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_waysAllocator))));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid) 
	   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_195_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mip_MSIP) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mie_MSIE));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_194_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mip_MTIP) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mie_MTIE));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_196_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mip_MEIP) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mie_MEIE));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_15_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_valid) 
	   & (IData)(vlSymsp->TOP__Briey.__PVT___zz_55_));
    // ALWAYS at ../../../../Briey.v:16228
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_trapCause 
	= vlSymsp->TOP__Briey__axi_core_cpu.CsrPlugin_interrupt_code;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_hadException) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_trapCause 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code;
    }
    // ALWAYS at ../../../../Briey.v:16471
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 = 0U;
    } else {
	if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_jump_pcLoad_valid) 
	     | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherflushIt))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 = 0U;
	}
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 
		= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2;
	}
	if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_jump_pcLoad_valid) 
	     | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherflushIt))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 = 0U;
	}
    }
    // ALWAYS at ../../../../Briey.v:16452
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injectionPort_ready = 0U;
    if ((4U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_200_))) {
	if ((1U & (~ ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_200_) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_200_)))) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injectionPort_ready = 1U;
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:14796
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_haltItself = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_200_) 
		  >> 2U)))) {
	if ((2U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_200_))) {
	    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_200_)))) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_haltItself = 1U;
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:16471
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mstatus_MPIE = 0U;
    } else {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_237_) {
	    if ((3U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_targetPrivilege))) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mstatus_MPIE 
		    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mstatus_MIE;
	    }
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_238_) {
	    if ((3U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION 
			      >> 0x1cU)))) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mstatus_MPIE = 1U;
	    }
	}
	if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mstatus_MPIE 
								= 
								(1U 
								 & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_writeData 
								    >> 7U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:16471
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_117_ = 0U;
    } else {
	if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_jump_pcLoad_valid) 
	     | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherflushIt))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_117_ = 0U;
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_117_ 
		= (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_111_) 
		    & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherHalt))) 
		   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt)));
	}
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_207_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_119_) 
	   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_dataBypassValid_regNextWhen)));
    // ALWAYS at ../../../../Briey.v:4144
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willIncrement = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_15_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willIncrement = 1U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mstatus_MIE 
	= __Vdly__CsrPlugin_mstatus_MIE;
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_232_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_207_) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit));
    // ALWAYS at ../../../../Briey.v:4154
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_valueNext 
	= (7U & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_value) 
		 + (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willIncrement)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willOverflow 
	= ((7U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_value)) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willIncrement));
    // ALWAYS at ../../../../Briey.v:16471
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2 = 0U;
    } else {
	if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_jump_pcLoad_valid) 
	     | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherflushIt))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2 = 0U;
	}
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2 
		= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1;
	}
	if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_jump_pcLoad_valid) 
	     | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherflushIt))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2 = 0U;
	}
    }
    // ALWAYS at ../../../../Briey.v:16471
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION = 0U;
    } else {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION 
		= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_INSTRUCTION;
	}
    }
    // ALWAYS at ../../../../Briey.v:16471
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_111_ 
	= (1U & (~ (IData)(vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_14_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending) 
	   & (~ ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid) 
		 | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_117_) 
		    & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit))))));
    // ALWAYS at ../../../../Briey.v:14761
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_95_ = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_232_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_95_ = 1U;
    }
    // ALWAYS at ../../../../Briey.v:3843
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_valid 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand5;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_flusher_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_valid = 0U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_valid = 1U;
    }
    // ALWAYS at ../../../../Briey.v:3860
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_address 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand7;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_address 
	    = (0xffffffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
			    >> 8U));
    }
    // ALWAYS at ../../../../Briey.v:3833
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_address 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand4;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_flusher_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_address 
	    = (7U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
		     >> 5U));
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_address 
	    = (7U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
		     >> 5U));
    }
    // ALWAYS at ../../../../Briey.v:3823
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_way 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand3;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_flusher_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_way = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_way 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_waysAllocator;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_231_ 
	= (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_207_) 
	    & ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)) 
	       & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit) 
		  | (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute))))) 
	   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_95_)));
    // ALWAYS at ../../../../Briey.v:16471
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1 = 0U;
    } else {
	if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_jump_pcLoad_valid) 
	     | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherflushIt))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1 = 0U;
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1 
		= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0;
	}
	if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_jump_pcLoad_valid) 
	     | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherflushIt))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1 = 0U;
	}
    }
    vlSymsp->TOP__Briey__axi_core_cpu.lastStageInstruction 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION;
    vlSymsp->TOP__Briey__axi_core_cpu.lastStageRegFileWrite_payload_address 
	= (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION 
		    >> 7U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_ 
	= (1U & ((vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_DBusCachedPlugin_rspShifted 
		  >> 7U) & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION 
			       >> 0xeU))));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_ 
	= (1U & ((vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_DBusCachedPlugin_rspShifted 
		  >> 0xfU) & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION 
				 >> 0xeU))));
    // ALWAYS at ../../../../Briey.v:14754
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_94_ 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_95_;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_231_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_94_ = 1U;
    }
    // ALWAYS at ../../../../Briey.v:15465
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0x7fffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x1fU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xbfffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x1eU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xdfffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x1dU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xefffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x1cU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xf7ffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x1bU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xfbffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x1aU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xfdffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x19U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xfeffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x18U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xff7fffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x17U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xffbfffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x16U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xffdfffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x15U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xffefffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x14U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xfff7ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x13U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xfffbffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x12U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xfffdffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x11U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xfffeffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0x10U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xffff7fffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0xfU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xffffbfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0xeU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xffffdfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0xdU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xffffefffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0xcU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xfffff7ffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0xbU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xfffffbffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 0xaU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xfffffdffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 9U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xfffffeffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_133_) 
	      << 8U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_ 
	= ((0xffffff00U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_) 
	   | (0xffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_DBusCachedPlugin_rspShifted));
    // ALWAYS at ../../../../Briey.v:15494
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0x7fffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x1fU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xbfffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x1eU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xdfffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x1dU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xefffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x1cU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xf7ffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x1bU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xfbffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x1aU));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xfdffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x19U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xfeffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x18U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xff7fffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x17U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xffbfffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x16U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xffdfffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x15U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xffefffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x14U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xfff7ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x13U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xfffbffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x12U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xfffdffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x11U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xfffeffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_135_) 
	      << 0x10U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_ 
	= ((0xffff0000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_) 
	   | (0xffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_DBusCachedPlugin_rspShifted));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_230_ 
	= (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_207_) 
	    & (~ ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_tags_0_valid) 
		  & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_tags_0_address 
		     == (0xffffffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress 
				      >> 8U)))))) & 
	   (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_94_)));
    // ALWAYS at ../../../../Briey.v:16471
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0 = 0U;
    } else {
	if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_jump_pcLoad_valid) 
	     | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherflushIt))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0 = 0U;
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0 = 1U;
	}
    }
    // ALWAYS at ../../../../Briey.v:15131
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_readyForError = 1U;
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_readyForError = 0U;
    }
    // ALWAYS at ../../../../Briey.v:14747
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_93_ 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_94_;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_230_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_93_ = 1U;
    }
    // ALWAYS at ../../../../Briey.v:15303
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_rsp_redoFetch = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_232_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_rsp_redoFetch = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_230_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_rsp_redoFetch = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_readyForError)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_rsp_redoFetch = 0U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_229_ 
	= (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_207_) 
	    & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_tags_0_error)) 
	   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_93_)));
    // ALWAYS at ../../../../Briey.v:15316
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_210_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_rsp_redoFetch) 
	   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)));
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_230_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_210_ = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_readyForError)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_210_ = 0U;
    }
    // ALWAYS at ../../../../Briey.v:15339
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code 
	= vlSymsp->TOP__Briey__axi_core_cpu.__Vxrand2;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_231_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = 0xcU;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_229_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = 1U;
    }
    // ALWAYS at ../../../../Briey.v:14740
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_rsp_issueDetected 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_93_;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_229_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_rsp_issueDetected = 1U;
    }
    // ALWAYS at ../../../../Briey.v:15111
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_halt = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_rsp_issueDetected) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_halt = 1U;
    }
}

VL_INLINE_OPT void VBriey_VexRiscv::_sequent__TOP__Briey__axi_core_cpu__6(VBriey__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VBriey_VexRiscv::_sequent__TOP__Briey__axi_core_cpu__6\n"); );
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../../Briey.v:3389
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_1_ = 0U;
    if (vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder_io_input_r_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_1_ = 1U;
    }
    // ALWAYS at ../../../../Briey.v:3404
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire = 0U;
    if (vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder_io_input_r_valid) {
	if ((7U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire = 1U;
	}
    }
    // ALWAYS at ../../../../Briey.v:3396
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_2_ = 0U;
    if ((1U & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) 
	       | (~ ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
		     >> 3U))))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_2_ = 1U;
    }
}

VL_INLINE_OPT void VBriey_VexRiscv::_sequent__TOP__Briey__axi_core_cpu__7(VBriey__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VBriey_VexRiscv::_sequent__TOP__Briey__axi_core_cpu__7\n"); );
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../../Briey.v:17001
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_isPipBusy 
	= ((0U != (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid) 
		    << 3U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid) 
			       << 2U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid) 
					  << 1U) | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isValid))))) 
	   | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_incomingInstruction));
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_38_;
    }
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_INSTRUCTION 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_162_ 
	= ((0x2000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_INSTRUCTION)
	    ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_accumulator[0U]
	    : (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_rs1));
    // ALWAYS at ../../../../Briey.v:16715
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION;
    }
    // ALWAYS at ../../../../Briey.v:16066
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0x7ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x80000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xcU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xbffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x40000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xdU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xdffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x20000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xeU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xeffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x10000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xfU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xf7fffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x8000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x10U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xfbfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x4000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x11U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xfdfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x2000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x12U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xfefffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x1000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x13U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xff7ffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x800U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x14U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xffbffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x400U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x15U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xffdffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x200U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x16U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xffeffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x100U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x17U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xfff7fU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x80U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x18U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xfffbfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x40U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x19U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xfffdfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x20U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x1aU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xfffefU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (0x10U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x1bU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xffff7U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (8U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1cU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xffffbU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (4U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1dU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xffffdU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (2U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1eU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
	= ((0xffffeU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_) 
	   | (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1fU)));
    // ALWAYS at ../../../../Briey.v:16104
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_ 
	= ((0x3ffU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_)) 
	   | (0x400U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x15U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_ 
	= ((0x5ffU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_)) 
	   | (0x200U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x16U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_ 
	= ((0x6ffU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_)) 
	   | (0x100U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x17U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_ 
	= ((0x77fU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_)) 
	   | (0x80U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x18U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_ 
	= ((0x7bfU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_)) 
	   | (0x40U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x19U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_ 
	= ((0x7dfU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_)) 
	   | (0x20U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x1aU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_ 
	= ((0x7efU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_)) 
	   | (0x10U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x1bU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_ 
	= ((0x7f7U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_)) 
	   | (8U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1cU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_ 
	= ((0x7fbU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_)) 
	   | (4U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1dU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_ 
	= ((0x7fdU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_)) 
	   | (2U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1eU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_ 
	= ((0x7feU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_)) 
	   | (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1fU)));
    // ALWAYS at ../../../../Briey.v:16119
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x3ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x40000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xdU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x5ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x20000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xeU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x6ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x10000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xfU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x77fffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x8000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x10U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7bfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x4000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x11U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7dfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x2000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x12U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7efffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x1000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x13U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7f7ffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x800U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x14U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7fbffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x400U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x15U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7fdffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x200U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x16U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7feffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x100U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x17U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7ff7fU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x80U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x18U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7ffbfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x40U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x19U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7ffdfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x20U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x1aU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7ffefU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (0x10U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x1bU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7fff7U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (8U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1cU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7fffbU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (4U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1dU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7fffdU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (2U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1eU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
	= ((0x7fffeU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_) 
	   | (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1fU)));
    // ALWAYS at ../../../../Briey.v:15630
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
	= ((0U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC1_CTRL))
	    ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS1
	    : ((2U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC1_CTRL))
	        ? 4U : ((1U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC1_CTRL))
			 ? (0xfffff000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)
			 : (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				     >> 0xfU)))));
    // ALWAYS at ../../../../Briey.v:15649
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0x7ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x80000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xcU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xbffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x40000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xdU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xdffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x20000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xeU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xeffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x10000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xfU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xf7fffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x8000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x10U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xfbfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x4000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x11U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xfdfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x2000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x12U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xfefffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x1000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x13U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xff7ffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x800U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x14U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xffbffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x400U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x15U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xffdffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x200U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x16U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xffeffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x100U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x17U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xfff7fU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x80U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x18U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xfffbfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x40U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x19U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xfffdfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x20U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x1aU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xfffefU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (0x10U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x1bU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xffff7U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (8U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1cU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xffffbU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (4U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1dU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xffffdU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (2U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1eU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
	= ((0xffffeU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_) 
	   | (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1fU)));
    // ALWAYS at ../../../../Briey.v:15673
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0x7ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x80000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xcU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xbffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x40000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xdU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xdffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x20000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xeU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xeffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x10000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0xfU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xf7fffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x8000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x10U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xfbfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x4000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x11U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xfdfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x2000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x12U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xfefffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x1000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0x13U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xff7ffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x800U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x14U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xffbffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x400U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x15U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xffdffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x200U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x16U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xffeffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x100U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
			>> 0x17U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xfff7fU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x80U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x18U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xfffbfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x40U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x19U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xfffdfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x20U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x1aU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xfffefU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (0x10U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		       >> 0x1bU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xffff7U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (8U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1cU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xffffbU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (4U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1dU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xffffdU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (2U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1eU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
	= ((0xffffeU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_) 
	   | (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		    >> 0x1fU)));
    // ALWAYS at ../../../../Briey.v:16089
    if ((3U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BRANCH_CTRL))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_BranchPlugin_branch_src2 
	    = ((vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_189_ 
		<< 0xcU) | (0xfffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x14U)));
    } else {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_BranchPlugin_branch_src2 
	    = ((2U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BRANCH_CTRL))
	        ? (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_191_) 
		    << 0x15U) | ((0x100000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					       >> 0xbU)) 
				 | ((0xff000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION) 
				    | ((0x800U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						  >> 9U)) 
				       | (0x7feU & 
					  (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					   >> 0x14U))))))
	        : ((vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_193_ 
		    << 0xdU) | ((0x1000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					    >> 0x13U)) 
				| ((0x800U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					      << 4U)) 
				   | ((0x7e0U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						 >> 0x14U)) 
				      | (0x1eU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						  >> 7U)))))));
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_BranchPlugin_branch_src2 = 4U;
	}
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_MulPlugin_aHigh 
	= ((0x10000U & ((((1U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					>> 0xcU))) 
			  | (2U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0xcU)))) 
			 << 0x10U) & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
				      >> 0xfU))) | 
	   (0xffffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
		       >> 0x10U)));
    // ALWAYS at ../../../../Briey.v:15726
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfffffffeU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
		    >> 0x1fU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfffffffdU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (2U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
		    >> 0x1dU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfffffffbU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (4U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
		    >> 0x1bU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfffffff7U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (8U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
		    >> 0x19U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xffffffefU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x10U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
		       >> 0x17U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xffffffdfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x20U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
		       >> 0x15U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xffffffbfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x40U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
		       >> 0x13U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xffffff7fU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x80U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
		       >> 0x11U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfffffeffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x100U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			>> 0xfU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfffffdffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x200U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			>> 0xdU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfffffbffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x400U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			>> 0xbU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfffff7ffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x800U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			>> 9U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xffffefffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x1000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			 >> 7U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xffffdfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x2000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			 >> 5U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xffffbfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x4000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			 >> 3U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xffff7fffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x8000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			 >> 1U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfffeffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x10000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			  << 1U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfffdffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x20000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			  << 3U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfffbffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x40000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			  << 5U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfff7ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x80000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			  << 7U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xffefffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x100000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			   << 9U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xffdfffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x200000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			   << 0xbU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xffbfffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x400000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			   << 0xdU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xff7fffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x800000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			   << 0xfU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfeffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x1000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			    << 0x11U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfdffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x2000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			    << 0x13U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xfbffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x4000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			    << 0x15U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xf7ffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x8000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			    << 0x17U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xefffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x10000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			     << 0x19U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xdfffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x20000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			     << 0x1bU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0xbfffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x40000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			     << 0x1dU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_ 
	= ((0x7fffffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_) 
	   | (0x80000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			     << 0x1fU)));
    // ALWAYS at ../../../../Briey.v:15696
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_ 
	= ((0U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC2_CTRL))
	    ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS2
	    : ((1U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC2_CTRL))
	        ? ((vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_153_ 
		    << 0xcU) | (0xfffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x14U)))
	        : ((2U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC2_CTRL))
		    ? ((vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_155_ 
			<< 0xcU) | ((0xfe0U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					       >> 0x14U)) 
				    | (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						>> 7U))))
		    : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_PC)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_FullBarrelShifterPlugin_reversed 
	= ((1U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SHIFT_CTRL))
	    ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_157_
	    : vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_);
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_MulPlugin_bHigh 
	= ((0x10000U & (((1U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				       >> 0xcU))) << 0x10U) 
			& (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_ 
			   >> 0xfU))) | (0xffffU & 
					 (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_ 
					  >> 0x10U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_BranchPlugin_eq 
	= (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
	   == vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_);
    // ALWAYS at ../../../../Briey.v:15714
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_addSub 
	= ((vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
	    + ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC_USE_SUB_LESS)
	        ? (~ vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_)
	        : vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_)) 
	   + ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC_USE_SUB_LESS)
	       ? 1U : 0U));
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC2_FORCE_ZERO) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_addSub 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stage0_mask 
	= (0xfU & (((0U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				  >> 0xcU))) ? 1U : 
		    ((1U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				   >> 0xcU))) ? 3U : 0xfU)) 
		   << (3U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_addSub)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_less 
	= (1U & (((1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
			 >> 0x1fU)) == (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_ 
					      >> 0x1fU)))
		  ? (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_addSub 
		     >> 0x1fU) : ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC_LESS_UNSIGNED)
				   ? (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_ 
				      >> 0x1fU) : (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
						   >> 0x1fU))));
    // ALWAYS at ../../../../Briey.v:15958
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_180_ 
	= ((0U != (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BRANCH_CTRL)) 
	   & ((2U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BRANCH_CTRL)) 
	      | ((3U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BRANCH_CTRL)) 
		 | ((0U == (7U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				  >> 0xcU))) ? (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_BranchPlugin_eq)
		     : ((1U == (7U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0xcU))) ? 
			(~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_BranchPlugin_eq))
			 : ((5U == (5U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0xcU)))
			     ? (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_less))
			     : (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_less)))))));
}

VL_INLINE_OPT void VBriey_VexRiscv::_sequent__TOP__Briey__axi_core_cpu__8(VBriey__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VBriey_VexRiscv::_sequent__TOP__Briey__axi_core_cpu__8\n"); );
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../../Briey.v:15035
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_allowException = 1U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_godmode) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_allowException = 0U;
    }
    // ALWAYS at ../../../../Briey.v:16149
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_privilege = 3U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_forceMachineWire) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_privilege = 3U;
    }
    // ALWAYS at ../../../../Briey.v:15392
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_215_ 
	= (0xfU == (0xfU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
			    >> 0x1cU)));
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_103_) 
	 & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageA_request_wr)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_215_ = 1U;
    }
}

VL_INLINE_OPT void VBriey_VexRiscv::_sequent__TOP__Briey__axi_core_cpu__9(VBriey__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VBriey_VexRiscv::_sequent__TOP__Briey__axi_core_cpu__9\n"); );
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp13,95,0,3);
    VL_SIGW(__Vtemp14,95,0,3);
    VL_SIGW(__Vtemp15,95,0,3);
    VL_SIGW(__Vtemp16,95,0,3);
    // Body
    // ALWAYS at ../../../../Briey.v:4043
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_accessError 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)
	    ? ((IData)(vlSymsp->TOP__Briey.__PVT___zz_55_) 
	       & (0U != (IData)(vlSymsp->TOP__Briey.__PVT___zz_57_)))
	    : ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_waysHits) 
	       & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_tagsReadRsp_0_error)));
    // ALWAYS at ../../../../Briey.v:3853
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_error 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand6;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_error 
	    = ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_error) 
	       | (0U != (IData)(vlSymsp->TOP__Briey.__PVT___zz_57_)));
    }
    // ALWAYS at ../../../../Briey.v:14981
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_incomingInstruction = 0U;
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_117_) 
	 | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_119_))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_incomingInstruction = 1U;
    }
    // ALWAYS at ../../../../Briey.v:14769
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_word;
    if ((0U != (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_200_))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injectionPort_payload_regNext;
    }
    // ALWAYS at ../../../../Briey.v:16307
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData = 0U;
    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		  >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
		if ((0x10000000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				  >> 0x1bU)))) {
			if ((0x4000000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffff7ffU 
							  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mip_MEIP) 
							    << 0xbU));
						    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffff7fU 
							  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mip_MTIP) 
							    << 7U));
						    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffff7U 
							  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mip_MSIP) 
							    << 3U));
						}
					    }
					} else {
					    if ((0x200000U 
						 & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
						    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
							= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mtval;
						} else {
						    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
							= 
							((0x7fffffffU 
							  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mcause_interrupt) 
							    << 0x1fU));
						    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffff0U 
							  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData) 
							 | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mcause_exceptionCode));
						}
					    } else {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
						    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
							= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mepc;
						}
					    }
					}
				    }
				}
			    }
			} else {
			    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffff7ffU 
							  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mie_MEIE) 
							    << 0xbU));
						    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffff7fU 
							  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mie_MTIE) 
							    << 7U));
						    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffff7U 
							  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mie_MSIE) 
							    << 3U));
						}
					    }
					} else {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffe7ffU 
							  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mstatus_MPP) 
							    << 0xbU));
						    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffff7fU 
							  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mstatus_MPIE) 
							    << 7U));
						    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffff7U 
							  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mstatus_MIE) 
							    << 3U));
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:16471
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid = 0U;
    } else {
	if ((1U & ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)) 
		   | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_removeIt)))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid = 0U;
	}
	if ((1U & ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)) 
		   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_removeIt))))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid 
		= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid;
	}
    }
    // ALWAYS at ../../../../Briey.v:15247
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_ 
	= ((0x3ffU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_)) 
	   | (0x400U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			>> 0x15U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_ 
	= ((0x5ffU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_)) 
	   | (0x200U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			>> 0x16U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_ 
	= ((0x6ffU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_)) 
	   | (0x100U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			>> 0x17U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_ 
	= ((0x77fU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_)) 
	   | (0x80U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		       >> 0x18U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_ 
	= ((0x7bfU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_)) 
	   | (0x40U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		       >> 0x19U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_ 
	= ((0x7dfU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_)) 
	   | (0x20U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		       >> 0x1aU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_ 
	= ((0x7efU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_)) 
	   | (0x10U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		       >> 0x1bU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_ 
	= ((0x7f7U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_)) 
	   | (8U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		    >> 0x1cU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_ 
	= ((0x7fbU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_)) 
	   | (4U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		    >> 0x1dU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_ 
	= ((0x7fdU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_)) 
	   | (2U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		    >> 0x1eU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_ 
	= ((0x7feU & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_)) 
	   | (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		    >> 0x1fU)));
    // ALWAYS at ../../../../Briey.v:15262
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x3ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x40000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			  >> 0xdU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x5ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x20000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			  >> 0xeU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x6ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x10000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			  >> 0xfU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x77fffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x8000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			 >> 0x10U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7bfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x4000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			 >> 0x11U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7dfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x2000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			 >> 0x12U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7efffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x1000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			 >> 0x13U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7f7ffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x800U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			>> 0x14U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7fbffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x400U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			>> 0x15U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7fdffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x200U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			>> 0x16U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7feffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x100U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			>> 0x17U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7ff7fU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x80U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		       >> 0x18U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7ffbfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x40U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		       >> 0x19U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7ffdfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x20U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		       >> 0x1aU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7ffefU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (0x10U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		       >> 0x1bU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7fff7U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (8U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		    >> 0x1cU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7fffbU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (4U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		    >> 0x1dU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7fffdU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (2U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		    >> 0x1eU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
	= ((0x7fffeU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_) 
	   | (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		    >> 0x1fU)));
    // ALWAYS at ../../../../Briey.v:15167
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x3ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x40000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			  >> 0xdU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x5ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x20000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			  >> 0xeU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x6ffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x10000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			  >> 0xfU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x77fffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x8000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			 >> 0x10U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7bfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x4000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			 >> 0x11U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7dfffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x2000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			 >> 0x12U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7efffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x1000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			 >> 0x13U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7f7ffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x800U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			>> 0x14U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7fbffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x400U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			>> 0x15U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7fdffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x200U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			>> 0x16U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7feffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x100U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			>> 0x17U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7ff7fU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x80U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		       >> 0x18U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7ffbfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x40U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		       >> 0x19U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7ffdfU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x20U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		       >> 0x1aU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7ffefU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (0x10U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		       >> 0x1bU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7fff7U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (8U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		    >> 0x1cU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7fffbU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (4U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		    >> 0x1dU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7fffdU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (2U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		    >> 0x1eU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
	= ((0x7fffeU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_) 
	   | (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		    >> 0x1fU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_90_ 
	= (0U != (((0x17U == (0x5fU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
		   << 0x13U) | (((0x6fU == (0x7fU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
				 << 0x12U) | (((3U 
						== 
						(0x106fU 
						 & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
					       << 0x11U) 
					      | (((0x1073U 
						   == 
						   (0x107fU 
						    & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
						  << 0x10U) 
						 | (((0x2073U 
						      == 
						      (0x207fU 
						       & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
						     << 0xfU) 
						    | (((0x4063U 
							 == 
							 (0x407fU 
							  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
							<< 0xeU) 
						       | (((0x2013U 
							    == 
							    (0x207fU 
							     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
							   << 0xdU) 
							  | (((0x23U 
							       == 
							       (0x603fU 
								& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
							      << 0xcU) 
							     | (((3U 
								  == 
								  (0x207fU 
								   & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
								 << 0xbU) 
								| (((3U 
								     == 
								     (0x505fU 
								      & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
								    << 0xaU) 
								   | (((0x63U 
									== 
									(0x707bU 
									 & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
								       << 9U) 
								      | (((0xfU 
									   == 
									   (0x607fU 
									    & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
									  << 8U) 
									 | (((0x33U 
									      == 
									      (0xfc00007fU 
									       & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
									     << 7U) 
									    | (((0x500fU 
										== 
										(0x1f0707fU 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 6U) 
									       | (((0x5013U 
										== 
										(0xbc00707fU 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 5U) 
										| (((0x1013U 
										== 
										(0xfc00307fU 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 4U) 
										| (((0x5033U 
										== 
										(0xbe00707fU 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 3U) 
										| (((0x33U 
										== 
										(0xbe00707fU 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 2U) 
										| (((0x10200073U 
										== 
										(0xdfffffffU 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 1U) 
										| (0x100073U 
										== vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)))))))))))))))))))));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_174_ 
	= ((0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_INSTRUCTION 
		     >> 7U)) == (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
					  >> 0xfU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_175_ 
	= ((0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_INSTRUCTION 
		     >> 7U)) == (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
					  >> 0x14U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_176_ 
	= ((0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		     >> 7U)) == (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
					  >> 0xfU)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_177_ 
	= ((0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
		     >> 7U)) == (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
					  >> 0x14U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
	= (((0U != (((0x48U == (0x48U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
		     << 5U) | (((0x1010U == (0x1010U 
					     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
				<< 4U) | (((0x2010U 
					    == (0x2010U 
						& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
					   << 3U) | 
					  (((0x10U 
					     == (0x50U 
						 & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
					    << 2U) 
					   | (((4U 
						== 
						(0xcU 
						 & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
					       << 1U) 
					      | (0U 
						 == 
						 (0x28U 
						  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)))))))) 
	    << 0x1fU) | (((0x50U == (0x103050U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
			  << 0x1eU) | (((0U != (((4U 
						  == 
						  (0x14U 
						   & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
						 << 1U) 
						| (0x4050U 
						   == 
						   (0x4050U 
						    & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)))) 
					<< 0x1dU) | 
				       (((0U != (((4U 
						   == 
						   (0x44U 
						    & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
						  << 1U) 
						 | (0x4050U 
						    == 
						    (0x4050U 
						     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)))) 
					 << 0x1cU) 
					| (((0U == 
					     (0x1000U 
					      & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
					    << 0x1bU) 
					   | (((0x2004020U 
						== 
						(0x2004064U 
						 & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
					       << 0x1aU) 
					      | (((0U 
						   != 
						   (((0x1050U 
						      == 
						      (0x1050U 
						       & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
						     << 1U) 
						    | (0x2050U 
						       == 
						       (0x2050U 
							& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)))) 
						  << 0x19U) 
						 | (((0U 
						      != 
						      (((0U 
							 == 
							 (0x44U 
							  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
							<< 3U) 
						       | (((0U 
							    == 
							    (0x18U 
							     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
							   << 2U) 
							  | (((0x2000U 
							       == 
							       (0x6004U 
								& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
							      << 1U) 
							     | (0x1000U 
								== 
								(0x5004U 
								 & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)))))) 
						     << 0x18U) 
						    | (((0U 
							 != 
							 (((0x48U 
							    == 
							    (0x48U 
							     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
							   << 1U) 
							  | (4U 
							     == 
							     (0x1cU 
							      & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)))) 
							<< 0x17U) 
						       | (((0x40U 
							    == 
							    (0x58U 
							     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
							   << 0x16U) 
							  | (((0U 
							       != 
							       (((0x20U 
								  == 
								  (0x34U 
								   & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
								 << 1U) 
								| (0x20U 
								   == 
								   (0x64U 
								    & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)))) 
							      << 0x15U) 
							     | (((0U 
								  != 
								  (((4U 
								     == 
								     (4U 
								      & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
								    << 4U) 
								   | (((0x2010U 
									== 
									(0x2030U 
									 & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
								       << 3U) 
								      | (((0x10U 
									   == 
									   (0x1030U 
									    & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
									  << 2U) 
									 | (((0x2020U 
									      == 
									      (0x2002060U 
									       & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
									     << 1U) 
									    | (0x20U 
									       == 
									       (0x2003020U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION))))))) 
								 << 0x14U) 
								| (((0U 
								     != 
								     (((0x40U 
									== 
									(0x50U 
									 & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
								       << 2U) 
								      | (((0U 
									   == 
									   (0x38U 
									    & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
									  << 1U) 
									 | (0x40U 
									    == 
									    (0x103040U 
									     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION))))) 
								    << 0x13U) 
								   | (((0U 
									!= 
									(((0x2000U 
									   == 
									   (0x2010U 
									    & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
									  << 1U) 
									 | (0x1000U 
									    == 
									    (0x5000U 
									     & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)))) 
								       << 0x12U) 
								      | (((0x2000030U 
									   == 
									   (0x2004074U 
									    & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
									  << 0x11U) 
									 | (((0x1008U 
									      == 
									      (0x5048U 
									       & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
									     << 0x10U) 
									    | (((0U 
										!= 
										(((0x40U 
										== 
										(0x40U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 4U) 
										| (((4U 
										== 
										(4U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 3U) 
										| (((0x4020U 
										== 
										(0x4020U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 2U) 
										| (((0x10U 
										== 
										(0x30U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 1U) 
										| (0x20U 
										== 
										(0x2000020U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION))))))) 
										<< 0xfU) 
									       | (((0x20U 
										== 
										(0x20U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 0xeU) 
										| (((0U 
										== 
										(0x58U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 0xdU) 
										| (((0U 
										!= 
										(((0x40U 
										== 
										(0x44U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 2U) 
										| (((0x2010U 
										== 
										(0x2014U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 1U) 
										| (0x40000030U 
										== 
										(0x40000034U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION))))) 
										<< 0xcU) 
										| (((0x4008U 
										== 
										(0x4048U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 0xbU) 
										| (((0x24U 
										== 
										(0x64U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 0xaU) 
										| (((0x1000U 
										== 
										(0x1000U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 9U) 
										| (((0x2000U 
										== 
										(0x3000U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 8U) 
										| (((0U 
										== 
										(0x1000U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 7U) 
										| (((0x50U 
										== 
										(0x10003050U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 6U) 
										| (((0x4010U 
										== 
										(0x4014U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 5U) 
										| (((0x2010U 
										== 
										(0x6014U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 4U) 
										| (((0U 
										!= 
										(((0x5010U 
										== 
										(0x7034U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 1U) 
										| (0x5020U 
										== 
										(0x2007064U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)))) 
										<< 3U) 
										| (((0U 
										!= 
										(((0x40001010U 
										== 
										(0x40003054U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 2U) 
										| (((0x1010U 
										== 
										(0x7034U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 1U) 
										| (0x1010U 
										== 
										(0x2007054U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION))))) 
										<< 2U) 
										| (((0U 
										!= 
										(((4U 
										== 
										(4U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 1U) 
										| (0x20U 
										== 
										(0x70U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)))) 
										<< 1U) 
										| (0U 
										!= 
										(((4U 
										== 
										(4U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)) 
										<< 1U) 
										| (0U 
										== 
										(0x20U 
										& vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION)))))))))))))))))))))))))))))))))));
    // ALWAYS at ../../../../Briey.v:16345
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_writeData 
	= ((0x2000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)
	    ? ((0x1000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION)
	        ? (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
		   & (~ vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_))
	        : (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData 
		   | vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_))
	    : vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_);
    // ALWAYS at ../../../../Briey.v:14700
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_REGFILE_WRITE_VALID 
	= (1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
		 >> 0x1fU));
    if ((0U == (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			 >> 7U)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_REGFILE_WRITE_VALID = 0U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_pcs_4 
	= (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress 
	   + ((2U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
			    >> 0x16U))) ? (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_129_) 
					    << 0x15U) 
					   | ((0x100000U 
					       & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
						  >> 0xbU)) 
					      | ((0xff000U 
						  & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION) 
						 | ((0x800U 
						     & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
							>> 9U)) 
						    | (0x7feU 
						       & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
							  >> 0x14U))))))
	       : ((vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_131_ 
		   << 0xdU) | ((0x1000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
					   >> 0x13U)) 
			       | ((0x800U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
					     << 4U)) 
				  | ((0x7e0U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
						>> 0x14U)) 
				     | (0x1eU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
						 >> 7U))))))));
    // ALWAYS at ../../../../Briey.v:15189
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch 
	= ((2U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
			 >> 0x16U))) | ((1U == (3U 
						& (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
						   >> 0x16U))) 
					& (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_122_ 
					   >> 0x12U)));
    if ((1U & ((2U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
			     >> 0x16U))) ? (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
					    >> 0x15U)
	        : (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
		   >> 8U)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch = 0U;
    }
    // ALWAYS at ../../../../Briey.v:16471
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid = 0U;
    } else {
	if ((1U & ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)) 
		   | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_removeIt)))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid = 0U;
	}
	if ((1U & ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)) 
		   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_removeIt))))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid 
		= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid;
	}
    }
    vlSymsp->TOP__Briey__axi_core_cpu.lastStageIsValid 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid;
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_224_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_238_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_ENV_CTRL));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MEMORY_ENABLE));
    // ALWAYS at ../../../../Briey.v:14709
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_91_ 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA;
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid) 
	 & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MEMORY_ENABLE))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_91_ 
	    = ((0U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION 
			     >> 0xcU))) ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_
	        : ((1U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION 
				 >> 0xcU))) ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_
		    : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_DBusCachedPlugin_rspShifted));
    }
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid) 
	 & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_IS_MUL))) {
	__Vtemp13[0U] = (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MUL_LOW);
	__Vtemp13[1U] = ((0xfff00000U & (VL_NEGATE_I((IData)(
							     (1U 
							      & (IData)(
									(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MUL_LOW 
									 >> 0x33U))))) 
					 << 0x14U)) 
			 | (IData)((vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MUL_LOW 
				    >> 0x20U)));
	__Vtemp13[2U] = (3U & (VL_NEGATE_I((IData)(
						   (1U 
						    & (IData)(
							      (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MUL_LOW 
							       >> 0x33U))))) 
			       >> 0xcU));
	VL_EXTEND_WQ(66,34, __Vtemp14, vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MUL_HH);
	VL_SHIFTL_WWI(66,66,32, __Vtemp15, __Vtemp14, 0x20U);
	VL_ADD_W(3, __Vtemp16, __Vtemp13, __Vtemp15);
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_91_ 
	    = ((0U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION 
			     >> 0xcU))) ? (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MUL_LOW)
	        : __Vtemp16[1U]);
    }
    // ALWAYS at ../../../../Briey.v:4107
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_payload_last 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand14;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_payload_last = 1U;
    }
    // ALWAYS at ../../../../Briey.v:4092
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_payload_length 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand13;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_payload_length 
	    = ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)
	        ? 0U : ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_14_)
			 ? 0U : 7U));
    }
    // ALWAYS at ../../../../Briey.v:4122
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_payload_wr 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_wr;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_14_)))) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_payload_wr = 0U;
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:4077
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_payload_address 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand12;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_payload_address 
	    = ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)
	        ? (0xfffffffcU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress)
	        : ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_14_)
		    ? (0xfffffffcU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress)
		    : (0xffffffe0U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress)));
    }
    // ALWAYS at ../../../../Briey.v:3900
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand9;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_14_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address 
		    = (0x3fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
				>> 2U));
	    }
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_15_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address 
	    = ((0x38U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
			 >> 2U)) | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_value));
    }
    // ALWAYS at ../../../../Briey.v:3886
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_way 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand8;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_14_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_way 
		    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_waysHits;
	    }
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_15_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_way 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_waysAllocator;
    }
    // ALWAYS at ../../../../Briey.v:4024
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_redo = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_14_) {
		if (((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_wr)) 
		     & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_colisions) 
			& (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_waysHits)))) {
		    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_redo = 1U;
		}
	    }
	}
    }
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) 
	 & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_exception))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_redo = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_redo = 1U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_unalignedAccess 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) 
	   & (((2U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_size)) 
	       & (0U != (3U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress))) 
	      | ((1U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_size)) 
		 & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_mmuException 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) 
	   & (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_exception) 
	       | ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_allowWrite)) 
		  & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_wr))) 
	      | ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_allowWrite)) 
		 & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_wr)))));
    // ALWAYS at ../../../../Briey.v:3928
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand11;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_14_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask 
		    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mask;
	    }
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_15_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask = 0xfU;
    }
    // ALWAYS at ../../../../Briey.v:3914
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_data 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand10;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_14_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_data 
		    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_data;
	    }
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_15_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_data 
	    = vlSymsp->TOP__Briey.__PVT___zz_56_;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.lastStageRegFileWrite_payload_data 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_91_;
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_226_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__BranchPlugin_branchExceptionPort_valid 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid) 
	   & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_BRANCH_DO) 
	      & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_BRANCH_CALC 
		 >> 1U)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_blockedBySideEffects 
	= (0U != (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid) 
		   << 1U) | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_247_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_235_ 
	= (0U == (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid) 
		   << 1U) | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_228_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_IS_DIV));
    // ALWAYS at ../../../../Briey.v:16471
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid = 0U;
    } else {
	if ((1U & ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)) 
		   | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_removeIt)))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid = 0U;
	}
	if ((1U & ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isStuck)) 
		   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_removeIt))))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid 
		= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isValid;
	}
    }
    // ALWAYS at ../../../../Briey.v:15403
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_redoBranch_valid = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_redo) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_redoBranch_valid = 1U;
	}
    }
    // ALWAYS at ../../../../Briey.v:15432
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_payload_code 
	= vlSymsp->TOP__Briey__axi_core_cpu.__Vxrand3;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_accessError) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_payload_code 
		= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MEMORY_WR)
		    ? 7U : 5U);
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_unalignedAccess) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_payload_code 
		= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MEMORY_WR)
		    ? 6U : 4U);
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_mmuException) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_payload_code 
		= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MEMORY_WR)
		    ? 0xfU : 0xdU);
	}
    }
    // ALWAYS at ../../../../Briey.v:15413
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_valid = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_accessError) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_unalignedAccess) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_mmuException) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
	}
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_redo) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_valid = 0U;
	}
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_13_ 
	= ((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_exception) 
	     | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_accessError)) 
	    | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_mmuException)) 
	   | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_unalignedAccess));
    // ALWAYS at ../../../../Briey.v:15840
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_willIncrement = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_228_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_done)))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_willIncrement = 1U;
	}
    }
    // ALWAYS at ../../../../Briey.v:14655
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_44_ 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_REGFILE_WRITE_DATA;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid) {
	if ((1U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_CTRL))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_44_ 
		= vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_158_;
	} else {
	    if (((2U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_CTRL)) 
		 | (3U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_CTRL)))) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_44_ 
		    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT;
	    }
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_228_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_44_ 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_result;
    }
    // ALWAYS at ../../../../Briey.v:14886
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_haltItself = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_228_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_done)))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_haltItself = 1U;
	}
    }
    // ALWAYS at ../../../../Briey.v:15143
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isValid 
	= (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_119_) 
	    & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_halt))) 
	   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_decodeRemoved)));
    if ((1U & (~ ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_200_) 
		  >> 2U)))) {
	if ((2U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_200_))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isValid = 1U;
	}
    }
    // ALWAYS at ../../../../Briey.v:14937
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_flushAll = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_redoBranch_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_flushAll = 1U;
    }
    // ALWAYS at ../../../../Briey.v:4055
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_valid = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_valid 
		= (1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_memCmdSent)));
	} else {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_14_) {
		if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_wr) {
		    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_valid = 1U;
		}
	    } else {
		if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_memCmdSent)))) {
		    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_valid = 1U;
		}
	    }
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_13_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_valid = 0U;
    }
    // ALWAYS at ../../../../Briey.v:3810
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_valid = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_flusher_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_valid 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_flusher_valid;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_13_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_valid = 0U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_valid = 1U;
    }
    // ALWAYS at ../../../../Briey.v:3867
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_valid = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_14_) {
		if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_wr) 
		     & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_waysHits))) {
		    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_valid = 1U;
		}
	    }
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_13_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_valid = 0U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_15_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_valid = 1U;
    }
    // ALWAYS at ../../../../Briey.v:3976
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_loaderValid = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_14_)))) {
		if (vlSymsp->TOP__Briey.__PVT___zz_93_) {
		    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_loaderValid = 1U;
		}
	    }
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_13_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_loaderValid = 0U;
    }
    // ALWAYS at ../../../../Briey.v:3992
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_flusher_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess) {
	    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_wr)
		  ? (IData)(vlSymsp->TOP__Briey.__PVT___zz_93_)
		  : (IData)(vlSymsp->TOP__Briey.__PVT___zz_55_))) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt = 0U;
	    }
	} else {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_14_) {
		if ((1U & ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_wr)) 
			   | (IData)(vlSymsp->TOP__Briey.__PVT___zz_93_)))) {
		    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt = 0U;
		}
	    }
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_13_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt = 0U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_201_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isValid) 
	   & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
	      >> 0x10U));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decodeExceptionPort_valid 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isValid) 
	   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_90_)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_227_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_223_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_CSR));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_249_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_211_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_MEMORY_ENABLE));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_234_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_DO_EBREAK));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_219_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_MEMORY_MANAGMENT));
    // ALWAYS at ../../../../Briey.v:16210
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_pipelineLiberator_done 
	= ((0U == (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid) 
		    << 2U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid) 
			       << 1U) | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid)))) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4));
    if ((0U != (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack) 
		 << 2U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory) 
			    << 1U) | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute))))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_hadException) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    // ALWAYS at ../../../../Briey.v:16194
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_flushAll) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack = 0U;
    }
    // ALWAYS at ../../../../Briey.v:14927
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_removeIt = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_flushAll) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_removeIt = 1U;
    }
    // ALWAYS at ../../../../Briey.v:3767
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_2_ = 0U;
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_valid) 
	 & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_way))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_2_ = 1U;
    }
    // ALWAYS at ../../../../Briey.v:3760
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_1_ = 0U;
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_valid) 
	 & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_way))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_1_ = 1U;
    }
    // ALWAYS at ../../../../Briey.v:3966
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRspFreeze = 0U;
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_loaderValid) 
	 | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_valid))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRspFreeze = 1U;
    }
    // ALWAYS at ../../../../Briey.v:14919
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself = 1U;
    }
    // ALWAYS at ../../../../Briey.v:3413
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid) 
	   | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
    if ((1U & (~ ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
		  >> 3U)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_3_)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_201_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    // ALWAYS at ../../../../Briey.v:14570
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_38_ 
	= ((2U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ALU_CTRL))
	    ? ((2U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
	        ? (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
		   & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_)
	        : ((1U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
		    ? (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
		       | vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_)
		    : (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
		       ^ vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_)))
	    : ((1U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ALU_CTRL))
	        ? (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_less)
	        : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_addSub));
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_223_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_38_ 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData;
    }
    // ALWAYS at ../../../../Briey.v:15880
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_166_ = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_247_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_174_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_166_ = 1U;
	    }
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_249_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_176_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_166_ = 1U;
	    }
	}
    }
    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
		  >> 0x18U)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_166_ = 0U;
    }
    // ALWAYS at ../../../../Briey.v:15908
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_167_ = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_247_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_175_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_167_ = 1U;
	    }
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_249_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_177_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_167_ = 1U;
	    }
	}
    }
    if ((1U & (~ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
		  >> 0x15U)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_167_ = 0U;
    }
    // ALWAYS at ../../../../Briey.v:14972
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherflushIt = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_234_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_235_) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherflushIt = 1U;
	}
    }
    // ALWAYS at ../../../../Briey.v:14857
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_haltByOther = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_234_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_haltByOther = 1U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_16_ 
	= (((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_219_) 
	      & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_211_))) 
	     & (~ ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid) 
		   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MEMORY_ENABLE)))) 
	    & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_))) 
	   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_redo)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_17_ 
	= (1U & ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)) 
		 & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRspFreeze))));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isFiring 
	= (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid) 
	    & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself))) 
	   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_removeIt)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__BranchPlugin_jumpInterface_valid 
	= (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid) 
	    & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself))) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_BRANCH_DO));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_haltItself) 
	   | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself));
    // ALWAYS at ../../../../Briey.v:15089
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt = 1U;
    }
    // ALWAYS at ../../../../Briey.v:14582
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_RS2 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_221_;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_169_) {
	if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_170_) 
	     == (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			  >> 0x14U)))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_RS2 
		= vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_171_;
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_224_) {
	if (((0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION 
		       >> 7U)) == (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
					    >> 0x14U)))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_RS2 
		= vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_91_;
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_226_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_175_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_RS2 
		    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_44_;
	    }
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_227_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_177_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_RS2 
		    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_38_;
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:14612
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_RS1 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_220_;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_169_) {
	if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_170_) 
	     == (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
			  >> 0xfU)))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_RS1 
		= vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_171_;
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_224_) {
	if (((0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION 
		       >> 7U)) == (0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
					    >> 0xfU)))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_RS1 
		= vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_91_;
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_226_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_174_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_RS1 
		    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_44_;
	    }
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_227_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE) {
	    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_176_) {
		vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_RS1 
		    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_38_;
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:4015
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_flush_ready = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_16_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_flush_ready = 1U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.lastStageIsFiring 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isFiring;
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_168_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isFiring));
    // ALWAYS at ../../../../Briey.v:15591
    vlSymsp->TOP__Briey__axi_core_cpu.lastStageRegFileWrite_valid 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isFiring));
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_149_) {
	vlSymsp->TOP__Briey__axi_core_cpu.lastStageRegFileWrite_valid = 1U;
    }
    // ALWAYS at ../../../../Briey.v:14871
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_flushAll = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__BranchPlugin_jumpInterface_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_flushAll = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__BranchPlugin_branchExceptionPort_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_flushAll = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_234_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_235_) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_flushAll = 1U;
	}
    }
    // ALWAYS at ../../../../Briey.v:15849
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_willClear = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_willClear = 1U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_12_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_211_) 
	   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuckByOthers 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_haltByOther) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck) 
	      | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)));
    // ALWAYS at ../../../../Briey.v:14842
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_haltItself = 0U;
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_219_) 
	 & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_flush_ready)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_haltItself = 1U;
    }
    if ((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_redo) 
	  & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid)) 
	 & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_MEMORY_ENABLE))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_haltItself = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_223_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_blockedBySideEffects) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_haltItself = 1U;
	}
    }
    // ALWAYS at ../../../../Briey.v:14692
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_62_ = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.lastStageRegFileWrite_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_62_ = 1U;
    }
    // ALWAYS at ../../../../Briey.v:15858
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_valueNext 
	= (0x3fU & (((0x21U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_value)) 
		     & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_willIncrement))
		     ? 0U : ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_value) 
			     + (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_willIncrement))));
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_willClear) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_valueNext = 0U;
    }
    // ALWAYS at ../../../../Briey.v:3782
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsReadCmd_valid = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_12_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsReadCmd_valid = 1U;
    }
    // ALWAYS at ../../../../Briey.v:3796
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataReadCmd_valid = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_12_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataReadCmd_valid = 1U;
    }
    // ALWAYS at ../../../../Briey.v:3789
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsReadCmd_payload 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand1;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_12_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsReadCmd_payload 
	    = (7U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_addSub 
		     >> 5U));
    }
    // ALWAYS at ../../../../Briey.v:3803
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataReadCmd_payload 
	= vlSymsp->TOP__Briey__axi_core_cpu.dataCache_1___DOT____Vxrand2;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_12_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataReadCmd_payload 
	    = (0x3fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_addSub 
			>> 2U));
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_writeEnable 
	= (((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid) 
	      & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_CSR)) 
	     & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_CSR_WRITE_OPCODE)) 
	    & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_blockedBySideEffects))) 
	   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuckByOthers)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_haltItself) 
	   | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuckByOthers));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_5_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataReadCmd_valid) 
	   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)));
}

VL_INLINE_OPT void VBriey_VexRiscv::_multiclk__TOP__Briey__axi_core_cpu__10(VBriey__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VBriey_VexRiscv::_multiclk__TOP__Briey__axi_core_cpu__10\n"); );
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_252_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mstatus_MIE) 
	   | (3U > (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_privilege)));
    // ALWAYS at ../../../../Briey.v:16221
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_targetPrivilege 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_interrupt_targetPrivilege;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_hadException) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_targetPrivilege 
	    = ((3U > (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_privilege))
	        ? 3U : (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_privilege));
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_239_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_stepIt) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_incomingInstruction));
    vlSymsp->TOP__Briey__axi_core_cpu.CsrPlugin_interruptJump 
	= (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_interrupt_valid) 
	    & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_pipelineLiberator_done)) 
	   & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_allowInterrupts));
    // ALWAYS at ../../../../Briey.v:14818
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_haltByOther = 0U;
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isValid) 
	 & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_166_) 
	    | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_167_)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_haltByOther = 1U;
    }
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_interrupt_valid) 
	 & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_allowInterrupts))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_haltByOther 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isValid;
    }
    if ((0U != ((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid) 
		  & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_ENV_CTRL)) 
		 << 2U) | ((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid) 
			     & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_ENV_CTRL)) 
			    << 1U) | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid) 
				      & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ENV_CTRL)))))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_haltByOther = 1U;
    }
    // ALWAYS at ../../../../Briey.v:16246
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_xtvec_base 
	= vlSymsp->TOP__Briey__axi_core_cpu.__Vxrand5;
    if ((3U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_targetPrivilege))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_xtvec_base = 0x20000008U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_237_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_hadException) 
	   | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.CsrPlugin_interruptJump));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isStuck 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_haltItself) 
	   | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_haltByOther) 
	      | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck) 
		  | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)) 
		 | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself))));
    // ALWAYS at ../../../../Briey.v:15005
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_jumpInterface_payload 
	= vlSymsp->TOP__Briey__axi_core_cpu.__Vxrand1;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_237_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_jumpInterface_payload 
	    = (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_xtvec_base 
	       << 2U);
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_238_) {
	if ((3U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION 
			  >> 0x1cU)))) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_jumpInterface_payload 
		= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mepc;
	}
    }
    // ALWAYS at ../../../../Briey.v:14995
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_jumpInterface_valid = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_237_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_jumpInterface_valid = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_238_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_jumpInterface_valid = 1U;
    }
    // ALWAYS at ../../../../Briey.v:14906
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_flushAll = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_flushAll = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_237_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_flushAll = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_238_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_flushAll = 1U;
    }
    // ALWAYS at ../../../../Briey.v:14948
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherHalt = 0U;
    if ((0U != (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack) 
		 << 3U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory) 
			    << 2U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute) 
				       << 1U) | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode)))))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_237_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_238_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_234_) {
	if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_235_) {
	    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherHalt = 1U;
	}
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_haltIt) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_239_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_96_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isStuck)
	    ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION
	    : ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)
	        ? 0U : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_12_));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready 
	= (1U & ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isStuck)) 
		 & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_halt))));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isFlushed 
	= (0U != (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_flushAll) 
		   << 2U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_flushAll) 
			      << 1U) | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_flushAll))));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isFlushed 
	= (0U != (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_flushAll) 
		   << 1U) | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_flushAll)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isFlushed 
	= (0U != (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_flushAll) 
		   << 3U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_flushAll) 
			      << 2U) | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_flushAll) 
					<< 1U))));
    // ALWAYS at ../../../../Briey.v:15326
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodeExceptionPort_valid = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_231_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodeExceptionPort_valid 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_readyForError;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_229_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodeExceptionPort_valid 
	    = vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_readyForError;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherHalt) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodeExceptionPort_valid = 0U;
    }
    // ALWAYS at ../../../../Briey.v:15054
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_propagatePc = 0U;
    if (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_117_) 
	 & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_propagatePc = 1U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_241_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_111_) 
	   & (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) 
	       & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt))) 
	      & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherHalt))));
    // ALWAYS at ../../../../Briey.v:14864
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isFlushed) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_removeIt = 1U;
    }
    // ALWAYS at ../../../../Briey.v:16177
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isFlushed) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute = 0U;
    }
    // ALWAYS at ../../../../Briey.v:14896
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__BranchPlugin_branchExceptionPort_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_removeIt = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isFlushed) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_removeIt = 1U;
    }
    // ALWAYS at ../../../../Briey.v:16184
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__BranchPlugin_branchExceptionPort_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isFlushed) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory = 0U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_197_ 
	= (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decodeExceptionPort_valid) 
	    << 1U) | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodeExceptionPort_valid));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_233_ 
	= (0U != (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decodeExceptionPort_valid) 
		   << 1U) | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodeExceptionPort_valid)));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_343_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_197_) 
	   & (~ ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_197_) 
		 - (IData)(1U))));
    // ALWAYS at ../../../../Briey.v:16167
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_233_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isFlushed) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = 0U;
    }
    // ALWAYS at ../../../../Briey.v:14831
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_233_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_removeIt = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isFlushed) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_removeIt = 1U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_predictionJumpInterface_valid 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch) 
	   & (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isValid) 
	       & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isStuck))) 
	      & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_removeIt))));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_jump_pcLoad_valid 
	= (0U != (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_jumpInterface_valid) 
		   << 4U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__BranchPlugin_jumpInterface_valid) 
			      << 3U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_redoBranch_valid) 
					 << 2U) | (
						   ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_rsp_redoFetch) 
						    << 1U) 
						   | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_predictionJumpInterface_valid))))));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_104_ 
	= (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_predictionJumpInterface_valid) 
	    << 4U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_rsp_redoFetch) 
		       << 3U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__BranchPlugin_jumpInterface_valid) 
				  << 2U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_jumpInterface_valid) 
					     << 1U) 
					    | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_redoBranch_valid)))));
    // ALWAYS at ../../../../Briey.v:15070
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_samplePcNext = 0U;
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_propagatePc) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_samplePcNext = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_jump_pcLoad_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_samplePcNext = 1U;
    }
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_241_) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_samplePcNext = 1U;
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_105_ 
	= ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_104_) 
	   & (~ ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_104_) 
		 - (IData)(1U))));
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_353_ 
	= ((4U & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_105_) 
		  >> 2U)) | ((2U & ((0x7ffffffeU & 
				     ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_105_) 
				      >> 1U)) | (0x3ffffffeU 
						 & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_105_) 
						    >> 2U)))) 
			     | (1U & (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_105_) 
				       >> 1U) | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_105_) 
						 >> 3U)))));
    // ALWAYS at ../../../../Briey.v:15061
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_pc 
	= (vlSymsp->TOP__Briey__axi_core_cpu.IBusCachedPlugin_fetchPc_pcReg 
	   + ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_inc) 
	      << 2U));
    if (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_jump_pcLoad_valid) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_pc 
	    = ((4U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_353_))
	        ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_pcs_4
	        : ((2U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_353_))
		    ? ((1U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_353_))
		        ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress
		        : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_BRANCH_CALC)
		    : ((1U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_353_))
		        ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_jumpInterface_payload
		        : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_PC)));
    }
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_pc 
	= (0xfffffffeU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_pc);
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_pc 
	= (0xfffffffdU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_pc);
}

VL_INLINE_OPT void VBriey_VexRiscv::_sequent__TOP__Briey__axi_core_cpu__11(VBriey__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VBriey_VexRiscv::_sequent__TOP__Briey__axi_core_cpu__11\n"); );
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../../Briey.v:17001
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_resetIt_regNext 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_resetIt;
}

VL_INLINE_OPT void VBriey_VexRiscv::_sequent__TOP__Briey__axi_core_cpu__12(VBriey__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VBriey_VexRiscv::_sequent__TOP__Briey__axi_core_cpu__12\n"); );
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../../Briey.v:17018
    if (vlSymsp->TOP__Briey.__PVT__resetCtrl_systemReset) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_resetIt = 0U;
    } else {
	if (vlSymsp->TOP__Briey.__PVT__systemDebugger_1___05Fio_mem_cmd_valid) {
	    if ((0U == (0x3fU & ((vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[1U] 
				  << 0x1eU) | (vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[0U] 
					       >> 2U))))) {
		if ((1U & vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[2U])) {
		    if ((0x10000U & vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[1U])) {
			vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_resetIt = 1U;
		    }
		    if ((0x1000000U & vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[1U])) {
			vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_resetIt = 0U;
		    }
		}
	    }
	}
    }
    // ALWAYS at ../../../../Briey.v:16374
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_rsp_data 
	= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_busReadDataReg;
    if ((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_199_)))) {
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_rsp_data 
	    = ((0xfffffffeU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_rsp_data) 
	       | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_resetIt));
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_rsp_data 
	    = ((0xfffffffdU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_rsp_data) 
	       | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_haltIt) 
		  << 1U));
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_rsp_data 
	    = ((0xfffffffbU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_rsp_data) 
	       | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_isPipBusy) 
		  << 2U));
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_rsp_data 
	    = ((0xfffffff7U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_rsp_data) 
	       | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_haltedByBreak) 
		  << 3U));
	vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_rsp_data 
	    = ((0xffffffefU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_rsp_data) 
	       | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_stepIt) 
		  << 4U));
    }
}

VL_INLINE_OPT void VBriey_VexRiscv::_sequent__TOP__Briey__axi_core_cpu__13(VBriey__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VBriey_VexRiscv::_sequent__TOP__Briey__axi_core_cpu__13\n"); );
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../../Briey.v:16385
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injectionPort_valid = 0U;
    if (vlSymsp->TOP__Briey.__PVT__systemDebugger_1___05Fio_mem_cmd_valid) {
	if ((0U != (0x3fU & ((vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[1U] 
			      << 0x1eU) | (vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[0U] 
					   >> 2U))))) {
	    if ((1U == (0x3fU & ((vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[1U] 
				  << 0x1eU) | (vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[0U] 
					       >> 2U))))) {
		if ((1U & vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[2U])) {
		    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injectionPort_valid = 1U;
		}
	    }
	}
    }
}

VL_INLINE_OPT void VBriey_VexRiscv::_multiclk__TOP__Briey__axi_core_cpu__14(VBriey__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VBriey_VexRiscv::_multiclk__TOP__Briey__axi_core_cpu__14\n"); );
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../../Briey.v:16357
    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_cmd_ready = 1U;
    if (vlSymsp->TOP__Briey.__PVT__systemDebugger_1___05Fio_mem_cmd_valid) {
	if ((0U != (0x3fU & ((vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[1U] 
			      << 0x1eU) | (vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[0U] 
					   >> 2U))))) {
	    if ((1U == (0x3fU & ((vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[1U] 
				  << 0x1eU) | (vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[0U] 
					       >> 2U))))) {
		if ((1U & vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[2U])) {
		    vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_cmd_ready 
			= vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injectionPort_ready;
		}
	    }
	}
    }
}

void VBriey_VexRiscv::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VBriey_VexRiscv::_ctor_var_reset\n"); );
    // Body
    __Vxrand5 = VL_RAND_RESET_I(30);
    __Vxrand3 = VL_RAND_RESET_I(4);
    __Vxrand2 = VL_RAND_RESET_I(4);
    __Vxrand1 = VL_RAND_RESET_I(32);
    __PVT__timerInterrupt = VL_RAND_RESET_I(1);
    __PVT__externalInterrupt = VL_RAND_RESET_I(1);
    __PVT__softwareInterrupt = VL_RAND_RESET_I(1);
    __PVT__debug_bus_cmd_valid = VL_RAND_RESET_I(1);
    __PVT__debug_bus_cmd_ready = VL_RAND_RESET_I(1);
    __PVT__debug_bus_cmd_payload_wr = VL_RAND_RESET_I(1);
    __PVT__debug_bus_cmd_payload_address = VL_RAND_RESET_I(8);
    __PVT__debug_bus_cmd_payload_data = VL_RAND_RESET_I(32);
    __PVT__debug_bus_rsp_data = VL_RAND_RESET_I(32);
    __PVT__debug_resetOut = VL_RAND_RESET_I(1);
    __PVT__iBus_cmd_valid = VL_RAND_RESET_I(1);
    __PVT__iBus_cmd_ready = VL_RAND_RESET_I(1);
    __PVT__iBus_cmd_payload_address = VL_RAND_RESET_I(32);
    __PVT__iBus_cmd_payload_size = VL_RAND_RESET_I(3);
    __PVT__iBus_rsp_valid = VL_RAND_RESET_I(1);
    __PVT__iBus_rsp_payload_data = VL_RAND_RESET_I(32);
    __PVT__iBus_rsp_payload_error = VL_RAND_RESET_I(1);
    __PVT__dBus_cmd_valid = VL_RAND_RESET_I(1);
    __PVT__dBus_cmd_ready = VL_RAND_RESET_I(1);
    __PVT__dBus_cmd_payload_wr = VL_RAND_RESET_I(1);
    __PVT__dBus_cmd_payload_address = VL_RAND_RESET_I(32);
    __PVT__dBus_cmd_payload_data = VL_RAND_RESET_I(32);
    __PVT__dBus_cmd_payload_mask = VL_RAND_RESET_I(4);
    __PVT__dBus_cmd_payload_length = VL_RAND_RESET_I(3);
    __PVT__dBus_cmd_payload_last = VL_RAND_RESET_I(1);
    __PVT__dBus_rsp_valid = VL_RAND_RESET_I(1);
    __PVT__dBus_rsp_payload_data = VL_RAND_RESET_I(32);
    __PVT__dBus_rsp_payload_error = VL_RAND_RESET_I(1);
    __PVT__io_axiClk = VL_RAND_RESET_I(1);
    __PVT__resetCtrl_axiReset = VL_RAND_RESET_I(1);
    __PVT__resetCtrl_systemReset = VL_RAND_RESET_I(1);
    __PVT___zz_201_ = VL_RAND_RESET_I(1);
    __PVT___zz_207_ = VL_RAND_RESET_I(1);
    __PVT___zz_210_ = VL_RAND_RESET_I(1);
    __PVT___zz_211_ = VL_RAND_RESET_I(1);
    __PVT___zz_215_ = VL_RAND_RESET_I(1);
    __PVT___zz_219_ = VL_RAND_RESET_I(1);
    __PVT___zz_220_ = VL_RAND_RESET_I(32);
    __PVT___zz_221_ = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache_io_mem_cmd_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___05Fio_cpu_writeBack_haltIt = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___05Fio_cpu_writeBack_data = VL_RAND_RESET_I(32);
    __PVT__dataCache_1___05Fio_cpu_writeBack_mmuException = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___05Fio_cpu_writeBack_unalignedAccess = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___05Fio_cpu_writeBack_accessError = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___05Fio_cpu_flush_ready = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___05Fio_cpu_redo = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___05Fio_mem_cmd_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___05Fio_mem_cmd_payload_wr = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___05Fio_mem_cmd_payload_address = VL_RAND_RESET_I(32);
    __PVT__dataCache_1___05Fio_mem_cmd_payload_length = VL_RAND_RESET_I(3);
    __PVT__dataCache_1___05Fio_mem_cmd_payload_last = VL_RAND_RESET_I(1);
    __PVT___zz_223_ = VL_RAND_RESET_I(1);
    __PVT___zz_224_ = VL_RAND_RESET_I(1);
    __PVT___zz_226_ = VL_RAND_RESET_I(1);
    __PVT___zz_227_ = VL_RAND_RESET_I(1);
    __PVT___zz_228_ = VL_RAND_RESET_I(1);
    __PVT___zz_229_ = VL_RAND_RESET_I(1);
    __PVT___zz_230_ = VL_RAND_RESET_I(1);
    __PVT___zz_231_ = VL_RAND_RESET_I(1);
    __PVT___zz_232_ = VL_RAND_RESET_I(1);
    __PVT___zz_233_ = VL_RAND_RESET_I(1);
    __PVT___zz_234_ = VL_RAND_RESET_I(1);
    __PVT___zz_235_ = VL_RAND_RESET_I(1);
    __PVT___zz_237_ = VL_RAND_RESET_I(1);
    __PVT___zz_238_ = VL_RAND_RESET_I(1);
    __PVT___zz_239_ = VL_RAND_RESET_I(1);
    __PVT___zz_241_ = VL_RAND_RESET_I(1);
    __PVT___zz_242_ = VL_RAND_RESET_I(1);
    __PVT___zz_247_ = VL_RAND_RESET_I(1);
    __PVT___zz_249_ = VL_RAND_RESET_I(1);
    __PVT___zz_252_ = VL_RAND_RESET_I(1);
    __PVT___zz_321_ = VL_RAND_RESET_Q(33);
    __PVT___zz_343_ = VL_RAND_RESET_I(2);
    __PVT___zz_353_ = VL_RAND_RESET_I(3);
    __PVT___zz_38_ = VL_RAND_RESET_I(32);
    __PVT__decode_RS2 = VL_RAND_RESET_I(32);
    __PVT__decode_RS1 = VL_RAND_RESET_I(32);
    __PVT___zz_44_ = VL_RAND_RESET_I(32);
    __PVT___zz_62_ = VL_RAND_RESET_I(1);
    __PVT__decode_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    __PVT___zz_90_ = VL_RAND_RESET_I(1);
    __PVT___zz_91_ = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_rsp_issueDetected = VL_RAND_RESET_I(1);
    __PVT___zz_93_ = VL_RAND_RESET_I(1);
    __PVT___zz_94_ = VL_RAND_RESET_I(1);
    __PVT___zz_95_ = VL_RAND_RESET_I(1);
    __PVT___zz_96_ = VL_RAND_RESET_I(32);
    __PVT__decode_INSTRUCTION = VL_RAND_RESET_I(32);
    __PVT__decode_arbitration_haltItself = VL_RAND_RESET_I(1);
    __PVT__decode_arbitration_haltByOther = VL_RAND_RESET_I(1);
    __PVT__decode_arbitration_removeIt = VL_RAND_RESET_I(1);
    __PVT__decode_arbitration_isValid = VL_RAND_RESET_I(1);
    __PVT__decode_arbitration_isStuck = VL_RAND_RESET_I(1);
    __PVT__decode_arbitration_isFlushed = VL_RAND_RESET_I(1);
    __PVT__execute_arbitration_haltItself = VL_RAND_RESET_I(1);
    __PVT__execute_arbitration_haltByOther = VL_RAND_RESET_I(1);
    __PVT__execute_arbitration_removeIt = VL_RAND_RESET_I(1);
    __PVT__execute_arbitration_flushAll = VL_RAND_RESET_I(1);
    __PVT__execute_arbitration_isValid = VL_RAND_RESET_I(1);
    __PVT__execute_arbitration_isStuck = VL_RAND_RESET_I(1);
    __PVT__execute_arbitration_isStuckByOthers = VL_RAND_RESET_I(1);
    __PVT__execute_arbitration_isFlushed = VL_RAND_RESET_I(1);
    __PVT__memory_arbitration_haltItself = VL_RAND_RESET_I(1);
    __PVT__memory_arbitration_removeIt = VL_RAND_RESET_I(1);
    __PVT__memory_arbitration_flushAll = VL_RAND_RESET_I(1);
    __PVT__memory_arbitration_isValid = VL_RAND_RESET_I(1);
    __PVT__memory_arbitration_isStuck = VL_RAND_RESET_I(1);
    __PVT__memory_arbitration_isFlushed = VL_RAND_RESET_I(1);
    __PVT__writeBack_arbitration_haltItself = VL_RAND_RESET_I(1);
    __PVT__writeBack_arbitration_removeIt = VL_RAND_RESET_I(1);
    __PVT__writeBack_arbitration_flushAll = VL_RAND_RESET_I(1);
    __PVT__writeBack_arbitration_isValid = VL_RAND_RESET_I(1);
    __PVT__writeBack_arbitration_isFiring = VL_RAND_RESET_I(1);
    lastStageInstruction = VL_RAND_RESET_I(32);
    lastStagePc = VL_RAND_RESET_I(32);
    lastStageIsValid = VL_RAND_RESET_I(1);
    lastStageIsFiring = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_fetcherHalt = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_fetcherflushIt = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_incomingInstruction = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_predictionJumpInterface_valid = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_pcs_4 = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_decodeExceptionPort_valid = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = VL_RAND_RESET_I(4);
    __PVT__DBusCachedPlugin_redoBranch_valid = VL_RAND_RESET_I(1);
    __PVT__DBusCachedPlugin_exceptionBus_valid = VL_RAND_RESET_I(1);
    __PVT__DBusCachedPlugin_exceptionBus_payload_code = VL_RAND_RESET_I(4);
    __PVT___zz_103_ = VL_RAND_RESET_I(1);
    __PVT__decodeExceptionPort_valid = VL_RAND_RESET_I(1);
    __PVT__BranchPlugin_jumpInterface_valid = VL_RAND_RESET_I(1);
    __PVT__BranchPlugin_branchExceptionPort_valid = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_jumpInterface_valid = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_jumpInterface_payload = VL_RAND_RESET_I(32);
    __PVT__CsrPlugin_privilege = VL_RAND_RESET_I(2);
    __PVT__CsrPlugin_forceMachineWire = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_allowInterrupts = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_allowException = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_injectionPort_valid = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_injectionPort_ready = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_jump_pcLoad_valid = VL_RAND_RESET_I(1);
    __PVT___zz_104_ = VL_RAND_RESET_I(5);
    __PVT___zz_105_ = VL_RAND_RESET_I(5);
    IBusCachedPlugin_fetchPc_pcReg = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_fetchPc_inc = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_fetchPc_propagatePc = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_fetchPc_pc = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_fetchPc_samplePcNext = VL_RAND_RESET_I(1);
    __PVT___zz_111_ = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_iBusRsp_stages_0_halt = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_halt = VL_RAND_RESET_I(1);
    __PVT___zz_117_ = VL_RAND_RESET_I(1);
    __PVT___zz_119_ = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_iBusRsp_readyForError = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0 = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1 = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2 = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4 = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_injector_decodeRemoved = VL_RAND_RESET_I(1);
    __PVT___zz_122_ = VL_RAND_RESET_I(19);
    __PVT___zz_129_ = VL_RAND_RESET_I(11);
    __PVT___zz_131_ = VL_RAND_RESET_I(19);
    __PVT__IBusCachedPlugin_s1_tightlyCoupledHit = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_rsp_redoFetch = VL_RAND_RESET_I(1);
    __PVT__writeBack_DBusCachedPlugin_rspShifted = VL_RAND_RESET_I(32);
    __PVT___zz_133_ = VL_RAND_RESET_I(1);
    __PVT___zz_134_ = VL_RAND_RESET_I(32);
    __PVT___zz_135_ = VL_RAND_RESET_I(1);
    __PVT___zz_136_ = VL_RAND_RESET_I(32);
    __PVT___zz_137_ = VL_RAND_RESET_I(32);
    lastStageRegFileWrite_valid = VL_RAND_RESET_I(1);
    lastStageRegFileWrite_payload_address = VL_RAND_RESET_I(5);
    lastStageRegFileWrite_payload_data = VL_RAND_RESET_I(32);
    __PVT___zz_149_ = VL_RAND_RESET_I(1);
    __PVT___zz_151_ = VL_RAND_RESET_I(32);
    __PVT___zz_153_ = VL_RAND_RESET_I(20);
    __PVT___zz_155_ = VL_RAND_RESET_I(20);
    __PVT___zz_156_ = VL_RAND_RESET_I(32);
    __PVT__execute_SrcPlugin_addSub = VL_RAND_RESET_I(32);
    __PVT__execute_SrcPlugin_less = VL_RAND_RESET_I(1);
    __PVT___zz_157_ = VL_RAND_RESET_I(32);
    __PVT__execute_FullBarrelShifterPlugin_reversed = VL_RAND_RESET_I(32);
    __PVT___zz_158_ = VL_RAND_RESET_I(32);
    __PVT__execute_MulPlugin_aHigh = VL_RAND_RESET_I(17);
    __PVT__execute_MulPlugin_bHigh = VL_RAND_RESET_I(17);
    __PVT__memory_DivPlugin_rs1 = VL_RAND_RESET_Q(33);
    __PVT__memory_DivPlugin_rs2 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65,__PVT__memory_DivPlugin_accumulator);
    __PVT__memory_DivPlugin_div_needRevert = VL_RAND_RESET_I(1);
    __PVT__memory_DivPlugin_div_counter_willIncrement = VL_RAND_RESET_I(1);
    __PVT__memory_DivPlugin_div_counter_willClear = VL_RAND_RESET_I(1);
    __PVT__memory_DivPlugin_div_counter_valueNext = VL_RAND_RESET_I(6);
    __PVT__memory_DivPlugin_div_counter_value = VL_RAND_RESET_I(6);
    __PVT__memory_DivPlugin_div_done = VL_RAND_RESET_I(1);
    __PVT__memory_DivPlugin_div_result = VL_RAND_RESET_I(32);
    __PVT___zz_160_ = VL_RAND_RESET_Q(33);
    __PVT___zz_161_ = VL_RAND_RESET_Q(33);
    __PVT___zz_162_ = VL_RAND_RESET_I(32);
    __PVT___zz_163_ = VL_RAND_RESET_I(1);
    __PVT___zz_164_ = VL_RAND_RESET_I(1);
    __PVT___zz_165_ = VL_RAND_RESET_Q(33);
    __PVT___zz_166_ = VL_RAND_RESET_I(1);
    __PVT___zz_167_ = VL_RAND_RESET_I(1);
    __PVT___zz_168_ = VL_RAND_RESET_I(1);
    __PVT___zz_169_ = VL_RAND_RESET_I(1);
    __PVT___zz_170_ = VL_RAND_RESET_I(5);
    __PVT___zz_171_ = VL_RAND_RESET_I(32);
    __PVT___zz_174_ = VL_RAND_RESET_I(1);
    __PVT___zz_175_ = VL_RAND_RESET_I(1);
    __PVT___zz_176_ = VL_RAND_RESET_I(1);
    __PVT___zz_177_ = VL_RAND_RESET_I(1);
    __PVT__execute_BranchPlugin_eq = VL_RAND_RESET_I(1);
    __PVT___zz_180_ = VL_RAND_RESET_I(1);
    __PVT__execute_BranchPlugin_branch_src2 = VL_RAND_RESET_I(32);
    __PVT___zz_189_ = VL_RAND_RESET_I(20);
    __PVT___zz_191_ = VL_RAND_RESET_I(11);
    __PVT___zz_193_ = VL_RAND_RESET_I(19);
    __PVT__CsrPlugin_mepc = VL_RAND_RESET_I(32);
    __PVT__CsrPlugin_mstatus_MIE = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mstatus_MPIE = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mstatus_MPP = VL_RAND_RESET_I(2);
    __PVT__CsrPlugin_mip_MEIP = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mip_MTIP = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mip_MSIP = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mie_MEIE = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mie_MTIE = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mie_MSIE = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mcause_interrupt = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mcause_exceptionCode = VL_RAND_RESET_I(4);
    __PVT__CsrPlugin_mtval = VL_RAND_RESET_I(32);
    __PVT___zz_194_ = VL_RAND_RESET_I(1);
    __PVT___zz_195_ = VL_RAND_RESET_I(1);
    __PVT___zz_196_ = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code = VL_RAND_RESET_I(4);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr = VL_RAND_RESET_I(32);
    __PVT___zz_197_ = VL_RAND_RESET_I(2);
    __PVT__CsrPlugin_interrupt_valid = VL_RAND_RESET_I(1);
    CsrPlugin_interrupt_code = VL_RAND_RESET_I(4);
    __PVT__CsrPlugin_interrupt_targetPrivilege = VL_RAND_RESET_I(2);
    __PVT__CsrPlugin_pipelineLiberator_done = VL_RAND_RESET_I(1);
    CsrPlugin_interruptJump = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_hadException = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_targetPrivilege = VL_RAND_RESET_I(2);
    __PVT__CsrPlugin_trapCause = VL_RAND_RESET_I(4);
    __PVT__CsrPlugin_xtvec_base = VL_RAND_RESET_I(30);
    execute_CsrPlugin_inWfi = VL_RAND_RESET_I(1);
    __PVT__execute_CsrPlugin_blockedBySideEffects = VL_RAND_RESET_I(1);
    __PVT__execute_CsrPlugin_readData = VL_RAND_RESET_I(32);
    __PVT__execute_CsrPlugin_writeEnable = VL_RAND_RESET_I(1);
    __PVT__execute_CsrPlugin_writeData = VL_RAND_RESET_I(32);
    __PVT__DebugPlugin_resetIt = VL_RAND_RESET_I(1);
    __PVT__DebugPlugin_haltIt = VL_RAND_RESET_I(1);
    __PVT__DebugPlugin_stepIt = VL_RAND_RESET_I(1);
    __PVT__DebugPlugin_isPipBusy = VL_RAND_RESET_I(1);
    __PVT__DebugPlugin_godmode = VL_RAND_RESET_I(1);
    __PVT__DebugPlugin_haltedByBreak = VL_RAND_RESET_I(1);
    __PVT__DebugPlugin_busReadDataReg = VL_RAND_RESET_I(32);
    __PVT___zz_199_ = VL_RAND_RESET_I(1);
    __PVT__DebugPlugin_resetIt_regNext = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_RS2 = VL_RAND_RESET_I(32);
    __PVT__decode_to_execute_MEMORY_MANAGMENT = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_INSTRUCTION = VL_RAND_RESET_I(32);
    __PVT__execute_to_memory_INSTRUCTION = VL_RAND_RESET_I(32);
    __PVT__memory_to_writeBack_INSTRUCTION = VL_RAND_RESET_I(32);
    __PVT__decode_to_execute_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    __PVT__memory_to_writeBack_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_IS_RS1_SIGNED = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_MUL_LH = VL_RAND_RESET_Q(34);
    __PVT__decode_to_execute_CSR_WRITE_OPCODE = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_IS_CSR = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_ENV_CTRL = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_ENV_CTRL = VL_RAND_RESET_I(1);
    __PVT__memory_to_writeBack_ENV_CTRL = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_SRC2_CTRL = VL_RAND_RESET_I(2);
    __PVT__decode_to_execute_MEMORY_ENABLE = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_MEMORY_ENABLE = VL_RAND_RESET_I(1);
    __PVT__memory_to_writeBack_MEMORY_ENABLE = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_IS_DIV = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_IS_DIV = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_MEMORY_ADDRESS_LOW = VL_RAND_RESET_I(2);
    __PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW = VL_RAND_RESET_I(2);
    __PVT__decode_to_execute_SHIFT_CTRL = VL_RAND_RESET_I(2);
    __PVT__execute_to_memory_SHIFT_CTRL = VL_RAND_RESET_I(2);
    __PVT__decode_to_execute_SRC2_FORCE_ZERO = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_BRANCH_CTRL = VL_RAND_RESET_I(2);
    __PVT__decode_to_execute_SRC_USE_SUB_LESS = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_BRANCH_CALC = VL_RAND_RESET_I(32);
    __PVT__decode_to_execute_RS1 = VL_RAND_RESET_I(32);
    __PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2 = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_IS_MUL = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_IS_MUL = VL_RAND_RESET_I(1);
    __PVT__memory_to_writeBack_IS_MUL = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE = VL_RAND_RESET_I(1);
    __PVT__memory_to_writeBack_MUL_LOW = VL_RAND_RESET_Q(52);
    __PVT__execute_to_memory_MUL_HH = VL_RAND_RESET_Q(34);
    __PVT__memory_to_writeBack_MUL_HH = VL_RAND_RESET_Q(34);
    __PVT__execute_to_memory_SHIFT_RIGHT = VL_RAND_RESET_I(32);
    __PVT__decode_to_execute_MEMORY_WR = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_MEMORY_WR = VL_RAND_RESET_I(1);
    __PVT__memory_to_writeBack_MEMORY_WR = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_SRC_LESS_UNSIGNED = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_ALU_BITWISE_CTRL = VL_RAND_RESET_I(2);
    __PVT__decode_to_execute_SRC1_CTRL = VL_RAND_RESET_I(2);
    __PVT__execute_to_memory_BRANCH_DO = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_ALU_CTRL = VL_RAND_RESET_I(2);
    __PVT__execute_to_memory_MUL_HL = VL_RAND_RESET_Q(34);
    __PVT__decode_to_execute_DO_EBREAK = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_IS_RS2_SIGNED = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_MUL_LL = VL_RAND_RESET_I(32);
    __PVT__execute_to_memory_REGFILE_WRITE_DATA = VL_RAND_RESET_I(32);
    __PVT__memory_to_writeBack_REGFILE_WRITE_DATA = VL_RAND_RESET_I(32);
    __PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_PC = VL_RAND_RESET_I(32);
    __PVT__execute_to_memory_PC = VL_RAND_RESET_I(32);
    __PVT__memory_to_writeBack_PC = VL_RAND_RESET_I(32);
    __PVT___zz_200_ = VL_RAND_RESET_I(3);
    __PVT__IBusCachedPlugin_injectionPort_payload_regNext = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    RegFilePlugin_regFile[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__IBusCachedPlugin_cache__DOT___zz_11_ = VL_RAND_RESET_I(26);
    __PVT__IBusCachedPlugin_cache__DOT___zz_12_ = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_cache__DOT___zz_13_ = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT___zz_14_ = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT___zz_1_ = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT___zz_2_ = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__lineLoader_address = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter = VL_RAND_RESET_I(4);
    __PVT__IBusCachedPlugin_cache__DOT___zz_3_ = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex = VL_RAND_RESET_I(3);
    __PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_tags_0_valid = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_tags_0_error = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_tags_0_address = VL_RAND_RESET_I(24);
    __PVT__IBusCachedPlugin_cache__DOT___zz_10_ = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_word = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_dataBypassValid_regNextWhen = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_dataBypass_regNextWhen = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
	    __PVT__IBusCachedPlugin_cache__DOT__ways_0_tags[__Vi0] = VL_RAND_RESET_I(26);
    }}
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
	    __PVT__IBusCachedPlugin_cache__DOT__ways_0_datas[__Vi0] = VL_RAND_RESET_I(32);
    }}
    dataCache_1___DOT____Vxrand14 = VL_RAND_RESET_I(1);
    dataCache_1___DOT____Vxrand13 = VL_RAND_RESET_I(3);
    dataCache_1___DOT____Vxrand12 = VL_RAND_RESET_I(32);
    dataCache_1___DOT____Vxrand11 = VL_RAND_RESET_I(4);
    dataCache_1___DOT____Vxrand10 = VL_RAND_RESET_I(32);
    dataCache_1___DOT____Vxrand9 = VL_RAND_RESET_I(6);
    dataCache_1___DOT____Vxrand8 = VL_RAND_RESET_I(1);
    dataCache_1___DOT____Vxrand7 = VL_RAND_RESET_I(24);
    dataCache_1___DOT____Vxrand6 = VL_RAND_RESET_I(1);
    dataCache_1___DOT____Vxrand5 = VL_RAND_RESET_I(1);
    dataCache_1___DOT____Vxrand4 = VL_RAND_RESET_I(3);
    dataCache_1___DOT____Vxrand3 = VL_RAND_RESET_I(1);
    dataCache_1___DOT____Vxrand2 = VL_RAND_RESET_I(6);
    dataCache_1___DOT____Vxrand1 = VL_RAND_RESET_I(3);
    __PVT__dataCache_1___DOT___zz_10_ = VL_RAND_RESET_I(26);
    __PVT__dataCache_1___DOT___zz_12_ = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT___zz_13_ = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT___zz_14_ = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT___zz_15_ = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT___zz_16_ = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT___zz_17_ = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT___zz_22_ = VL_RAND_RESET_I(2);
    __PVT__dataCache_1___DOT___zz_1_ = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT___zz_2_ = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__tagsReadCmd_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__tagsReadCmd_payload = VL_RAND_RESET_I(3);
    __PVT__dataCache_1___DOT__tagsWriteCmd_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__tagsWriteCmd_payload_way = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__tagsWriteCmd_payload_address = VL_RAND_RESET_I(3);
    __PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_error = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_address = VL_RAND_RESET_I(24);
    __PVT__dataCache_1___DOT__dataReadCmd_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__dataReadCmd_payload = VL_RAND_RESET_I(6);
    __PVT__dataCache_1___DOT__dataWriteCmd_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__dataWriteCmd_payload_way = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__dataWriteCmd_payload_address = VL_RAND_RESET_I(6);
    __PVT__dataCache_1___DOT__dataWriteCmd_payload_data = VL_RAND_RESET_I(32);
    __PVT__dataCache_1___DOT__dataWriteCmd_payload_mask = VL_RAND_RESET_I(4);
    __PVT__dataCache_1___DOT___zz_5_ = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stage0_mask = VL_RAND_RESET_I(4);
    __PVT__dataCache_1___DOT__stageA_request_wr = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageA_request_data = VL_RAND_RESET_I(32);
    __PVT__dataCache_1___DOT__stageA_request_size = VL_RAND_RESET_I(2);
    __PVT__dataCache_1___DOT__stageA_mask = VL_RAND_RESET_I(4);
    __PVT__dataCache_1___DOT__stage0_colisions_regNextWhen = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_request_wr = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_request_data = VL_RAND_RESET_I(32);
    __PVT__dataCache_1___DOT__stageB_request_size = VL_RAND_RESET_I(2);
    __PVT__dataCache_1___DOT__stageB_mmuRspFreeze = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress = VL_RAND_RESET_I(32);
    __PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_mmuRsp_allowWrite = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_mmuRsp_exception = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_tagsReadRsp_0_error = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_dataReadRsp_0 = VL_RAND_RESET_I(32);
    __PVT__dataCache_1___DOT__stageB_waysHits = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_mask = VL_RAND_RESET_I(4);
    __PVT__dataCache_1___DOT__stageB_colisions = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_loaderValid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_flusher_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_memCmdSent = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__loader_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__loader_counter_willIncrement = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__loader_counter_valueNext = VL_RAND_RESET_I(3);
    __PVT__dataCache_1___DOT__loader_counter_value = VL_RAND_RESET_I(3);
    __PVT__dataCache_1___DOT__loader_counter_willOverflow = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__loader_waysAllocator = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__loader_error = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
	    __PVT__dataCache_1___DOT__ways_0_tags[__Vi0] = VL_RAND_RESET_I(26);
    }}
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
	    __PVT__dataCache_1___DOT__ways_0_data_symbol0[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
	    __PVT__dataCache_1___DOT__ways_0_data_symbol1[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
	    __PVT__dataCache_1___DOT__ways_0_data_symbol2[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
	    __PVT__dataCache_1___DOT__ways_0_data_symbol3[__Vi0] = VL_RAND_RESET_I(8);
    }}
    __PVT__dataCache_1___DOT___zz_24_ = VL_RAND_RESET_I(8);
    __PVT__dataCache_1___DOT___zz_25_ = VL_RAND_RESET_I(8);
    __PVT__dataCache_1___DOT___zz_26_ = VL_RAND_RESET_I(8);
    __PVT__dataCache_1___DOT___zz_27_ = VL_RAND_RESET_I(8);
}
