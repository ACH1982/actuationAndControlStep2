/*
 * speedgoat_test_SN5659_R2021b_IO612.h
 *
 * Code generation for model "speedgoat_test_SN5659_R2021b_IO612".
 *
 * Model version              : 3.5
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Fri Apr  8 17:08:48 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_speedgoat_test_SN5659_R2021b_IO612_h_
#define RTW_HEADER_speedgoat_test_SN5659_R2021b_IO612_h_
#include <stddef.h>
#include <cstring>
#include <cmath>
#include <string.h>
#include <math.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "can_message.h"
#include "speedgoat_test_SN5659_R2021b_IO612_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "speedgoat_test_SN5659_R2021b_IO612_cal.h"
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

/* user code (top of export header file) */
#include "can_message.h"

/* Block signals (default storage) */
struct B_speedgoat_test_SN5659_R2021b_IO612_T {
  CAN_DATATYPE CANPack;                /* '<S1>/CAN Pack' */
  CAN_DATATYPE CANPack1;               /* '<S1>/CAN Pack1' */
  CAN_DATATYPE CANPack2;               /* '<S1>/CAN Pack2' */
  CAN_DATATYPE CANPack3;               /* '<S1>/CAN Pack3' */
  CAN_DATATYPE CANPack4;               /* '<S1>/CAN Pack4' */
  CAN_DATATYPE CANPack5;               /* '<S1>/CAN Pack5' */
  CAN_DATATYPE CANRead1_o2;            /* '<S4>/CAN Read1' */
  CAN_DATATYPE CANRead_o2;             /* '<S3>/CAN Read' */
  real_T SineWave;                     /* '<S1>/Sine Wave' */
  real_T SineWave1;                    /* '<S1>/Sine Wave1' */
  real_T SineWave2;                    /* '<S1>/Sine Wave2' */
  real_T SineWave3;                    /* '<S1>/Sine Wave3' */
  real_T SineWave4;                    /* '<S1>/Sine Wave4' */
  real_T SineWave5;                    /* '<S1>/Sine Wave5' */
  real_T RXSampleTime;                 /* '<S1>/RX Sample Time' */
  real_T RXSampleTime1;                /* '<S1>/RX Sample Time1' */
  real_T CANUnpack;                    /* '<S4>/CAN Unpack' */
  real_T CANUnpack1;                   /* '<S4>/CAN Unpack1' */
  real_T CANUnpack2;                   /* '<S4>/CAN Unpack2' */
  real_T CANUnpack_c;                  /* '<S3>/CAN Unpack' */
  real_T CANUnpack1_o;                 /* '<S3>/CAN Unpack1' */
  real_T CANUnpack2_j;                 /* '<S3>/CAN Unpack2' */
  boolean_T CANRead1_o1;               /* '<S4>/CAN Read1' */
  boolean_T CANRead_o1;                /* '<S3>/CAN Read' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_speedgoat_test_SN5659_R2021b_IO612_T {
  real_T lastSin;                      /* '<S1>/Sine Wave' */
  real_T lastCos;                      /* '<S1>/Sine Wave' */
  real_T lastSin_c;                    /* '<S1>/Sine Wave1' */
  real_T lastCos_g;                    /* '<S1>/Sine Wave1' */
  real_T lastSin_i;                    /* '<S1>/Sine Wave2' */
  real_T lastCos_i;                    /* '<S1>/Sine Wave2' */
  real_T lastSin_d;                    /* '<S1>/Sine Wave3' */
  real_T lastCos_b;                    /* '<S1>/Sine Wave3' */
  real_T lastSin_h;                    /* '<S1>/Sine Wave4' */
  real_T lastCos_j;                    /* '<S1>/Sine Wave4' */
  real_T lastSin_cd;                   /* '<S1>/Sine Wave5' */
  real_T lastCos_c;                    /* '<S1>/Sine Wave5' */
  void *CANWrite_PWORK;                /* '<S1>/CAN Write' */
  void *CANWrite2_PWORK;               /* '<S1>/CAN Write2' */
  void *CANWrite3_PWORK;               /* '<S1>/CAN Write3' */
  void *CANWrite1_PWORK;               /* '<S1>/CAN Write1' */
  void *CANWrite4_PWORK;               /* '<S1>/CAN Write4' */
  void *CANWrite5_PWORK;               /* '<S1>/CAN Write5' */
  struct {
    void *LoggedData[6];
  } Scope_PWORK;                       /* '<S1>/Scope  ' */

