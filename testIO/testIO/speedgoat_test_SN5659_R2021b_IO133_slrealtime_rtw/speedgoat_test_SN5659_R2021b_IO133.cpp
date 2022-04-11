/*
 * speedgoat_test_SN5659_R2021b_IO133.cpp
 *
 * Code generation for model "speedgoat_test_SN5659_R2021b_IO133".
 *
 * Model version              : 3.5
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Fri Apr  8 16:37:03 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "speedgoat_test_SN5659_R2021b_IO133.h"
#include "speedgoat_test_SN5659_R2021b_IO133_private.h"

/* Block signals (default storage) */
B_speedgoat_test_SN5659_R2021b_IO133_T speedgoat_test_SN5659_R2021b_IO133_B;

/* Block states (default storage) */
DW_speedgoat_test_SN5659_R2021b_IO133_T speedgoat_test_SN5659_R2021b_IO133_DW;

/* Real-time model */
RT_MODEL_speedgoat_test_SN5659_R2021b_IO133_T
  speedgoat_test_SN5659_R2021b_IO133_M_ =
  RT_MODEL_speedgoat_test_SN5659_R2021b_IO133_T();
RT_MODEL_speedgoat_test_SN5659_R2021b_IO133_T *const
  speedgoat_test_SN5659_R2021b_IO133_M = &speedgoat_test_SN5659_R2021b_IO133_M_;

