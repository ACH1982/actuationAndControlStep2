/*
 * crossARINC_out.h
 *
 * Code generation for model "crossARINC_out".
 *
 * Model version              : 1.45
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Fri May 13 11:44:52 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_crossARINC_out_h_
#define RTW_HEADER_crossARINC_out_h_
#include <stddef.h>
#include <cstring>
#include <cmath>
#include <logsrv.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "signal_encode_cgen_wrapper.h"
#include "crossARINC_out_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "crossARINC_out_cal.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

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
struct B_crossARINC_out_T {
  real_T SineWave;                     /* '<Root>/Sine Wave' */
  real_T DataTypeConversion3;          /* '<Root>/Data Type Conversion3' */
  real_T PulseGenerator;               /* '<Root>/Pulse Generator' */
  real_T SineWave6;                    /* '<Root>/Sine Wave6' */
  real_T Encodev2;                     /* '<Root>/Encode v2 ' */
  real_T SineWave1;                    /* '<Root>/Sine Wave1' */
  real_T DataTypeConversion4;          /* '<Root>/Data Type Conversion4' */
  real_T SineWave2;                    /* '<Root>/Sine Wave2' */
  real_T Encodev21;                    /* '<Root>/Encode v2 1' */
  real_T SineWave3;                    /* '<Root>/Sine Wave3' */
  real_T DataTypeConversion5;          /* '<Root>/Data Type Conversion5' */
  real_T Encodev22;                    /* '<Root>/Encode v2 2' */
  real_T SineWave4;                    /* '<Root>/Sine Wave4' */
  real_T DataTypeConversion1;          /* '<Root>/Data Type Conversion1' */
  real_T SineWave5;                    /* '<Root>/Sine Wave5' */
  real_T Encodev23;                    /* '<Root>/Encode v2 3' */
  real_T Constant6;                    /* '<Root>/Constant6' */
  uint32_T CCCodeBlock4;               /* '<Root>/C//C++ Code Block4' */
  uint32_T Gain10;                     /* '<Root>/Gain10' */
  uint32_T Gain11;                     /* '<Root>/Gain11' */
  uint32_T Gain12;                     /* '<Root>/Gain12' */
  uint32_T Gain13;                     /* '<Root>/Gain13' */
  uint32_T Add3;                       /* '<Root>/Add3' */
  uint32_T Gain14;                     /* '<Root>/Gain14' */
  uint32_T CCCodeBlock5;               /* '<Root>/C//C++ Code Block5' */
  uint32_T Gain15;                     /* '<Root>/Gain15' */
  uint32_T Gain16;                     /* '<Root>/Gain16' */
  uint32_T Add4;                       /* '<Root>/Add4' */
  uint32_T Gain17;                     /* '<Root>/Gain17' */
  uint32_T CCCodeBlock6;               /* '<Root>/C//C++ Code Block6' */
  uint32_T Gain21;                     /* '<Root>/Gain21' */
  uint32_T Gain20;                     /* '<Root>/Gain20' */
  uint32_T Gain19;                     /* '<Root>/Gain19' */
  uint32_T Gain18;                     /* '<Root>/Gain18' */
  uint32_T Add5;                       /* '<Root>/Add5' */
  uint32_T Gain1;                      /* '<Root>/Gain1' */
  uint32_T CCCodeBlock1;               /* '<Root>/C//C++ Code Block1' */
  uint32_T Gain5;                      /* '<Root>/Gain5' */
  uint32_T Gain4;                      /* '<Root>/Gain4' */
  uint32_T Gain3;                      /* '<Root>/Gain3' */
  uint32_T Gain2;                      /* '<Root>/Gain2' */
  uint32_T Add1;                       /* '<Root>/Add1' */
  real32_T DataTypeConversion2;        /* '<Root>/Data Type Conversion2' */
  real32_T DataTypeConversion7;        /* '<Root>/Data Type Conversion7' */
  real32_T DataTypeConversion9;        /* '<Root>/Data Type Conversion9' */
  real32_T DataTypeConversion10;       /* '<Root>/Data Type Conversion10' */
  uint8_T DataTypeConversion12;        /* '<Root>/Data Type Conversion12' */
  uint8_T DataTypeConversion8;         /* '<Root>/Data Type Conversion8' */
  uint8_T DataTypeConversion11;        /* '<Root>/Data Type Conversion11' */
  boolean_T DataTypeConversion6;       /* '<Root>/Data Type Conversion6' */
  boolean_T Delay;                     /* '<Root>/Delay' */
  boolean_T Delay1;                    /* '<Root>/Delay1' */
  boolean_T Delay2;                    /* '<Root>/Delay2' */
  boolean_T Delay3;                    /* '<Root>/Delay3' */
  boolean_T Delay4;                    /* '<Root>/Delay4' */
  boolean_T Delay5;                    /* '<Root>/Delay5' */
  boolean_T Delay6;                    /* '<Root>/Delay6' */
  boolean_T Delay7;                    /* '<Root>/Delay7' */
  boolean_T Delay8;                    /* '<Root>/Delay8' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_crossARINC_out_T {
  real_T lastSin;                      /* '<Root>/Sine Wave' */
  real_T lastCos;                      /* '<Root>/Sine Wave' */
  real_T lastSin_d;                    /* '<Root>/Sine Wave6' */
  real_T lastCos_g;                    /* '<Root>/Sine Wave6' */
  real_T lastSin_a;                    /* '<Root>/Sine Wave1' */
  real_T lastCos_b;                    /* '<Root>/Sine Wave1' */
  real_T lastSin_c;                    /* '<Root>/Sine Wave2' */
  real_T lastCos_p;                    /* '<Root>/Sine Wave2' */
  real_T lastSin_f;                    /* '<Root>/Sine Wave3' */
  real_T lastCos_k;                    /* '<Root>/Sine Wave3' */
  real_T lastSin_b;                    /* '<Root>/Sine Wave4' */
  real_T lastCos_f;                    /* '<Root>/Sine Wave4' */
  real_T lastSin_h;                    /* '<Root>/Sine Wave5' */
  real_T lastCos_kh;                   /* '<Root>/Sine Wave5' */
  void *Setupv2_PWORK[2];              /* '<Root>/Setup v2 ' */
  void *Sendv3_PWORK[2];               /* '<Root>/Send v3 ' */
  void *Sendv31_PWORK[2];              /* '<Root>/Send v3 1' */
  void *Sendv32_PWORK[2];              /* '<Root>/Send v3 2' */
  void *Sendv33_PWORK[2];              /* '<Root>/Send v3 3' */
  struct {
    void *AQHandles[17];
  } TAQSigLogging_InsertedFor_BusAs;   /* synthesized block */

  int32_T systemEnable;                /* '<Root>/Sine Wave' */
  int32_T clockTickCounter;            /* '<Root>/Pulse Generator' */
  int32_T systemEnable_m;              /* '<Root>/Sine Wave6' */
  int32_T systemEnable_a;              /* '<Root>/Sine Wave1' */
  int32_T systemEnable_n;              /* '<Root>/Sine Wave2' */
  int32_T systemEnable_e;              /* '<Root>/Sine Wave3' */
  int32_T systemEnable_g;              /* '<Root>/Sine Wave4' */
  int32_T systemEnable_c;              /* '<Root>/Sine Wave5' */
  boolean_T Delay_DSTATE;              /* '<Root>/Delay' */
  boolean_T Delay1_DSTATE;             /* '<Root>/Delay1' */
  boolean_T Delay2_DSTATE;             /* '<Root>/Delay2' */
  boolean_T Delay3_DSTATE;             /* '<Root>/Delay3' */
  boolean_T Delay4_DSTATE;             /* '<Root>/Delay4' */
  boolean_T Delay5_DSTATE;             /* '<Root>/Delay5' */
  boolean_T Delay6_DSTATE;             /* '<Root>/Delay6' */
  boolean_T Delay7_DSTATE;             /* '<Root>/Delay7' */
  boolean_T Delay8_DSTATE;             /* '<Root>/Delay8' */
};

