/*
 * FCC1ARINC.h
 *
 * Code generation for model "FCC1ARINC".
 *
 * Model version              : 1.39
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Tue May 17 11:46:18 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FCC1ARINC_h_
#define RTW_HEADER_FCC1ARINC_h_
#include <stddef.h>
#include <cstring>
#include <logsrv.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "signal_decode_cgen_wrapper.h"
#include "FCC1ARINC_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "FCC1ARINC_cal.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

/* Block signals (default storage) */
struct B_FCC1ARINC_T {
  FCC1_ACExxxA_C1_A BusAssignment;     /* '<S1>/Bus Assignment' */
  real_T Receivev2[11];                /* '<Root>/Receive v2 ' */
  real_T CCCodeBlock;                  /* '<S1>/C//C++ Code Block' */
  real_T CCCodeBlock4;                 /* '<S1>/C//C++ Code Block4' */
  real_T CCCodeBlock5;                 /* '<S1>/C//C++ Code Block5' */
  real_T CCCodeBlock2;                 /* '<S1>/C//C++ Code Block2' */
  real_T CCCodeBlock1;                 /* '<S1>/C//C++ Code Block1' */
  real_T CCCodeBlock6;                 /* '<S1>/C//C++ Code Block6' */
  real_T CCCodeBlock7;                 /* '<S1>/C//C++ Code Block7' */
  uint32_T Decode1;                    /* '<S1>/Decode 1' */
  uint32_T Decode5;                    /* '<S1>/Decode 5' */
  uint32_T Decode2;                    /* '<S1>/Decode 2' */
  uint32_T Decode9;                    /* '<S1>/Decode 9' */
  uint32_T Decode10;                   /* '<S1>/Decode 10' */
  uint32_T Decode11;                   /* '<S1>/Decode 11' */
  uint32_T Decode12;                   /* '<S1>/Decode 12' */
  real32_T FCC1_ACExxxA_WHEEL_POS_1;   /* '<S1>/Cast' */
  real32_T FCC1_ACExxxA_SUR_POS_1_AIL; /* '<S1>/Cast1' */
  real32_T FCC1_ACExxxA_GEARING_ROLL;  /* '<S1>/Cast2' */
  real32_T FCC1_ACExxxA_TBI_LH;        /* '<S1>/Cast14' */
  real32_T FCC1_ACExxxA_ROLL_INCREMENTAL_D;/* '<S1>/Cast8' */
  real32_T FCC1_ACExxxA_TBI_RH;        /* '<S1>/Cast9' */
  real32_T FCC1_ACExxxA_ROLL_INCREMENTAL_i;/* '<S1>/Cast10' */
  real32_T FCC1_ACExxxA_GEARING_ROLL_a;
              /* '<Root>/SigConversion_InsertedFor_Bus Selector_at_outport_0' */
  real32_T FCC1_ACExxxA_SUR_POS_1_AIL_d;
             /* '<Root>/SigConversion_InsertedFor_Bus Selector_at_outport_10' */
  real32_T FCC1_ACExxxA_ROLL_INCREMENTAL_m;
             /* '<Root>/SigConversion_InsertedFor_Bus Selector_at_outport_11' */
  real32_T FCC1_ACExxxA_TBI_LH_m;
              /* '<Root>/SigConversion_InsertedFor_Bus Selector_at_outport_6' */
  real32_T FCC1_ACExxxA_ROLL_INCREMENTAL_k;
              /* '<Root>/SigConversion_InsertedFor_Bus Selector_at_outport_7' */
  real32_T FCC1_ACExxxA_TBI_RH_o;
              /* '<Root>/SigConversion_InsertedFor_Bus Selector_at_outport_8' */
  real32_T FCC1_ACExxxA_WHEEL_POS_1_l;
              /* '<Root>/SigConversion_InsertedFor_Bus Selector_at_outport_9' */
  boolean_T Decode6;                   /* '<S1>/Decode 6' */
  boolean_T FCC1_ACExxxA_GEARING_ROLL_FAIL;/* '<S1>/Cast3' */
  boolean_T Decode3;                   /* '<S1>/Decode 3' */
  boolean_T FCC1_ACExxxA_ROLL_INCREMENTAL_p;/* '<S1>/Cast4' */
  boolean_T Decode4;                   /* '<S1>/Decode 4' */
  boolean_T FCC1_ACExxxA_TBI_FAIL;     /* '<S1>/Cast5' */
  boolean_T Decode7;                   /* '<S1>/Decode 7' */
  boolean_T FCC1_ACExxxA_WHEEL_POS_1_FAIL;/* '<S1>/Cast6' */
  boolean_T Decode8;                   /* '<S1>/Decode 8' */
  boolean_T FCC1_ACExxxA_SUR_POS_1_AIL_FAIL;/* '<S1>/Cast7' */
  boolean_T FCC1_ACExxxA_GEARING_ROLL_FAI_e;
              /* '<Root>/SigConversion_InsertedFor_Bus Selector_at_outport_1' */
  boolean_T FCC1_ACExxxA_ROLL_INCREMENTA_kk;
              /* '<Root>/SigConversion_InsertedFor_Bus Selector_at_outport_2' */
  boolean_T FCC1_ACExxxA_TBI_FAIL_d;
              /* '<Root>/SigConversion_InsertedFor_Bus Selector_at_outport_3' */
  boolean_T FCC1_ACExxxA_WHEEL_POS_1_FAIL_e;
              /* '<Root>/SigConversion_InsertedFor_Bus Selector_at_outport_4' */
  boolean_T FCC1_ACExxxA_SUR_POS_1_AIL_FA_f;
              /* '<Root>/SigConversion_InsertedFor_Bus Selector_at_outport_5' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_FCC1ARINC_T {
  void *Setupv2_PWORK[2];              /* '<Root>/Setup v2 ' */
  void *Receivev2_PWORK[3];            /* '<Root>/Receive v2 ' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_BusSe;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Bus_j;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Bus_d;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Bus_h;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Bu_hw;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Bus_k;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Bus_a;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Bu_at;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Bu_h2;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Bus_n;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Bu_nd;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Bu_dd;   /* synthesized block */

