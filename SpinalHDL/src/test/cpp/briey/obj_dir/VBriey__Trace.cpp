// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBriey__Syms.h"


//======================

void VBriey::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VBriey* t=(VBriey*)userthis;
    VBriey__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VBriey::traceChgThis(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 2U)) | (vlTOPp->__Vm_traceActivity 
					      >> 6U))))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity 
				 | (vlTOPp->__Vm_traceActivity 
				    >> 2U)) | (vlTOPp->__Vm_traceActivity 
					       >> 6U)) 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 9U))))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 2U)) | (vlTOPp->__Vm_traceActivity 
					      >> 7U))))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity 
				 | (vlTOPp->__Vm_traceActivity 
				    >> 2U)) | (vlTOPp->__Vm_traceActivity 
					       >> 7U)) 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 9U))))) {
	    vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 2U)) | (vlTOPp->__Vm_traceActivity 
					      >> 9U))))) {
	    vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity 
				 | (vlTOPp->__Vm_traceActivity 
				    >> 2U)) | (vlTOPp->__Vm_traceActivity 
					       >> 9U)) 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 0xbU))))) {
	    vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 4U))))) {
	    vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 5U))))) {
	    vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 5U)) | (vlTOPp->__Vm_traceActivity 
					      >> 9U))))) {
	    vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 6U))))) {
	    vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 6U)) | (vlTOPp->__Vm_traceActivity 
					      >> 9U))))) {
	    vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity 
				 | (vlTOPp->__Vm_traceActivity 
				    >> 6U)) | (vlTOPp->__Vm_traceActivity 
					       >> 9U)) 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 0xbU))))) {
	    vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 6U)) | (vlTOPp->__Vm_traceActivity 
					      >> 0xbU))))) {
	    vlTOPp->traceChgThis__17(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 7U))))) {
	    vlTOPp->traceChgThis__18(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 7U)) | (vlTOPp->__Vm_traceActivity 
					      >> 9U))))) {
	    vlTOPp->traceChgThis__19(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 8U))))) {
	    vlTOPp->traceChgThis__20(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 8U)) | (vlTOPp->__Vm_traceActivity 
					      >> 9U))))) {
	    vlTOPp->traceChgThis__21(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 9U))))) {
	    vlTOPp->traceChgThis__22(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 9U)) | (vlTOPp->__Vm_traceActivity 
					      >> 0xbU))))) {
	    vlTOPp->traceChgThis__23(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 0xaU))))) {
	    vlTOPp->traceChgThis__24(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 0xbU))))) {
	    vlTOPp->traceChgThis__25(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 0xcU))))) {
	    vlTOPp->traceChgThis__26(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 0xdU))))) {
	    vlTOPp->traceChgThis__27(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 0xeU))))) {
	    vlTOPp->traceChgThis__28(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 0xfU))))) {
	    vlTOPp->traceChgThis__29(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 0x10U))))) {
	    vlTOPp->traceChgThis__30(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__31(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				>> 2U) | (vlTOPp->__Vm_traceActivity 
					  >> 6U))))) {
	    vlTOPp->traceChgThis__32(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				>> 2U) | (vlTOPp->__Vm_traceActivity 
					  >> 7U))))) {
	    vlTOPp->traceChgThis__33(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				>> 2U) | (vlTOPp->__Vm_traceActivity 
					  >> 9U))))) {
	    vlTOPp->traceChgThis__34(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__35(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__36(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x20U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__37(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x40U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__38(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				>> 6U) | (vlTOPp->__Vm_traceActivity 
					  >> 7U))))) {
	    vlTOPp->traceChgThis__39(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x80U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__40(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x100U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__41(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x200U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__42(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x400U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__43(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x1000U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__44(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x2000U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__45(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x4000U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__46(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__47(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VBriey::traceChgThis__2(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+1,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_12_),2);
	vcdp->chgBit(c+2,(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__stage0_ready));
	vcdp->chgBus(c+3,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_9_),2);
    }
}

void VBriey::traceChgThis__3(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+4,(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT___zz_1_),4);
	vcdp->chgArray(c+5,(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__jtag_tap_fsm_stateNext_string),80);
    }
}

void VBriey::traceChgThis__4(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+8,(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT___zz_13_),32);
	vcdp->chgBus(c+9,(vlSymsp->TOP__Briey.__PVT__resetCtrl_systemResetCounter),6);
	vcdp->chgBus(c+10,(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__unburstify_buffer_result),17);
	vcdp->chgBus(c+11,(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__Axi4Incr_base),12);
	vcdp->chgBus(c+12,(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__Axi4Incr_baseIncr),12);
	vcdp->chgBus(c+13,(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__Axi4Incr_wrapCase),3);
	vcdp->chgBus(c+14,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__unburstify_buffer_result),26);
	vcdp->chgBus(c+15,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__Axi4Incr_base),12);
	vcdp->chgBus(c+16,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__Axi4Incr_baseIncr),12);
	vcdp->chgBus(c+17,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__Axi4Incr_wrapCase),3);
	vcdp->chgBit(c+18,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__prescaler_1___05Fio_overflow));
	vcdp->chgBus(c+19,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_word),32);
	vcdp->chgBus(c+20,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_data),32);
	vcdp->chgBus(c+21,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_DBusCachedPlugin_rspShifted),32);
	vcdp->chgQuad(c+22,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mcycle),64);
	vcdp->chgQuad(c+24,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_minstret),64);
	vcdp->chgArray(c+26,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_SHIFT_CTRL_string),72);
	vcdp->chgArray(c+29,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SHIFT_CTRL_string),72);
	vcdp->chgArray(c+32,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SRC1_CTRL_string),96);
	vcdp->chgArray(c+35,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SHIFT_CTRL_string),72);
	vcdp->chgArray(c+38,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_CTRL_string),72);
	vcdp->chgArray(c+41,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC1_CTRL_string),96);
    }
}

void VBriey::traceChgThis__5(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+44,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__vga_io_vga_videoOn)
			     ? ((1U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__buffer_2___DOT___zz_5_))
				 ? 0x1fU : 0U) : 0U)),5);
	vcdp->chgBus(c+45,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__vga_io_vga_videoOn)
			     ? ((2U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__buffer_2___DOT___zz_5_))
				 ? 0x3fU : 0U) : 0U)),6);
	vcdp->chgBus(c+46,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__vga_io_vga_videoOn)
			     ? ((4U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__buffer_2___DOT___zz_5_))
				 ? 0x1fU : 0U) : 0U)),5);
	vcdp->chgBit(c+47,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_r_valid) 
			    & (~ ((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT___zz_9_) 
				  >> 3U)))));
	vcdp->chgBit(c+48,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_r_valid) 
			    & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT___zz_9_) 
			       >> 3U))));
	vcdp->chgBus(c+49,(((IData)(vlSymsp->TOP__Briey.__PVT___zz_64_)
			     ? (IData)(vlSymsp->TOP__Briey.__PVT___zz_66_)
			     : (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_m2sPipe_s2mPipe_payload_mask))),4);
	vcdp->chgBit(c+50,(((IData)(vlSymsp->TOP__Briey.__PVT___zz_64_)
			     ? (IData)(vlSymsp->TOP__Briey.__PVT___zz_67_)
			     : (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_m2sPipe_s2mPipe_payload_last))));
	vcdp->chgBus(c+51,(((IData)(vlSymsp->TOP__Briey.__PVT___zz_75_)
			     ? (IData)(vlSymsp->TOP__Briey.__PVT___zz_77_)
			     : (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_m2sPipe_s2mPipe_payload_mask))),4);
	vcdp->chgBit(c+52,(((IData)(vlSymsp->TOP__Briey.__PVT___zz_75_)
			     ? (IData)(vlSymsp->TOP__Briey.__PVT___zz_78_)
			     : (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_m2sPipe_s2mPipe_payload_last))));
	vcdp->chgBus(c+53,((0xffffffU & (((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__unburstify_buffer_valid)
					   ? vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__unburstify_buffer_result
					   : vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_addr) 
					 >> 2U))),24);
	vcdp->chgBus(c+54,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__unburstify_buffer_valid)
			     ? vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__unburstify_buffer_result
			     : vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_addr)),26);
	vcdp->chgBus(c+55,(((0U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION 
					  >> 0xcU)))
			     ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_134_
			     : ((1U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION 
					      >> 0xcU)))
				 ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_136_
				 : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_DBusCachedPlugin_rspShifted))),32);
	vcdp->chgBit(c+56,((1U & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) 
				  | (~ ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
					>> 3U))))));
    }
}

void VBriey::traceChgThis__6(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+57,(((1U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__pendingSels))
			     ? vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrlBusAdapted_rsp_payload_data
			     : vlSymsp->TOP__Briey.__PVT__axi_ram__DOT___zz_13_)),32);
	vcdp->chgBus(c+58,(((0U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__readRspIndex))
			     ? vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrlBusAdapted_rsp_payload_data
			     : ((1U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__readRspIndex))
				 ? vlSymsp->TOP__Briey.__PVT__axi_apbBridge__DOT__readedData
				 : ((2U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__readRspIndex))
				     ? ((0x400000U 
					 & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__buffer_2___DOT___zz_4_) 
					    << 0x14U)) 
					| ((0x800U 
					    & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__buffer_2___DOT___zz_4_) 
					       << 0xaU)) 
					   | (1U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__buffer_2___DOT___zz_4_))))
				     : vlSymsp->TOP__Briey.__PVT__axi_ram__DOT___zz_13_)))),32);
	vcdp->chgBus(c+59,(((IData)(vlSymsp->TOP__Briey.__PVT___zz_64_)
			     ? vlSymsp->TOP__Briey.__PVT___zz_65_
			     : vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_m2sPipe_s2mPipe_payload_data)),32);
	vcdp->chgBus(c+60,(((IData)(vlSymsp->TOP__Briey.__PVT___zz_75_)
			     ? vlSymsp->TOP__Briey.__PVT___zz_76_
			     : vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_m2sPipe_s2mPipe_payload_data)),32);
	vcdp->chgBit(c+61,((((IData)(vlSymsp->TOP__Briey.__PVT__io_apb_decoder_io_output_PSEL) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_apb_PENABLE)) 
			    & (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_write))));
	vcdp->chgBit(c+62,((((IData)(vlSymsp->TOP__Briey.__PVT__io_apb_decoder_io_output_PSEL) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_apb_PENABLE)) 
			    & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_write)))));
	vcdp->chgBit(c+63,(((((IData)(vlSymsp->TOP__Briey.__PVT__io_apb_decoder_io_output_PSEL) 
			      >> 1U) & (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_apb_PENABLE)) 
			    & (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_write))));
	vcdp->chgBit(c+64,(((((IData)(vlSymsp->TOP__Briey.__PVT__io_apb_decoder_io_output_PSEL) 
			      >> 1U) & (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_apb_PENABLE)) 
			    & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_write)))));
	vcdp->chgBit(c+65,(((((IData)(vlSymsp->TOP__Briey.__PVT__io_apb_decoder_io_output_PSEL) 
			      >> 3U) & (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_apb_PENABLE)) 
			    & (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_write))));
	vcdp->chgBit(c+66,(((((IData)(vlSymsp->TOP__Briey.__PVT__io_apb_decoder_io_output_PSEL) 
			      >> 3U) & (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_apb_PENABLE)) 
			    & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_write)))));
	vcdp->chgBit(c+67,(((((IData)(vlSymsp->TOP__Briey.__PVT__io_apb_decoder_io_output_PSEL) 
			      >> 2U) & (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_apb_PENABLE)) 
			    & (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_write))));
	vcdp->chgBit(c+68,(((((IData)(vlSymsp->TOP__Briey.__PVT__io_apb_decoder_io_output_PSEL) 
			      >> 2U) & (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_apb_PENABLE)) 
			    & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_write)))));
    }
}

void VBriey::traceChgThis__7(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+69,((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2) 
			     != (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_180_)) 
			    | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_180_) 
			       & ((3U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BRANCH_CTRL))
				   ? ((vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				       >> 0x15U) ^ 
				      (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS1 
				       >> 1U)) : ((2U 
						   == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BRANCH_CTRL))
						   ? 
						  (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						   >> 0x15U)
						   : 
						  (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						   >> 8U)))))));
	vcdp->chgBus(c+70,((IData)((VL_ULL(0x1ffffffff) 
				    & VL_SHIFTRS_QQI(33,33,5, 
						     (((QData)((IData)(
								       ((3U 
									 == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SHIFT_CTRL)) 
									& (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_FullBarrelShifterPlugin_reversed 
									   >> 0x1fU)))) 
						       << 0x20U) 
						      | (QData)((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_FullBarrelShifterPlugin_reversed))), 
						     (0x1fU 
						      & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_))))),32);
	vcdp->chgBus(c+71,((0xfffffffeU & (((3U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BRANCH_CTRL))
					     ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS1
					     : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_PC) 
					   + vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_BranchPlugin_branch_src2))),32);
	vcdp->chgBus(c+72,(((2U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ALU_CTRL))
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
				 : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_addSub))),32);
	vcdp->chgBus(c+73,(((2U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
			     ? (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
				& vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_)
			     : ((1U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
				 ? (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
				    | vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_)
				 : (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_ 
				    ^ vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_)))),32);
	vcdp->chgBit(c+74,(((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_180_) 
			    & ((3U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BRANCH_CTRL))
			        ? ((vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				    >> 0x15U) ^ (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS1 
						 >> 1U))
			        : ((2U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BRANCH_CTRL))
				    ? (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				       >> 0x15U) : 
				   (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				    >> 8U))))));
	vcdp->chgBus(c+75,((((3U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BRANCH_CTRL))
			      ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS1
			      : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_PC) 
			    + vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_BranchPlugin_branch_src2)),32);
    }
}

void VBriey::traceChgThis__8(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+76,(((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stage0_colisions_regNextWhen) 
			    | ((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_valid) 
				 & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_way)) 
				& ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address) 
				   == (0x3fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
						>> 2U)))) 
			       & (0U != ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageA_mask) 
					 & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask)))))));
    }
}

void VBriey::traceChgThis__9(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+77,((0x1ffffU & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)
					 ? (0x1ffe0U 
					    & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address)
					 : vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_m2sPipe_s2mPipe_payload_address))),17);
	vcdp->chgBus(c+78,((0x3ffffffU & ((0U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_5_))
					   ? (0x3ffffe0U 
					      & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address)
					   : ((1U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_5_))
					       ? vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_ar_halfPipe_regs_payload_addr
					       : vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_m2sPipe_s2mPipe_payload_address)))),26);
	vcdp->chgBus(c+79,(((0U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_5_))
			     ? 2U : ((1U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_5_))
				      ? (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_ar_halfPipe_regs_payload_size)
				      : 2U))),3);
	vcdp->chgBit(c+80,((((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid) 
			       & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_CSR)) 
			      & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_CSR_READ_OPCODE)) 
			     & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_blockedBySideEffects))) 
			    & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuckByOthers)))));
    }
}

void VBriey::traceChgThis__10(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+81,(((4U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_353_))
			     ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_pcs_4
			     : ((2U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_353_))
				 ? ((1U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_353_))
				     ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress
				     : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_BRANCH_CALC)
				 : ((1U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_353_))
				     ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_jumpInterface_payload
				     : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_PC)))),32);
    }
}

void VBriey::traceChgThis__11(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+82,(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__jtag_tap_fsm_state),4);
	vcdp->chgBit(c+83,(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__jtag_tap_tdoUnbufferd));
	vcdp->chgArray(c+84,(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__jtag_tap_fsm_state_string),80);
	vcdp->chgBit(c+87,(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__flowCCByToggle_1___DOT__inputArea_target));
    }
}

void VBriey::traceChgThis__12(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+88,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_forceMachineWire));
	vcdp->chgBit(c+89,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_allowInterrupts));
    }
}

void VBriey::traceChgThis__13(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+90,((1U & ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_haltIt)) 
				  & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
				     >> 9U)))));
    }
}

