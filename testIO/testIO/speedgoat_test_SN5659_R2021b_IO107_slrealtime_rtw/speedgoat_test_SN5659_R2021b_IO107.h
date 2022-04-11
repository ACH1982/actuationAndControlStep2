/*
 * speedgoat_test_SN5659_R2021b_IO107.h
 *
 * Code generation for model "speedgoat_test_SN5659_R2021b_IO107".
 *
 * Model version              : 3.3
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Fri Apr  8 15:32:10 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_speedgoat_test_SN5659_R2021b_IO107_h_
#define RTW_HEADER_speedgoat_test_SN5659_R2021b_IO107_h_
#include <stddef.h>
#include <cstring>
#include <cmath>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "speedgoat_test_SN5659_R2021b_IO107_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "speedgoat_test_SN5659_R2021b_IO107_cal.h"
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
struct B_speedgoat_test_SN5659_R2021b_IO107_T {
  real_T SineWave;                     /* '<S1>/Sine Wave' */
  real_T SineWave1;                    /* '<S1>/Sine Wave1' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_speedgoat_test_SN5659_R2021b_IO107_T {
  real_T lastSin;                      /* '<S1>/Sine Wave' */
  real_T lastCos;                      /* '<S1>/Sine Wave' */
  real_T lastSin_d;                    /* '<S1>/Sine Wave1' */
  real_T lastCos_o;                    /* '<S1>/Sine Wave1' */
  real_T Analogoutput_RWORK[2];        /* '<S1>/Analog output' */
  real_T Analogoutput1_RWORK[2];       /* '<S1>/Analog output1' */
  real_T Setup_RWORK[2];               /* '<S1>/Setup' */
  real_T Setup1_RWORK[2];              /* '<S1>/Setup1' */
  void *Analogoutput_PWORK;            /* '<S1>/Analog output' */
  void *Analogoutput1_PWORK;           /* '<S1>/Analog output1' */
  void *Setup_PWORK;                   /* '<S1>/Setup' */
  void *Setup1_PWORK;                  /* '<S1>/Setup1' */
  int32_T systemEnable;                /* '<S1>/Sine Wave' */
  int32_T systemEnable_o;              /* '<S1>/Sine Wave1' */
  int_T Analogoutput_IWORK;            /* '<S1>/Analog output' */
  int_T Analogoutput1_IWORK;           /* '<S1>/Analog output1' */
  int_T Setup_IWORK;                   /* '<S1>/Setup' */
  int_T Setup1_IWORK;                  /* '<S1>/Setup1' */
};

/* Real-time Model Data Structure */
struct tag_RTM_speedgoat_test_SN5659_R2021b_IO107_T {
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
    SimStruct childSFunctions[4];
    SimStruct *childSFunctionPtrs[4];
    struct _ssBlkInfo2 blkInfo2[4];
    struct _ssSFcnModelMethods2 methods2[4];
    struct _ssSFcnModelMethods3 methods3[4];
    struct _ssSFcnModelMethods4 methods4[4];
    struct _ssStatesInfo2 statesInfo2[4];
    ssPeriodicStatesInfo periodicStatesInfo[4];
    struct _ssPortInfo2 inputOutputPortInfo2[4];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[16];
      struct _ssInPortUnit inputPortUnits[16];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[16];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[16];
      struct _ssInPortUnit inputPortUnits[16];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[16];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[11];
      mxArray *params[11];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[11];
      mxArray *params[11];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn3;
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

  extern struct B_speedgoat_test_SN5659_R2021b_IO107_T
    speedgoat_test_SN5659_R2021b_IO107_B;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern struct DW_speedgoat_test_SN5659_R2021b_IO107_T
  speedgoat_test_SN5659_R2021b_IO107_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void speedgoat_test_SN5659_R2021b_IO107_initialize(void);
  extern void speedgoat_test_SN5659_R2021b_IO107_step(void);
  extern void speedgoat_test_SN5659_R2021b_IO107_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_speedgoat_test_SN5659_R2021b_IO107_T *const
    speedgoat_test_SN5659_R2021b_IO107_M;

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
 * '<Root>' : 'speedgoat_test_SN5659_R2021b_IO107'
 * '<S1>'   : 'speedgoat_test_SN5659_R2021b_IO107/IO107 (1-2)'
 * '<S2>'   : 'speedgoat_test_SN5659_R2021b_IO107/info'
 */
#endif                    /* RTW_HEADER_speedgoat_test_SN5659_R2021b_IO107_h_ */