  int32_T systemEnable;                /* '<S1>/Sine Wave' */
  int32_T systemEnable_p;              /* '<S1>/Sine Wave1' */
  int32_T systemEnable_i;              /* '<S1>/Sine Wave2' */
  int32_T systemEnable_h;              /* '<S1>/Sine Wave3' */
  int32_T systemEnable_b;              /* '<S1>/Sine Wave4' */
  int32_T systemEnable_py;             /* '<S1>/Sine Wave5' */
  int_T CANSetup_IWORK;                /* '<S1>/CAN Setup' */
  int_T CANPack_ModeSignalID;          /* '<S1>/CAN Pack' */
  int_T CANWrite_IWORK;                /* '<S1>/CAN Write' */
  int_T CANPack1_ModeSignalID;         /* '<S1>/CAN Pack1' */
  int_T CANWrite2_IWORK;               /* '<S1>/CAN Write2' */
  int_T CANPack2_ModeSignalID;         /* '<S1>/CAN Pack2' */
  int_T CANWrite3_IWORK;               /* '<S1>/CAN Write3' */
  int_T CANPack3_ModeSignalID;         /* '<S1>/CAN Pack3' */
  int_T CANWrite1_IWORK;               /* '<S1>/CAN Write1' */
  int_T CANPack4_ModeSignalID;         /* '<S1>/CAN Pack4' */
  int_T CANWrite4_IWORK;               /* '<S1>/CAN Write4' */
  int_T CANPack5_ModeSignalID;         /* '<S1>/CAN Pack5' */
  int_T CANWrite5_IWORK;               /* '<S1>/CAN Write5' */
  int_T CANRead1_IWORK;                /* '<S4>/CAN Read1' */
  int_T CANUnpack_ModeSignalID;        /* '<S4>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S4>/CAN Unpack' */
  int_T CANUnpack1_ModeSignalID;       /* '<S4>/CAN Unpack1' */
  int_T CANUnpack1_StatusPortID;       /* '<S4>/CAN Unpack1' */
  int_T CANUnpack2_ModeSignalID;       /* '<S4>/CAN Unpack2' */
  int_T CANUnpack2_StatusPortID;       /* '<S4>/CAN Unpack2' */
  int_T CANRead_IWORK;                 /* '<S3>/CAN Read' */
  int_T CANUnpack_ModeSignalID_b;      /* '<S3>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_g;      /* '<S3>/CAN Unpack' */
  int_T CANUnpack1_ModeSignalID_i;     /* '<S3>/CAN Unpack1' */
  int_T CANUnpack1_StatusPortID_o;     /* '<S3>/CAN Unpack1' */
  int_T CANUnpack2_ModeSignalID_g;     /* '<S3>/CAN Unpack2' */
  int_T CANUnpack2_StatusPortID_m;     /* '<S3>/CAN Unpack2' */
};

/* Real-time Model Data Structure */
struct tag_RTM_speedgoat_test_SN5659_R2021b_IO612_T {
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
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[31];
      mxArray *params[31];
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
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn6;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn7;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
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

  extern struct B_speedgoat_test_SN5659_R2021b_IO612_T
    speedgoat_test_SN5659_R2021b_IO612_B;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern struct DW_speedgoat_test_SN5659_R2021b_IO612_T
  speedgoat_test_SN5659_R2021b_IO612_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void speedgoat_test_SN5659_R2021b_IO612_initialize(void);
  extern void speedgoat_test_SN5659_R2021b_IO612_step(void);
  extern void speedgoat_test_SN5659_R2021b_IO612_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_speedgoat_test_SN5659_R2021b_IO612_T *const
    speedgoat_test_SN5659_R2021b_IO612_M;

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
 * '<Root>' : 'speedgoat_test_SN5659_R2021b_IO612'
 * '<S1>'   : 'speedgoat_test_SN5659_R2021b_IO612/IO612'
 * '<S2>'   : 'speedgoat_test_SN5659_R2021b_IO612/info'
 * '<S3>'   : 'speedgoat_test_SN5659_R2021b_IO612/IO612/CAN Read Loop - Port 3'
 * '<S4>'   : 'speedgoat_test_SN5659_R2021b_IO612/IO612/CAN Read Loop - Port 4'
 */
#endif                    /* RTW_HEADER_speedgoat_test_SN5659_R2021b_IO612_h_ */