void VBriey::traceChgThis__14(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+91,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_r_valid));
	vcdp->chgBit(c+92,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrlBusAdapted_rsp_valid));
	vcdp->chgBus(c+93,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo_io_pop_payload_context_id),4);
	vcdp->chgBit(c+94,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo_io_pop_payload_context_last));
	vcdp->chgBit(c+95,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_b_valid));
	vcdp->chgBit(c+96,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_r_valid));
	vcdp->chgBit(c+97,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_apb_PENABLE));
	vcdp->chgBit(c+98,((0U != (IData)(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__interruptCtrl_1___05Fio_pendings))));
	vcdp->chgBit(c+99,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_interruptCtrl_readInt) 
			    | (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_interruptCtrl_writeInt))));
	vcdp->chgBit(c+100,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid));
	vcdp->chgBit(c+101,(vlSymsp->TOP__Briey.__PVT__streamFork_5___05Fio_outputs_0_valid));
	vcdp->chgBit(c+102,(vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_m2sPipe_s2mPipe_payload_wr));
	vcdp->chgBus(c+103,(vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_m2sPipe_s2mPipe_payload_mask),4);
	vcdp->chgBit(c+104,(vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_m2sPipe_s2mPipe_payload_last));
	vcdp->chgBit(c+105,(vlSymsp->TOP__Briey.__PVT__streamFork_5___05Fio_outputs_1_valid));
	vcdp->chgBit(c+106,(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder_io_input_r_valid));
	vcdp->chgBus(c+107,(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder_io_input_r_payload_resp),2);
	vcdp->chgBit(c+108,((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
			      & (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__decodedCmdSels)) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__allowCmd))));
	vcdp->chgBit(c+109,((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
			      & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__decodedCmdSels) 
				 >> 1U)) & (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__allowCmd))));
	vcdp->chgBit(c+110,((((IData)(vlSymsp->TOP__Briey.__PVT___zz_35_) 
			      & (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingSels)) 
			     & (0U != (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingDataCounter_value)))));
	vcdp->chgBit(c+111,((((IData)(vlSymsp->TOP__Briey.__PVT___zz_35_) 
			      & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingSels) 
				 >> 1U)) & (0U != (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingDataCounter_value)))));
	vcdp->chgBit(c+112,((((IData)(vlSymsp->TOP__Briey.__PVT___zz_35_) 
			      & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingSels) 
				 >> 2U)) & (0U != (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingDataCounter_value)))));
	vcdp->chgBit(c+113,((((IData)(vlSymsp->TOP__Briey.__PVT___zz_35_) 
			      & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingSels) 
				 >> 3U)) & (0U != (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingDataCounter_value)))));
	vcdp->chgBit(c+114,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrlBusAdapted_rsp_valid) 
			     & (0U == (3U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo_io_pop_payload_context_id) 
					     >> 2U))))));
	vcdp->chgBus(c+115,((3U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo_io_pop_payload_context_id))),2);
	vcdp->chgBit(c+116,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrlBusAdapted_rsp_valid) 
			     & (1U == (3U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo_io_pop_payload_context_id) 
					     >> 2U))))));
	vcdp->chgBit(c+117,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrlBusAdapted_rsp_valid) 
			     & (2U == (3U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo_io_pop_payload_context_id) 
					     >> 2U))))));
	vcdp->chgBit(c+118,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_inputs_0_ready));
	vcdp->chgBit(c+119,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___05Fio_pop_valid) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_w_halfPipe_regs_ready))));
	vcdp->chgBit(c+120,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFork_5___05Fio_outputs_0_valid));
	vcdp->chgBit(c+121,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter_io_output_w_valid));
	vcdp->chgBit(c+122,(vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_ready));
	vcdp->chgBit(c+123,(vlSymsp->TOP__Briey.__PVT___zz_34_));
	vcdp->chgBit(c+124,(vlSymsp->TOP__Briey.__PVT___zz_35_));
	vcdp->chgBit(c+125,(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__arw_ready));
	vcdp->chgBus(c+126,(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__arw_payload_fragment_addr),17);
	vcdp->chgBit(c+127,(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__arw_payload_fragment_write));
	vcdp->chgBit(c+128,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo_io_pop_valid));
	vcdp->chgBus(c+129,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo_io_pop_payload_data),16);
	vcdp->chgBit(c+130,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__bridge_result_payload_fragment_write));
	vcdp->chgBus(c+131,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__bridge_result_payload_fragment_id),4);
	vcdp->chgBit(c+132,((1U & (~ ((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__ptrMatch) 
				      & (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__risingOccupancy))))));
	vcdp->chgBus(c+133,(((((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__risingOccupancy) 
			       & (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__ptrMatch)) 
			      << 1U) | (1U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__pushPtr_value) 
					      - (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__popPtr_value))))),2);
	vcdp->chgBit(c+134,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_valid));
	vcdp->chgArray(c+135,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__frontend_state_string),112);
	vcdp->chgBit(c+139,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__pushPtr_willIncrement));
	vcdp->chgBit(c+140,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__pushPtr_valueNext));
	vcdp->chgBit(c+141,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__pushPtr_value) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__pushPtr_willIncrement))));
	vcdp->chgBit(c+142,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__ptrMatch));
	vcdp->chgBit(c+143,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__empty));
	vcdp->chgBit(c+144,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__ptrMatch) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__risingOccupancy))));
	vcdp->chgBit(c+145,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__pushing));
	vcdp->chgBus(c+146,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__interruptCtrl_1___05Fio_pendings),4);
	vcdp->chgBit(c+147,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT___zz_11_));
	vcdp->chgBit(c+148,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT___zz_13_));
	vcdp->chgBit(c+149,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT___zz_15_));
	vcdp->chgBit(c+150,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT___zz_17_));
	vcdp->chgBit(c+151,((1U & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_full)))));
	vcdp->chgBit(c+152,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid));
	vcdp->chgBus(c+153,(((((IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy) 
			       & (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch)) 
			      << 4U) | (0xfU & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value) 
						- (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value))))),5);
	vcdp->chgBus(c+154,(((((~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy)) 
			       & (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch)) 
			      << 4U) | (0xfU & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value) 
						- (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value))))),5);
	vcdp->chgBit(c+155,((1U & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_full)))));
	vcdp->chgBit(c+156,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy_io_pop_valid));
	vcdp->chgBus(c+157,(((((IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_risingOccupancy) 
			       & (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ptrMatch)) 
			      << 4U) | (0xfU & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_value) 
						- (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_value))))),5);
	vcdp->chgBus(c+158,(((((~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_risingOccupancy)) 
			       & (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ptrMatch)) 
			      << 4U) | (0xfU & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_value) 
						- (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_value))))),5);
	vcdp->chgBit(c+159,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_interruptCtrl_readInt));
	vcdp->chgBit(c+160,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_interruptCtrl_writeInt));
	vcdp->chgBit(c+161,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
	vcdp->chgBus(c+162,((7U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
				   + (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)))),3);
	vcdp->chgBit(c+163,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow));
	vcdp->chgQuad(c+164,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string),48);
	vcdp->chgBit(c+166,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick));
	vcdp->chgQuad(c+167,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string),48);
	vcdp->chgBit(c+169,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch));
	vcdp->chgBit(c+170,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch) 
			     & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy)))));
	vcdp->chgBit(c+171,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_full));
	vcdp->chgBit(c+172,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_willIncrement));
	vcdp->chgBus(c+173,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_valueNext),4);
	vcdp->chgBit(c+174,(((0xfU == (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_value)) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_willIncrement))));
	vcdp->chgBit(c+175,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ptrMatch));
	vcdp->chgBit(c+176,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushing));
	vcdp->chgBit(c+177,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ptrMatch) 
			     & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_risingOccupancy)))));
	vcdp->chgBit(c+178,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_full));
	vcdp->chgBit(c+179,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresLine_io_ready));
	vcdp->chgBit(c+180,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresLine_io_setPixel));
	vcdp->chgBit(c+181,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresCircle_io_ready));
	vcdp->chgBit(c+182,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresCircle_io_setPixel));
	vcdp->chgBus(c+183,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresCircle_io_address_0),9);
	vcdp->chgBus(c+184,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresCircle_io_address_1),8);
	vcdp->chgBit(c+185,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect_io_ready));
	vcdp->chgBit(c+186,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect_io_setPixel));
	vcdp->chgBit(c+187,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__vga_io_vga_videoOn));
	vcdp->chgBit(c+188,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresLine__DOT__downTemp));
	vcdp->chgBit(c+189,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresLine__DOT__rightTemp));
	vcdp->chgBus(c+190,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresLine__DOT__e2),18);
	vcdp->chgArray(c+191,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresLine__DOT__breshamSM_stateReg_string),136);
	vcdp->chgArray(c+196,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresCircle__DOT__BreshamCircSM_stateReg_string),184);
	vcdp->chgBit(c+202,(vlSymsp->TOP__Briey.__PVT___zz_95_));
	vcdp->chgBus(c+203,(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__decodedCmdSels),2);
	vcdp->chgBit(c+204,((0U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__decodedCmdSels))));
	vcdp->chgBit(c+205,(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__allowCmd));
	vcdp->chgBit(c+206,((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
			      & (0U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__decodedCmdSels))) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__allowCmd))));
	vcdp->chgBit(c+207,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_inputs_0_ready) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT___zz_48_))));
	vcdp->chgBit(c+208,(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__errorSlave_io_axi_arw_ready));
	vcdp->chgBus(c+209,(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__writeRspIndex),2);
	vcdp->chgBus(c+210,(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__readRspIndex),2);
	vcdp->chgBit(c+211,(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT___zz_17_));
	vcdp->chgBit(c+212,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_1));
	vcdp->chgBit(c+213,((1U & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__full)))));
	vcdp->chgBus(c+214,(((((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__risingOccupancy) 
			       & (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__ptrMatch)) 
			      << 2U) | (3U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_value) 
					      - (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_value))))),3);
	vcdp->chgBit(c+215,((1U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_4_))));
	vcdp->chgBit(c+216,((1U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_4_) 
				   >> 1U))));
	vcdp->chgBit(c+217,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__ptrMatch));
	vcdp->chgBit(c+218,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__ptrMatch) 
			     & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__risingOccupancy)))));
	vcdp->chgBit(c+219,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__full));
	vcdp->chgBit(c+220,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter_io_output_valid));
	vcdp->chgBus(c+221,((3U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter_io_chosenOH) 
				   >> 1U))),2);
	vcdp->chgBus(c+222,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter_io_chosenOH),3);
	vcdp->chgBit(c+223,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFork_5___05Fio_outputs_1_valid));
	vcdp->chgBit(c+224,((1U & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__full)))));
	vcdp->chgBus(c+225,(((((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__risingOccupancy) 
			       & (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__ptrMatch)) 
			      << 2U) | (3U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_value) 
					      - (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_value))))),3);
	vcdp->chgBus(c+226,((3U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo_io_pop_payload_context_id) 
				   >> 2U))),2);
	vcdp->chgBit(c+227,((0U == (3U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo_io_pop_payload_context_id) 
					  >> 2U)))));
	vcdp->chgBit(c+228,((1U == (3U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo_io_pop_payload_context_id) 
					  >> 2U)))));
	vcdp->chgBit(c+229,((2U == (3U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo_io_pop_payload_context_id) 
					  >> 2U)))));
	vcdp->chgBit(c+230,((1U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_4_))));
	vcdp->chgBit(c+231,((1U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_4_) 
				   >> 1U))));
	vcdp->chgBit(c+232,((1U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_4_) 
				   >> 2U))));
	vcdp->chgBit(c+233,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0));
	vcdp->chgBit(c+234,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_1));
	vcdp->chgBit(c+235,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_2));
	vcdp->chgBit(c+236,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__ptrMatch));
	vcdp->chgBit(c+237,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__ptrMatch) 
			     & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__risingOccupancy)))));
	vcdp->chgBit(c+238,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__full));
	vcdp->chgBit(c+239,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_valid));
	vcdp->chgBit(c+240,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0));
	vcdp->chgBit(c+241,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFork_5___05Fio_input_ready));
	vcdp->chgBit(c+242,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFork_5___05Fio_outputs_1_valid));
	vcdp->chgBit(c+243,((1U & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__full)))));
	vcdp->chgBit(c+244,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___05Fio_pop_valid));
	vcdp->chgBus(c+245,(((((IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__risingOccupancy) 
			       & (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__ptrMatch)) 
			      << 2U) | (3U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_value) 
					      - (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_value))))),3);
	vcdp->chgBit(c+246,((1U & (((IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_3_) 
				    >> 1U) | (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_3_)))));
	vcdp->chgBit(c+247,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT___zz_3_));
	vcdp->chgBit(c+248,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT___zz_1_));
	vcdp->chgBit(c+249,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_willIncrement));
	vcdp->chgBus(c+250,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_valueNext),2);
	vcdp->chgBit(c+251,(((3U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_value)) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_willIncrement))));
	vcdp->chgBit(c+252,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__ptrMatch));
	vcdp->chgBit(c+253,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__ptrMatch) 
			     & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__risingOccupancy)))));
	vcdp->chgBit(c+254,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__full));
	vcdp->chgBit(c+255,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushing));
	vcdp->chgBit(c+256,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__cmdArbiter_io_output_valid));
	vcdp->chgBit(c+257,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__cmdArbiter__DOT__maskRouted_0));
	vcdp->chgBit(c+258,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFork_5___05Fio_outputs_1_valid));
	vcdp->chgBit(c+259,((1U & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___DOT__full)))));
	vcdp->chgBit(c+260,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___05Fio_pop_valid));
	vcdp->chgBus(c+261,(((((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___DOT__risingOccupancy) 
			       & (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___DOT__ptrMatch)) 
			      << 2U) | (3U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_value) 
					      - (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_value))))),3);
	vcdp->chgBit(c+262,((1U & (((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__cmdArbiter__DOT___zz_3_) 
				    >> 1U) | (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__cmdArbiter__DOT___zz_3_)))));
	vcdp->chgBit(c+263,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT___zz_3_));
	vcdp->chgBit(c+264,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT___zz_1_));
	vcdp->chgBit(c+265,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_willIncrement));
	vcdp->chgBus(c+266,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_valueNext),2);
	vcdp->chgBit(c+267,(((3U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_value)) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_willIncrement))));
	vcdp->chgBit(c+268,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___DOT__ptrMatch));
	vcdp->chgBit(c+269,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___DOT__ptrMatch) 
			     & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___DOT__risingOccupancy)))));
	vcdp->chgBit(c+270,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___DOT__full));
	vcdp->chgBit(c+271,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___DOT__pushing));
	vcdp->chgBit(c+272,((0U != (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder_io_input_r_payload_resp))));
	vcdp->chgBit(c+273,(vlSymsp->TOP__Briey.__PVT___zz_93_));
	vcdp->chgBit(c+274,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_rsp_issueDetected));
	vcdp->chgBit(c+275,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_haltItself));
	vcdp->chgBit(c+276,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_rsp_redoFetch));
	vcdp->chgBus(c+277,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code),4);
	vcdp->chgBit(c+278,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injectionPort_ready));
	vcdp->chgBit(c+279,(((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_119_) 
			     & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_halt)))));
	vcdp->chgBit(c+280,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_halt));
	vcdp->chgBit(c+281,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_readyForError));
	vcdp->chgBus(c+282,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_trapCause),4);
	vcdp->chgBit(c+283,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_207_));
	vcdp->chgBit(c+284,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_210_));
	vcdp->chgBit(c+285,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire));
	vcdp->chgBit(c+286,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement));
	vcdp->chgBit(c+287,(((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError) 
			     | (0U != (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder_io_input_r_payload_resp)))));
	vcdp->chgBit(c+288,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_way));
	vcdp->chgBus(c+289,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_address),3);
	vcdp->chgBit(c+290,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_valid));
	vcdp->chgBus(c+291,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_address),24);
	vcdp->chgBit(c+292,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willIncrement));
	vcdp->chgBus(c+293,((7U & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_value) 
				   + (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willIncrement)))),3);
	vcdp->chgBit(c+294,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_willOverflow));
    }
}

void VBriey::traceChgThis__15(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+295,((((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__arw_valid) 
			      & (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__arw_payload_fragment_write)) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__stage0_ready))));
	vcdp->chgBit(c+296,((((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__bridge_result_valid) 
			      & (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__bridge_result_payload_fragment_write)) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__bridge_axiCmd_ready))));
	vcdp->chgBit(c+297,((((IData)(vlSymsp->TOP__Briey.__PVT___zz_34_) 
			      & (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__decodedCmdSels)) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__allowCmd))));
	vcdp->chgBit(c+298,((((IData)(vlSymsp->TOP__Briey.__PVT___zz_34_) 
			      & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__decodedCmdSels) 
				 >> 1U)) & (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__allowCmd))));
	vcdp->chgBit(c+299,((((IData)(vlSymsp->TOP__Briey.__PVT___zz_34_) 
			      & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__decodedCmdSels) 
				 >> 2U)) & (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__allowCmd))));
	vcdp->chgBit(c+300,((((IData)(vlSymsp->TOP__Briey.__PVT___zz_34_) 
			      & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__decodedCmdSels) 
				 >> 3U)) & (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__allowCmd))));
	vcdp->chgBit(c+301,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___05Fio_pop_valid) 
			     & (~ (IData)(vlSymsp->TOP__Briey.__PVT___zz_64_)))));
	vcdp->chgBus(c+302,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__cmdArbiter_io_output_payload_write)
			      ? 0U : ((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_1) 
				      << 3U))),4);
	vcdp->chgBit(c+303,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___05Fio_pop_valid) 
			     & (~ (IData)(vlSymsp->TOP__Briey.__PVT___zz_75_)))));
	vcdp->chgBus(c+304,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_13_)
			      ? (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_9_)
			      : ((8U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter_io_chosenOH) 
					<< 1U)) | (
						   (4U 
						    & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter_io_chosenOH) 
						       << 1U)) 
						   | (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_9_))))),4);
	vcdp->chgBit(c+305,(((0U == (3U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo_io_pop_payload_context_id) 
					   >> 2U))) 
			     | ((1U != (3U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo_io_pop_payload_context_id) 
					      >> 2U))) 
				| (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_r_ready)))));
	vcdp->chgBit(c+306,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___05Fio_pop_valid) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_w_ready))));
	vcdp->chgBit(c+307,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter_io_output_w_valid) 
			     | (IData)(vlSymsp->TOP__Briey.__PVT___zz_64_))));
	vcdp->chgBit(c+308,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter_io_output_w_valid) 
			     | (IData)(vlSymsp->TOP__Briey.__PVT___zz_75_))));
	vcdp->chgBit(c+309,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl_io_bus_cmd_ready) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT___zz_3_))));
	vcdp->chgBit(c+310,(((((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__bridge_axiCmd_valid) 
			       & (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__bridge_axiCmd_ready)) 
			      & (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__bridge_result_payload_fragment_write)) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__bridge_result_payload_last))));
	vcdp->chgBus(c+311,((7U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__frontend_bootRefreshCounter_value) 
				   + (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__frontend_bootRefreshCounter_willIncrement)))),3);
	vcdp->chgBit(c+312,(((7U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__frontend_bootRefreshCounter_value)) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__frontend_bootRefreshCounter_willIncrement))));
	vcdp->chgBit(c+313,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__popPtr_value) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__popPtr_willIncrement))));
	vcdp->chgBit(c+314,(((0xfU == (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value)) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_willIncrement))));
	vcdp->chgBit(c+315,(((0xfU == (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value)) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_willIncrement))));
	vcdp->chgBit(c+316,(((0xfU == (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_value)) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_willIncrement))));
	vcdp->chgBit(c+317,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter_io_inputs_0_ready) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT___zz_39_))));
	vcdp->chgBit(c+318,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__cmdArbiter_io_inputs_0_ready) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT___zz_42_))));
	vcdp->chgBus(c+319,((7U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__pendingCmdCounter_value) 
				   + (((IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__pendingCmdCounter_incrementIt) 
				       & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__pendingCmdCounter_decrementIt)))
				       ? 1U : (((~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__pendingCmdCounter_incrementIt)) 
						& (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__pendingCmdCounter_decrementIt))
					        ? 7U
					        : 0U))))),3);
	vcdp->chgBit(c+320,(((7U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__pendingCmdCounter_value)) 
			     & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__pendingCmdCounter_decrementIt)))));
	vcdp->chgBit(c+321,((((7U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__pendingCmdCounter_value)) 
			      & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__pendingCmdCounter_decrementIt))) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__pendingCmdCounter_incrementIt))));
	vcdp->chgBit(c+322,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter_io_inputs_2_ready) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT___zz_45_))));
	vcdp->chgBit(c+323,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__cmdArbiter_io_inputs_0_ready) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT___zz_51_))));
	vcdp->chgBit(c+324,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__cmdArbiter_io_inputs_1_ready) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT___zz_54_))));
	vcdp->chgBus(c+325,((7U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingDataCounter_value) 
				   + (((IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingDataCounter_incrementIt) 
				       & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingDataCounter_decrementIt)))
				       ? 1U : (((~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingDataCounter_incrementIt)) 
						& (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingDataCounter_decrementIt))
					        ? 7U
					        : 0U))))),3);
	vcdp->chgBit(c+326,(((7U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingDataCounter_value)) 
			     & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingDataCounter_decrementIt)))));
	vcdp->chgBit(c+327,((((7U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingDataCounter_value)) 
			      & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingDataCounter_decrementIt))) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingDataCounter_incrementIt))));
	vcdp->chgBit(c+328,((((IData)(vlSymsp->TOP__Briey.__PVT___zz_34_) 
			      & (0U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__decodedCmdSels))) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__allowCmd))));
	vcdp->chgBit(c+329,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter_io_inputs_1_ready) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT___zz_61_))));
	vcdp->chgBus(c+330,((7U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__pendingCmdCounter_value) 
				   + (((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__pendingCmdCounter_incrementIt) 
				       & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__pendingCmdCounter_decrementIt)))
				       ? 1U : (((~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__pendingCmdCounter_incrementIt)) 
						& (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__pendingCmdCounter_decrementIt))
					        ? 7U
					        : 0U))))),3);
	vcdp->chgBit(c+331,(((7U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__pendingCmdCounter_value)) 
			     & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__pendingCmdCounter_decrementIt)))));
	vcdp->chgBit(c+332,((((7U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__pendingCmdCounter_value)) 
			      & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__pendingCmdCounter_decrementIt))) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__pendingCmdCounter_incrementIt))));
	vcdp->chgBus(c+333,((((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_1) 
			      << 1U) | (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0))),2);
	vcdp->chgBit(c+334,((((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter_io_output_w_valid) 
			      & (~ (IData)(vlSymsp->TOP__Briey.__PVT___zz_64_))) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_m2sPipe_s2mPipe_payload_last))));
	vcdp->chgBit(c+335,(((3U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_value)) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_willIncrement))));
	vcdp->chgBit(c+336,(((3U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_value)) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_willIncrement))));
	vcdp->chgBit(c+337,((((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter_io_output_w_valid) 
			      & (~ (IData)(vlSymsp->TOP__Briey.__PVT___zz_75_))) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_m2sPipe_s2mPipe_payload_last))));
	vcdp->chgBit(c+338,(((3U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_value)) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_willIncrement))));
	vcdp->chgBit(c+339,(((3U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_value)) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_willIncrement))));
	vcdp->chgBit(c+340,((((IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_w_valid) 
			      & (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_w_halfPipe_regs_ready)) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_m2sPipe_s2mPipe_payload_last))));
	vcdp->chgBit(c+341,(((3U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_value)) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_willIncrement))));
	vcdp->chgBit(c+342,((((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter_io_output_w_valid) 
			      & (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_w_ready)) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_m2sPipe_s2mPipe_payload_last))));
	vcdp->chgBit(c+343,(((3U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_value)) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_willIncrement))));
	vcdp->chgBit(c+344,(((0x21U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_value)) 
			     & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_willIncrement))));
    }
}

