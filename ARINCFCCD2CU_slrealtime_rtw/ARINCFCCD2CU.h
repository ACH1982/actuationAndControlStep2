/*
 * ARINCFCCD2CU.h
 *
 * Code generation for model "ARINCFCCD2CU".
 *
 * Model version              : 1.38
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Tue May 17 10:42:47 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ARINCFCCD2CU_h_
#define RTW_HEADER_ARINCFCCD2CU_h_
#include <stddef.h>
#include <cstring>
#include <cmath>
#include <logsrv.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "signal_encode_cgen_wrapper.h"
#include "ARINCFCCD2CU_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "ARINCFCCD2CU_cal.h"
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

#ifndef rtmCounterLimit
#define rtmCounterLimit(rtm, idx)      ((rtm)->Timing.TaskCounters.cLimit[(idx)])
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
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

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

/* Block signals (default storage) */
struct B_ARINCFCCD2CU_T {
  real_T PulseGenerator;               /* '<Root>/Pulse Generator' */
  real_T SineWave1;                    /* '<Root>/Sine Wave1' */
  real_T SineWave3;                    /* '<Root>/Sine Wave3' */
  real_T SineWave;                     /* '<Root>/Sine Wave' */
  real_T SineWave5;                    /* '<Root>/Sine Wave5' */
  real_T SineWave4;                    /* '<Root>/Sine Wave4' */
  real_T SineWave8;                    /* '<Root>/Sine Wave8' */
  real_T SineWave7;                    /* '<Root>/Sine Wave7' */
  real_T DataTypeConversion;           /* '<Root>/Data Type Conversion' */
  real_T DataTypeConversion1;          /* '<Root>/Data Type Conversion1' */
  real_T DataTypeConversion2;          /* '<Root>/Data Type Conversion2' */
  real_T Encodev22;                    /* '<Root>/Encode v2 2' */
  real_T Encodev23;                    /* '<Root>/Encode v2 3' */
  real_T Encodev24;                    /* '<Root>/Encode v2 4' */
  real_T Encodev25;                    /* '<Root>/Encode v2 5' */
  real_T Encodev2;                     /* '<Root>/Encode v2 ' */
  real_T Encodev21;                    /* '<Root>/Encode v2 1' */
  real_T Constant6;                    /* '<Root>/Constant6' */
  real_T RateTransition3;              /* '<Root>/Rate Transition3' */
  real_T RateTransition2;              /* '<Root>/Rate Transition2' */
  real_T RateTransition;               /* '<Root>/Rate Transition' */
  real_T RateTransition1;              /* '<Root>/Rate Transition1' */
  real_T RateTransition5;              /* '<Root>/Rate Transition5' */
  real_T RateTransition4;              /* '<Root>/Rate Transition4' */
  uint32_T CCCodeBlock1;               /* '<Root>/C//C++ Code Block1' */
  uint32_T Gain2;                      /* '<Root>/Gain2' */
  uint32_T Gain;                       /* '<Root>/Gain' */
  uint32_T CCCodeBlock2;               /* '<Root>/C//C++ Code Block2' */
  uint32_T Gain3;                      /* '<Root>/Gain3' */
  uint32_T Gain1;                      /* '<Root>/Gain1' */
  uint32_T Add;                        /* '<Root>/Add' */
  uint32_T Gain10;                     /* '<Root>/Gain10' */
  uint32_T Gain11;                     /* '<Root>/Gain11' */
  uint32_T Gain12;                     /* '<Root>/Gain12' */
  uint32_T Gain13;                     /* '<Root>/Gain13' */
  uint32_T Gain14;                     /* '<Root>/Gain14' */
  uint32_T Gain6;                      /* '<Root>/Gain6' */
  uint32_T Gain5;                      /* '<Root>/Gain5' */
  uint32_T Gain15;                     /* '<Root>/Gain15' */
  uint32_T Add1;                       /* '<Root>/Add1' */
  uint32_T Gain7;                      /* '<Root>/Gain7' */
  uint32_T Gain8;                      /* '<Root>/Gain8' */
  uint32_T Gain9;                      /* '<Root>/Gain9' */
  uint32_T Add2;                       /* '<Root>/Add2' */
  uint32_T CCCodeBlock3;               /* '<Root>/C//C++ Code Block3' */
  uint32_T Gain4;                      /* '<Root>/Gain4' */
  uint32_T Constant1;                  /* '<Root>/Constant1' */
  uint32_T Constant2;                  /* '<Root>/Constant2' */
  real32_T DataTypeConversion7;        /* '<Root>/Data Type Conversion7' */
  real32_T DataTypeConversion9;        /* '<Root>/Data Type Conversion9' */
  real32_T DataTypeConversion3;        /* '<Root>/Data Type Conversion3' */
  uint8_T DataTypeConversion11;        /* '<Root>/Data Type Conversion11' */
  uint8_T DataTypeConversion4;         /* '<Root>/Data Type Conversion4' */
  uint8_T DataTypeConversion10;        /* '<Root>/Data Type Conversion10' */
  uint8_T DataTypeConversion5;         /* '<Root>/Data Type Conversion5' */
  boolean_T Delay7;                    /* '<Root>/Delay7' */
  boolean_T DataTypeConversion6;       /* '<Root>/Data Type Conversion6' */
  boolean_T Delay;                     /* '<Root>/Delay' */
  boolean_T Delay1;                    /* '<Root>/Delay1' */
  boolean_T Delay4;                    /* '<Root>/Delay4' */
  boolean_T Delay5;                    /* '<Root>/Delay5' */
  boolean_T Delay6;                    /* '<Root>/Delay6' */
  boolean_T Delay2;                    /* '<Root>/Delay2' */
  boolean_T Delay3;                    /* '<Root>/Delay3' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_ARINCFCCD2CU_T {
  real_T lastSin;                      /* '<Root>/Sine Wave1' */
  real_T lastCos;                      /* '<Root>/Sine Wave1' */
  real_T lastSin_p;                    /* '<Root>/Sine Wave3' */
  real_T lastCos_e;                    /* '<Root>/Sine Wave3' */
  real_T lastSin_n;                    /* '<Root>/Sine Wave' */
  real_T lastCos_g;                    /* '<Root>/Sine Wave' */
  real_T lastSin_l;                    /* '<Root>/Sine Wave5' */
  real_T lastCos_n;                    /* '<Root>/Sine Wave5' */
  real_T lastSin_nv;                   /* '<Root>/Sine Wave4' */
  real_T lastCos_eb;                   /* '<Root>/Sine Wave4' */
  real_T lastSin_ns;                   /* '<Root>/Sine Wave8' */
  real_T lastCos_f;                    /* '<Root>/Sine Wave8' */
  real_T lastSin_c;                    /* '<Root>/Sine Wave7' */
  real_T lastCos_h;                    /* '<Root>/Sine Wave7' */
  real_T RateTransition_Buf[2];        /* '<Root>/Rate Transition' */
  real_T RateTransition1_Buf[2];       /* '<Root>/Rate Transition1' */
  real_T RateTransition2_Buf[2];       /* '<Root>/Rate Transition2' */
  real_T RateTransition3_Buf[2];       /* '<Root>/Rate Transition3' */
  real_T RateTransition5_Buf[2];       /* '<Root>/Rate Transition5' */
  real_T RateTransition4_Buf[2];       /* '<Root>/Rate Transition4' */
  void *Setupv21_PWORK[2];             /* '<Root>/Setup v2 1' */
  struct {
    void *AQHandles[16];
  } TAQSigLogging_InsertedFor_BusAs;   /* synthesized block */

