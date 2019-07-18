// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VBriey__Syms.h"
#include "VBriey.h"
#include "VBriey_Briey.h"
#include "VBriey_VexRiscv.h"

// FUNCTIONS
VBriey__Syms::VBriey__Syms(VBriey* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP__Briey                     (Verilated::catName(topp->name(),"Briey"))
	, TOP__Briey__axi_core_cpu       (Verilated::catName(topp->name(),"Briey.axi_core_cpu"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->Briey                     = &TOP__Briey;
    TOPp->Briey->axi_core_cpu       = &TOP__Briey__axi_core_cpu;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__Briey.__Vconfigure(this, true);
    TOP__Briey__axi_core_cpu.__Vconfigure(this, true);
    // Setup scope names
    __Vscope_Briey__axi_core_cpu.configure(this,name(),"Briey.axi_core_cpu");
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
	__Vscope_Briey__axi_core_cpu.varInsert(__Vfinal,"CsrPlugin_interruptJump", &(TOP__Briey__axi_core_cpu.CsrPlugin_interruptJump), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
	__Vscope_Briey__axi_core_cpu.varInsert(__Vfinal,"CsrPlugin_interrupt_code", &(TOP__Briey__axi_core_cpu.CsrPlugin_interrupt_code), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
	__Vscope_Briey__axi_core_cpu.varInsert(__Vfinal,"IBusCachedPlugin_fetchPc_pcReg", &(TOP__Briey__axi_core_cpu.IBusCachedPlugin_fetchPc_pcReg), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
	__Vscope_Briey__axi_core_cpu.varInsert(__Vfinal,"RegFilePlugin_regFile", &(TOP__Briey__axi_core_cpu.RegFilePlugin_regFile), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,31,0);
	__Vscope_Briey__axi_core_cpu.varInsert(__Vfinal,"execute_CsrPlugin_inWfi", &(TOP__Briey__axi_core_cpu.execute_CsrPlugin_inWfi), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
	__Vscope_Briey__axi_core_cpu.varInsert(__Vfinal,"lastStageInstruction", &(TOP__Briey__axi_core_cpu.lastStageInstruction), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
	__Vscope_Briey__axi_core_cpu.varInsert(__Vfinal,"lastStageIsFiring", &(TOP__Briey__axi_core_cpu.lastStageIsFiring), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
	__Vscope_Briey__axi_core_cpu.varInsert(__Vfinal,"lastStageIsValid", &(TOP__Briey__axi_core_cpu.lastStageIsValid), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
	__Vscope_Briey__axi_core_cpu.varInsert(__Vfinal,"lastStagePc", &(TOP__Briey__axi_core_cpu.lastStagePc), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
	__Vscope_Briey__axi_core_cpu.varInsert(__Vfinal,"lastStageRegFileWrite_payload_address", &(TOP__Briey__axi_core_cpu.lastStageRegFileWrite_payload_address), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
	__Vscope_Briey__axi_core_cpu.varInsert(__Vfinal,"lastStageRegFileWrite_payload_data", &(TOP__Briey__axi_core_cpu.lastStageRegFileWrite_payload_data), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
	__Vscope_Briey__axi_core_cpu.varInsert(__Vfinal,"lastStageRegFileWrite_valid", &(TOP__Briey__axi_core_cpu.lastStageRegFileWrite_valid), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