void VBriey::traceChgThis__16(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+345,((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_111_) 
			      & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherHalt))) 
			     & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt)))));
    }
}

void VBriey::traceChgThis__17(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+346,(((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_111_) 
			     & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherHalt)))));
    }
}

void VBriey::traceChgThis__18(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+347,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__bubbleInserter_cmd_payload_task_string),128);
	vcdp->chgArray(c+351,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__bubbleInserter_rsp_payload_task_string),128);
	vcdp->chgArray(c+355,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_cmd_payload_task_string),128);
	vcdp->chgBit(c+359,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerA__DOT__limitHit));
	vcdp->chgBit(c+360,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerB__DOT__limitHit));
	vcdp->chgBit(c+361,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerC__DOT__limitHit));
	vcdp->chgBit(c+362,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerD__DOT__limitHit));
	vcdp->chgQuad(c+363,((VL_ULL(0x3ffffffff) & 
			      VL_MULS_QQQ(34,34,34, 
					  (VL_ULL(0x3ffffffff) 
					   & VL_EXTENDS_QI(34,17, vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_MulPlugin_aHigh)), 
					  (VL_ULL(0x3ffffffff) 
					   & VL_EXTENDS_QI(34,17, 
							   (0xffffU 
							    & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_)))))),34);
	vcdp->chgBus(c+365,((3U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_addSub)),2);
	vcdp->chgQuad(c+366,((VL_ULL(0x3ffffffff) & 
			      VL_MULS_QQQ(34,34,34, 
					  (VL_ULL(0x3ffffffff) 
					   & VL_EXTENDS_QI(34,17, 
							   (0xffffU 
							    & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_))), 
					  (VL_ULL(0x3ffffffff) 
					   & VL_EXTENDS_QI(34,17, vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_MulPlugin_bHigh))))),34);
	vcdp->chgQuad(c+368,((VL_ULL(0x3ffffffff) & 
			      VL_MULS_QQQ(34,34,34, 
					  (VL_ULL(0x3ffffffff) 
					   & VL_EXTENDS_QI(34,17, vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_MulPlugin_aHigh)), 
					  (VL_ULL(0x3ffffffff) 
					   & VL_EXTENDS_QI(34,17, vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_MulPlugin_bHigh))))),34);
	vcdp->chgBus(c+370,(((0xffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_) 
			     * (0xffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_))),32);
	vcdp->chgBit(c+371,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_180_));
	vcdp->chgBus(c+372,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_addSub),32);
	vcdp->chgBit(c+373,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_less));
	vcdp->chgBus(c+374,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_),32);
	vcdp->chgBus(c+375,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_),32);
	vcdp->chgBus(c+376,((0x1fU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_)),5);
	vcdp->chgBus(c+377,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_FullBarrelShifterPlugin_reversed),32);
	vcdp->chgBus(c+378,((0xffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_)),16);
	vcdp->chgBus(c+379,((0xffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_)),16);
	vcdp->chgBus(c+380,((0xffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_151_)),17);
	vcdp->chgBus(c+381,((0xffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_156_)),17);
	vcdp->chgBus(c+382,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_MulPlugin_aHigh),17);
	vcdp->chgBus(c+383,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_MulPlugin_bHigh),17);
	vcdp->chgBit(c+384,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_BranchPlugin_eq));
	vcdp->chgBus(c+385,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_BranchPlugin_branch_src2),32);
	vcdp->chgBus(c+386,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stage0_mask),4);
    }
}

void VBriey::traceChgThis__19(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+387,(((0U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_5_))
			      ? 7U : ((1U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_5_))
				       ? (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_ar_halfPipe_regs_payload_len)
				       : (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_m2sPipe_s2mPipe_payload_length)))),8);
	vcdp->chgBit(c+388,(((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_valid) 
			       & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_way)) 
			      & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address) 
				 == (0x3fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_SrcPlugin_addSub 
					      >> 2U)))) 
			     & (0U != ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stage0_mask) 
				       & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask))))));
    }
}

void VBriey::traceChgThis__20(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+389,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_privilege),2);
	vcdp->chgBit(c+390,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_allowException));
	vcdp->chgBus(c+391,(((3U > (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_privilege))
			      ? 3U : (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_privilege))),2);
	vcdp->chgBit(c+392,((0U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_privilege))));
	vcdp->chgBit(c+393,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_215_));
    }
}

void VBriey::traceChgThis__21(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+394,(((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack) 
			     & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_allowException))));
    }
}