  void *Sendv32_PWORK[2];              /* '<Root>/Send v3 2' */
  void *Sendv33_PWORK[2];              /* '<Root>/Send v3 3' */
  void *Sendv34_PWORK[2];              /* '<Root>/Send v3 4' */
  void *Sendv35_PWORK[2];              /* '<Root>/Send v3 5' */
  void *Sendv3_PWORK[2];               /* '<Root>/Send v3 ' */
  void *Sendv31_PWORK[2];              /* '<Root>/Send v3 1' */
  int32_T clockTickCounter;            /* '<Root>/Pulse Generator' */
  int32_T systemEnable;                /* '<Root>/Sine Wave1' */
  int32_T systemEnable_k;              /* '<Root>/Sine Wave3' */
  int32_T systemEnable_l;              /* '<Root>/Sine Wave' */
  int32_T systemEnable_g;              /* '<Root>/Sine Wave5' */
  int32_T systemEnable_j;              /* '<Root>/Sine Wave4' */
  int32_T systemEnable_m;              /* '<Root>/Sine Wave8' */
  int32_T systemEnable_ky;             /* '<Root>/Sine Wave7' */
  boolean_T Delay7_DSTATE[2];          /* '<Root>/Delay7' */
  boolean_T Delay_DSTATE[2];           /* '<Root>/Delay' */
  boolean_T Delay1_DSTATE[2];          /* '<Root>/Delay1' */
  boolean_T Delay4_DSTATE[2];          /* '<Root>/Delay4' */
  boolean_T Delay5_DSTATE[2];          /* '<Root>/Delay5' */
  boolean_T Delay6_DSTATE[2];          /* '<Root>/Delay6' */
  boolean_T Delay2_DSTATE[2];          /* '<Root>/Delay2' */
  boolean_T Delay3_DSTATE[2];          /* '<Root>/Delay3' */
  int8_T RateTransition_RdBufIdx;      /* '<Root>/Rate Transition' */
  int8_T RateTransition_WrBufIdx;      /* '<Root>/Rate Transition' */
  int8_T RateTransition1_RdBufIdx;     /* '<Root>/Rate Transition1' */
  int8_T RateTransition1_WrBufIdx;     /* '<Root>/Rate Transition1' */
  int8_T RateTransition2_RdBufIdx;     /* '<Root>/Rate Transition2' */
  int8_T RateTransition2_WrBufIdx;     /* '<Root>/Rate Transition2' */
  int8_T RateTransition3_RdBufIdx;     /* '<Root>/Rate Transition3' */
  int8_T RateTransition3_WrBufIdx;     /* '<Root>/Rate Transition3' */
  int8_T RateTransition5_RdBufIdx;     /* '<Root>/Rate Transition5' */
  int8_T RateTransition5_WrBufIdx;     /* '<Root>/Rate Transition5' */
  int8_T RateTransition4_RdBufIdx;     /* '<Root>/Rate Transition4' */
  int8_T RateTransition4_WrBufIdx;     /* '<Root>/Rate Transition4' */
};

