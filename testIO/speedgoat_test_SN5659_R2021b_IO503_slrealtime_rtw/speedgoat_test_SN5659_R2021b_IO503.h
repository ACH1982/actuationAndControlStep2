/*
 * speedgoat_test_SN5659_R2021b_IO503.h
 *
 * Code generation for model "speedgoat_test_SN5659_R2021b_IO503".
 *
 * Model version              : 3.5
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Fri Apr  8 16:58:31 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_speedgoat_test_SN5659_R2021b_IO503_h_
#define RTW_HEADER_speedgoat_test_SN5659_R2021b_IO503_h_
#include <stddef.h>
#include <cstring>
#include <cmath>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "stdlib.h"
#include "slrtdatatypes.h"
#include "speedgoat_test_SN5659_R2021b_IO503_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "speedgoat_test_SN5659_R2021b_IO503_cal.h"
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
struct B_speedgoat_test_SN5659_R2021b_IO503_T {
  serialfifoptr FIFOwrite;             /* '<S1>/FIFO write' */
  serialfifoptr FIFOwrite1;            /* '<S1>/FIFO write1' */
  serialfifoptr FIFOwrite2;            /* '<S1>/FIFO write2' */
  serialfifoptr FIFOwrite3;            /* '<S1>/FIFO write3' */
  real_T IO503_SerialIN_CH1;           /* '<S1>/ASCII Decode' */
  real_T IO503_SerialIN_CH2;           /* '<S1>/ASCII Decode1' */
  real_T IO503_SerialIN_CH3;           /* '<S1>/ASCII Decode2' */
  real_T IO503_SerialIN_CH4;           /* '<S1>/ASCII Decode3' */
  real_T SineWave1;                    /* '<S1>/Sine Wave1' */
  real_T SineWave2;                    /* '<S1>/Sine Wave2' */
  real_T SineWave3;                    /* '<S1>/Sine Wave3' */
  real_T SineWave4;                    /* '<S1>/Sine Wave4' */
  uint32_T Read[65];                   /* '<S1>/Read ' */
  uint32_T Read1[65];                  /* '<S1>/Read 1' */
  uint32_T Read2[65];                  /* '<S1>/Read 2' */
  uint32_T Read3[65];                  /* '<S1>/Read 3' */
  uint8_T FIFOread[65];                /* '<S1>/FIFO read' */
  uint8_T FIFOread1[65];               /* '<S1>/FIFO read1' */
  uint8_T FIFOread2[65];               /* '<S1>/FIFO read2' */
  uint8_T FIFOread3[65];               /* '<S1>/FIFO read3' */
  uint8_T ASCIIEncode[64];             /* '<S1>/ASCII Encode' */
  uint8_T ASCIIEncode1[64];            /* '<S1>/ASCII Encode1' */
  uint8_T ASCIIEncode2[64];            /* '<S1>/ASCII Encode2' */
  uint8_T ASCIIEncode3[64];            /* '<S1>/ASCII Encode3' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_speedgoat_test_SN5659_R2021b_IO503_T {
  real_T lastSin;                      /* '<S1>/Sine Wave1' */
  real_T lastCos;                      /* '<S1>/Sine Wave1' */
  real_T lastSin_e;                    /* '<S1>/Sine Wave2' */
  real_T lastCos_o;                    /* '<S1>/Sine Wave2' */
  real_T lastSin_l;                    /* '<S1>/Sine Wave3' */
  real_T lastCos_b;                    /* '<S1>/Sine Wave3' */
  real_T lastSin_c;                    /* '<S1>/Sine Wave4' */
  real_T lastCos_a;                    /* '<S1>/Sine Wave4' */
  void *Setup_PWORK;                   /* '<S1>/Setup ' */
  void *Read_PWORK;                    /* '<S1>/Read ' */
  void *FIFOwrite_PWORK[4];            /* '<S1>/FIFO write' */
  void *FIFOread_PWORK[5];             /* '<S1>/FIFO read' */
  void *ASCIIDecode_PWORK[2];          /* '<S1>/ASCII Decode' */
  void *Read1_PWORK;                   /* '<S1>/Read 1' */
  void *FIFOwrite1_PWORK[4];           /* '<S1>/FIFO write1' */
  void *FIFOread1_PWORK[5];            /* '<S1>/FIFO read1' */
  void *ASCIIDecode1_PWORK[2];         /* '<S1>/ASCII Decode1' */
  void *Read2_PWORK;                   /* '<S1>/Read 2' */
  void *FIFOwrite2_PWORK[4];           /* '<S1>/FIFO write2' */
  void *FIFOread2_PWORK[5];            /* '<S1>/FIFO read2' */
  void *ASCIIDecode2_PWORK[2];         /* '<S1>/ASCII Decode2' */
  void *Read3_PWORK;                   /* '<S1>/Read 3' */
  void *FIFOwrite3_PWORK[4];           /* '<S1>/FIFO write3' */
  void *FIFOread3_PWORK[5];            /* '<S1>/FIFO read3' */
  void *ASCIIDecode3_PWORK[2];         /* '<S1>/ASCII Decode3' */
  struct {
    void *LoggedData[4];
  } ScopexPC2_PWORK;                   /* '<S1>/Scope (xPC) 2 ' */

  void *ASCIIEncode_PWORK;             /* '<S1>/ASCII Encode' */
  void *Write_PWORK;                   /* '<S1>/Write ' */
  void *ASCIIEncode1_PWORK;            /* '<S1>/ASCII Encode1' */
  void *Write1_PWORK;                  /* '<S1>/Write 1' */
  void *ASCIIEncode2_PWORK;            /* '<S1>/ASCII Encode2' */
  void *Write2_PWORK;                  /* '<S1>/Write 2' */
  void *ASCIIEncode3_PWORK;            /* '<S1>/ASCII Encode3' */
  void *Write3_PWORK;                  /* '<S1>/Write 3' */
  int32_T systemEnable;                /* '<S1>/Sine Wave1' */
  int32_T systemEnable_p;              /* '<S1>/Sine Wave2' */
  int32_T systemEnable_a;              /* '<S1>/Sine Wave3' */
  int32_T systemEnable_g;              /* '<S1>/Sine Wave4' */
  int_T Setup_IWORK[2];                /* '<S1>/Setup ' */
  int_T Read_IWORK[3];                 /* '<S1>/Read ' */
  int_T FIFOwrite_IWORK[3];            /* '<S1>/FIFO write' */
  int_T FIFOread_IWORK[5];             /* '<S1>/FIFO read' */
  int_T ASCIIDecode_IWORK[4];          /* '<S1>/ASCII Decode' */
  int_T Read1_IWORK[3];                /* '<S1>/Read 1' */
  int_T FIFOwrite1_IWORK[3];           /* '<S1>/FIFO write1' */
  int_T FIFOread1_IWORK[5];            /* '<S1>/FIFO read1' */
  int_T ASCIIDecode1_IWORK[4];         /* '<S1>/ASCII Decode1' */
  int_T Read2_IWORK[3];                /* '<S1>/Read 2' */
  int_T FIFOwrite2_IWORK[3];           /* '<S1>/FIFO write2' */
  int_T FIFOread2_IWORK[5];            /* '<S1>/FIFO read2' */
  int_T ASCIIDecode2_IWORK[4];         /* '<S1>/ASCII Decode2' */
  int_T Read3_IWORK[3];                /* '<S1>/Read 3' */
  int_T FIFOwrite3_IWORK[3];           /* '<S1>/FIFO write3' */
  int_T FIFOread3_IWORK[5];            /* '<S1>/FIFO read3' */
  int_T ASCIIDecode3_IWORK[4];         /* '<S1>/ASCII Decode3' */
  int_T Write_IWORK[3];                /* '<S1>/Write ' */
  int_T Write1_IWORK[3];               /* '<S1>/Write 1' */
  int_T Write2_IWORK[3];               /* '<S1>/Write 2' */
  int_T Write3_IWORK[3];               /* '<S1>/Write 3' */
};