void VBriey::traceChgThis__22(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp36,95,0,3);
    // Body
    {
	vcdp->chgBit(c+395,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arw_ready));
	vcdp->chgBit(c+396,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arw_ready));
	vcdp->chgBus(c+397,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrlBusAdapted_rsp_payload_data),32);
	vcdp->chgBit(c+398,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arw_ready));
	vcdp->chgBit(c+399,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_w_ready));
	vcdp->chgBus(c+400,(((IData)(vlSymsp->TOP__Briey.__PVT__io_apb_decoder_io_input_PSLVERROR) 
			     << 1U)),2);
	vcdp->chgBit(c+401,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_apb_PSEL));
	vcdp->chgBus(c+402,(vlSymsp->TOP__Briey.__PVT__axi_gpioACtrl_io_apb_PRDATA),32);
	vcdp->chgBus(c+403,(vlSymsp->TOP__Briey.__PVT__axi_gpioBCtrl_io_apb_PRDATA),32);
	vcdp->chgBus(c+404,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl_io_apb_PRDATA),32);
	vcdp->chgBus(c+405,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl_io_apb_PRDATA),32);
	vcdp->chgBit(c+406,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arw_ready));
	vcdp->chgBit(c+407,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_w_ready));
	vcdp->chgBit(c+408,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_b_valid));
	vcdp->chgBit(c+409,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_r_valid));
	vcdp->chgBit(c+410,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_ar_valid));
	vcdp->chgBus(c+411,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_ar_payload_len),8);
	vcdp->chgBit(c+412,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_r_ready));
	vcdp->chgBit(c+413,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_valid));
	vcdp->chgBit(c+414,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_payload_wr));
	vcdp->chgBus(c+415,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_payload_address),32);
	vcdp->chgBus(c+416,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_payload_length),3);
	vcdp->chgBit(c+417,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_mem_cmd_payload_last));
	vcdp->chgBit(c+418,(vlSymsp->TOP__Briey.__PVT__streamFork_5___05Fio_input_ready));
	vcdp->chgBus(c+419,(vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_m2sPipe_s2mPipe_payload_address),32);
	vcdp->chgBus(c+420,(vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_m2sPipe_s2mPipe_payload_data),32);
	vcdp->chgBus(c+421,(vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_m2sPipe_s2mPipe_payload_length),3);
	vcdp->chgBit(c+422,(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder_io_input_ar_ready));
	vcdp->chgBit(c+423,(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder_io_input_r_payload_last));
	vcdp->chgBit(c+424,(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder_io_input_arw_ready));
	vcdp->chgBit(c+425,(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder_io_input_w_ready));
	vcdp->chgBit(c+426,(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder_io_input_b_valid));
	vcdp->chgBus(c+427,(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder_io_input_b_payload_resp),2);
	vcdp->chgBit(c+428,(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder_io_input_r_valid));
	vcdp->chgBus(c+429,(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder_io_input_r_payload_resp),2);
	vcdp->chgBit(c+430,(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder_io_input_r_payload_last));
	vcdp->chgBus(c+431,(vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_m2sPipe_s2mPipe_payload_length),8);
	vcdp->chgBit(c+432,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder_io_input_ar_ready));
	vcdp->chgBit(c+433,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder_io_input_r_valid));
	vcdp->chgBit(c+434,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder_io_input_r_payload_last));
	vcdp->chgBit(c+435,((((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_ar_halfPipe_regs_valid) 
			      & (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__decodedCmdSels)) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__allowCmd))));
	vcdp->chgBit(c+436,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__cmdArbiter_io_inputs_0_ready));
	vcdp->chgBit(c+437,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__cmdArbiter_io_inputs_1_ready));
	vcdp->chgBit(c+438,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFork_5___05Fio_outputs_0_valid));
	vcdp->chgBus(c+439,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)
			      ? 7U : (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_m2sPipe_s2mPipe_payload_length))),8);
	vcdp->chgBit(c+440,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__cmdArbiter_io_output_payload_write));
	vcdp->chgBit(c+441,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter_io_output_w_valid));
	vcdp->chgBit(c+442,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter_io_inputs_0_ready));
	vcdp->chgBit(c+443,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter_io_inputs_1_ready));
	vcdp->chgBit(c+444,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter_io_inputs_2_ready));
	vcdp->chgBit(c+445,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFork_5___05Fio_outputs_0_valid));
	vcdp->chgBit(c+446,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_13_));
	vcdp->chgBit(c+447,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter_io_output_w_valid));
	vcdp->chgBit(c+448,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFork_5___05Fio_outputs_0_valid));
	vcdp->chgBus(c+449,((0xfffffU & vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_m2sPipe_s2mPipe_payload_address)),20);
	vcdp->chgBit(c+450,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_w_valid));
	vcdp->chgBit(c+451,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__cmdArbiter_io_inputs_0_ready));
	vcdp->chgBus(c+452,((0xffffffU & vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_m2sPipe_s2mPipe_payload_address)),24);
	vcdp->chgBit(c+453,(vlSymsp->TOP__Briey.__PVT__io_apb_decoder_io_input_PREADY));
	vcdp->chgBus(c+454,(vlSymsp->TOP__Briey.__PVT__apb3Router_1___DOT___zz_5_),32);
	vcdp->chgBit(c+455,(vlSymsp->TOP__Briey.__PVT__io_apb_decoder_io_input_PSLVERROR));
	vcdp->chgBus(c+456,(vlSymsp->TOP__Briey.__PVT__io_apb_decoder_io_output_PSEL),4);
	vcdp->chgBit(c+457,((1U & (IData)(vlSymsp->TOP__Briey.__PVT__io_apb_decoder_io_output_PSEL))));
	vcdp->chgBit(c+458,((1U & ((IData)(vlSymsp->TOP__Briey.__PVT__io_apb_decoder_io_output_PSEL) 
				   >> 1U))));
	vcdp->chgBit(c+459,((1U & ((IData)(vlSymsp->TOP__Briey.__PVT__io_apb_decoder_io_output_PSEL) 
				   >> 2U))));
	vcdp->chgBit(c+460,((1U & ((IData)(vlSymsp->TOP__Briey.__PVT__io_apb_decoder_io_output_PSEL) 
				   >> 3U))));
	vcdp->chgBit(c+461,(vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_m2sPipe_s2mPipe_ready));
	vcdp->chgBit(c+462,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter_io_output_w_s2mPipe_ready));
	vcdp->chgBit(c+463,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter_io_output_w_s2mPipe_ready));
	vcdp->chgBit(c+464,(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__arw_valid));
	vcdp->chgBit(c+465,(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__stage0_valid));
	vcdp->chgBit(c+466,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl_io_bus_cmd_ready));
	vcdp->chgBit(c+467,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__bridge_axiCmd_valid));
	vcdp->chgBit(c+468,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__bridge_result_payload_last));
	vcdp->chgBit(c+469,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__bridge_result_valid));
	vcdp->chgBit(c+470,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__bridge_result_ready));
	vcdp->chgBit(c+471,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__bridge_axiCmd_ready));
	vcdp->chgBus(c+472,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT___zz_14_),25);
	vcdp->chgBit(c+473,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT___zz_17_));
	vcdp->chgBus(c+474,((0x3ffU & vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT___zz_14_)),10);
	vcdp->chgBus(c+475,((3U & (vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT___zz_14_ 
				   >> 0xaU))),2);
	vcdp->chgBus(c+476,((0x1fffU & (vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT___zz_14_ 
					>> 0xcU))),13);
	vcdp->chgBit(c+477,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__frontend_rsp_valid));
	vcdp->chgBit(c+478,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__frontend_rsp_ready));
	vcdp->chgBus(c+479,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__frontend_rsp_payload_task),3);
	vcdp->chgBus(c+480,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__frontend_rsp_payload_rowColumn),13);
	vcdp->chgBit(c+481,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__frontend_bootRefreshCounter_willIncrement));
	vcdp->chgBit(c+482,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__bubbleInserter_cmd_ready));
	vcdp->chgBit(c+483,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__bubbleInserter_rsp_valid));
	vcdp->chgBit(c+484,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__bubbleInserter_insertBubble));
	vcdp->chgBit(c+485,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT___zz_19_));
	vcdp->chgBit(c+486,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdramCkeNext));
	vcdp->chgArray(c+487,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__frontend_rsp_payload_task_string),128);
	vcdp->chgBit(c+491,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__popPtr_willIncrement));
	vcdp->chgBit(c+492,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__popPtr_valueNext));
	vcdp->chgBit(c+493,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__popping));
	vcdp->chgBit(c+494,(vlSymsp->TOP__Briey.__PVT__axi_gpioACtrl__DOT__ctrl_doWrite));
	vcdp->chgBit(c+495,(vlSymsp->TOP__Briey.__PVT__axi_gpioBCtrl__DOT__ctrl_doWrite));
	vcdp->chgBit(c+496,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerA_io_full));
	vcdp->chgBit(c+497,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerB_io_full));
	vcdp->chgBit(c+498,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerC_io_full));
	vcdp->chgBit(c+499,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerD_io_full));
	vcdp->chgBit(c+500,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__busCtrl_doWrite));
	vcdp->chgBit(c+501,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerABridge_busClearing));
	vcdp->chgBit(c+502,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerBBridge_busClearing));
	vcdp->chgBit(c+503,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerCBridge_busClearing));
	vcdp->chgBit(c+504,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerDBridge_busClearing));
	vcdp->chgBit(c+505,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT___zz_2_));
	vcdp->chgBit(c+506,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT___zz_12_));
	vcdp->chgBit(c+507,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT___zz_14_));
	vcdp->chgBit(c+508,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT___zz_16_));
	vcdp->chgBit(c+509,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT___zz_18_));
	vcdp->chgBus(c+510,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT___zz_19_),4);
	vcdp->chgBus(c+511,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT___zz_20_),4);
	vcdp->chgBit(c+512,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__tx_io_write_ready));
	vcdp->chgBit(c+513,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__busCtrl_doWrite));
	vcdp->chgBit(c+514,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT___zz_1_));
	vcdp->chgBit(c+515,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd));
	vcdp->chgBit(c+516,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_willIncrement));
	vcdp->chgBus(c+517,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_valueNext),4);
	vcdp->chgBit(c+518,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_willIncrement));
	vcdp->chgBus(c+519,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_valueNext),4);
	vcdp->chgBit(c+520,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushing));
	vcdp->chgBit(c+521,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popping));
	vcdp->chgBit(c+522,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT___zz_6_));
	vcdp->chgBit(c+523,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_willIncrement));
	vcdp->chgBus(c+524,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_valueNext),4);
	vcdp->chgBit(c+525,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popping));
	vcdp->chgBit(c+526,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__mcpState_readData_fsm_wantExit));
	vcdp->chgBus(c+527,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__mcpState_readData_fsm_stateNext),3);
	vcdp->chgBus(c+528,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__mcpState_stateNext),3);
	vcdp->chgBus(c+529,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__mcpState_readData_fsm_stateReg_string),32);
	vcdp->chgBus(c+530,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__mcpState_readData_fsm_stateNext_string),32);
	vcdp->chgArray(c+531,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__mcpState_stateReg_string),160);
	vcdp->chgArray(c+536,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__mcpState_stateNext_string),160);
	vcdp->chgBit(c+541,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT___zz_1_));
	vcdp->chgBit(c+542,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT___zz_2_));
	vcdp->chgBit(c+543,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT___zz_3_));
	vcdp->chgBit(c+544,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT___zz_4_));
	vcdp->chgBus(c+545,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT___zz_5_),18);
	vcdp->chgBus(c+546,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT___zz_6_),10);
	vcdp->chgBus(c+547,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT___zz_7_),9);
	vcdp->chgBus(c+548,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT___zz_8_),10);
	vcdp->chgBus(c+549,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT___zz_9_),9);
	vcdp->chgBit(c+550,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT___zz_10_));
	vcdp->chgBus(c+551,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresLine__DOT__breshamSM_stateNext),3);
	vcdp->chgArray(c+552,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresLine__DOT__breshamSM_stateNext_string),136);
	vcdp->chgBus(c+557,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT___zz_11_),10);
	vcdp->chgBus(c+558,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT___zz_12_),9);
	vcdp->chgBus(c+559,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT___zz_13_),10);
	vcdp->chgBit(c+560,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT___zz_14_));
	vcdp->chgBus(c+561,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresCircle__DOT__BreshamCircSM_stateNext),3);
	vcdp->chgArray(c+562,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresCircle__DOT__BreshamCircSM_stateNext_string),184);
	vcdp->chgBus(c+568,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT___zz_15_),9);
	vcdp->chgBus(c+569,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT___zz_16_),8);
	vcdp->chgBus(c+570,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT___zz_17_),9);
	vcdp->chgBus(c+571,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT___zz_18_),8);
	vcdp->chgBit(c+572,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT___zz_19_));
	vcdp->chgBus(c+573,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__fill_stateNext),2);
	__Vtemp36[0U] = ((0U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__fill_stateNext))
			  ? 0x20202020U : ((1U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__fill_stateNext))
					    ? 0x69646c65U
					    : ((2U 
						== (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__fill_stateNext))
					        ? 0x66696c6cU
					        : 0x3f3f3f3fU)));
	__Vtemp36[1U] = ((0U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__fill_stateNext))
			  ? 0x6f6f7420U : ((1U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__fill_stateNext))
					    ? 0x696c6c5fU
					    : ((2U 
						== (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__fill_stateNext))
					        ? 0x696c6c5fU
					        : 0x3f3f3f3fU)));
	__Vtemp36[2U] = ((0U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__fill_stateNext))
			  ? 0x62U : ((1U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__fill_stateNext))
				      ? 0x66U : ((2U 
						  == (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__fill_stateNext))
						  ? 0x66U
						  : 0x3fU)));
	vcdp->chgArray(c+574,(__Vtemp36),72);
	vcdp->chgBit(c+577,(vlSymsp->TOP__Briey.__PVT___zz_96_));
	vcdp->chgBit(c+578,(vlSymsp->TOP__Briey.__PVT___zz_97_));
	vcdp->chgBit(c+579,(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__pendingCmdCounter_incrementIt));
	vcdp->chgBit(c+580,(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__pendingCmdCounter_decrementIt));
	vcdp->chgBus(c+581,((((IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__pendingCmdCounter_incrementIt) 
			      & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__pendingCmdCounter_decrementIt)))
			      ? 1U : (((~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__pendingCmdCounter_incrementIt)) 
				       & (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__pendingCmdCounter_decrementIt))
				       ? 7U : 0U))),3);
	vcdp->chgBit(c+582,(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__cmdAllowedStart));
	vcdp->chgBit(c+583,(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingDataCounter_incrementIt));
	vcdp->chgBit(c+584,(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingDataCounter_decrementIt));
	vcdp->chgBus(c+585,((((IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingDataCounter_incrementIt) 
			      & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingDataCounter_decrementIt)))
			      ? 1U : (((~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingDataCounter_incrementIt)) 
				       & (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingDataCounter_decrementIt))
				       ? 7U : 0U))),3);
	vcdp->chgBus(c+586,(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__decodedCmdSels),4);
	vcdp->chgBit(c+587,((0U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__decodedCmdSels))));
	vcdp->chgBit(c+588,(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__allowCmd));
	vcdp->chgBit(c+589,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__pendingCmdCounter_incrementIt));
	vcdp->chgBit(c+590,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__pendingCmdCounter_decrementIt));
	vcdp->chgBus(c+591,((((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__pendingCmdCounter_incrementIt) 
			      & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__pendingCmdCounter_decrementIt)))
			      ? 1U : (((~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__pendingCmdCounter_incrementIt)) 
				       & (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__pendingCmdCounter_decrementIt))
				       ? 7U : 0U))),3);
	vcdp->chgBit(c+592,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__decodedCmdSels));
	vcdp->chgBit(c+593,((1U & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__decodedCmdSels)))));
	vcdp->chgBit(c+594,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__allowCmd));
	vcdp->chgBit(c+595,((((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_ar_halfPipe_regs_valid) 
			      & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__decodedCmdSels))) 
			     & (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__allowCmd))));
	vcdp->chgBus(c+596,((0x1ffffU & vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_m2sPipe_s2mPipe_payload_address)),17);
	vcdp->chgBit(c+597,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__cmdArbiter_io_output_valid));
	vcdp->chgBit(c+598,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFork_5___05Fio_input_ready));
	vcdp->chgBit(c+599,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFork_5___05Fio_outputs_1_valid));
	vcdp->chgBit(c+600,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___05Fio_pop_valid));
	vcdp->chgBit(c+601,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0));
	vcdp->chgBit(c+602,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT___zz_4_));
	vcdp->chgBit(c+603,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT___zz_2_));
	vcdp->chgBit(c+604,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_willIncrement));
	vcdp->chgBus(c+605,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_valueNext),2);
	vcdp->chgBit(c+606,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_willIncrement));
	vcdp->chgBus(c+607,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_valueNext),2);
	vcdp->chgBit(c+608,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushing));
	vcdp->chgBit(c+609,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popping));
	vcdp->chgBus(c+610,((0x3ffffffU & vlSymsp->TOP__Briey.__PVT__axi_core_cpu_dBus_cmd_m2sPipe_m2sPipe_s2mPipe_payload_address)),26);
	vcdp->chgBit(c+611,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFork_5___05Fio_input_ready));
	vcdp->chgBit(c+612,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___05Fio_pop_valid));
	vcdp->chgBit(c+613,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT___zz_6_));
	vcdp->chgBit(c+614,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT___zz_4_));
	vcdp->chgBit(c+615,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_willIncrement));
	vcdp->chgBus(c+616,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_valueNext),2);
	vcdp->chgBit(c+617,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_willIncrement));
	vcdp->chgBus(c+618,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_valueNext),2);
	vcdp->chgBit(c+619,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushing));
	vcdp->chgBit(c+620,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popping));
	vcdp->chgBit(c+621,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_willIncrement));
	vcdp->chgBus(c+622,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_valueNext),2);
	vcdp->chgBit(c+623,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popping));
	vcdp->chgBit(c+624,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFork_5___05Fio_input_ready));
	vcdp->chgBit(c+625,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_willIncrement));
	vcdp->chgBus(c+626,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_valueNext),2);
	vcdp->chgBit(c+627,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___DOT__popping));
	vcdp->chgBit(c+628,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt));
	vcdp->chgBit(c+629,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt));
	vcdp->chgBit(c+630,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_mmuException));
	vcdp->chgBit(c+631,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_unalignedAccess));
	vcdp->chgBit(c+632,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_writeBack_accessError));
	vcdp->chgBit(c+633,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_flush_ready));
	vcdp->chgBit(c+634,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___05Fio_cpu_redo));
	vcdp->chgBus(c+635,((3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
				   >> 0x16U))),2);
	vcdp->chgBus(c+636,((3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
				   >> 0x1eU))),2);
	vcdp->chgBit(c+637,((1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
				   >> 2U))));
	vcdp->chgBit(c+638,((0x20U != (0x7fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
						>> 7U)))));
	vcdp->chgBit(c+639,((1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
				   >> 0x12U))));
	vcdp->chgBit(c+640,((1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
				   >> 0xbU))));
	vcdp->chgBit(c+641,((1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
				   >> 6U))));
	vcdp->chgBit(c+642,((1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
				   >> 0xaU))));
	vcdp->chgBus(c+643,((3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
				   >> 0x18U))),2);
	vcdp->chgBit(c+644,((1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
				   >> 0xdU))));
	vcdp->chgBit(c+645,((1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
				   >> 1U))));
	vcdp->chgBit(c+646,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch));
	vcdp->chgBit(c+647,((1U & ((vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
				    >> 0x1aU) & (~ 
						 (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
						  >> 8U))))));
	vcdp->chgBus(c+648,((3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
				   >> 0x13U))),2);
	vcdp->chgBit(c+649,((1U & (~ (((1U == (3U & 
					       (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
						>> 0xdU))) 
				       & (0U == (0x1fU 
						 & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
						    >> 0xfU)))) 
				      | ((3U == (3U 
						 & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
						    >> 0xdU))) 
					 & (0U == (0x1fU 
						   & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION 
						      >> 0xfU)))))))));
	vcdp->chgBus(c+650,((3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
				   >> 0x10U))),2);
	vcdp->chgBit(c+651,((1U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_)));
	vcdp->chgBit(c+652,((1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
				   >> 0x1dU))));
	vcdp->chgBit(c+653,((1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
				   >> 7U))));
	vcdp->chgBit(c+654,((1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
				   >> 0x1cU))));
	vcdp->chgBit(c+655,((1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
				   >> 9U))));
	vcdp->chgBit(c+656,((1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
				   >> 3U))));
	vcdp->chgBit(c+657,((1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
				   >> 4U))));
	vcdp->chgBus(c+658,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_RS2),32);
	vcdp->chgBus(c+659,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_RS1),32);
	vcdp->chgBit(c+660,((1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
				   >> 8U))));
	vcdp->chgBit(c+661,((1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
				   >> 0x1aU))));
	vcdp->chgBit(c+662,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_REGFILE_WRITE_VALID));
	vcdp->chgBit(c+663,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_90_));
	vcdp->chgBit(c+664,((1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
				   >> 0x1bU))));
	vcdp->chgBit(c+665,((1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
				   >> 5U))));
	vcdp->chgBus(c+666,((3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
				   >> 0xeU))),2);
	vcdp->chgBus(c+667,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_INSTRUCTION),32);
	vcdp->chgBit(c+668,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isValid));
	vcdp->chgBit(c+669,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_haltItself));
	vcdp->chgBit(c+670,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_haltByOther));
	vcdp->chgBit(c+671,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_flushAll));
	vcdp->chgBit(c+672,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck));
	vcdp->chgBit(c+673,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuckByOthers));
	vcdp->chgBit(c+674,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_haltItself));
	vcdp->chgBit(c+675,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck));
	vcdp->chgBit(c+676,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself));
	vcdp->chgBit(c+677,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_removeIt));
	vcdp->chgBit(c+678,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_flushAll));
	vcdp->chgBit(c+679,((1U & ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)) 
				   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_removeIt))))));
	vcdp->chgBit(c+680,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isFiring));
	vcdp->chgBit(c+681,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherflushIt));
	vcdp->chgBit(c+682,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_incomingInstruction));
	vcdp->chgBus(c+683,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_pcs_4),32);
	vcdp->chgBit(c+684,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__BranchPlugin_jumpInterface_valid));
	vcdp->chgBit(c+685,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_redoBranch_valid));
	vcdp->chgBit(c+686,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_valid));
	vcdp->chgBus(c+687,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DBusCachedPlugin_exceptionBus_payload_code),4);
	vcdp->chgBit(c+688,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decodeExceptionPort_valid));
	vcdp->chgBit(c+689,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__BranchPlugin_branchExceptionPort_valid));
	vcdp->chgBit(c+690,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt));
	vcdp->chgBit(c+691,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_willIncrement));
	vcdp->chgBit(c+692,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_willClear));
	vcdp->chgBus(c+693,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_valueNext),6);
	vcdp->chgBit(c+694,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack));
	vcdp->chgBit(c+695,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_pipelineLiberator_done));
	vcdp->chgBit(c+696,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_blockedBySideEffects));
	vcdp->chgBus(c+697,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_readData),32);
	vcdp->chgBit(c+698,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_writeEnable));
	vcdp->chgBus(c+699,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_writeData),32);
	vcdp->chgQuad(c+700,(((0U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
					    >> 0x16U)))
			       ? VL_ULL(0x584f525f31)
			       : ((1U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
						>> 0x16U)))
				   ? VL_ULL(0x4f525f3120)
				   : ((2U == (3U & 
					      (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
					       >> 0x16U)))
				       ? VL_ULL(0x414e445f31)
				       : VL_ULL(0x3f3f3f3f3f))))),40);
	vcdp->chgQuad(c+702,(((0U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
					    >> 0x1eU)))
			       ? VL_ULL(0x4144445f53554220)
			       : ((1U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
						>> 0x1eU)))
				   ? VL_ULL(0x534c545f534c5455)
				   : ((2U == (3U & 
					      (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_ 
					       >> 0x1eU)))
				       ? VL_ULL(0x4249545749534520)
				       : VL_ULL(0x3f3f3f3f3f3f3f3f))))),64);
	vcdp->chgArray(c+704,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_SRC1_CTRL_string),96);
	vcdp->chgBus(c+707,(((2U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_)
			      ? ((2U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_)
				  ? 0x58524554U : 0x3f3f3f3fU)
			      : 0x4e4f4e45U)),32);
	vcdp->chgArray(c+708,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_SHIFT_CTRL_string),72);
	vcdp->chgBus(c+711,(((0x20000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_)
			      ? ((0x10000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_)
				  ? 0x504320U : 0x494d53U)
			      : ((0x10000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_)
				  ? 0x494d49U : 0x525320U))),24);
	vcdp->chgBus(c+712,(((0x8000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_)
			      ? ((0x4000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_)
				  ? 0x4a414c52U : 0x4a414c20U)
			      : ((0x4000U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_137_)
				  ? 0x42202020U : 0x494e4320U))),32);
	vcdp->chgBit(c+713,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_201_));
	vcdp->chgBit(c+714,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_211_));
	vcdp->chgBit(c+715,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_242_));
	vcdp->chgBit(c+716,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_219_));
	vcdp->chgBit(c+717,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsReadCmd_valid));
	vcdp->chgBus(c+718,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsReadCmd_payload),3);
	vcdp->chgBit(c+719,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_valid));
	vcdp->chgBit(c+720,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_error));
	vcdp->chgBit(c+721,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataReadCmd_valid));
	vcdp->chgBus(c+722,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataReadCmd_payload),6);
	vcdp->chgBit(c+723,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_valid));
	vcdp->chgBit(c+724,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_way));
	vcdp->chgBus(c+725,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address),6);
	vcdp->chgBus(c+726,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_data),32);
	vcdp->chgBus(c+727,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask),4);
	vcdp->chgBit(c+728,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRspFreeze));
	vcdp->chgBit(c+729,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_loaderValid));
    }
}

void VBriey::traceChgThis__23(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+730,(((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) 
			     | ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_jump_pcLoad_valid) 
				| (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherflushIt)))));
	vcdp->chgBit(c+731,((1U & ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)) 
				   | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_removeIt)))));
	vcdp->chgBit(c+732,(((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_haltByOther) 
			     | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck) 
				 | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)) 
				| (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_haltItself)))));
	vcdp->chgBit(c+733,((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isValid) 
			      & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isStuck))) 
			     & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_removeIt)))));
	vcdp->chgBit(c+734,((1U & ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck)) 
				   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_removeIt))))));
	vcdp->chgBit(c+735,((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid) 
			      & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isStuck))) 
			     & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_removeIt)))));
	vcdp->chgBit(c+736,((1U & ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck)) 
				   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_removeIt))))));
	vcdp->chgBit(c+737,((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid) 
			      & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isStuck))) 
			     & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_removeIt)))));
	vcdp->chgBit(c+738,((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) 
			      & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt))) 
			     & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherHalt)))));
	vcdp->chgBit(c+739,(((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) 
			     & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt)))));
	vcdp->chgBit(c+740,(((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_jump_pcLoad_valid) 
			     | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherflushIt))));
    }
}

void VBriey::traceChgThis__24(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+741,(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__jtag_writeArea_source_valid));
    }
}

void VBriey::traceChgThis__25(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+742,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_96_),32);
	vcdp->chgBit(c+743,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_haltByOther));
	vcdp->chgBit(c+744,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_removeIt));
	vcdp->chgBit(c+745,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isStuck));
	vcdp->chgBit(c+746,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isFlushed));
	vcdp->chgBit(c+747,((1U & ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isStuck)) 
				   & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_removeIt))))));
	vcdp->chgBit(c+748,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_removeIt));
	vcdp->chgBit(c+749,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isFlushed));
	vcdp->chgBit(c+750,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_removeIt));
	vcdp->chgBit(c+751,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_flushAll));
	vcdp->chgBit(c+752,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isFlushed));
	vcdp->chgBit(c+753,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetcherHalt));
	vcdp->chgBit(c+754,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_predictionJumpInterface_valid));
	vcdp->chgBit(c+755,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_decodeExceptionPort_valid));
	vcdp->chgBit(c+756,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_jumpInterface_valid));
	vcdp->chgBus(c+757,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_jumpInterface_payload),32);
	vcdp->chgBit(c+758,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_jump_pcLoad_valid));
	vcdp->chgBus(c+759,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_pc),32);
	vcdp->chgBit(c+760,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_propagatePc));
	vcdp->chgBit(c+761,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_samplePcNext));
	vcdp->chgBit(c+762,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready));
	vcdp->chgBit(c+763,((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_arbitration_isStuck)))));
	vcdp->chgBus(c+764,((0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_96_ 
				      >> 0xfU))),5);
	vcdp->chgBus(c+765,((0x1fU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_96_ 
				      >> 0x14U))),5);
	vcdp->chgBit(c+766,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode));
	vcdp->chgBit(c+767,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute));
	vcdp->chgBit(c+768,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory));
	vcdp->chgBus(c+769,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_targetPrivilege),2);
	vcdp->chgBus(c+770,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_xtvec_mode),2);
	vcdp->chgBus(c+771,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_xtvec_base),30);
	vcdp->chgBit(c+772,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_illegalAccess));
	vcdp->chgBit(c+773,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_illegalInstruction));
	vcdp->chgBit(c+774,((1U & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready)))));
    }
}

void VBriey::traceChgThis__26(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+775,(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__flowCCByToggle_1___DOT__outputArea_flow_valid));
    }
}

void VBriey::traceChgThis__27(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+776,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_rsp_data),32);
	vcdp->chgBit(c+777,(vlSymsp->TOP__Briey.__PVT__systemDebugger_1___05Fio_mem_cmd_valid));
    }
}

void VBriey::traceChgThis__28(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+778,(vlSymsp->TOP__Briey.__PVT__resetCtrl_systemResetUnbuffered));
    }
}

void VBriey::traceChgThis__29(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+779,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injectionPort_valid));
    }
}

void VBriey::traceChgThis__30(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+780,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__debug_bus_cmd_ready));
    }
}