/* External inputs (root inport signals with default storage) */
struct ExtU_ARINCFCCD2CU_T {
  ACE8C_FCC1 In1;                      /* '<Root>/In1' */
};

/* Real-time Model Data Structure */
struct tag_RTM_ARINCFCCD2CU_T {
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
    time_T *taskTimePtrs[3];
    SimStruct childSFunctions[13];
    SimStruct *childSFunctionPtrs[13];
    struct _ssBlkInfo2 blkInfo2[13];
    struct _ssSFcnModelMethods2 methods2[13];
    struct _ssSFcnModelMethods3 methods3[13];
    struct _ssSFcnModelMethods4 methods4[13];
    struct _ssStatesInfo2 statesInfo2[13];
    ssPeriodicStatesInfo periodicStatesInfo[13];
    struct _ssPortInfo2 inputOutputPortInfo2[13];
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
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[15];
      mxArray *params[15];
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
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[15];
      mxArray *params[15];
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
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn6;

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
    } Sfcn9;

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
    } Sfcn10;

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
    } Sfcn11;

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
    } Sfcn12;
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
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    uint32_T clockTick2;
    uint32_T clockTickH2;
    time_T stepSize2;
    struct {
      uint8_T TID[3];
      uint8_T cLimit[3];
    } TaskCounters;

    struct {
      uint8_T TID0_1;
      uint8_T TID0_2;
    } RateInteraction;

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
    time_T sampleTimesArray[3];
    time_T offsetTimesArray[3];
    int_T sampleTimeTaskIDArray[3];
    int_T sampleHitArray[3];
    int_T perTaskSampleHitsArray[9];
    time_T tArray[3];
  } Timing;
};

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_ARINCFCCD2CU_T ARINCFCCD2CU_B;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern struct DW_ARINCFCCD2CU_T ARINCFCCD2CU_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* External inputs (root inport signals with default storage) */
  extern struct ExtU_ARINCFCCD2CU_T ARINCFCCD2CU_U;

#ifdef __cplusplus

}
#endif

/* External data declarations for dependent source files */
extern const ACE8C_FCC1 ARINCFCCD2CU_rtZACE8C_FCC1;/* ACE8C_FCC1 ground */
extern void rate_scheduler(void);

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void ARINCFCCD2CU_initialize(void);
  extern void ARINCFCCD2CU_step0(void);
  extern void ARINCFCCD2CU_step1(void);
  extern void ARINCFCCD2CU_step2(void);
  extern void ARINCFCCD2CU_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_ARINCFCCD2CU_T *const ARINCFCCD2CU_M;

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
 * '<Root>' : 'ARINCFCCD2CU'
 */
#endif                                 /* RTW_HEADER_ARINCFCCD2CU_h_ */