/* Real-time Model Data Structure */
struct tag_RTM_speedgoat_test_SN5659_R2021b_IO503_T {
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
    SimStruct childSFunctions[17];
    SimStruct *childSFunctionPtrs[17];
    struct _ssBlkInfo2 blkInfo2[17];
    struct _ssSFcnModelMethods2 methods2[17];
    struct _ssSFcnModelMethods3 methods3[17];
    struct _ssSFcnModelMethods4 methods4[17];
    struct _ssStatesInfo2 statesInfo2[17];
    ssPeriodicStatesInfo periodicStatesInfo[17];
    struct _ssPortInfo2 inputOutputPortInfo2[17];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[25];
      mxArray *params[25];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[9];
      mxArray *params[9];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
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
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[9];
      mxArray *params[9];
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
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[9];
      mxArray *params[9];
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
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn6;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[9];
      mxArray *params[9];
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
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn8;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
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
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn10;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
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
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn12;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn13;

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
    } Sfcn14;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn15;

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
    } Sfcn16;
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

  extern struct B_speedgoat_test_SN5659_R2021b_IO503_T
    speedgoat_test_SN5659_R2021b_IO503_B;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern struct DW_speedgoat_test_SN5659_R2021b_IO503_T
  speedgoat_test_SN5659_R2021b_IO503_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void speedgoat_test_SN5659_R2021b_IO503_initialize(void);
  extern void speedgoat_test_SN5659_R2021b_IO503_step(void);
  extern void speedgoat_test_SN5659_R2021b_IO503_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_speedgoat_test_SN5659_R2021b_IO503_T *const
    speedgoat_test_SN5659_R2021b_IO503_M;

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
 * '<Root>' : 'speedgoat_test_SN5659_R2021b_IO503'
 * '<S1>'   : 'speedgoat_test_SN5659_R2021b_IO503/IO503'
 * '<S2>'   : 'speedgoat_test_SN5659_R2021b_IO503/info'
 */
#endif                    /* RTW_HEADER_speedgoat_test_SN5659_R2021b_IO503_h_ */