void VBriey::traceChgThis__31(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp38,95,0,3);
    VL_SIGW(__Vtemp39,95,0,3);
    VL_SIGW(__Vtemp40,95,0,3);
    VL_SIGW(__Vtemp41,95,0,3);
    VL_SIGW(__Vtemp42,95,0,3);
    // Body
    {
	vcdp->chgBus(c+781,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_ADDR),13);
	vcdp->chgBus(c+782,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_BA),2);
	vcdp->chgBus(c+783,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_DQ_write),16);
	vcdp->chgBit(c+784,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_DQ_writeEnable));
	vcdp->chgBus(c+785,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_DQM),2);
	vcdp->chgBit(c+786,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_CASn));
	vcdp->chgBit(c+787,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_CKE));
	vcdp->chgBit(c+788,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_CSn));
	vcdp->chgBit(c+789,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_RASn));
	vcdp->chgBit(c+790,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_WEn));
	vcdp->chgBus(c+791,(vlSymsp->TOP__Briey.__PVT__axi_gpioACtrl__DOT__io_gpio_write_driver),32);
	vcdp->chgBus(c+792,(vlSymsp->TOP__Briey.__PVT__axi_gpioBCtrl__DOT__io_gpio_write_driver),32);
	vcdp->chgBit(c+793,(vlSymsp->TOP__Briey.__PVT__bufferCC_8___DOT__buffers_1));
	vcdp->chgBit(c+794,(vlSymsp->TOP__Briey.__PVT__bufferCC_9___DOT__buffers_1));
	vcdp->chgBus(c+795,(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT___zz_9_),4);
	vcdp->chgBit(c+796,(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT___zz_7_));
	vcdp->chgBus(c+797,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT___zz_12_),4);
	vcdp->chgBus(c+798,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT___zz_13_),2);
	vcdp->chgBus(c+799,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge__DOT__id),4);
	vcdp->chgBus(c+800,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge__DOT__readedData),32);
	vcdp->chgBit(c+801,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_write));
	vcdp->chgBus(c+802,(vlSymsp->TOP__Briey.__PVT__axi_gpioACtrl__DOT__bufferCC_8___DOT__buffers_1),32);
	vcdp->chgBus(c+803,(vlSymsp->TOP__Briey.__PVT__axi_gpioBCtrl__DOT__bufferCC_8___DOT__buffers_1),32);
	vcdp->chgBus(c+804,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__id),4);
	vcdp->chgBus(c+805,(((0x400000U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__buffer_2___DOT___zz_4_) 
					   << 0x14U)) 
			     | ((0x800U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__buffer_2___DOT___zz_4_) 
					   << 0xaU)) 
				| (1U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__buffer_2___DOT___zz_4_))))),32);
	vcdp->chgBus(c+806,((0xffffffe0U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address)),32);
	vcdp->chgBus(c+807,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_data),32);
	vcdp->chgBus(c+808,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mask),4);
	vcdp->chgBit(c+809,(vlSymsp->TOP__Briey.__PVT__bufferCC_10___DOT__buffers_1));
	vcdp->chgBit(c+810,(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__flowCCByToggle_1___DOT__outputArea_flow_m2sPipe_payload_fragment));
	vcdp->chgBus(c+811,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_ar_halfPipe_regs_payload_addr),32);
	vcdp->chgBus(c+812,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_ar_halfPipe_regs_payload_size),3);
	vcdp->chgBus(c+813,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_ar_halfPipe_regs_payload_cache),4);
	vcdp->chgBus(c+814,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_ar_halfPipe_regs_payload_prot),3);
	vcdp->chgBus(c+815,((7U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT___zz_9_))),3);
	vcdp->chgBus(c+816,((3U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT___zz_12_))),2);
	vcdp->chgBit(c+817,(vlSymsp->TOP__Briey.__PVT___zz_12_));
	vcdp->chgBus(c+818,(vlSymsp->TOP__Briey.__PVT___zz_13_),32);
	vcdp->chgBus(c+819,(vlSymsp->TOP__Briey.__PVT___zz_14_),32);
	vcdp->chgBus(c+820,(vlSymsp->TOP__Briey.__PVT___zz_15_),4);
	vcdp->chgBus(c+821,(vlSymsp->TOP__Briey.__PVT___zz_16_),3);
	vcdp->chgBit(c+822,(vlSymsp->TOP__Briey.__PVT___zz_17_));
	vcdp->chgBit(c+823,(vlSymsp->TOP__Briey.__PVT___zz_19_));
	vcdp->chgBus(c+824,(vlSymsp->TOP__Briey.__PVT___zz_20_),32);
	vcdp->chgBus(c+825,(vlSymsp->TOP__Briey.__PVT___zz_21_),32);
	vcdp->chgBus(c+826,(vlSymsp->TOP__Briey.__PVT___zz_22_),4);
	vcdp->chgBus(c+827,(vlSymsp->TOP__Briey.__PVT___zz_23_),3);
	vcdp->chgBit(c+828,(vlSymsp->TOP__Briey.__PVT___zz_24_));
	vcdp->chgBus(c+829,(vlSymsp->TOP__Briey.__PVT___zz_56_),32);
	vcdp->chgBit(c+830,(vlSymsp->TOP__Briey.__PVT___zz_58_));
	vcdp->chgBus(c+831,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_addr),17);
	vcdp->chgBus(c+832,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_id),4);
	vcdp->chgBus(c+833,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_size),3);
	vcdp->chgBus(c+834,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_burst),2);
	vcdp->chgBit(c+835,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_write));
	vcdp->chgBus(c+836,(vlSymsp->TOP__Briey.__PVT___zz_69_),32);
	vcdp->chgBus(c+837,(vlSymsp->TOP__Briey.__PVT___zz_70_),4);
	vcdp->chgBit(c+838,(vlSymsp->TOP__Briey.__PVT___zz_71_));
	vcdp->chgBus(c+839,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_addr),26);
	vcdp->chgBus(c+840,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_id),4);
	vcdp->chgBus(c+841,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_size),3);
	vcdp->chgBus(c+842,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_burst),2);
	vcdp->chgBit(c+843,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_write));
	vcdp->chgBus(c+844,(vlSymsp->TOP__Briey.__PVT___zz_80_),32);
	vcdp->chgBus(c+845,(vlSymsp->TOP__Briey.__PVT___zz_81_),4);
	vcdp->chgBit(c+846,(vlSymsp->TOP__Briey.__PVT___zz_82_));
	vcdp->chgBus(c+847,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_id),4);
	vcdp->chgBus(c+848,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_len),8);
	vcdp->chgBus(c+849,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_size),3);
	vcdp->chgBus(c+850,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_burst),2);
	vcdp->chgBus(c+851,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_w_halfPipe_regs_payload_strb),4);
	vcdp->chgBit(c+852,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_w_halfPipe_regs_payload_last));
	vcdp->chgBit(c+853,(vlSymsp->TOP__Briey.__PVT__bufferCC_8___DOT__buffers_0));
	vcdp->chgBit(c+854,(vlSymsp->TOP__Briey.__PVT__bufferCC_9___DOT__buffers_0));
	vcdp->chgBus(c+855,(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__unburstify_buffer_len),8);
	vcdp->chgBus(c+856,(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__unburstify_buffer_transaction_addr),17);
	vcdp->chgBus(c+857,(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__unburstify_buffer_transaction_id),4);
	vcdp->chgBus(c+858,(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__unburstify_buffer_transaction_size),3);
	vcdp->chgBus(c+859,(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__unburstify_buffer_transaction_burst),2);
	vcdp->chgBit(c+860,(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__unburstify_buffer_transaction_write));
	vcdp->chgBus(c+861,((3U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__unburstify_buffer_transaction_size))),2);
	vcdp->chgBus(c+862,((0x1fU & (vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__unburstify_buffer_transaction_addr 
				      >> 0xcU))),5);
	vcdp->chgBus(c+863,((((2U == (3U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__unburstify_buffer_transaction_size))) 
			      << 2U) | (((1U == (3U 
						 & (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__unburstify_buffer_transaction_size))) 
					 << 1U) | (0U 
						   == 
						   (3U 
						    & (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__unburstify_buffer_transaction_size)))))),3);
	vcdp->chgBus(c+864,((((1U < (3U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__unburstify_buffer_transaction_size))) 
			      << 1U) | (0U < (3U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__unburstify_buffer_transaction_size))))),12);
	vcdp->chgBus(c+865,(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT___zz_8_),17);
	vcdp->chgBus(c+866,(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT___zz_10_),3);
	vcdp->chgBus(c+867,(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT___zz_11_),2);
	vcdp->chgBit(c+868,(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT___zz_12_));
	vcdp->chgBus(c+869,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl_io_bus_rsp_payload_data_regNextWhen),16);
	vcdp->chgBus(c+870,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__unburstify_buffer_len),8);
	vcdp->chgBus(c+871,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__unburstify_buffer_transaction_addr),26);
	vcdp->chgBus(c+872,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__unburstify_buffer_transaction_id),4);
	vcdp->chgBus(c+873,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__unburstify_buffer_transaction_size),3);
	vcdp->chgBus(c+874,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__unburstify_buffer_transaction_burst),2);
	vcdp->chgBit(c+875,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__unburstify_buffer_transaction_write));
	vcdp->chgBus(c+876,((3U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__unburstify_buffer_transaction_size))),2);
	vcdp->chgBus(c+877,((0x3fffU & (vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__unburstify_buffer_transaction_addr 
					>> 0xcU))),14);
	vcdp->chgBus(c+878,((((2U == (3U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__unburstify_buffer_transaction_size))) 
			      << 2U) | (((1U == (3U 
						 & (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__unburstify_buffer_transaction_size))) 
					 << 1U) | (0U 
						   == 
						   (3U 
						    & (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__unburstify_buffer_transaction_size)))))),3);
	vcdp->chgBus(c+879,((((1U < (3U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__unburstify_buffer_transaction_size))) 
			      << 1U) | (0U < (3U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__unburstify_buffer_transaction_size))))),12);
	vcdp->chgBus(c+880,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__frontend_banks_0_row),13);
	vcdp->chgBus(c+881,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__frontend_banks_1_row),13);
	vcdp->chgBus(c+882,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__frontend_banks_2_row),13);
	vcdp->chgBus(c+883,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__frontend_banks_3_row),13);
	vcdp->chgBus(c+884,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT___zz_12_),13);
	vcdp->chgBus(c+885,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT___zz_13_),16);
	vcdp->chgBus(c+886,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT___zz_14_),2);
	vcdp->chgBus(c+887,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT___zz_15_),4);
	vcdp->chgBit(c+888,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT___zz_16_));
	vcdp->chgBus(c+889,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdram_DQ_read),16);
	vcdp->chgBus(c+890,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_cmd_payload_context_delay_1_id),4);
	vcdp->chgBit(c+891,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_cmd_payload_context_delay_1_last));
	vcdp->chgBus(c+892,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_cmd_payload_context_delay_2_id),4);
	vcdp->chgBit(c+893,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_cmd_payload_context_delay_2_last));
	vcdp->chgBus(c+894,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_cmd_payload_context_delay_3_id),4);
	vcdp->chgBit(c+895,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_cmd_payload_context_delay_3_last));
	vcdp->chgBus(c+896,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_cmd_payload_context_delay_4_id),4);
	vcdp->chgBit(c+897,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_cmd_payload_context_delay_4_last));
	vcdp->chgBus(c+898,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_contextDelayed_id),4);
	vcdp->chgBit(c+899,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_contextDelayed_last));
	vcdp->chgBus(c+900,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__ram[0]),21);
	vcdp->chgBus(c+901,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__ram[1]),21);
	vcdp->chgBit(c+902,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge__DOT__write));
	vcdp->chgBus(c+903,(vlSymsp->TOP__Briey.__PVT__axi_gpioACtrl__DOT__bufferCC_8___DOT__buffers_0),32);
	vcdp->chgBus(c+904,(vlSymsp->TOP__Briey.__PVT__axi_gpioBCtrl__DOT__bufferCC_8___DOT__buffers_0),32);
	vcdp->chgBit(c+905,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__bufferCC_8___DOT__buffers_1_clear));
	vcdp->chgBit(c+906,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__bufferCC_8___DOT__buffers_1_tick));
	vcdp->chgBus(c+907,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerA__DOT__counter),32);
	vcdp->chgBus(c+908,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerB__DOT__counter),16);
	vcdp->chgBus(c+909,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerC__DOT__counter),16);
	vcdp->chgBus(c+910,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerD__DOT__counter),16);
	vcdp->chgBus(c+911,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerA_io_limit_driver),32);
	vcdp->chgBus(c+912,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerB_io_limit_driver),16);
	vcdp->chgBus(c+913,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerC_io_limit_driver),16);
	vcdp->chgBus(c+914,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerD_io_limit_driver),16);
	vcdp->chgBit(c+915,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__bufferCC_8___DOT__buffers_0_clear));
	vcdp->chgBit(c+916,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__bufferCC_8___DOT__buffers_0_tick));
	vcdp->chgBus(c+917,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT___zz_1_),16);
	vcdp->chgBus(c+918,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__prescaler_1___DOT__counter),16);
	vcdp->chgBus(c+919,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter),8);
	vcdp->chgBus(c+920,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_3_),8);
	vcdp->chgBus(c+921,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT___zz_3_),8);
	vcdp->chgBus(c+922,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_uartConfigReg_frame_dataLength),3);
	vcdp->chgBit(c+923,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity));
	vcdp->chgBus(c+924,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter),3);
	vcdp->chgBus(c+925,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[0]),8);
	vcdp->chgBus(c+926,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[1]),8);
	vcdp->chgBus(c+927,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[2]),8);
	vcdp->chgBus(c+928,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[3]),8);
	vcdp->chgBus(c+929,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[4]),8);
	vcdp->chgBus(c+930,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[5]),8);
	vcdp->chgBus(c+931,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[6]),8);
	vcdp->chgBus(c+932,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[7]),8);
	vcdp->chgBus(c+933,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[8]),8);
	vcdp->chgBus(c+934,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[9]),8);
	vcdp->chgBus(c+935,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[10]),8);
	vcdp->chgBus(c+936,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[11]),8);
	vcdp->chgBus(c+937,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[12]),8);
	vcdp->chgBus(c+938,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[13]),8);
	vcdp->chgBus(c+939,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[14]),8);
	vcdp->chgBus(c+940,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[15]),8);
	vcdp->chgBus(c+941,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram[0]),8);
	vcdp->chgBus(c+942,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram[1]),8);
	vcdp->chgBus(c+943,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram[2]),8);
	vcdp->chgBus(c+944,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram[3]),8);
	vcdp->chgBus(c+945,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram[4]),8);
	vcdp->chgBus(c+946,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram[5]),8);
	vcdp->chgBus(c+947,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram[6]),8);
	vcdp->chgBus(c+948,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram[7]),8);
	vcdp->chgBus(c+949,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram[8]),8);
	vcdp->chgBus(c+950,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram[9]),8);
	vcdp->chgBus(c+951,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram[10]),8);
	vcdp->chgBus(c+952,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram[11]),8);
	vcdp->chgBus(c+953,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram[12]),8);
	vcdp->chgBus(c+954,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram[13]),8);
	vcdp->chgBus(c+955,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram[14]),8);
	vcdp->chgBus(c+956,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram[15]),8);
	vcdp->chgBit(c+957,((1U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__buffer_2___DOT___zz_4_))));
	vcdp->chgBit(c+958,((1U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__buffer_2___DOT___zz_4_) 
				   >> 1U))));
	vcdp->chgBit(c+959,((1U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__buffer_2___DOT___zz_4_) 
				   >> 2U))));
	vcdp->chgBus(c+960,((((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__counterY) 
			      << 9U) | (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__counterX))),17);
	vcdp->chgBus(c+961,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__storeVals1_0),9);
	vcdp->chgBus(c+962,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__storeVals1_1),8);
	vcdp->chgBus(c+963,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__storeVals2_0),9);
	vcdp->chgBus(c+964,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__storeVals2_1),8);
	vcdp->chgBit(c+965,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__storeColor_0));
	vcdp->chgBit(c+966,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__storeColor_1));
	vcdp->chgBit(c+967,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__storeColor_2));
	vcdp->chgBit(c+968,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__write));
	vcdp->chgBus(c+969,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__mode),3);
	vcdp->chgQuad(c+970,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__alpha),64);
	vcdp->chgBit(c+972,((1U & (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__buffer_2___DOT___zz_5_))));
	vcdp->chgBit(c+973,((1U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__buffer_2___DOT___zz_5_) 
				   >> 1U))));
	vcdp->chgBit(c+974,((1U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__buffer_2___DOT___zz_5_) 
				   >> 2U))));
	vcdp->chgBus(c+975,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__counterX),9);
	vcdp->chgBus(c+976,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__counterY),8);
	vcdp->chgBus(c+977,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__x1),9);
	vcdp->chgBus(c+978,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__x2),9);
	vcdp->chgBus(c+979,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__y2),8);
	vcdp->chgBit(c+980,(vlSymsp->TOP__Briey.__PVT__bufferCC_10___DOT__buffers_0));
	vcdp->chgBit(c+981,(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__flowCCByToggle_1___DOT__bufferCC_8___DOT__buffers_1));
	vcdp->chgBit(c+982,(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__flowCCByToggle_1___DOT__outputArea_hit));
	vcdp->chgBit(c+983,(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__flowCCByToggle_1___DOT__bufferCC_8___DOT__buffers_0));
	vcdp->chgBus(c+984,(vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_headerShifter),8);
	vcdp->chgBus(c+985,((0x1ffe0U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address)),17);
	vcdp->chgBit(c+986,((1U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT___zz_9_) 
				   >> 3U))));
	vcdp->chgBit(c+987,((1U & (~ ((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT___zz_9_) 
				      >> 3U)))));
	vcdp->chgBus(c+988,((0x3ffffe0U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address)),26);
	vcdp->chgBus(c+989,((0x3ffffffU & vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_ar_halfPipe_regs_payload_addr)),26);
	vcdp->chgBus(c+990,(vlSymsp->TOP__Briey.__PVT__apb3Router_1___DOT__selIndex),2);
	vcdp->chgBus(c+991,(((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)
			      ? 0U : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_12_)),32);
	vcdp->chgBit(c+992,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_tags_0_error));
	vcdp->chgBit(c+993,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit));
	vcdp->chgBit(c+994,((1U & ((~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)) 
				   & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit) 
				      | (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute)))))));
	vcdp->chgBit(c+995,((1U & (~ ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_tags_0_valid) 
				      & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_tags_0_address 
					 == (0xffffffU 
					     & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress 
						>> 8U))))))));
	vcdp->chgBus(c+996,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress),32);
	vcdp->chgBit(c+997,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageA_request_wr));
	vcdp->chgBit(c+998,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_wr));
	vcdp->chgBus(c+999,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MEMORY_ADDRESS_LOW),2);
	vcdp->chgBit(c+1000,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE));
	vcdp->chgQuad(c+1001,((VL_ULL(0xfffffffffffff) 
			       & (((((QData)((IData)(
						     (0x7ffffU 
						      & VL_NEGATE_I((IData)(
									    (1U 
									     & (IData)(
										((QData)((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MUL_LL)) 
										>> 0x20U)))))))) 
				     << 0x21U) | (QData)((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MUL_LL))) 
				   + (((QData)((IData)(
						       (3U 
							& VL_NEGATE_I((IData)(
									      (1U 
									       & (IData)(
										(VL_ULL(1) 
										& (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MUL_LH 
										>> 0x21U))))))))) 
				       << 0x32U) | 
				      (VL_ULL(0x3ffffffffffff) 
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
				      << 0x32U) | (VL_ULL(0x3ffffffffffff) 
						   & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MUL_HL 
						      << 0x10U)))))),52);
	vcdp->chgQuad(c+1003,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MUL_HH),34);
	vcdp->chgBit(c+1005,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MEMORY_WR));
	vcdp->chgBus(c+1006,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_FORMAL_PC_NEXT),32);
	vcdp->chgBus(c+1007,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_FORMAL_PC_NEXT),32);
	vcdp->chgBus(c+1008,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_FORMAL_PC_NEXT),32);
	vcdp->chgBus(c+1009,(((IData)(4U) + vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress)),32);
	vcdp->chgBit(c+1010,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_IS_MUL));
	vcdp->chgBit(c+1011,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_MUL));
	vcdp->chgBus(c+1012,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_PC),32);
	vcdp->chgBit(c+1013,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_DO_EBREAK));
	vcdp->chgBit(c+1014,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_CSR_READ_OPCODE));
	vcdp->chgBit(c+1015,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_CSR_WRITE_OPCODE));
	vcdp->chgBit(c+1016,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_CSR));
	vcdp->chgBit(c+1017,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_ENV_CTRL));
	vcdp->chgBit(c+1018,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ENV_CTRL));
	vcdp->chgBit(c+1019,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_ENV_CTRL));
	vcdp->chgBus(c+1020,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_BRANCH_CALC),32);
	vcdp->chgBit(c+1021,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_BRANCH_DO));
	vcdp->chgBus(c+1022,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_PC),32);
	vcdp->chgBit(c+1023,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2));
	vcdp->chgBus(c+1024,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BRANCH_CTRL),2);
	vcdp->chgBit(c+1025,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
	vcdp->chgBit(c+1026,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE));
	vcdp->chgBit(c+1027,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
	vcdp->chgBit(c+1028,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE));
	vcdp->chgBit(c+1029,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
	vcdp->chgBit(c+1030,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_RS1_SIGNED));
	vcdp->chgBus(c+1031,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS1),32);
	vcdp->chgBit(c+1032,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_DIV));
	vcdp->chgBit(c+1033,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_RS2_SIGNED));
	vcdp->chgBit(c+1034,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_IS_DIV));
	vcdp->chgBit(c+1035,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_IS_MUL));
	vcdp->chgQuad(c+1036,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MUL_HH),34);
	vcdp->chgQuad(c+1038,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MUL_LOW),52);
	vcdp->chgQuad(c+1040,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MUL_HL),34);
	vcdp->chgQuad(c+1042,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MUL_LH),34);
	vcdp->chgBus(c+1044,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MUL_LL),32);
	vcdp->chgBus(c+1045,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_RIGHT),32);
	vcdp->chgBus(c+1046,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_SHIFT_CTRL),2);
	vcdp->chgBus(c+1047,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SHIFT_CTRL),2);
	vcdp->chgBit(c+1048,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC_LESS_UNSIGNED));
	vcdp->chgBit(c+1049,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC2_FORCE_ZERO));
	vcdp->chgBit(c+1050,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC_USE_SUB_LESS));
	vcdp->chgBus(c+1051,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC2_CTRL),2);
	vcdp->chgBus(c+1052,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC1_CTRL),2);
	vcdp->chgBus(c+1053,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ALU_CTRL),2);
	vcdp->chgBus(c+1054,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ALU_BITWISE_CTRL),2);
	vcdp->chgBus(c+1055,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW),2);
	vcdp->chgBit(c+1056,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MEMORY_WR));
	vcdp->chgBit(c+1057,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MEMORY_ENABLE));
	vcdp->chgBit(c+1058,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MEMORY_ENABLE));
	vcdp->chgBit(c+1059,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_MEMORY_MANAGMENT));
	vcdp->chgBus(c+1060,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS2),32);
	vcdp->chgBit(c+1061,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_MEMORY_WR));
	vcdp->chgBit(c+1062,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_MEMORY_ENABLE));
	vcdp->chgBus(c+1063,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_PC),32);
	vcdp->chgBus(c+1064,((0xfffffffcU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress)),32);
	vcdp->chgBit(c+1065,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_dataBypassValid_regNextWhen));
	vcdp->chgBus(c+1066,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_220_),32);
	vcdp->chgBus(c+1067,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_221_),32);
	__Vtemp38[0U] = (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MUL_LOW);
	__Vtemp38[1U] = ((0xfff00000U & (VL_NEGATE_I((IData)(
							     (1U 
							      & (IData)(
									(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MUL_LOW 
									 >> 0x33U))))) 
					 << 0x14U)) 
			 | (IData)((vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MUL_LOW 
				    >> 0x20U)));
	__Vtemp38[2U] = (3U & (VL_NEGATE_I((IData)(
						   (1U 
						    & (IData)(
							      (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MUL_LOW 
							       >> 0x33U))))) 
			       >> 0xcU));
	VL_EXTEND_WQ(66,34, __Vtemp39, vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_MUL_HH);
	VL_SHIFTL_WWI(66,66,32, __Vtemp40, __Vtemp39, 0x20U);
	VL_ADD_W(3, __Vtemp41, __Vtemp38, __Vtemp40);
	__Vtemp42[0U] = __Vtemp41[0U];
	__Vtemp42[1U] = __Vtemp41[1U];
	__Vtemp42[2U] = (3U & __Vtemp41[2U]);
	vcdp->chgArray(c+1068,(__Vtemp42),66);
	vcdp->chgQuad(c+1071,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_rs1),33);
	vcdp->chgBus(c+1073,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_rs2),32);
	vcdp->chgArray(c+1074,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_accumulator),65);
	vcdp->chgBit(c+1077,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_needRevert));
	vcdp->chgBit(c+1078,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_done));
	vcdp->chgBus(c+1079,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_result),32);
	vcdp->chgBus(c+1080,(((3U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BRANCH_CTRL))
			       ? vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS1
			       : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_PC)),32);
	vcdp->chgBus(c+1081,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mepc),32);
	vcdp->chgBit(c+1082,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mip_MEIP));
	vcdp->chgBit(c+1083,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mip_MTIP));
	vcdp->chgBit(c+1084,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mip_MSIP));
	vcdp->chgBit(c+1085,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mcause_interrupt));
	vcdp->chgBus(c+1086,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mcause_exceptionCode),4);
	vcdp->chgBus(c+1087,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mtval),32);
	vcdp->chgBus(c+1088,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code),4);
	vcdp->chgBus(c+1089,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr),32);
	vcdp->chgBus(c+1090,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_interrupt_targetPrivilege),2);
	vcdp->chgBit(c+1091,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_firstCycle));
	vcdp->chgBit(c+1092,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_secondCycle));
	vcdp->chgBus(c+1093,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_busReadDataReg),32);
	vcdp->chgBus(c+1094,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injectionPort_payload_regNext),32);
	vcdp->chgBus(c+1095,(((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_ENV_CTRL)
			       ? ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_ENV_CTRL)
				   ? 0x58524554U : 0x3f3f3f3fU)
			       : 0x4e4f4e45U)),32);
	vcdp->chgBus(c+1096,(((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ENV_CTRL)
			       ? ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ENV_CTRL)
				   ? 0x58524554U : 0x3f3f3f3fU)
			       : 0x4e4f4e45U)),32);
	vcdp->chgBus(c+1097,(((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_ENV_CTRL)
			       ? ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_ENV_CTRL)
				   ? 0x58524554U : 0x3f3f3f3fU)
			       : 0x4e4f4e45U)),32);
	vcdp->chgBus(c+1098,(((2U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BRANCH_CTRL))
			       ? ((1U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BRANCH_CTRL))
				   ? 0x4a414c52U : 0x4a414c20U)
			       : ((1U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_BRANCH_CTRL))
				   ? 0x42202020U : 0x494e4320U))),32);
	vcdp->chgBus(c+1099,(((2U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC2_CTRL))
			       ? ((1U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC2_CTRL))
				   ? 0x504320U : 0x494d53U)
			       : ((1U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_SRC2_CTRL))
				   ? 0x494d49U : 0x525320U))),24);
	vcdp->chgQuad(c+1100,(((0U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ALU_CTRL))
			        ? VL_ULL(0x4144445f53554220)
			        : ((1U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ALU_CTRL))
				    ? VL_ULL(0x534c545f534c5455)
				    : ((2U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ALU_CTRL))
				        ? VL_ULL(0x4249545749534520)
				        : VL_ULL(0x3f3f3f3f3f3f3f3f))))),64);
	vcdp->chgQuad(c+1102,(((0U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
			        ? VL_ULL(0x584f525f31)
			        : ((1U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
				    ? VL_ULL(0x4f525f3120)
				    : ((2U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
				        ? VL_ULL(0x414e445f31)
				        : VL_ULL(0x3f3f3f3f3f))))),40);
	vcdp->chgBus(c+1104,(((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ENV_CTRL)
			       ? ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_ENV_CTRL)
				   ? 0x58524554U : 0x3f3f3f3fU)
			       : 0x4e4f4e45U)),32);
	vcdp->chgBus(c+1105,(((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_ENV_CTRL)
			       ? ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_ENV_CTRL)
				   ? 0x58524554U : 0x3f3f3f3fU)
			       : 0x4e4f4e45U)),32);
	vcdp->chgBus(c+1106,(((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_ENV_CTRL)
			       ? ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_ENV_CTRL)
				   ? 0x58524554U : 0x3f3f3f3fU)
			       : 0x4e4f4e45U)),32);
	vcdp->chgBus(c+1107,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address),32);
	vcdp->chgBus(c+1108,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter),4);
	vcdp->chgBus(c+1109,((7U & ((8U & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter))
				     ? (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
					>> 5U) : (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)))),3);
	vcdp->chgBit(c+1110,((1U & ((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
				    >> 3U))));
	vcdp->chgBus(c+1111,((0xffffffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
					   >> 8U))),24);
	vcdp->chgBit(c+1112,((1U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_11_)));
	vcdp->chgBit(c+1113,((1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_11_ 
				    >> 1U))));
	vcdp->chgBus(c+1114,((0xffffffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_11_ 
					   >> 2U))),24);
	vcdp->chgBus(c+1115,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_12_),32);
	vcdp->chgBit(c+1116,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isIoAccess));
	vcdp->chgBit(c+1117,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowRead));
	vcdp->chgBit(c+1118,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowWrite));
	vcdp->chgBit(c+1119,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute));
	vcdp->chgBit(c+1120,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_tags_0_valid));
	vcdp->chgBus(c+1121,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_tags_0_address),24);
	vcdp->chgBit(c+1122,(((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_tags_0_valid) 
			      & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_tags_0_address 
				 == (0xffffffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress 
						  >> 8U))))));
	vcdp->chgBus(c+1123,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT___zz_10_),32);
	vcdp->chgBus(c+1124,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_dataBypass_regNextWhen),32);
	vcdp->chgBus(c+1125,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__ways_0_tags[0]),26);
	vcdp->chgBus(c+1126,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__ways_0_tags[1]),26);
	vcdp->chgBus(c+1127,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__ways_0_tags[2]),26);
	vcdp->chgBus(c+1128,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__ways_0_tags[3]),26);
	vcdp->chgBus(c+1129,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__ways_0_tags[4]),26);
	vcdp->chgBus(c+1130,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__ways_0_tags[5]),26);
	vcdp->chgBus(c+1131,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__ways_0_tags[6]),26);
	vcdp->chgBus(c+1132,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__ways_0_tags[7]),26);
	vcdp->chgBit(c+1133,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteLastCmd_valid));
	vcdp->chgBit(c+1134,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteLastCmd_payload_way));
	vcdp->chgBus(c+1135,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteLastCmd_payload_address),3);
	vcdp->chgBit(c+1136,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteLastCmd_payload_data_valid));
	vcdp->chgBit(c+1137,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteLastCmd_payload_data_error));
	vcdp->chgBus(c+1138,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__tagsWriteLastCmd_payload_data_address),24);
	vcdp->chgBit(c+1139,((1U & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_10_)));
	vcdp->chgBit(c+1140,((1U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_10_ 
				    >> 1U))));
	vcdp->chgBus(c+1141,((0xffffffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_10_ 
					   >> 2U))),24);
	vcdp->chgBus(c+1142,((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_27_) 
			       << 0x18U) | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_26_) 
					     << 0x10U) 
					    | (((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_25_) 
						<< 8U) 
					       | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_24_))))),32);
	vcdp->chgBus(c+1143,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageA_request_data),32);
	vcdp->chgBus(c+1144,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageA_request_size),2);
	vcdp->chgBus(c+1145,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageA_mask),4);
	vcdp->chgBit(c+1146,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stage0_colisions_regNextWhen));
	vcdp->chgBus(c+1147,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_request_size),2);
	vcdp->chgBit(c+1148,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess));
	vcdp->chgBit(c+1149,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_allowWrite));
	vcdp->chgBit(c+1150,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_allowExecute));
	vcdp->chgBit(c+1151,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_exception));
	vcdp->chgBit(c+1152,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_tagsReadRsp_0_valid));
	vcdp->chgBit(c+1153,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_tagsReadRsp_0_error));
	vcdp->chgBus(c+1154,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_tagsReadRsp_0_address),24);
	vcdp->chgBus(c+1155,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_dataReadRsp_0),32);
	vcdp->chgBit(c+1156,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_waysHits));
	vcdp->chgBit(c+1157,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_waysHits));
	vcdp->chgBit(c+1158,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_colisions));
	vcdp->chgBus(c+1159,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__ways_0_tags[0]),26);
	vcdp->chgBus(c+1160,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__ways_0_tags[1]),26);
	vcdp->chgBus(c+1161,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__ways_0_tags[2]),26);
	vcdp->chgBus(c+1162,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__ways_0_tags[3]),26);
	vcdp->chgBus(c+1163,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__ways_0_tags[4]),26);
	vcdp->chgBus(c+1164,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__ways_0_tags[5]),26);
	vcdp->chgBus(c+1165,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__ways_0_tags[6]),26);
	vcdp->chgBus(c+1166,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__ways_0_tags[7]),26);
    }
}