/* External inputs (root inport signals with default storage) */
struct ExtU_crossARINC_out_T {
  ACE9C_ACE8x_9C In1;                  /* '<Root>/In1' */
};

/* Real-time Model Data Structure */
struct tag_RTM_crossARINC_out_T {
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
    SimStruct childSFunctions[9];
    SimStruct *childSFunctionPtrs[9];
    struct _ssBlkInfo2 blkInfo2[9];
    struct _ssSFcnModelMethods2 methods2[9];
    struct _ssSFcnModelMethods3 methods3[9];
    struct _ssSFcnModelMethods4 methods4[9];
    struct _ssStatesInfo2 statesInfo2[9];
    ssPeriodicStatesInfo periodicStatesInfo[9];
    struct _ssPortInfo2 inputOutputPortInfo2[9];
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
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      uint_T attribs[3];
      mxArray *params[3];
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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      uint_T attribs[3];
      mxArray *params[3];
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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      uint_T attribs[3];
      mxArray *params[3];
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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn7;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn8;
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

  extern struct B_crossARINC_out_T crossARINC_out_B;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern struct DW_crossARINC_out_T crossARINC_out_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* External inputs (root inport signals with default storage) */
  extern struct ExtU_crossARINC_out_T crossARINC_out_U;

#ifdef __cplusplus

}
#endif

/* External data declarations for dependent source files */
extern const ACE9C_ACE8x_9C crossARINC_out_rtZACE9C_ACE8x_9;/* ACE9C_ACE8x_9C ground */

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void crossARINC_out_initialize(void);
  extern void crossARINC_out_step(void);
  extern void crossARINC_out_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_crossARINC_out_T *const crossARINC_out_M;

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
 * '<Root>' : 'crossARINC_out'
 */
#endif                                 /* RTW_HEADER_crossARINC_out_h_ */