/* Model step function */
void speedgoat_test_SN5659_R2021b_IO133_step(void)
{
  /* S-Function (sg_IO132_IO133_setup_s_v2): '<S1>/Setup v2 ' */

  /* Level2 S-Function Block: '<S1>/Setup v2 ' (sg_IO132_IO133_setup_s_v2) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO133_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_IO132_IO133_ad_s_v2): '<S1>/Analog input v2 ' */

  /* Level2 S-Function Block: '<S1>/Analog input v2 ' (sg_IO132_IO133_ad_s_v2) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO133_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  /* Sin: '<S1>/Sine Wave' */
  speedgoat_test_SN5659_R2021b_IO133_B.SineWave = std::sin
    (speedgoat_test_SN5659_R2021_cal->SineWave_Freq *
     speedgoat_test_SN5659_R2021b_IO133_M->Timing.t[0] +
     speedgoat_test_SN5659_R2021_cal->SineWave_Phase) *
    speedgoat_test_SN5659_R2021_cal->SineWave_Amp +
    speedgoat_test_SN5659_R2021_cal->SineWave_Bias;

  /* Gain: '<S1>/Gain' */
  speedgoat_test_SN5659_R2021b_IO133_B.Gain =
    speedgoat_test_SN5659_R2021_cal->Gain_Gain *
    speedgoat_test_SN5659_R2021b_IO133_B.SineWave;

  /* Gain: '<S1>/Gain1' */
  speedgoat_test_SN5659_R2021b_IO133_B.Gain1 =
    speedgoat_test_SN5659_R2021_cal->Gain1_Gain *
    speedgoat_test_SN5659_R2021b_IO133_B.SineWave;

  /* Gain: '<S1>/Gain2' */
  speedgoat_test_SN5659_R2021b_IO133_B.Gain2 =
    speedgoat_test_SN5659_R2021_cal->Gain2_Gain *
    speedgoat_test_SN5659_R2021b_IO133_B.SineWave;

  /* Gain: '<S1>/Gain3' */
  speedgoat_test_SN5659_R2021b_IO133_B.Gain3 =
    speedgoat_test_SN5659_R2021_cal->Gain3_Gain *
    speedgoat_test_SN5659_R2021b_IO133_B.SineWave;

  /* S-Function (sg_IO132_IO133_da_s_v2): '<S1>/Analog output v2 ' */

  /* Level2 S-Function Block: '<S1>/Analog output v2 ' (sg_IO132_IO133_da_s_v2) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO133_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_IO132_IO133_di_s_v2): '<S1>/Digital input v2 ' */

  /* Level2 S-Function Block: '<S1>/Digital input v2 ' (sg_IO132_IO133_di_s_v2) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO133_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  /* DiscretePulseGenerator: '<S1>/Pulse Generator' */
  speedgoat_test_SN5659_R2021b_IO133_B.PulseGenerator =
    (speedgoat_test_SN5659_R2021b_IO133_DW.clockTickCounter <
     speedgoat_test_SN5659_R2021_cal->PulseGenerator_Duty) &&
    (speedgoat_test_SN5659_R2021b_IO133_DW.clockTickCounter >= 0) ?
    speedgoat_test_SN5659_R2021_cal->PulseGenerator_Amp : 0.0;

  /* DiscretePulseGenerator: '<S1>/Pulse Generator' */
  if (speedgoat_test_SN5659_R2021b_IO133_DW.clockTickCounter >=
      speedgoat_test_SN5659_R2021_cal->PulseGenerator_Period - 1.0) {
    speedgoat_test_SN5659_R2021b_IO133_DW.clockTickCounter = 0;
  } else {
    speedgoat_test_SN5659_R2021b_IO133_DW.clockTickCounter++;
  }

  /* DiscretePulseGenerator: '<S1>/Pulse Generator1' */
  speedgoat_test_SN5659_R2021b_IO133_B.PulseGenerator1 =
    (speedgoat_test_SN5659_R2021b_IO133_DW.clockTickCounter_c <
     speedgoat_test_SN5659_R2021_cal->PulseGenerator1_Duty) &&
    (speedgoat_test_SN5659_R2021b_IO133_DW.clockTickCounter_c >= 0) ?
    speedgoat_test_SN5659_R2021_cal->PulseGenerator1_Amp : 0.0;

  /* DiscretePulseGenerator: '<S1>/Pulse Generator1' */
  if (speedgoat_test_SN5659_R2021b_IO133_DW.clockTickCounter_c >=
      speedgoat_test_SN5659_R2021_cal->PulseGenerator1_Period - 1.0) {
    speedgoat_test_SN5659_R2021b_IO133_DW.clockTickCounter_c = 0;
  } else {
    speedgoat_test_SN5659_R2021b_IO133_DW.clockTickCounter_c++;
  }

  /* S-Function (sg_IO132_IO133_do_s_v2): '<S1>/Digital output v2 ' */

  /* Level2 S-Function Block: '<S1>/Digital output v2 ' (sg_IO132_IO133_do_s_v2) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO133_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++speedgoat_test_SN5659_R2021b_IO133_M->Timing.clockTick0)) {
    ++speedgoat_test_SN5659_R2021b_IO133_M->Timing.clockTickH0;
  }

  speedgoat_test_SN5659_R2021b_IO133_M->Timing.t[0] =
    speedgoat_test_SN5659_R2021b_IO133_M->Timing.clockTick0 *
    speedgoat_test_SN5659_R2021b_IO133_M->Timing.stepSize0 +
    speedgoat_test_SN5659_R2021b_IO133_M->Timing.clockTickH0 *
    speedgoat_test_SN5659_R2021b_IO133_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.001s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++speedgoat_test_SN5659_R2021b_IO133_M->Timing.clockTick1)) {
      ++speedgoat_test_SN5659_R2021b_IO133_M->Timing.clockTickH1;
    }

    speedgoat_test_SN5659_R2021b_IO133_M->Timing.t[1] =
      speedgoat_test_SN5659_R2021b_IO133_M->Timing.clockTick1 *
      speedgoat_test_SN5659_R2021b_IO133_M->Timing.stepSize1 +
      speedgoat_test_SN5659_R2021b_IO133_M->Timing.clockTickH1 *
      speedgoat_test_SN5659_R2021b_IO133_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
void speedgoat_test_SN5659_R2021b_IO133_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&speedgoat_test_SN5659_R2021b_IO133_M->solverInfo,
                          &speedgoat_test_SN5659_R2021b_IO133_M->Timing.simTimeStep);
    rtsiSetTPtr(&speedgoat_test_SN5659_R2021b_IO133_M->solverInfo, &rtmGetTPtr
                (speedgoat_test_SN5659_R2021b_IO133_M));
    rtsiSetStepSizePtr(&speedgoat_test_SN5659_R2021b_IO133_M->solverInfo,
                       &speedgoat_test_SN5659_R2021b_IO133_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&speedgoat_test_SN5659_R2021b_IO133_M->solverInfo,
                          (&rtmGetErrorStatus
      (speedgoat_test_SN5659_R2021b_IO133_M)));
    rtsiSetRTModelPtr(&speedgoat_test_SN5659_R2021b_IO133_M->solverInfo,
                      speedgoat_test_SN5659_R2021b_IO133_M);
  }

  rtsiSetSimTimeStep(&speedgoat_test_SN5659_R2021b_IO133_M->solverInfo,
                     MAJOR_TIME_STEP);
  rtsiSetSolverName(&speedgoat_test_SN5659_R2021b_IO133_M->solverInfo,
                    "FixedStepDiscrete");
  speedgoat_test_SN5659_R2021b_IO133_M->solverInfoPtr =
    (&speedgoat_test_SN5659_R2021b_IO133_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      speedgoat_test_SN5659_R2021b_IO133_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "speedgoat_test_SN5659_R2021b_IO133_M points to
       static memory which is guaranteed to be non-NULL" */
    speedgoat_test_SN5659_R2021b_IO133_M->Timing.sampleTimeTaskIDPtr =
      (&mdlTsMap[0]);
    speedgoat_test_SN5659_R2021b_IO133_M->Timing.sampleTimes =
      (&speedgoat_test_SN5659_R2021b_IO133_M->Timing.sampleTimesArray[0]);
    speedgoat_test_SN5659_R2021b_IO133_M->Timing.offsetTimes =
      (&speedgoat_test_SN5659_R2021b_IO133_M->Timing.offsetTimesArray[0]);

    /* task periods */
    speedgoat_test_SN5659_R2021b_IO133_M->Timing.sampleTimes[0] = (0.0);
    speedgoat_test_SN5659_R2021b_IO133_M->Timing.sampleTimes[1] = (0.001);

    /* task offsets */
    speedgoat_test_SN5659_R2021b_IO133_M->Timing.offsetTimes[0] = (0.0);
    speedgoat_test_SN5659_R2021b_IO133_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(speedgoat_test_SN5659_R2021b_IO133_M,
             &speedgoat_test_SN5659_R2021b_IO133_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits =
      speedgoat_test_SN5659_R2021b_IO133_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    speedgoat_test_SN5659_R2021b_IO133_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(speedgoat_test_SN5659_R2021b_IO133_M, -1);
  speedgoat_test_SN5659_R2021b_IO133_M->Timing.stepSize0 = 0.001;
  speedgoat_test_SN5659_R2021b_IO133_M->Timing.stepSize1 = 0.001;
  speedgoat_test_SN5659_R2021b_IO133_M->solverInfoPtr =
    (&speedgoat_test_SN5659_R2021b_IO133_M->solverInfo);
  speedgoat_test_SN5659_R2021b_IO133_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&speedgoat_test_SN5659_R2021b_IO133_M->solverInfo, 0.001);
  rtsiSetSolverMode(&speedgoat_test_SN5659_R2021b_IO133_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&speedgoat_test_SN5659_R2021b_IO133_B)),
                     0,
                     sizeof(B_speedgoat_test_SN5659_R2021b_IO133_T));

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&speedgoat_test_SN5659_R2021b_IO133_DW),
                     0,
                     sizeof(DW_speedgoat_test_SN5659_R2021b_IO133_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo =
      &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.sfcnInfo;
    speedgoat_test_SN5659_R2021b_IO133_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (speedgoat_test_SN5659_R2021b_IO133_M)));
    speedgoat_test_SN5659_R2021b_IO133_M->Sizes.numSampTimes = (2);
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &speedgoat_test_SN5659_R2021b_IO133_M->Sizes.numSampTimes);
    speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.taskTimePtrs[0] =
      &(rtmGetTPtr(speedgoat_test_SN5659_R2021b_IO133_M)[0]);
    speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.taskTimePtrs[1] =
      &(rtmGetTPtr(speedgoat_test_SN5659_R2021b_IO133_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,
                   speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart
                     (speedgoat_test_SN5659_R2021b_IO133_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal
                     (speedgoat_test_SN5659_R2021b_IO133_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (speedgoat_test_SN5659_R2021b_IO133_M));
    rtssSetStepSizePtr(sfcnInfo,
                       &speedgoat_test_SN5659_R2021b_IO133_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (speedgoat_test_SN5659_R2021b_IO133_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &speedgoat_test_SN5659_R2021b_IO133_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &speedgoat_test_SN5659_R2021b_IO133_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &speedgoat_test_SN5659_R2021b_IO133_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &speedgoat_test_SN5659_R2021b_IO133_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &speedgoat_test_SN5659_R2021b_IO133_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &speedgoat_test_SN5659_R2021b_IO133_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo,
                         &speedgoat_test_SN5659_R2021b_IO133_M->solverInfoPtr);
  }

  speedgoat_test_SN5659_R2021b_IO133_M->Sizes.numSFcns = (5);

  /* register each child */
  {
    (void) std::memset(static_cast<void *>
                       (&speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.childSFunctions
                        [0]), 0,
                       5*sizeof(SimStruct));
    speedgoat_test_SN5659_R2021b_IO133_M->childSfunctions =
      (&speedgoat_test_SN5659_R2021b_IO133_M->
       NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 5; i++) {
        speedgoat_test_SN5659_R2021b_IO133_M->childSfunctions[i] =
          (&speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.childSFunctions
           [i]);
      }
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO133/<S1>/Setup v2  (sg_IO132_IO133_setup_s_v2) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO133_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.inputOutputPortInfo2
        [0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO133_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.periodicStatesInfo
          [0]);
      }

      /* path info */
      ssSetModelName(rts, "Setup v2 ");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO133/IO133/Setup v2 ");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO133_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 35);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P25_Size);
        ssSetSFcnParam(rts, 25, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P26_Size);
        ssSetSFcnParam(rts, 26, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P27_Size);
        ssSetSFcnParam(rts, 27, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P28_Size);
        ssSetSFcnParam(rts, 28, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P29_Size);
        ssSetSFcnParam(rts, 29, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P30_Size);
        ssSetSFcnParam(rts, 30, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P31_Size);
        ssSetSFcnParam(rts, 31, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P32_Size);
        ssSetSFcnParam(rts, 32, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P33_Size);
        ssSetSFcnParam(rts, 33, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P34_Size);
        ssSetSFcnParam(rts, 34, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setupv2_P35_Size);
      }

      /* registration */
      sg_IO132_IO133_setup_s_v2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO133/<S1>/Analog input v2  (sg_IO132_IO133_ad_s_v2) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO133_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.inputOutputPortInfo2
        [1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO133_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.periodicStatesInfo
          [1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn1.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 4);
        _ssSetPortInfo2ForOutputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn1.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        ssSetOutputPortUnit(rts, 3, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 3, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &speedgoat_test_SN5659_R2021b_IO133_B.IO133_AI_CH1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &speedgoat_test_SN5659_R2021b_IO133_B.IO133_AI_CH2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &speedgoat_test_SN5659_R2021b_IO133_B.IO133_AI_CH3));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((real_T *)
            &speedgoat_test_SN5659_R2021b_IO133_B.IO133_AI_CH4));
        }
      }

      /* path info */
      ssSetModelName(rts, "Analog input v2 ");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO133/IO133/Analog input v2 ");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO133_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 11);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analoginputv2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analoginputv2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analoginputv2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analoginputv2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analoginputv2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analoginputv2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analoginputv2_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analoginputv2_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analoginputv2_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analoginputv2_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analoginputv2_P11_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO133_DW.Analoginputv2_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &speedgoat_test_SN5659_R2021b_IO133_DW.Analoginputv2_PWORK[0]);
      }

      /* registration */
      sg_IO132_IO133_ad_s_v2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 3, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO133/<S1>/Analog output v2  (sg_IO132_IO133_da_s_v2) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO133_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.blkInfo2
                         [2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.inputOutputPortInfo2
        [2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO133_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.periodicStatesInfo
          [2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 4);
        ssSetPortInfoForInputs(rts,
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn2.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn2.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &speedgoat_test_SN5659_R2021b_IO133_B.Gain);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1,
                               &speedgoat_test_SN5659_R2021b_IO133_B.Gain1);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2,
                               &speedgoat_test_SN5659_R2021b_IO133_B.Gain2);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3,
                               &speedgoat_test_SN5659_R2021b_IO133_B.Gain3);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Analog output v2 ");
      ssSetPath(rts,
                "speedgoat_test_SN5659_R2021b_IO133/IO133/Analog output v2 ");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO133_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 13);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutputv2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutputv2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutputv2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutputv2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutputv2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutputv2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutputv2_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutputv2_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutputv2_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutputv2_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutputv2_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutputv2_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutputv2_P13_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO133_DW.Analogoutputv2_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 5);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &speedgoat_test_SN5659_R2021b_IO133_DW.Analogoutputv2_PWORK[0]);
      }

      /* registration */
      sg_IO132_IO133_da_s_v2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetInputPortConnected(rts, 3, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO133/<S1>/Digital input v2  (sg_IO132_IO133_di_s_v2) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO133_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.blkInfo2
                         [3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.inputOutputPortInfo2
        [3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO133_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.methods2
                           [3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.methods3
                           [3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.methods4
                           [3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.statesInfo2
                         [3]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.periodicStatesInfo
          [3]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn3.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn3.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn3.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &speedgoat_test_SN5659_R2021b_IO133_B.IO133_DI_CH8));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &speedgoat_test_SN5659_R2021b_IO133_B.IO133_DI_CH9));
        }
      }

      /* path info */
      ssSetModelName(rts, "Digital input v2 ");
      ssSetPath(rts,
                "speedgoat_test_SN5659_R2021b_IO133/IO133/Digital input v2 ");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO133_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Digitalinputv2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Digitalinputv2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Digitalinputv2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Digitalinputv2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Digitalinputv2_P5_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO133_DW.Digitalinputv2_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &speedgoat_test_SN5659_R2021b_IO133_DW.Digitalinputv2_PWORK[0]);
      }

      /* registration */
      sg_IO132_IO133_di_s_v2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO133/<S1>/Digital output v2  (sg_IO132_IO133_do_s_v2) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO133_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.blkInfo2
                         [4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.inputOutputPortInfo2
        [4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO133_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.methods2
                           [4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.methods3
                           [4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.methods4
                           [4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.statesInfo2
                         [4]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.periodicStatesInfo
          [4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn4.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn4.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn4.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &speedgoat_test_SN5659_R2021b_IO133_B.PulseGenerator);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1,
                               &speedgoat_test_SN5659_R2021b_IO133_B.PulseGenerator1);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Digital output v2 ");
      ssSetPath(rts,
                "speedgoat_test_SN5659_R2021b_IO133/IO133/Digital output v2 ");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO133_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Digitaloutputv2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Digitaloutputv2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Digitaloutputv2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Digitaloutputv2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Digitaloutputv2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Digitaloutputv2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Digitaloutputv2_P7_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO133_DW.Digitaloutputv2_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO133_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &speedgoat_test_SN5659_R2021b_IO133_DW.Digitaloutputv2_PWORK
                   [0]);
      }

      /* registration */
      sg_IO132_IO133_do_s_v2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }
  }

  /* Start for S-Function (sg_IO132_IO133_setup_s_v2): '<S1>/Setup v2 ' */
  /* Level2 S-Function Block: '<S1>/Setup v2 ' (sg_IO132_IO133_setup_s_v2) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO133_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO132_IO133_ad_s_v2): '<S1>/Analog input v2 ' */
  /* Level2 S-Function Block: '<S1>/Analog input v2 ' (sg_IO132_IO133_ad_s_v2) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO133_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO132_IO133_da_s_v2): '<S1>/Analog output v2 ' */
  /* Level2 S-Function Block: '<S1>/Analog output v2 ' (sg_IO132_IO133_da_s_v2) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO133_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO132_IO133_di_s_v2): '<S1>/Digital input v2 ' */
  /* Level2 S-Function Block: '<S1>/Digital input v2 ' (sg_IO132_IO133_di_s_v2) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO133_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO132_IO133_do_s_v2): '<S1>/Digital output v2 ' */
  /* Level2 S-Function Block: '<S1>/Digital output v2 ' (sg_IO132_IO133_do_s_v2) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO133_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator' */
  speedgoat_test_SN5659_R2021b_IO133_DW.clockTickCounter = 0;

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator1' */
  speedgoat_test_SN5659_R2021b_IO133_DW.clockTickCounter_c = 0;
}

/* Model terminate function */
void speedgoat_test_SN5659_R2021b_IO133_terminate(void)
{
  /* Terminate for S-Function (sg_IO132_IO133_setup_s_v2): '<S1>/Setup v2 ' */
  /* Level2 S-Function Block: '<S1>/Setup v2 ' (sg_IO132_IO133_setup_s_v2) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO133_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO132_IO133_ad_s_v2): '<S1>/Analog input v2 ' */
  /* Level2 S-Function Block: '<S1>/Analog input v2 ' (sg_IO132_IO133_ad_s_v2) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO133_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO132_IO133_da_s_v2): '<S1>/Analog output v2 ' */
  /* Level2 S-Function Block: '<S1>/Analog output v2 ' (sg_IO132_IO133_da_s_v2) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO133_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO132_IO133_di_s_v2): '<S1>/Digital input v2 ' */
  /* Level2 S-Function Block: '<S1>/Digital input v2 ' (sg_IO132_IO133_di_s_v2) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO133_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO132_IO133_do_s_v2): '<S1>/Digital output v2 ' */
  /* Level2 S-Function Block: '<S1>/Digital output v2 ' (sg_IO132_IO133_do_s_v2) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO133_M->childSfunctions[4];
    sfcnTerminate(rts);
  }
}