void VBriey::traceChgThis__32(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1167,((((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT___zz_6_) 
			       & (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT___zz_12_)) 
			      & (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT___zz_7_))));
	vcdp->chgBus(c+1168,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__unburstify_buffer_valid)
			       ? (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__unburstify_buffer_transaction_id)
			       : (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_id))),4);
	vcdp->chgBus(c+1169,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__unburstify_buffer_valid)
			       ? (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__unburstify_buffer_transaction_size)
			       : (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_size))),3);
	vcdp->chgBus(c+1170,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__unburstify_buffer_valid)
			       ? (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__unburstify_buffer_transaction_burst)
			       : (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_burst))),2);
	vcdp->chgBus(c+1171,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__unburstify_buffer_valid)
			       ? (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__unburstify_buffer_transaction_size)
			       : (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_size))),3);
	vcdp->chgBus(c+1172,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__unburstify_buffer_valid)
			       ? (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__unburstify_buffer_transaction_burst)
			       : (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_burst))),2);
	vcdp->chgBus(c+1173,((0xffffU & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT___zz_3_)
					  ? (vlSymsp->TOP__Briey.__PVT___zz_80_ 
					     >> 0x10U)
					  : vlSymsp->TOP__Briey.__PVT___zz_80_))),16);
	vcdp->chgBus(c+1174,((3U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT___zz_3_)
				     ? ((IData)(vlSymsp->TOP__Briey.__PVT___zz_81_) 
					>> 2U) : (IData)(vlSymsp->TOP__Briey.__PVT___zz_81_)))),2);
	vcdp->chgBit(c+1175,(((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_117_) 
			      & (~ (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)))));
	vcdp->chgBus(c+1176,(((0x38U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
					>> 2U)) | (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))),6);
    }
}

void VBriey::traceChgThis__33(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+1177,(((0U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					    >> 0xcU)))
			       ? ((0xff000000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS2 
						  << 0x18U)) 
				  | ((0xff0000U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS2 
						   << 0x10U)) 
				     | ((0xff00U & 
					 (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS2 
					  << 8U)) | 
					(0xffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS2))))
			       : ((1U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
						>> 0xcU)))
				   ? ((0xffff0000U 
				       & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS2 
					  << 0x10U)) 
				      | (0xffffU & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS2))
				   : vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_RS2))),32);
	vcdp->chgBit(c+1178,((((0xffffffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
					     >> 8U)) 
			       == (0xffffffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_10_ 
						>> 2U))) 
			      & vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT___zz_10_)));
    }
}

void VBriey::traceChgThis__34(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1179,(((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid) 
			      & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_MEMORY_ENABLE))));
	vcdp->chgBit(c+1180,((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid) 
			       & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_CSR)) 
			      & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_CSR_WRITE_OPCODE))));
	vcdp->chgBit(c+1181,((((IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid) 
			       & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_IS_CSR)) 
			      & (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_CSR_READ_OPCODE))));
    }
}

void VBriey::traceChgThis__35(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1182,(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__jtag_tap_tdoUnbufferd_regNext));
    }
}

void VBriey::traceChgThis__36(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+1183,(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__jtag_tap_instruction),4);
	vcdp->chgBus(c+1184,(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__jtag_tap_instructionShift),4);
	vcdp->chgBit(c+1185,(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__jtag_tap_bypass));
	vcdp->chgBit(c+1186,((1U == (IData)(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__jtag_tap_instruction))));
	vcdp->chgBus(c+1187,(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__jtag_idcodeArea_shifter),32);
	vcdp->chgBit(c+1188,((2U == (IData)(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__jtag_tap_instruction))));
	vcdp->chgBit(c+1189,((3U == (IData)(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__jtag_tap_instruction))));
	vcdp->chgQuad(c+1190,(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__jtag_readArea_shifter),34);
	vcdp->chgBit(c+1192,(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__flowCCByToggle_1___DOT__inputArea_data_fragment));
    }
}