  int_T Decode1_IWORK[2];              /* '<S1>/Decode 1' */
  int_T Decode5_IWORK[2];              /* '<S1>/Decode 5' */
  int_T Decode2_IWORK[2];              /* '<S1>/Decode 2' */
  int_T Decode6_IWORK[2];              /* '<S1>/Decode 6' */
  int_T Decode3_IWORK[2];              /* '<S1>/Decode 3' */
  int_T Decode4_IWORK[2];              /* '<S1>/Decode 4' */
  int_T Decode7_IWORK[2];              /* '<S1>/Decode 7' */
  int_T Decode8_IWORK[2];              /* '<S1>/Decode 8' */
  int_T Decode9_IWORK[2];              /* '<S1>/Decode 9' */
  int_T Decode10_IWORK[2];             /* '<S1>/Decode 10' */
  int_T Decode11_IWORK[2];             /* '<S1>/Decode 11' */
  int_T Decode12_IWORK[2];             /* '<S1>/Decode 12' */
};

/* Real-time Model Data Structure */
struct tag_RTM_FCC1ARINC_T {
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[1];
    SimStruct childSFunctions[14];
    SimStruct *childSFunctionPtrs[14];
    struct _ssBlkInfo2 blkInfo2[14];
    struct _ssSFcnModelMethods2 methods2[14];
    struct _ssSFcnModelMethods3 methods3[14];
    struct _ssSFcnModelMethods4 methods4[14];
    struct _ssStatesInfo2 statesInfo2[14];
    ssPeriodicStatesInfo periodicStatesInfo[14];
    struct _ssPortInfo2 inputOutputPortInfo2[14];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn6;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn7;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn8;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn9;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn10;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn11;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn12;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn13;
  } NonInlinedSFcns;

  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[1];
    time_T offsetTimesArray[1];
    int_T sampleTimeTaskIDArray[1];
    int_T sampleHitArray[1];
    int_T perTaskSampleHitsArray[1];
    time_T tArray[1];
  } Timing;
};

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_FCC1ARINC_T FCC1ARINC_B;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern struct DW_FCC1ARINC_T FCC1ARINC_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void FCC1ARINC_initialize(void);
  extern void FCC1ARINC_step(void);
  extern void FCC1ARINC_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_FCC1ARINC_T *const FCC1ARINC_M;

#ifdef __cplusplus

}
#endif

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'FCC1ARINC'
 * '<S1>'   : 'FCC1ARINC/Decode Channel 1'
 */
#endif                                 /* RTW_HEADER_FCC1ARINC_h_ */
