// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VBriey__Syms_H_
#define _VBriey__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VBriey.h"
#include "VBriey_Briey.h"
#include "VBriey_VexRiscv.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class VBriey__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VBriey*                        TOPp;
    VBriey_Briey                   TOP__Briey;
    VBriey_VexRiscv                TOP__Briey__axi_core_cpu;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_Briey__axi_core_cpu;
    
    // CREATORS
    VBriey__Syms(VBriey* topp, const char* namep);
    ~VBriey__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