void VBriey::traceChgThis__37(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1193,((1U & (~ (IData)(vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataLoaded)))));
	vcdp->chgBit(c+1194,(vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataLoaded));
	vcdp->chgBit(c+1195,(vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_headerLoaded));
	vcdp->chgBus(c+1196,(vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_counter),3);
	vcdp->chgBit(c+1197,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_haltIt));
	vcdp->chgBit(c+1198,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_stepIt));
	vcdp->chgBit(c+1199,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_godmode));
	vcdp->chgBit(c+1200,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_haltedByBreak));
    }
}

void VBriey::traceChgThis__38(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp52,95,0,3);
    // Body
    {
	vcdp->chgBus(c+1201,(vlSymsp->TOP__Briey.__PVT__axi_gpioACtrl__DOT__io_gpio_writeEnable_driver),32);
	vcdp->chgBus(c+1202,(vlSymsp->TOP__Briey.__PVT__axi_gpioBCtrl__DOT__io_gpio_writeEnable_driver),32);
	vcdp->chgBit(c+1203,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext));
	vcdp->chgBit(c+1204,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__hSyncDelay));
	vcdp->chgBit(c+1205,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__vSyncDelay));
	vcdp->chgBit(c+1206,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__videoOn));
	vcdp->chgBit(c+1207,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT___zz_11_));
	vcdp->chgBit(c+1208,(vlSymsp->TOP__Briey.__PVT___zz_11_));
	vcdp->chgBit(c+1209,(vlSymsp->TOP__Briey.__PVT___zz_18_));
	vcdp->chgBit(c+1210,((1U & (~ (IData)(vlSymsp->TOP__Briey.__PVT___zz_25_)))));
	vcdp->chgBit(c+1211,(((IData)(vlSymsp->TOP__Briey.__PVT___zz_18_) 
			      | (IData)(vlSymsp->TOP__Briey.__PVT___zz_25_))));
	vcdp->chgBit(c+1212,(vlSymsp->TOP__Briey.__PVT___zz_55_));
	vcdp->chgBit(c+1213,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_ar_halfPipe_regs_ready));
	vcdp->chgBit(c+1214,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter_io_output_arw_halfPipe_regs_ready));
	vcdp->chgBit(c+1215,(vlSymsp->TOP__Briey.__PVT___zz_68_));
	vcdp->chgBit(c+1216,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter_io_output_arw_halfPipe_regs_ready));
	vcdp->chgBit(c+1217,(vlSymsp->TOP__Briey.__PVT___zz_79_));
	vcdp->chgBit(c+1218,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_arw_halfPipe_regs_ready));
	vcdp->chgBit(c+1219,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_w_halfPipe_regs_ready));
	vcdp->chgBit(c+1220,(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__unburstify_buffer_valid));
	vcdp->chgBit(c+1221,(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT___zz_6_));
	vcdp->chgBit(c+1222,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__unburstify_buffer_valid));
	vcdp->chgBus(c+1223,((0x1ffU & ((0x186U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__refresh_counter_value))
					 ? 0U : ((IData)(1U) 
						 + (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__refresh_counter_value))))),9);
	vcdp->chgBus(c+1224,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__refresh_counter_value),9);
	vcdp->chgBit(c+1225,((0x186U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__refresh_counter_value))));
	vcdp->chgBit(c+1226,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__refresh_pending));
	vcdp->chgBus(c+1227,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__powerup_counter),13);
	vcdp->chgBit(c+1228,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__powerup_done));
	vcdp->chgBit(c+1229,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__frontend_banks_0_active));
	vcdp->chgBit(c+1230,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__frontend_banks_1_active));
	vcdp->chgBit(c+1231,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__frontend_banks_2_active));
	vcdp->chgBit(c+1232,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__frontend_banks_3_active));
	vcdp->chgBus(c+1233,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__frontend_state),2);
	vcdp->chgBus(c+1234,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__frontend_bootRefreshCounter_value),3);
	vcdp->chgBit(c+1235,((7U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__frontend_bootRefreshCounter_value))));
	vcdp->chgBit(c+1236,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT___zz_9_));
	vcdp->chgBit(c+1237,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdramCkeInternal_regNext));
	vcdp->chgBus(c+1238,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__bubbleInserter_timings_write_counter),3);
	vcdp->chgBit(c+1239,((0U != (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__bubbleInserter_timings_write_counter))));
	vcdp->chgBus(c+1240,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__bubbleInserter_timings_banks_0_precharge_counter),2);
	vcdp->chgBit(c+1241,((0U != (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__bubbleInserter_timings_banks_0_precharge_counter))));
	vcdp->chgBus(c+1242,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__bubbleInserter_timings_banks_0_active_counter),2);
	vcdp->chgBit(c+1243,((0U != (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__bubbleInserter_timings_banks_0_active_counter))));
	vcdp->chgBus(c+1244,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__bubbleInserter_timings_banks_1_precharge_counter),2);
	vcdp->chgBit(c+1245,((0U != (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__bubbleInserter_timings_banks_1_precharge_counter))));
	vcdp->chgBus(c+1246,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__bubbleInserter_timings_banks_1_active_counter),2);
	vcdp->chgBit(c+1247,((0U != (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__bubbleInserter_timings_banks_1_active_counter))));
	vcdp->chgBus(c+1248,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__bubbleInserter_timings_banks_2_precharge_counter),2);
	vcdp->chgBit(c+1249,((0U != (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__bubbleInserter_timings_banks_2_precharge_counter))));
	vcdp->chgBus(c+1250,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__bubbleInserter_timings_banks_2_active_counter),2);
	vcdp->chgBit(c+1251,((0U != (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__bubbleInserter_timings_banks_2_active_counter))));
	vcdp->chgBus(c+1252,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__bubbleInserter_timings_banks_3_precharge_counter),2);
	vcdp->chgBit(c+1253,((0U != (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__bubbleInserter_timings_banks_3_precharge_counter))));
	vcdp->chgBus(c+1254,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__bubbleInserter_timings_banks_3_active_counter),2);
	vcdp->chgBit(c+1255,((0U != (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__bubbleInserter_timings_banks_3_active_counter))));
	vcdp->chgBit(c+1256,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT___zz_20_));
	vcdp->chgBit(c+1257,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT___zz_21_));
	vcdp->chgBit(c+1258,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT___zz_22_));
	vcdp->chgBit(c+1259,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT___zz_23_));
	vcdp->chgBit(c+1260,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT___zz_24_));
	vcdp->chgBit(c+1261,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_sdramCkeInternal));
	vcdp->chgBit(c+1262,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__pushPtr_value));
	vcdp->chgBit(c+1263,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__pushPtr_value));
	vcdp->chgBit(c+1264,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__popPtr_value));
	vcdp->chgBit(c+1265,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__popPtr_value));
	vcdp->chgBit(c+1266,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__risingOccupancy));
	vcdp->chgBit(c+1267,((1U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__pushPtr_value) 
				    - (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT__chip_backupIn_fifo__DOT__popPtr_value)))));
	vcdp->chgBus(c+1268,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge__DOT__phase),2);
	vcdp->chgQuad(c+1269,(((0U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge__DOT__phase))
			        ? VL_ULL(0x5345545550202020)
			        : ((1U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge__DOT__phase))
				    ? VL_ULL(0x4143434553535f31)
				    : ((2U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge__DOT__phase))
				        ? VL_ULL(0x524553504f4e5345)
				        : VL_ULL(0x3f3f3f3f3f3f3f3f))))),64);
	vcdp->chgBus(c+1271,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerABridge_ticksEnable),2);
	vcdp->chgBit(c+1272,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerABridge_clearsEnable));
	vcdp->chgBus(c+1273,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerBBridge_ticksEnable),3);
	vcdp->chgBus(c+1274,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerBBridge_clearsEnable),2);
	vcdp->chgBus(c+1275,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerCBridge_ticksEnable),3);
	vcdp->chgBus(c+1276,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerCBridge_clearsEnable),2);
	vcdp->chgBus(c+1277,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerDBridge_ticksEnable),3);
	vcdp->chgBus(c+1278,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerDBridge_clearsEnable),2);
	vcdp->chgBus(c+1279,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__interruptCtrl_1___05Fio_masks_driver),4);
	vcdp->chgBit(c+1280,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerA__DOT__inhibitFull));
	vcdp->chgBit(c+1281,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerB__DOT__inhibitFull));
	vcdp->chgBit(c+1282,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerC__DOT__inhibitFull));
	vcdp->chgBit(c+1283,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__timerD__DOT__inhibitFull));
	vcdp->chgBus(c+1284,(vlSymsp->TOP__Briey.__PVT__axi_timerCtrl__DOT__interruptCtrl_1___DOT__pendings),4);
	vcdp->chgBit(c+1285,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg));
	vcdp->chgBus(c+1286,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_uartConfigReg_clockDivider),20);
	vcdp->chgBit(c+1287,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_interruptCtrl_writeIntEnable));
	vcdp->chgBit(c+1288,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_interruptCtrl_readIntEnable));
	vcdp->chgBus(c+1289,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__clockDivider_counter),20);
	vcdp->chgBit(c+1290,((0U == vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__clockDivider_counter)));
	vcdp->chgBus(c+1291,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value),3);
	vcdp->chgBit(c+1292,((7U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value))));
	vcdp->chgBus(c+1293,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state),3);
	vcdp->chgBit(c+1294,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_8___DOT__buffers_1));
	vcdp->chgBit(c+1295,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1));
	vcdp->chgBit(c+1296,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2));
	vcdp->chgBit(c+1297,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3));
	vcdp->chgBit(c+1298,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4));
	vcdp->chgBit(c+1299,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value));
	vcdp->chgBit(c+1300,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick));
	vcdp->chgBus(c+1301,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state),3);
	vcdp->chgBit(c+1302,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_8___DOT__buffers_0));
	vcdp->chgBus(c+1303,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value),4);
	vcdp->chgBit(c+1304,((0xfU == (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value))));
	vcdp->chgBus(c+1305,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value),4);
	vcdp->chgBit(c+1306,((0xfU == (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value))));
	vcdp->chgBit(c+1307,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy));
	vcdp->chgBus(c+1308,((0xfU & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value) 
				      - (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value)))),4);
	vcdp->chgBus(c+1309,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_value),4);
	vcdp->chgBit(c+1310,((0xfU == (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_value))));
	vcdp->chgBus(c+1311,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_value),4);
	vcdp->chgBit(c+1312,((0xfU == (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_value))));
	vcdp->chgBit(c+1313,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_risingOccupancy));
	vcdp->chgBus(c+1314,((0xfU & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_value) 
				      - (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_value)))),4);
	vcdp->chgBus(c+1315,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresLine__DOT__x),9);
	vcdp->chgBus(c+1316,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresLine__DOT__y),8);
	vcdp->chgBus(c+1317,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__storeRadius),9);
	vcdp->chgBus(c+1318,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__counter),8);
	vcdp->chgBus(c+1319,((0xffU & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__counter) 
				       - (IData)(2U)))),8);
	vcdp->chgBit(c+1320,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__switchVGA));
	vcdp->chgBit(c+1321,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__vga__DOT__vgaArea_hSync));
	vcdp->chgBit(c+1322,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__vga__DOT__vgaArea_vSync));
	vcdp->chgBus(c+1323,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__vga__DOT__vgaArea_hCounter),10);
	vcdp->chgBus(c+1324,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__vga__DOT__vgaArea_vCounter),10);
	vcdp->chgBit(c+1325,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__switchBuffer));
	vcdp->chgBit(c+1326,((0x31fU == (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__vga__DOT__vgaArea_hCounter))));
	vcdp->chgBit(c+1327,((0x20cU == (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__vga__DOT__vgaArea_vCounter))));
	vcdp->chgBus(c+1328,((((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__switchVGA) 
			       << 0x11U) | ((0x1fe00U 
					     & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__vga__DOT__vgaArea_vCounter) 
						<< 8U)) 
					    | (0x1ffU 
					       & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__vga__DOT__vga__DOT__vgaArea_hCounter) 
						  >> 1U))))),18);
	vcdp->chgBus(c+1329,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresLine__DOT__dx),10);
	vcdp->chgBus(c+1330,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresLine__DOT__dy),9);
	vcdp->chgBit(c+1331,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresLine__DOT__down));
	vcdp->chgBit(c+1332,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresLine__DOT__right));
	vcdp->chgBus(c+1333,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresLine__DOT__err),18);
	vcdp->chgBus(c+1334,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresLine__DOT__x2),9);
	vcdp->chgBus(c+1335,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresLine__DOT__y2),8);
	vcdp->chgBus(c+1336,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresLine__DOT__breshamSM_stateReg),3);
	vcdp->chgBus(c+1337,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresCircle__DOT__x),11);
	vcdp->chgBus(c+1338,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresCircle__DOT__y),10);
	vcdp->chgBus(c+1339,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresCircle__DOT__err),19);
	vcdp->chgBus(c+1340,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresCircle__DOT__rTemp),19);
	vcdp->chgBus(c+1341,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresCircle__DOT__x1),10);
	vcdp->chgBus(c+1342,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresCircle__DOT__y1),9);
	vcdp->chgBus(c+1343,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__bresCircle__DOT__BreshamCircSM_stateReg),3);
	vcdp->chgBus(c+1344,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__fill_stateReg),2);
	__Vtemp52[0U] = ((0U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__fill_stateReg))
			  ? 0x20202020U : ((1U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__fill_stateReg))
					    ? 0x69646c65U
					    : ((2U 
						== (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__fill_stateReg))
					        ? 0x66696c6cU
					        : 0x3f3f3f3fU)));
	__Vtemp52[1U] = ((0U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__fill_stateReg))
			  ? 0x6f6f7420U : ((1U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__fill_stateReg))
					    ? 0x696c6c5fU
					    : ((2U 
						== (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__fill_stateReg))
					        ? 0x696c6c5fU
					        : 0x3f3f3f3fU)));
	__Vtemp52[2U] = ((0U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__fill_stateReg))
			  ? 0x62U : ((1U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__fill_stateReg))
				      ? 0x66U : ((2U 
						  == (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__fillRect__DOT__fill_stateReg))
						  ? 0x66U
						  : 0x3fU)));
	vcdp->chgArray(c+1345,(__Vtemp52),72);
	vcdp->chgBit(c+1348,(vlSymsp->TOP__Briey.__PVT__streamFork_5___DOT__linkEnable_0));
	vcdp->chgBit(c+1349,(vlSymsp->TOP__Briey.__PVT__streamFork_5___DOT__linkEnable_1));
	vcdp->chgBit(c+1350,((1U & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__errorSlave__DOT__sendRsp)))));
	vcdp->chgBit(c+1351,(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__errorSlave__DOT__sendRsp));
	vcdp->chgBus(c+1352,(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__pendingCmdCounter_value),3);
	vcdp->chgBus(c+1353,(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__pendingSels),2);
	vcdp->chgBit(c+1354,(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__pendingError));
	vcdp->chgBit(c+1355,((1U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__pendingSels) 
				    >> 1U))));
	vcdp->chgBit(c+1356,(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__errorSlave__DOT__consumeData));
	vcdp->chgBit(c+1357,(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__errorSlave__DOT__sendWriteRsp));
	vcdp->chgBit(c+1358,(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__errorSlave__DOT__sendReadRsp));
	vcdp->chgBus(c+1359,(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingCmdCounter),3);
	vcdp->chgBus(c+1360,(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingDataCounter_value),3);
	vcdp->chgBus(c+1361,(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingSels),4);
	vcdp->chgBit(c+1362,(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingError));
	vcdp->chgBit(c+1363,((0U != (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__pendingDataCounter_value))));
	vcdp->chgBit(c+1364,((1U & (~ (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__errorSlave__DOT__sendRsp)))));
	vcdp->chgBit(c+1365,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__errorSlave__DOT__sendRsp));
	vcdp->chgBus(c+1366,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__pendingCmdCounter_value),3);
	vcdp->chgBit(c+1367,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__pendingSels));
	vcdp->chgBit(c+1368,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__pendingError));
	vcdp->chgBit(c+1369,(vlSymsp->TOP__Briey.__PVT___zz_42_));
	vcdp->chgBit(c+1370,(vlSymsp->TOP__Briey.__PVT___zz_54_));
	vcdp->chgBit(c+1371,((1U & (~ (IData)(vlSymsp->TOP__Briey.__PVT___zz_64_)))));
	vcdp->chgBit(c+1372,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__cmdArbiter__DOT__locked));
	vcdp->chgBit(c+1373,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_0));
	vcdp->chgBit(c+1374,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_1));
	vcdp->chgBit(c+1375,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFork_5___DOT__linkEnable_0));
	vcdp->chgBit(c+1376,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFork_5___DOT__linkEnable_1));
	vcdp->chgBus(c+1377,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_value),2);
	vcdp->chgBit(c+1378,((3U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_value))));
	vcdp->chgBus(c+1379,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_value),2);
	vcdp->chgBit(c+1380,((3U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_value))));
	vcdp->chgBit(c+1381,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__risingOccupancy));
	vcdp->chgBus(c+1382,((3U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_value) 
				    - (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_value)))),2);
	vcdp->chgBit(c+1383,(vlSymsp->TOP__Briey.__PVT___zz_39_));
	vcdp->chgBit(c+1384,(vlSymsp->TOP__Briey.__PVT___zz_61_));
	vcdp->chgBit(c+1385,(vlSymsp->TOP__Briey.__PVT___zz_45_));
	vcdp->chgBit(c+1386,((1U & (~ (IData)(vlSymsp->TOP__Briey.__PVT___zz_75_)))));
	vcdp->chgBit(c+1387,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter__DOT__locked));
	vcdp->chgBit(c+1388,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_0));
	vcdp->chgBit(c+1389,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_1));
	vcdp->chgBit(c+1390,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_2));
	vcdp->chgBit(c+1391,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFork_5___DOT__linkEnable_0));
	vcdp->chgBit(c+1392,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFork_5___DOT__linkEnable_1));
	vcdp->chgBus(c+1393,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_value),2);
	vcdp->chgBit(c+1394,((3U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_value))));
	vcdp->chgBus(c+1395,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_value),2);
	vcdp->chgBit(c+1396,((3U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_value))));
	vcdp->chgBit(c+1397,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__risingOccupancy));
	vcdp->chgBus(c+1398,((3U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_value) 
				    - (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_value)))),2);
	vcdp->chgBit(c+1399,(vlSymsp->TOP__Briey.__PVT___zz_48_));
	vcdp->chgBit(c+1400,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__locked));
	vcdp->chgBit(c+1401,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_0));
	vcdp->chgBit(c+1402,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFork_5___DOT__linkEnable_0));
	vcdp->chgBit(c+1403,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFork_5___DOT__linkEnable_1));
	vcdp->chgBus(c+1404,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_value),2);
	vcdp->chgBit(c+1405,((3U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_value))));
	vcdp->chgBus(c+1406,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_value),2);
	vcdp->chgBit(c+1407,((3U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_value))));
	vcdp->chgBit(c+1408,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__risingOccupancy));
	vcdp->chgBus(c+1409,((3U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_value) 
				    - (IData)(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_value)))),2);
	vcdp->chgBit(c+1410,(vlSymsp->TOP__Briey.__PVT___zz_51_));
	vcdp->chgBit(c+1411,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__cmdArbiter__DOT__locked));
	vcdp->chgBit(c+1412,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__cmdArbiter__DOT__maskLocked_0));
	vcdp->chgBit(c+1413,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFork_5___DOT__linkEnable_0));
	vcdp->chgBit(c+1414,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFork_5___DOT__linkEnable_1));
	vcdp->chgBus(c+1415,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_value),2);
	vcdp->chgBit(c+1416,((3U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_value))));
	vcdp->chgBus(c+1417,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_value),2);
	vcdp->chgBit(c+1418,((3U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_value))));
	vcdp->chgBit(c+1419,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___DOT__risingOccupancy));
	vcdp->chgBus(c+1420,((3U & ((IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___DOT__pushPtr_value) 
				    - (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axicpu_arbiter__DOT__streamFifoLowLatency_5___DOT__popPtr_value)))),2);
	vcdp->chgBus(c+1421,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA),32);
	vcdp->chgBus(c+1422,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_to_writeBack_INSTRUCTION),32);
	vcdp->chgBit(c+1423,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1));
	vcdp->chgBit(c+1424,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2));
	vcdp->chgBit(c+1425,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3));
	vcdp->chgBit(c+1426,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4));
	vcdp->chgBit(c+1427,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode));
	vcdp->chgBit(c+1428,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute));
	vcdp->chgBit(c+1429,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory));
	vcdp->chgBit(c+1430,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack));
	vcdp->chgBit(c+1431,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_111_));
	vcdp->chgBit(c+1432,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_fetchPc_inc));
	vcdp->chgBit(c+1433,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_117_));
	vcdp->chgBit(c+1434,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT___zz_119_));
	vcdp->chgBit(c+1435,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0));
	vcdp->chgBit(c+1436,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_injector_decodeRemoved));
	vcdp->chgBus(c+1437,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_value),6);
	vcdp->chgBit(c+1438,((0x21U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_DivPlugin_div_counter_value))));
	vcdp->chgBit(c+1439,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mstatus_MIE));
	vcdp->chgBit(c+1440,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mstatus_MPIE));
	vcdp->chgBus(c+1441,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mstatus_MPP),2);
	vcdp->chgBit(c+1442,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mie_MEIE));
	vcdp->chgBit(c+1443,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mie_MTIE));
	vcdp->chgBit(c+1444,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_mie_MSIE));
	vcdp->chgBit(c+1445,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_interrupt_valid));
	vcdp->chgBit(c+1446,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__CsrPlugin_hadException));
	vcdp->chgBit(c+1447,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_CsrPlugin_wfiWake));
	vcdp->chgBit(c+1448,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid));
	vcdp->chgBit(c+1449,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError));
	vcdp->chgBit(c+1450,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
	vcdp->chgBit(c+1451,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent));
	vcdp->chgBus(c+1452,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex),3);
	vcdp->chgBus(c+1453,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress),32);
	vcdp->chgBit(c+1454,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_flusher_valid));
	vcdp->chgBit(c+1455,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__stageB_memCmdSent));
	vcdp->chgBit(c+1456,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_valid));
	vcdp->chgBus(c+1457,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_value),3);
	vcdp->chgBit(c+1458,((7U == (IData)(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_counter_value))));
	vcdp->chgBit(c+1459,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_waysAllocator));
	vcdp->chgBit(c+1460,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__dataCache_1___DOT__loader_error));
    }
}

