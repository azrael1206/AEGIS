// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBriey.h for the primary calling header

#ifndef _VBriey_VexRiscv_H_
#define _VBriey_VexRiscv_H_

#include "verilated_heavy.h"
#include "VBriey__Dpi.h"

class VBriey__Syms;

//----------

VL_MODULE(VBriey_VexRiscv) {
  public:
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN8(__PVT__io_axiClk,0,0);
    VL_IN8(__PVT__resetCtrl_axiReset,0,0);
    VL_IN8(__PVT__resetCtrl_systemReset,0,0);
    VL_IN8(__PVT__timerInterrupt,0,0);
    VL_IN8(__PVT__externalInterrupt,0,0);
    VL_IN8(__PVT__softwareInterrupt,0,0);
    VL_IN8(__PVT__debug_bus_cmd_valid,0,0);
    VL_OUT8(__PVT__debug_bus_cmd_ready,0,0);
    VL_IN8(__PVT__debug_bus_cmd_payload_wr,0,0);
    VL_IN8(__PVT__debug_bus_cmd_payload_address,7,0);
    VL_OUT8(__PVT__debug_resetOut,0,0);
    VL_OUT8(__PVT__iBus_cmd_valid,0,0);
    VL_IN8(__PVT__iBus_cmd_ready,0,0);
    VL_OUT8(__PVT__iBus_cmd_payload_size,2,0);
    VL_IN8(__PVT__iBus_rsp_valid,0,0);
    VL_IN8(__PVT__iBus_rsp_payload_error,0,0);
    VL_OUT8(__PVT__dBus_cmd_valid,0,0);
    VL_IN8(__PVT__dBus_cmd_ready,0,0);
    VL_OUT8(__PVT__dBus_cmd_payload_wr,0,0);
    VL_OUT8(__PVT__dBus_cmd_payload_mask,3,0);
    VL_OUT8(__PVT__dBus_cmd_payload_length,2,0);
    VL_OUT8(__PVT__dBus_cmd_payload_last,0,0);
    VL_IN8(__PVT__dBus_rsp_valid,0,0);
    VL_IN8(__PVT__dBus_rsp_payload_error,0,0);
    VL_IN(__PVT__debug_bus_cmd_payload_data,31,0);
    VL_OUT(__PVT__debug_bus_rsp_data,31,0);
    VL_OUT(__PVT__iBus_cmd_payload_address,31,0);
    VL_IN(__PVT__iBus_rsp_payload_data,31,0);
    VL_OUT(__PVT__dBus_cmd_payload_address,31,0);
    VL_OUT(__PVT__dBus_cmd_payload_data,31,0);
    VL_IN(__PVT__dBus_rsp_payload_data,31,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
	// Begin mtask footprint  all: 
	VL_SIG8(__PVT___zz_201_,0,0);
	VL_SIG8(__PVT___zz_207_,0,0);
	VL_SIG8(__PVT___zz_210_,0,0);
	VL_SIG8(__PVT___zz_211_,0,0);
	VL_SIG8(__PVT___zz_215_,0,0);
	VL_SIG8(__PVT___zz_219_,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid,0,0);
	VL_SIG8(__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt,0,0);
	VL_SIG8(__PVT__dataCache_1___05Fio_cpu_writeBack_mmuException,0,0);
	VL_SIG8(__PVT__dataCache_1___05Fio_cpu_writeBack_unalignedAccess,0,0);
	VL_SIG8(__PVT__dataCache_1___05Fio_cpu_writeBack_accessError,0,0);
	VL_SIG8(__PVT__dataCache_1___05Fio_cpu_flush_ready,0,0);
	VL_SIG8(__PVT__dataCache_1___05Fio_cpu_redo,0,0);
	VL_SIG8(__PVT__dataCache_1___05Fio_mem_cmd_valid,0,0);
	VL_SIG8(__PVT__dataCache_1___05Fio_mem_cmd_payload_wr,0,0);
	VL_SIG8(__PVT__dataCache_1___05Fio_mem_cmd_payload_length,2,0);
	VL_SIG8(__PVT__dataCache_1___05Fio_mem_cmd_payload_last,0,0);
	VL_SIG8(__PVT___zz_223_,0,0);
	VL_SIG8(__PVT___zz_224_,0,0);
	VL_SIG8(__PVT___zz_226_,0,0);
	VL_SIG8(__PVT___zz_227_,0,0);
	VL_SIG8(__PVT___zz_228_,0,0);
	VL_SIG8(__PVT___zz_229_,0,0);
	VL_SIG8(__PVT___zz_230_,0,0);
	VL_SIG8(__PVT___zz_231_,0,0);
	VL_SIG8(__PVT___zz_232_,0,0);
	VL_SIG8(__PVT___zz_233_,0,0);
	VL_SIG8(__PVT___zz_234_,0,0);
	VL_SIG8(__PVT___zz_235_,0,0);
	VL_SIG8(__PVT___zz_237_,0,0);
	VL_SIG8(__PVT___zz_238_,0,0);
	VL_SIG8(__PVT___zz_239_,0,0);
	VL_SIG8(__PVT___zz_241_,0,0);
	VL_SIG8(__PVT___zz_242_,0,0);
	VL_SIG8(__PVT___zz_247_,0,0);
	VL_SIG8(__PVT___zz_249_,0,0);
	VL_SIG8(__PVT___zz_252_,0,0);
	VL_SIG8(__PVT___zz_343_,1,0);
	VL_SIG8(__PVT___zz_353_,2,0);
	VL_SIG8(__PVT___zz_62_,0,0);
	VL_SIG8(__PVT__decode_REGFILE_WRITE_VALID,0,0);
	VL_SIG8(__PVT___zz_90_,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_rsp_issueDetected,0,0);
	VL_SIG8(__PVT___zz_93_,0,0);
	VL_SIG8(__PVT___zz_94_,0,0);
	VL_SIG8(__PVT___zz_95_,0,0);
	VL_SIG8(__PVT__decode_arbitration_haltItself,0,0);
	VL_SIG8(__PVT__decode_arbitration_haltByOther,0,0);
	VL_SIG8(__PVT__decode_arbitration_removeIt,0,0);
	VL_SIG8(__PVT__decode_arbitration_isValid,0,0);
	VL_SIG8(__PVT__decode_arbitration_isStuck,0,0);
	VL_SIG8(__PVT__decode_arbitration_isFlushed,0,0);
	VL_SIG8(__PVT__execute_arbitration_haltItself,0,0);
	VL_SIG8(__PVT__execute_arbitration_haltByOther,0,0);
	VL_SIG8(__PVT__execute_arbitration_removeIt,0,0);
	VL_SIG8(__PVT__execute_arbitration_flushAll,0,0);
	VL_SIG8(__PVT__execute_arbitration_isValid,0,0);
	VL_SIG8(__PVT__execute_arbitration_isStuck,0,0);
	VL_SIG8(__PVT__execute_arbitration_isStuckByOthers,0,0);
	VL_SIG8(__PVT__execute_arbitration_isFlushed,0,0);
	VL_SIG8(__PVT__memory_arbitration_haltItself,0,0);
	VL_SIG8(__PVT__memory_arbitration_removeIt,0,0);
	VL_SIG8(__PVT__memory_arbitration_flushAll,0,0);
    };
    struct {
	VL_SIG8(__PVT__memory_arbitration_isValid,0,0);
	VL_SIG8(__PVT__memory_arbitration_isStuck,0,0);
	VL_SIG8(__PVT__memory_arbitration_isFlushed,0,0);
	VL_SIG8(__PVT__writeBack_arbitration_haltItself,0,0);
	VL_SIG8(__PVT__writeBack_arbitration_removeIt,0,0);
	VL_SIG8(__PVT__writeBack_arbitration_flushAll,0,0);
	VL_SIG8(__PVT__writeBack_arbitration_isValid,0,0);
	VL_SIG8(__PVT__writeBack_arbitration_isFiring,0,0);
	VL_SIG8(lastStageIsValid,0,0);
	VL_SIG8(lastStageIsFiring,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_fetcherHalt,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_fetcherflushIt,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_incomingInstruction,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_predictionJumpInterface_valid,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_decodeExceptionPort_valid,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code,3,0);
	VL_SIG8(__PVT__DBusCachedPlugin_redoBranch_valid,0,0);
	VL_SIG8(__PVT__DBusCachedPlugin_exceptionBus_valid,0,0);
	VL_SIG8(__PVT__DBusCachedPlugin_exceptionBus_payload_code,3,0);
	VL_SIG8(__PVT___zz_103_,0,0);
	VL_SIG8(__PVT__decodeExceptionPort_valid,0,0);
	VL_SIG8(__PVT__BranchPlugin_jumpInterface_valid,0,0);
	VL_SIG8(__PVT__BranchPlugin_branchExceptionPort_valid,0,0);
	VL_SIG8(__PVT__CsrPlugin_jumpInterface_valid,0,0);
	VL_SIG8(__PVT__CsrPlugin_privilege,1,0);
	VL_SIG8(__PVT__CsrPlugin_forceMachineWire,0,0);
	VL_SIG8(__PVT__CsrPlugin_allowInterrupts,0,0);
	VL_SIG8(__PVT__CsrPlugin_allowException,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_injectionPort_valid,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_injectionPort_ready,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_jump_pcLoad_valid,0,0);
	VL_SIG8(__PVT___zz_104_,4,0);
	VL_SIG8(__PVT___zz_105_,4,0);
	VL_SIG8(__PVT__IBusCachedPlugin_fetchPc_inc,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_fetchPc_propagatePc,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_fetchPc_samplePcNext,0,0);
	VL_SIG8(__PVT___zz_111_,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_halt,0,0);
	VL_SIG8(__PVT___zz_117_,0,0);
	VL_SIG8(__PVT___zz_119_,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_iBusRsp_readyForError,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_injector_decodeRemoved,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_s1_tightlyCoupledHit,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_rsp_redoFetch,0,0);
	VL_SIG8(__PVT___zz_133_,0,0);
	VL_SIG8(__PVT___zz_135_,0,0);
	VL_SIG8(lastStageRegFileWrite_valid,0,0);
	VL_SIG8(lastStageRegFileWrite_payload_address,4,0);
	VL_SIG8(__PVT___zz_149_,0,0);
	VL_SIG8(__PVT__execute_SrcPlugin_less,0,0);
	VL_SIG8(__PVT__memory_DivPlugin_div_needRevert,0,0);
	VL_SIG8(__PVT__memory_DivPlugin_div_counter_willIncrement,0,0);
	VL_SIG8(__PVT__memory_DivPlugin_div_counter_willClear,0,0);
	VL_SIG8(__PVT__memory_DivPlugin_div_counter_valueNext,5,0);
	VL_SIG8(__PVT__memory_DivPlugin_div_counter_value,5,0);
	VL_SIG8(__PVT__memory_DivPlugin_div_done,0,0);
    };
    struct {
	VL_SIG8(__PVT___zz_163_,0,0);
	VL_SIG8(__PVT___zz_164_,0,0);
	VL_SIG8(__PVT___zz_166_,0,0);
	VL_SIG8(__PVT___zz_167_,0,0);
	VL_SIG8(__PVT___zz_168_,0,0);
	VL_SIG8(__PVT___zz_169_,0,0);
	VL_SIG8(__PVT___zz_170_,4,0);
	VL_SIG8(__PVT___zz_174_,0,0);
	VL_SIG8(__PVT___zz_175_,0,0);
	VL_SIG8(__PVT___zz_176_,0,0);
	VL_SIG8(__PVT___zz_177_,0,0);
	VL_SIG8(__PVT__execute_BranchPlugin_eq,0,0);
	VL_SIG8(__PVT___zz_180_,0,0);
	VL_SIG8(__PVT__CsrPlugin_mstatus_MIE,0,0);
	VL_SIG8(__PVT__CsrPlugin_mstatus_MPIE,0,0);
	VL_SIG8(__PVT__CsrPlugin_mstatus_MPP,1,0);
	VL_SIG8(__PVT__CsrPlugin_mip_MEIP,0,0);
	VL_SIG8(__PVT__CsrPlugin_mip_MTIP,0,0);
	VL_SIG8(__PVT__CsrPlugin_mip_MSIP,0,0);
	VL_SIG8(__PVT__CsrPlugin_mie_MEIE,0,0);
	VL_SIG8(__PVT__CsrPlugin_mie_MTIE,0,0);
	VL_SIG8(__PVT__CsrPlugin_mie_MSIE,0,0);
	VL_SIG8(__PVT__CsrPlugin_mcause_interrupt,0,0);
	VL_SIG8(__PVT__CsrPlugin_mcause_exceptionCode,3,0);
	VL_SIG8(__PVT___zz_194_,0,0);
	VL_SIG8(__PVT___zz_195_,0,0);
	VL_SIG8(__PVT___zz_196_,0,0);
	VL_SIG8(__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode,0,0);
	VL_SIG8(__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute,0,0);
	VL_SIG8(__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory,0,0);
	VL_SIG8(__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack,0,0);
	VL_SIG8(__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode,0,0);
	VL_SIG8(__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute,0,0);
	VL_SIG8(__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory,0,0);
	VL_SIG8(__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack,0,0);
	VL_SIG8(__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code,3,0);
	VL_SIG8(__PVT___zz_197_,1,0);
	VL_SIG8(__PVT__CsrPlugin_interrupt_valid,0,0);
	VL_SIG8(CsrPlugin_interrupt_code,3,0);
	VL_SIG8(__PVT__CsrPlugin_interrupt_targetPrivilege,1,0);
	VL_SIG8(__PVT__CsrPlugin_pipelineLiberator_done,0,0);
	VL_SIG8(CsrPlugin_interruptJump,0,0);
	VL_SIG8(__PVT__CsrPlugin_hadException,0,0);
	VL_SIG8(__PVT__CsrPlugin_targetPrivilege,1,0);
	VL_SIG8(__PVT__CsrPlugin_trapCause,3,0);
	VL_SIG8(execute_CsrPlugin_inWfi,0,0);
	VL_SIG8(__PVT__execute_CsrPlugin_blockedBySideEffects,0,0);
	VL_SIG8(__PVT__execute_CsrPlugin_writeEnable,0,0);
	VL_SIG8(__PVT__DebugPlugin_resetIt,0,0);
	VL_SIG8(__PVT__DebugPlugin_haltIt,0,0);
	VL_SIG8(__PVT__DebugPlugin_stepIt,0,0);
	VL_SIG8(__PVT__DebugPlugin_isPipBusy,0,0);
	VL_SIG8(__PVT__DebugPlugin_godmode,0,0);
	VL_SIG8(__PVT__DebugPlugin_haltedByBreak,0,0);
	VL_SIG8(__PVT___zz_199_,0,0);
	VL_SIG8(__PVT__DebugPlugin_resetIt_regNext,0,0);
	VL_SIG8(__PVT__decode_to_execute_MEMORY_MANAGMENT,0,0);
	VL_SIG8(__PVT__decode_to_execute_IS_MUL,0,0);
	VL_SIG8(__PVT__execute_to_memory_IS_MUL,0,0);
	VL_SIG8(__PVT__memory_to_writeBack_IS_MUL,0,0);
	VL_SIG8(__PVT__decode_to_execute_SRC_USE_SUB_LESS,0,0);
	VL_SIG8(__PVT__decode_to_execute_IS_RS1_SIGNED,0,0);
	VL_SIG8(__PVT__decode_to_execute_MEMORY_WR,0,0);
	VL_SIG8(__PVT__execute_to_memory_MEMORY_WR,0,0);
    };
    struct {
	VL_SIG8(__PVT__memory_to_writeBack_MEMORY_WR,0,0);
	VL_SIG8(__PVT__decode_to_execute_SRC2_CTRL,1,0);
	VL_SIG8(__PVT__decode_to_execute_CSR_WRITE_OPCODE,0,0);
	VL_SIG8(__PVT__decode_to_execute_SHIFT_CTRL,1,0);
	VL_SIG8(__PVT__execute_to_memory_SHIFT_CTRL,1,0);
	VL_SIG8(__PVT__decode_to_execute_REGFILE_WRITE_VALID,0,0);
	VL_SIG8(__PVT__execute_to_memory_REGFILE_WRITE_VALID,0,0);
	VL_SIG8(__PVT__memory_to_writeBack_REGFILE_WRITE_VALID,0,0);
	VL_SIG8(__PVT__decode_to_execute_SRC2_FORCE_ZERO,0,0);
	VL_SIG8(__PVT__decode_to_execute_BRANCH_CTRL,1,0);
	VL_SIG8(__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2,0,0);
	VL_SIG8(__PVT__decode_to_execute_ENV_CTRL,0,0);
	VL_SIG8(__PVT__execute_to_memory_ENV_CTRL,0,0);
	VL_SIG8(__PVT__memory_to_writeBack_ENV_CTRL,0,0);
	VL_SIG8(__PVT__decode_to_execute_MEMORY_ENABLE,0,0);
	VL_SIG8(__PVT__execute_to_memory_MEMORY_ENABLE,0,0);
	VL_SIG8(__PVT__memory_to_writeBack_MEMORY_ENABLE,0,0);
	VL_SIG8(__PVT__decode_to_execute_DO_EBREAK,0,0);
	VL_SIG8(__PVT__decode_to_execute_SRC_LESS_UNSIGNED,0,0);
	VL_SIG8(__PVT__decode_to_execute_SRC1_CTRL,1,0);
	VL_SIG8(__PVT__decode_to_execute_IS_CSR,0,0);
	VL_SIG8(__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE,0,0);
	VL_SIG8(__PVT__decode_to_execute_IS_RS2_SIGNED,0,0);
	VL_SIG8(__PVT__decode_to_execute_IS_DIV,0,0);
	VL_SIG8(__PVT__execute_to_memory_IS_DIV,0,0);
	VL_SIG8(__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE,0,0);
	VL_SIG8(__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE,0,0);
	VL_SIG8(__PVT__decode_to_execute_ALU_CTRL,1,0);
	VL_SIG8(__PVT__decode_to_execute_ALU_BITWISE_CTRL,1,0);
	VL_SIG8(__PVT__execute_to_memory_MEMORY_ADDRESS_LOW,1,0);
	VL_SIG8(__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW,1,0);
	VL_SIG8(__PVT__execute_to_memory_BRANCH_DO,0,0);
	VL_SIG8(__PVT___zz_200_,2,0);
	VL_SIG8(__PVT__IBusCachedPlugin_cache__DOT___zz_13_,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_cache__DOT___zz_14_,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_cache__DOT___zz_1_,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_cache__DOT___zz_2_,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter,3,0);
	VL_SIG8(__PVT__IBusCachedPlugin_cache__DOT___zz_3_,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex,2,0);
	VL_SIG8(__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_tags_0_valid,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_tags_0_error,0,0);
	VL_SIG8(__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_dataBypassValid_regNextWhen,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT___zz_12_,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT___zz_13_,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT___zz_14_,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT___zz_15_,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT___zz_16_,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT___zz_17_,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT___zz_22_,1,0);
	VL_SIG8(__PVT__dataCache_1___DOT___zz_1_,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT___zz_2_,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT__tagsReadCmd_valid,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT__tagsReadCmd_payload,2,0);
	VL_SIG8(__PVT__dataCache_1___DOT__tagsWriteCmd_valid,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT__tagsWriteCmd_payload_way,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT__tagsWriteCmd_payload_address,2,0);
	VL_SIG8(__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_valid,0,0);
    };
    struct {
	VL_SIG8(__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_error,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT__dataReadCmd_valid,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT__dataReadCmd_payload,5,0);
	VL_SIG8(__PVT__dataCache_1___DOT__dataWriteCmd_valid,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT__dataWriteCmd_payload_way,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT__dataWriteCmd_payload_address,5,0);
	VL_SIG8(__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask,3,0);
	VL_SIG8(__PVT__dataCache_1___DOT___zz_5_,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT__stage0_mask,3,0);
	VL_SIG8(__PVT__dataCache_1___DOT__stageA_request_wr,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT__stageA_request_size,1,0);
	VL_SIG8(__PVT__dataCache_1___DOT__stageA_mask,3,0);
	VL_SIG8(__PVT__dataCache_1___DOT__stage0_colisions_regNextWhen,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT__stageB_request_wr,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT__stageB_request_size,1,0);
	VL_SIG8(__PVT__dataCache_1___DOT__stageB_mmuRspFreeze,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT__stageB_mmuRsp_allowWrite,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT__stageB_mmuRsp_exception,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT__stageB_tagsReadRsp_0_error,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT__stageB_waysHits,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT__stageB_mask,3,0);
	VL_SIG8(__PVT__dataCache_1___DOT__stageB_colisions,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT__stageB_loaderValid,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT__stageB_flusher_valid,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT__stageB_memCmdSent,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT__loader_valid,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT__loader_counter_willIncrement,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT__loader_counter_valueNext,2,0);
	VL_SIG8(__PVT__dataCache_1___DOT__loader_counter_value,2,0);
	VL_SIG8(__PVT__dataCache_1___DOT__loader_counter_willOverflow,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT__loader_waysAllocator,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT__loader_error,0,0);
	VL_SIG8(__PVT__dataCache_1___DOT___zz_24_,7,0);
	VL_SIG8(__PVT__dataCache_1___DOT___zz_25_,7,0);
	VL_SIG8(__PVT__dataCache_1___DOT___zz_26_,7,0);
	VL_SIG8(__PVT__dataCache_1___DOT___zz_27_,7,0);
	VL_SIG16(__PVT___zz_129_,10,0);
	VL_SIG16(__PVT___zz_191_,10,0);
	VL_SIG(__PVT___zz_220_,31,0);
	VL_SIG(__PVT___zz_221_,31,0);
	VL_SIG(__PVT__dataCache_1___05Fio_cpu_writeBack_data,31,0);
	VL_SIG(__PVT__dataCache_1___05Fio_mem_cmd_payload_address,31,0);
	VL_SIG(__PVT___zz_38_,31,0);
	VL_SIG(__PVT__decode_RS2,31,0);
	VL_SIG(__PVT__decode_RS1,31,0);
	VL_SIG(__PVT___zz_44_,31,0);
	VL_SIG(__PVT___zz_91_,31,0);
	VL_SIG(__PVT___zz_96_,31,0);
	VL_SIG(__PVT__decode_INSTRUCTION,31,0);
	VL_SIG(lastStageInstruction,31,0);
	VL_SIG(lastStagePc,31,0);
	VL_SIG(__PVT__IBusCachedPlugin_pcs_4,31,0);
	VL_SIG(__PVT__CsrPlugin_jumpInterface_payload,31,0);
	VL_SIG(IBusCachedPlugin_fetchPc_pcReg,31,0);
	VL_SIG(__PVT__IBusCachedPlugin_fetchPc_pc,31,0);
	VL_SIG(__PVT___zz_122_,18,0);
	VL_SIG(__PVT___zz_131_,18,0);
	VL_SIG(__PVT__writeBack_DBusCachedPlugin_rspShifted,31,0);
	VL_SIG(__PVT___zz_134_,31,0);
	VL_SIG(__PVT___zz_136_,31,0);
	VL_SIG(__PVT___zz_137_,31,0);
	VL_SIG(lastStageRegFileWrite_payload_data,31,0);
	VL_SIG(__PVT___zz_151_,31,0);
    };
    struct {
	VL_SIG(__PVT___zz_153_,19,0);
	VL_SIG(__PVT___zz_155_,19,0);
	VL_SIG(__PVT___zz_156_,31,0);
	VL_SIG(__PVT__execute_SrcPlugin_addSub,31,0);
	VL_SIG(__PVT___zz_157_,31,0);
	VL_SIG(__PVT__execute_FullBarrelShifterPlugin_reversed,31,0);
	VL_SIG(__PVT___zz_158_,31,0);
	VL_SIG(__PVT__execute_MulPlugin_aHigh,16,0);
	VL_SIG(__PVT__execute_MulPlugin_bHigh,16,0);
	VL_SIG(__PVT__memory_DivPlugin_rs2,31,0);
	VL_SIGW(__PVT__memory_DivPlugin_accumulator,64,0,3);
	VL_SIG(__PVT__memory_DivPlugin_div_result,31,0);
	VL_SIG(__PVT___zz_162_,31,0);
	VL_SIG(__PVT___zz_171_,31,0);
	VL_SIG(__PVT__execute_BranchPlugin_branch_src2,31,0);
	VL_SIG(__PVT___zz_189_,19,0);
	VL_SIG(__PVT___zz_193_,18,0);
	VL_SIG(__PVT__CsrPlugin_mepc,31,0);
	VL_SIG(__PVT__CsrPlugin_mtval,31,0);
	VL_SIG(__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr,31,0);
	VL_SIG(__PVT__CsrPlugin_xtvec_base,29,0);
	VL_SIG(__PVT__execute_CsrPlugin_readData,31,0);
	VL_SIG(__PVT__execute_CsrPlugin_writeData,31,0);
	VL_SIG(__PVT__DebugPlugin_busReadDataReg,31,0);
	VL_SIG(__PVT__decode_to_execute_PC,31,0);
	VL_SIG(__PVT__execute_to_memory_PC,31,0);
	VL_SIG(__PVT__memory_to_writeBack_PC,31,0);
	VL_SIG(__PVT__execute_to_memory_REGFILE_WRITE_DATA,31,0);
	VL_SIG(__PVT__memory_to_writeBack_REGFILE_WRITE_DATA,31,0);
	VL_SIG(__PVT__decode_to_execute_RS2,31,0);
	VL_SIG(__PVT__execute_to_memory_BRANCH_CALC,31,0);
	VL_SIG(__PVT__execute_to_memory_MUL_LL,31,0);
	VL_SIG(__PVT__execute_to_memory_SHIFT_RIGHT,31,0);
	VL_SIG(__PVT__decode_to_execute_RS1,31,0);
	VL_SIG(__PVT__decode_to_execute_INSTRUCTION,31,0);
	VL_SIG(__PVT__execute_to_memory_INSTRUCTION,31,0);
	VL_SIG(__PVT__memory_to_writeBack_INSTRUCTION,31,0);
	VL_SIG(__PVT__IBusCachedPlugin_injectionPort_payload_regNext,31,0);
	VL_SIG(__PVT__IBusCachedPlugin_cache__DOT___zz_11_,25,0);
	VL_SIG(__PVT__IBusCachedPlugin_cache__DOT___zz_12_,31,0);
	VL_SIG(__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address,31,0);
	VL_SIG(__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress,31,0);
	VL_SIG(__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_tags_0_address,23,0);
	VL_SIG(__PVT__IBusCachedPlugin_cache__DOT___zz_10_,31,0);
	VL_SIG(__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_word,31,0);
	VL_SIG(__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_dataBypass_regNextWhen,31,0);
	VL_SIG(__PVT__dataCache_1___DOT___zz_10_,25,0);
	VL_SIG(__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_address,23,0);
	VL_SIG(__PVT__dataCache_1___DOT__dataWriteCmd_payload_data,31,0);
	VL_SIG(__PVT__dataCache_1___DOT__stageA_request_data,31,0);
	VL_SIG(__PVT__dataCache_1___DOT__stageB_request_data,31,0);
	VL_SIG(__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress,31,0);
	VL_SIG(__PVT__dataCache_1___DOT__stageB_dataReadRsp_0,31,0);
	VL_SIG64(__PVT___zz_321_,32,0);
	VL_SIG64(__PVT__memory_DivPlugin_rs1,32,0);
	VL_SIG64(__PVT___zz_160_,32,0);
	VL_SIG64(__PVT___zz_161_,32,0);
	VL_SIG64(__PVT___zz_165_,32,0);
	VL_SIG64(__PVT__execute_to_memory_MUL_HH,33,0);
	VL_SIG64(__PVT__memory_to_writeBack_MUL_HH,33,0);
	VL_SIG64(__PVT__memory_to_writeBack_MUL_LOW,51,0);
	VL_SIG64(__PVT__execute_to_memory_MUL_LH,33,0);
	VL_SIG64(__PVT__execute_to_memory_MUL_HL,33,0);
	VL_SIG(RegFilePlugin_regFile[32],31,0);
    };
    struct {
	VL_SIG(__PVT__IBusCachedPlugin_cache__DOT__ways_0_tags[8],25,0);
	VL_SIG(__PVT__IBusCachedPlugin_cache__DOT__ways_0_datas[64],31,0);
	VL_SIG(__PVT__dataCache_1___DOT__ways_0_tags[8],25,0);
	VL_SIG8(__PVT__dataCache_1___DOT__ways_0_data_symbol0[64],7,0);
	VL_SIG8(__PVT__dataCache_1___DOT__ways_0_data_symbol1[64],7,0);
	VL_SIG8(__PVT__dataCache_1___DOT__ways_0_data_symbol2[64],7,0);
	VL_SIG8(__PVT__dataCache_1___DOT__ways_0_data_symbol3[64],7,0);
    };
    
    // LOCAL VARIABLES
    // Begin mtask footprint  all: 
    VL_SIG8(__Vxrand3,3,0);
    VL_SIG8(__Vxrand2,3,0);
    VL_SIG8(dataCache_1___DOT____Vxrand14,0,0);
    VL_SIG8(dataCache_1___DOT____Vxrand13,2,0);
    VL_SIG8(dataCache_1___DOT____Vxrand11,3,0);
    VL_SIG8(dataCache_1___DOT____Vxrand9,5,0);
    VL_SIG8(dataCache_1___DOT____Vxrand8,0,0);
    VL_SIG8(dataCache_1___DOT____Vxrand6,0,0);
    VL_SIG8(dataCache_1___DOT____Vxrand5,0,0);
    VL_SIG8(dataCache_1___DOT____Vxrand4,2,0);
    VL_SIG8(dataCache_1___DOT____Vxrand3,0,0);
    VL_SIG8(dataCache_1___DOT____Vxrand2,5,0);
    VL_SIG8(dataCache_1___DOT____Vxrand1,2,0);
    VL_SIG(__Vxrand5,29,0);
    VL_SIG(__Vxrand1,31,0);
    VL_SIG(dataCache_1___DOT____Vxrand12,31,0);
    VL_SIG(dataCache_1___DOT____Vxrand10,31,0);
    VL_SIG(dataCache_1___DOT____Vxrand7,23,0);
    
    // INTERNAL VARIABLES
  private:
    VBriey__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VBriey_VexRiscv);  ///< Copying not allowed
  public:
    VBriey_VexRiscv(const char* name="TOP");
    ~VBriey_VexRiscv();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VBriey__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    static void _initial__TOP__Briey__axi_core_cpu__1(VBriey__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__Briey__axi_core_cpu__10(VBriey__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__Briey__axi_core_cpu__14(VBriey__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Briey__axi_core_cpu__11(VBriey__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Briey__axi_core_cpu__12(VBriey__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Briey__axi_core_cpu__13(VBriey__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Briey__axi_core_cpu__3(VBriey__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Briey__axi_core_cpu__4(VBriey__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Briey__axi_core_cpu__5(VBriey__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Briey__axi_core_cpu__6(VBriey__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Briey__axi_core_cpu__7(VBriey__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Briey__axi_core_cpu__8(VBriey__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Briey__axi_core_cpu__9(VBriey__Syms* __restrict vlSymsp);
    static void _settle__TOP__Briey__axi_core_cpu__2(VBriey__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