void VBriey::traceChgThis__39(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1461,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__unburstify_buffer_valid)
			       ? (1U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__unburstify_buffer_beat))
			       : (0U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_len)))));
    }
}

void VBriey::traceChgThis__40(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+1462,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_addr),20);
	vcdp->chgBus(c+1463,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_w_halfPipe_regs_payload_data),32);
	vcdp->chgBus(c+1464,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__address),32);
	vcdp->chgBit(c+1465,(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__flowCCByToggle_1___DOT__outputArea_flow_m2sPipe_payload_last));
	vcdp->chgBus(c+1466,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_ar_halfPipe_regs_payload_len),8);
	vcdp->chgBus(c+1467,(vlSymsp->TOP__Briey.__PVT___zz_57_),2);
	vcdp->chgBus(c+1468,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_len),8);
	vcdp->chgBus(c+1469,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_len),8);
	vcdp->chgBus(c+1470,(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__unburstify_buffer_beat),8);
	vcdp->chgBit(c+1471,((1U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_ram__DOT__unburstify_buffer_beat))));
	vcdp->chgBus(c+1472,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__unburstify_buffer_beat),8);
	vcdp->chgBit(c+1473,((1U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__unburstify_buffer_beat))));
	vcdp->chgBus(c+1474,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT___zz_10_),3);
	vcdp->chgBus(c+1475,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl__DOT__ctrl__DOT___zz_11_),2);
	vcdp->chgBus(c+1476,((0xfU & vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_addr)),4);
	vcdp->chgBus(c+1477,((0xffU & vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_arw_halfPipe_regs_payload_addr)),8);
	vcdp->chgBit(c+1478,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_uartConfigReg_frame_stop));
	vcdp->chgBus(c+1479,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_uartConfigReg_frame_parity),2);
	vcdp->chgBus(c+1480,((0xffU & vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_w_halfPipe_regs_payload_data)),8);
	vcdp->chgBus(c+1481,(((IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_uartConfigReg_frame_stop)
			       ? ((IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_uartConfigReg_frame_stop)
				   ? 0x54574fU : 0x3f3f3fU)
			       : 0x4f4e45U)),24);
	vcdp->chgBus(c+1482,(((0U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_uartConfigReg_frame_parity))
			       ? 0x4e4f4e45U : ((1U 
						 == (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_uartConfigReg_frame_parity))
						 ? 0x4556454eU
						 : 
						((2U 
						  == (IData)(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__bridge_uartConfigReg_frame_parity))
						  ? 0x4f444420U
						  : 0x3f3f3f3fU)))),32);
	vcdp->chgBus(c+1483,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value),3);
	vcdp->chgBus(c+1484,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value),3);
	vcdp->chgBit(c+1485,(vlSymsp->TOP__Briey.__PVT__axi_uartCtrl__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity));
	vcdp->chgBus(c+1486,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__buffer_2_),32);
	vcdp->chgBit(c+1487,(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__system_rsp_valid));
	vcdp->chgBit(c+1488,(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__system_rsp_payload_error));
	vcdp->chgBus(c+1489,(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__system_rsp_payload_data),32);
	vcdp->chgBit(c+1490,((0U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__errorSlave__DOT__remaining))));
	vcdp->chgBus(c+1491,(vlSymsp->TOP__Briey.__PVT__axi_core_iBus_decoder__DOT__errorSlave__DOT__remaining),8);
	vcdp->chgBit(c+1492,((0U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__errorSlave__DOT__remaining))));
	vcdp->chgBus(c+1493,(vlSymsp->TOP__Briey.__PVT__axi_core_dBus_decoder__DOT__errorSlave__DOT__remaining),8);
	vcdp->chgBit(c+1494,((0U == (IData)(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__errorSlave__DOT__remaining))));
	vcdp->chgBus(c+1495,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_decoder__DOT__errorSlave__DOT__remaining),8);
	vcdp->chgBit(c+1496,((0U != (IData)(vlSymsp->TOP__Briey.__PVT___zz_57_))));
	vcdp->chgBus(c+1497,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_REGFILE_WRITE_DATA),32);
	vcdp->chgBus(c+1498,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_INSTRUCTION),32);
	vcdp->chgBus(c+1499,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION),32);
	vcdp->chgBit(c+1500,((0xfU == (0xfU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
					       >> 0x1cU)))));
	vcdp->chgBus(c+1501,((3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
				    >> 0xcU))),2);
	vcdp->chgBit(c+1502,(((1U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					    >> 0xcU))) 
			      | (2U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0xcU))))));
	vcdp->chgBit(c+1503,((1U == (3U & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					   >> 0xcU)))));
	vcdp->chgBus(c+1504,((0xfffU & (vlSymsp->TOP__Briey__axi_core_cpu.__PVT__decode_to_execute_INSTRUCTION 
					>> 0x14U))),12);
	vcdp->chgBit(c+1505,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_isPipBusy));
    }
}

void VBriey::traceChgThis__41(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1506,(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__flowCCByToggle_1___DOT__outputArea_flow_m2sPipe_valid));
	vcdp->chgBit(c+1507,(vlSymsp->TOP__Briey.__PVT___zz_36_));
    }
}

void VBriey::traceChgThis__42(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1508,(vlSymsp->TOP__Briey.__PVT__axi_gpu_io_axiram_ar_halfPipe_regs_valid));
	vcdp->chgBit(c+1509,(vlSymsp->TOP__Briey.__PVT__axi_ram_io_axi_arbiter_io_output_arw_halfPipe_regs_valid));
	vcdp->chgBit(c+1510,(vlSymsp->TOP__Briey.__PVT__axi_sdramCtrl_io_axi_arbiter_io_output_arw_halfPipe_regs_valid));
	vcdp->chgBit(c+1511,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_arw_halfPipe_regs_valid));
	vcdp->chgBit(c+1512,(vlSymsp->TOP__Briey.__PVT__axi_apbBridge_io_axi_arbiter_io_output_w_halfPipe_regs_valid));
	vcdp->chgBus(c+1513,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__mcpState_readData_fsm_stateReg),3);
	vcdp->chgBus(c+1514,(vlSymsp->TOP__Briey.__PVT__axi_gpu__DOT__mcpState_stateReg),3);
	vcdp->chgBit(c+1515,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__execute_arbitration_isValid));
	vcdp->chgBit(c+1516,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__memory_arbitration_isValid));
	vcdp->chgBit(c+1517,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__writeBack_arbitration_isValid));
    }
}

void VBriey::traceChgThis__43(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1518,(vlSymsp->TOP__Briey.__PVT__jtagBridge_1___DOT__flowCCByToggle_1___DOT__inputArea_data_last));
    }
}

void VBriey::traceChgThis__44(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1519,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_resetIt_regNext));
	vcdp->chgBit(c+1520,(vlSymsp->TOP__Briey.__PVT__resetCtrl_axiReset));
	vcdp->chgBit(c+1521,(vlSymsp->TOP__Briey.__PVT__axi_core_cpu_debug_resetOut_regNext));
    }
}

void VBriey::traceChgThis__45(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1522,(vlSymsp->TOP__Briey__axi_core_cpu.__PVT__DebugPlugin_resetIt));
    }
}

void VBriey::traceChgThis__46(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+1523,(vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[0U]),32);
	vcdp->chgBus(c+1524,(vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[1U]),32);
	vcdp->chgBit(c+1525,((1U & vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[2U])));
	vcdp->chgBus(c+1526,((3U & (vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[2U] 
				    >> 1U))),2);
	vcdp->chgBit(c+1527,(vlSymsp->TOP__Briey.__PVT__resetCtrl_systemReset));
	vcdp->chgArray(c+1528,(vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter),67);
	vcdp->chgBus(c+1531,((0xffU & vlSymsp->TOP__Briey.__PVT__systemDebugger_1___DOT__dispatcher_dataShifter[0U])),8);
    }
}

void VBriey::traceChgThis__47(VBriey__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBriey* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1532,(vlTOPp->io_asyncReset));
	vcdp->chgBit(c+1533,(vlTOPp->io_axiClk));
	vcdp->chgBit(c+1534,(vlTOPp->io_vgaClk));
	vcdp->chgBit(c+1535,(vlTOPp->io_jtag_tms));
	vcdp->chgBit(c+1536,(vlTOPp->io_jtag_tdi));
	vcdp->chgBit(c+1537,(vlTOPp->io_jtag_tdo));
	vcdp->chgBit(c+1538,(vlTOPp->io_jtag_tck));
	vcdp->chgBus(c+1539,(vlTOPp->io_sdram_ADDR),13);
	vcdp->chgBus(c+1540,(vlTOPp->io_sdram_BA),2);
	vcdp->chgBus(c+1541,(vlTOPp->io_sdram_DQ_read),16);
	vcdp->chgBus(c+1542,(vlTOPp->io_sdram_DQ_write),16);
	vcdp->chgBit(c+1543,(vlTOPp->io_sdram_DQ_writeEnable));
	vcdp->chgBus(c+1544,(vlTOPp->io_sdram_DQM),2);
	vcdp->chgBit(c+1545,(vlTOPp->io_sdram_CASn));
	vcdp->chgBit(c+1546,(vlTOPp->io_sdram_CKE));
	vcdp->chgBit(c+1547,(vlTOPp->io_sdram_CSn));
	vcdp->chgBit(c+1548,(vlTOPp->io_sdram_RASn));
	vcdp->chgBit(c+1549,(vlTOPp->io_sdram_WEn));
	vcdp->chgBus(c+1550,(vlTOPp->io_gpioA_read),32);
	vcdp->chgBus(c+1551,(vlTOPp->io_gpioA_write),32);
	vcdp->chgBus(c+1552,(vlTOPp->io_gpioA_writeEnable),32);
	vcdp->chgBus(c+1553,(vlTOPp->io_gpioB_read),32);
	vcdp->chgBus(c+1554,(vlTOPp->io_gpioB_write),32);
	vcdp->chgBus(c+1555,(vlTOPp->io_gpioB_writeEnable),32);
	vcdp->chgBit(c+1556,(vlTOPp->io_uart_txd));
	vcdp->chgBit(c+1557,(vlTOPp->io_uart_rxd));
	vcdp->chgBit(c+1558,(vlTOPp->io_vga_hSync));
	vcdp->chgBit(c+1559,(vlTOPp->io_vga_vSync));
	vcdp->chgBus(c+1560,(vlTOPp->io_vga_rgb_0),5);
	vcdp->chgBus(c+1561,(vlTOPp->io_vga_rgb_1),6);
	vcdp->chgBus(c+1562,(vlTOPp->io_vga_rgb_2),5);
	vcdp->chgBit(c+1563,(vlTOPp->io_vga_colorEn));
	vcdp->chgBit(c+1564,(vlTOPp->io_vga_videoClock));
	vcdp->chgBit(c+1565,(vlTOPp->io_timerExternal_clear));
	vcdp->chgBit(c+1566,(vlTOPp->io_timerExternal_tick));
	vcdp->chgBit(c+1567,(vlTOPp->io_coreInterrupt));
	vcdp->chgBus(c+1568,(vlSymsp->TOP__Briey__axi_core_cpu.IBusCachedPlugin_fetchPc_pcReg),32);
	vcdp->chgBus(c+1569,(vlSymsp->TOP__Briey__axi_core_cpu.lastStageInstruction),32);
	vcdp->chgBus(c+1570,(vlSymsp->TOP__Briey__axi_core_cpu.lastStagePc),32);
	vcdp->chgBit(c+1571,(vlSymsp->TOP__Briey__axi_core_cpu.lastStageIsValid));
	vcdp->chgBit(c+1572,(vlSymsp->TOP__Briey__axi_core_cpu.lastStageIsFiring));
	vcdp->chgBit(c+1573,((0xfU == (0xfU & (vlSymsp->TOP__Briey__axi_core_cpu.IBusCachedPlugin_fetchPc_pcReg 
					       >> 0x1cU)))));
	vcdp->chgBit(c+1574,(vlSymsp->TOP__Briey__axi_core_cpu.lastStageRegFileWrite_valid));
	vcdp->chgBus(c+1575,(vlSymsp->TOP__Briey__axi_core_cpu.lastStageRegFileWrite_payload_address),5);
	vcdp->chgBus(c+1576,(vlSymsp->TOP__Briey__axi_core_cpu.lastStageRegFileWrite_payload_data),32);
	vcdp->chgBus(c+1577,(vlSymsp->TOP__Briey__axi_core_cpu.CsrPlugin_interrupt_code),4);
	vcdp->chgBit(c+1578,(vlSymsp->TOP__Briey__axi_core_cpu.CsrPlugin_interruptJump));
	vcdp->chgBit(c+1579,(vlSymsp->TOP__Briey__axi_core_cpu.execute_CsrPlugin_inWfi));
	vcdp->chgBus(c+1580,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[0]),32);
	vcdp->chgBus(c+1581,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[1]),32);
	vcdp->chgBus(c+1582,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[2]),32);
	vcdp->chgBus(c+1583,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[3]),32);
	vcdp->chgBus(c+1584,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[4]),32);
	vcdp->chgBus(c+1585,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[5]),32);
	vcdp->chgBus(c+1586,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[6]),32);
	vcdp->chgBus(c+1587,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[7]),32);
	vcdp->chgBus(c+1588,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[8]),32);
	vcdp->chgBus(c+1589,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[9]),32);
	vcdp->chgBus(c+1590,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[10]),32);
	vcdp->chgBus(c+1591,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[11]),32);
	vcdp->chgBus(c+1592,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[12]),32);
	vcdp->chgBus(c+1593,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[13]),32);
	vcdp->chgBus(c+1594,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[14]),32);
	vcdp->chgBus(c+1595,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[15]),32);
	vcdp->chgBus(c+1596,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[16]),32);
	vcdp->chgBus(c+1597,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[17]),32);
	vcdp->chgBus(c+1598,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[18]),32);
	vcdp->chgBus(c+1599,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[19]),32);
	vcdp->chgBus(c+1600,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[20]),32);
	vcdp->chgBus(c+1601,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[21]),32);
	vcdp->chgBus(c+1602,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[22]),32);
	vcdp->chgBus(c+1603,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[23]),32);
	vcdp->chgBus(c+1604,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[24]),32);
	vcdp->chgBus(c+1605,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[25]),32);
	vcdp->chgBus(c+1606,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[26]),32);
	vcdp->chgBus(c+1607,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[27]),32);
	vcdp->chgBus(c+1608,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[28]),32);
	vcdp->chgBus(c+1609,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[29]),32);
	vcdp->chgBus(c+1610,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[30]),32);
	vcdp->chgBus(c+1611,(vlSymsp->TOP__Briey__axi_core_cpu.RegFilePlugin_regFile[31]),32);
    }
}
