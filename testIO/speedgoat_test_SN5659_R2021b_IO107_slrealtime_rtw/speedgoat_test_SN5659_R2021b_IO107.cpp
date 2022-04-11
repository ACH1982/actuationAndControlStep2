/*
 * speedgoat_test_SN5659_R2021b_IO107.cpp
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

#include "speedgoat_test_SN5659_R2021b_IO107.h"
#include "speedgoat_test_SN5659_R2021b_IO107_private.h"

/* Block signals (default storage) */
B_speedgoat_test_SN5659_R2021b_IO107_T speedgoat_test_SN5659_R2021b_IO107_B;

/* Block states (default storage) */
DW_speedgoat_test_SN5659_R2021b_IO107_T speedgoat_test_SN5659_R2021b_IO107_DW;

/* Real-time model */
RT_MODEL_speedgoat_test_SN5659_R2021b_IO107_T
  speedgoat_test_SN5659_R2021b_IO107_M_ =
  RT_MODEL_speedgoat_test_SN5659_R2021b_IO107_T();
RT_MODEL_speedgoat_test_SN5659_R2021b_IO107_T *const
  speedgoat_test_SN5659_R2021b_IO107_M = &speedgoat_test_SN5659_R2021b_IO107_M_;

/* Model step function */
void speedgoat_test_SN5659_R2021b_IO107_step(void)
{
  real_T HoldCosine;
  real_T HoldSine;

  /* Sin: '<S1>/Sine Wave' */
  if (speedgoat_test_SN5659_R2021b_IO107_DW.systemEnable != 0) {
    speedgoat_test_SN5659_R2021b_IO107_DW.lastSin = std::sin
      (speedgoat_test_SN5659_R2021_cal->SineWave_Freq *
       speedgoat_test_SN5659_R2021b_IO107_M->Timing.t[0]);
    speedgoat_test_SN5659_R2021b_IO107_DW.lastCos = std::cos
      (speedgoat_test_SN5659_R2021_cal->SineWave_Freq *
       speedgoat_test_SN5659_R2021b_IO107_M->Timing.t[0]);
    speedgoat_test_SN5659_R2021b_IO107_DW.systemEnable = 0;
  }

  /* Sin: '<S1>/Sine Wave' */
  speedgoat_test_SN5659_R2021b_IO107_B.SineWave =
    ((speedgoat_test_SN5659_R2021b_IO107_DW.lastSin *
      speedgoat_test_SN5659_R2021_cal->SineWave_PCos +
      speedgoat_test_SN5659_R2021b_IO107_DW.lastCos *
      speedgoat_test_SN5659_R2021_cal->SineWave_PSin) *
     speedgoat_test_SN5659_R2021_cal->SineWave_HCos +
     (speedgoat_test_SN5659_R2021b_IO107_DW.lastCos *
      speedgoat_test_SN5659_R2021_cal->SineWave_PCos -
      speedgoat_test_SN5659_R2021b_IO107_DW.lastSin *
      speedgoat_test_SN5659_R2021_cal->SineWave_PSin) *
     speedgoat_test_SN5659_R2021_cal->SineWave_Hsin) *
    speedgoat_test_SN5659_R2021_cal->SineWave_Amp +
    speedgoat_test_SN5659_R2021_cal->SineWave_Bias;

  /* S-Function (sg_IO107_da_s): '<S1>/Analog output' */

  /* Level2 S-Function Block: '<S1>/Analog output' (sg_IO107_da_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO107_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* Sin: '<S1>/Sine Wave1' */
  if (speedgoat_test_SN5659_R2021b_IO107_DW.systemEnable_o != 0) {
    speedgoat_test_SN5659_R2021b_IO107_DW.lastSin_d = std::sin
      (speedgoat_test_SN5659_R2021_cal->SineWave1_Freq *
       speedgoat_test_SN5659_R2021b_IO107_M->Timing.t[0]);
    speedgoat_test_SN5659_R2021b_IO107_DW.lastCos_o = std::cos
      (speedgoat_test_SN5659_R2021_cal->SineWave1_Freq *
       speedgoat_test_SN5659_R2021b_IO107_M->Timing.t[0]);
    speedgoat_test_SN5659_R2021b_IO107_DW.systemEnable_o = 0;
  }

  /* Sin: '<S1>/Sine Wave1' */
  speedgoat_test_SN5659_R2021b_IO107_B.SineWave1 =
    ((speedgoat_test_SN5659_R2021b_IO107_DW.lastSin_d *
      speedgoat_test_SN5659_R2021_cal->SineWave1_PCos +
      speedgoat_test_SN5659_R2021b_IO107_DW.lastCos_o *
      speedgoat_test_SN5659_R2021_cal->SineWave1_PSin) *
     speedgoat_test_SN5659_R2021_cal->SineWave1_HCos +
     (speedgoat_test_SN5659_R2021b_IO107_DW.lastCos_o *
      speedgoat_test_SN5659_R2021_cal->SineWave1_PCos -
      speedgoat_test_SN5659_R2021b_IO107_DW.lastSin_d *
      speedgoat_test_SN5659_R2021_cal->SineWave1_PSin) *
     speedgoat_test_SN5659_R2021_cal->SineWave1_Hsin) *
    speedgoat_test_SN5659_R2021_cal->SineWave1_Amp +
    speedgoat_test_SN5659_R2021_cal->SineWave1_Bias;

  /* S-Function (sg_IO107_da_s): '<S1>/Analog output1' */

  /* Level2 S-Function Block: '<S1>/Analog output1' (sg_IO107_da_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO107_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_IO107_setup_s): '<S1>/Setup' */

  /* Level2 S-Function Block: '<S1>/Setup' (sg_IO107_setup_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO107_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_IO107_setup_s): '<S1>/Setup1' */

  /* Level2 S-Function Block: '<S1>/Setup1' (sg_IO107_setup_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO107_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  /* Update for Sin: '<S1>/Sine Wave' */
  HoldSine = speedgoat_test_SN5659_R2021b_IO107_DW.lastSin;
  HoldCosine = speedgoat_test_SN5659_R2021b_IO107_DW.lastCos;
  speedgoat_test_SN5659_R2021b_IO107_DW.lastSin = HoldSine *
    speedgoat_test_SN5659_R2021_cal->SineWave_HCos + HoldCosine *
    speedgoat_test_SN5659_R2021_cal->SineWave_Hsin;
  speedgoat_test_SN5659_R2021b_IO107_DW.lastCos = HoldCosine *
    speedgoat_test_SN5659_R2021_cal->SineWave_HCos - HoldSine *
    speedgoat_test_SN5659_R2021_cal->SineWave_Hsin;

  /* Update for Sin: '<S1>/Sine Wave1' */
  HoldSine = speedgoat_test_SN5659_R2021b_IO107_DW.lastSin_d;
  HoldCosine = speedgoat_test_SN5659_R2021b_IO107_DW.lastCos_o;
  speedgoat_test_SN5659_R2021b_IO107_DW.lastSin_d = HoldSine *
    speedgoat_test_SN5659_R2021_cal->SineWave1_HCos + HoldCosine *
    speedgoat_test_SN5659_R2021_cal->SineWave1_Hsin;
  speedgoat_test_SN5659_R2021b_IO107_DW.lastCos_o = HoldCosine *
    speedgoat_test_SN5659_R2021_cal->SineWave1_HCos - HoldSine *
    speedgoat_test_SN5659_R2021_cal->SineWave1_Hsin;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++speedgoat_test_SN5659_R2021b_IO107_M->Timing.clockTick0)) {
    ++speedgoat_test_SN5659_R2021b_IO107_M->Timing.clockTickH0;
  }

  speedgoat_test_SN5659_R2021b_IO107_M->Timing.t[0] =
    speedgoat_test_SN5659_R2021b_IO107_M->Timing.clockTick0 *
    speedgoat_test_SN5659_R2021b_IO107_M->Timing.stepSize0 +
    speedgoat_test_SN5659_R2021b_IO107_M->Timing.clockTickH0 *
    speedgoat_test_SN5659_R2021b_IO107_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void speedgoat_test_SN5659_R2021b_IO107_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  rtsiSetSolverName(&speedgoat_test_SN5659_R2021b_IO107_M->solverInfo,
                    "FixedStepDiscrete");
  speedgoat_test_SN5659_R2021b_IO107_M->solverInfoPtr =
    (&speedgoat_test_SN5659_R2021b_IO107_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      speedgoat_test_SN5659_R2021b_IO107_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "speedgoat_test_SN5659_R2021b_IO107_M points to
       static memory which is guaranteed to be non-NULL" */
    speedgoat_test_SN5659_R2021b_IO107_M->Timing.sampleTimeTaskIDPtr =
      (&mdlTsMap[0]);
    speedgoat_test_SN5659_R2021b_IO107_M->Timing.sampleTimes =
      (&speedgoat_test_SN5659_R2021b_IO107_M->Timing.sampleTimesArray[0]);
    speedgoat_test_SN5659_R2021b_IO107_M->Timing.offsetTimes =
      (&speedgoat_test_SN5659_R2021b_IO107_M->Timing.offsetTimesArray[0]);

    /* task periods */
    speedgoat_test_SN5659_R2021b_IO107_M->Timing.sampleTimes[0] = (0.001);

    /* task offsets */
    speedgoat_test_SN5659_R2021b_IO107_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(speedgoat_test_SN5659_R2021b_IO107_M,
             &speedgoat_test_SN5659_R2021b_IO107_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits =
      speedgoat_test_SN5659_R2021b_IO107_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    speedgoat_test_SN5659_R2021b_IO107_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(speedgoat_test_SN5659_R2021b_IO107_M, -1);
  speedgoat_test_SN5659_R2021b_IO107_M->Timing.stepSize0 = 0.001;
  speedgoat_test_SN5659_R2021b_IO107_M->solverInfoPtr =
    (&speedgoat_test_SN5659_R2021b_IO107_M->solverInfo);
  speedgoat_test_SN5659_R2021b_IO107_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&speedgoat_test_SN5659_R2021b_IO107_M->solverInfo, 0.001);
  rtsiSetSolverMode(&speedgoat_test_SN5659_R2021b_IO107_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&speedgoat_test_SN5659_R2021b_IO107_B)),
                     0,
                     sizeof(B_speedgoat_test_SN5659_R2021b_IO107_T));

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&speedgoat_test_SN5659_R2021b_IO107_DW),
                     0,
                     sizeof(DW_speedgoat_test_SN5659_R2021b_IO107_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo =
      &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.sfcnInfo;
    speedgoat_test_SN5659_R2021b_IO107_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (speedgoat_test_SN5659_R2021b_IO107_M)));
    speedgoat_test_SN5659_R2021b_IO107_M->Sizes.numSampTimes = (1);
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &speedgoat_test_SN5659_R2021b_IO107_M->Sizes.numSampTimes);
    speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.taskTimePtrs[0] =
      &(rtmGetTPtr(speedgoat_test_SN5659_R2021b_IO107_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,
                   speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart
                     (speedgoat_test_SN5659_R2021b_IO107_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal
                     (speedgoat_test_SN5659_R2021b_IO107_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (speedgoat_test_SN5659_R2021b_IO107_M));
    rtssSetStepSizePtr(sfcnInfo,
                       &speedgoat_test_SN5659_R2021b_IO107_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (speedgoat_test_SN5659_R2021b_IO107_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &speedgoat_test_SN5659_R2021b_IO107_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &speedgoat_test_SN5659_R2021b_IO107_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &speedgoat_test_SN5659_R2021b_IO107_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &speedgoat_test_SN5659_R2021b_IO107_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &speedgoat_test_SN5659_R2021b_IO107_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &speedgoat_test_SN5659_R2021b_IO107_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo,
                         &speedgoat_test_SN5659_R2021b_IO107_M->solverInfoPtr);
  }

  speedgoat_test_SN5659_R2021b_IO107_M->Sizes.numSFcns = (4);

  /* register each child */
  {
    (void) std::memset(static_cast<void *>
                       (&speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.childSFunctions
                        [0]), 0,
                       4*sizeof(SimStruct));
    speedgoat_test_SN5659_R2021b_IO107_M->childSfunctions =
      (&speedgoat_test_SN5659_R2021b_IO107_M->
       NonInlinedSFcns.childSFunctionPtrs[0]);
    speedgoat_test_SN5659_R2021b_IO107_M->childSfunctions[0] =
      (&speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.childSFunctions[0]);
    speedgoat_test_SN5659_R2021b_IO107_M->childSfunctions[1] =
      (&speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.childSFunctions[1]);
    speedgoat_test_SN5659_R2021b_IO107_M->childSfunctions[2] =
      (&speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.childSFunctions[2]);
    speedgoat_test_SN5659_R2021b_IO107_M->childSfunctions[3] =
      (&speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.childSFunctions[3]);

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO107/<S1>/Analog output (sg_IO107_da_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO107_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.inputOutputPortInfo2
        [0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO107_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.periodicStatesInfo
          [0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 16);
        ssSetPortInfoForInputs(rts,
          &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn0.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn0.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        ssSetInputPortUnit(rts, 4, 0);
        ssSetInputPortUnit(rts, 5, 0);
        ssSetInputPortUnit(rts, 6, 0);
        ssSetInputPortUnit(rts, 7, 0);
        ssSetInputPortUnit(rts, 8, 0);
        ssSetInputPortUnit(rts, 9, 0);
        ssSetInputPortUnit(rts, 10, 0);
        ssSetInputPortUnit(rts, 11, 0);
        ssSetInputPortUnit(rts, 12, 0);
        ssSetInputPortUnit(rts, 13, 0);
        ssSetInputPortUnit(rts, 14, 0);
        ssSetInputPortUnit(rts, 15, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn0.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);
        ssSetInputPortIsContinuousQuantity(rts, 4, 0);
        ssSetInputPortIsContinuousQuantity(rts, 5, 0);
        ssSetInputPortIsContinuousQuantity(rts, 6, 0);
        ssSetInputPortIsContinuousQuantity(rts, 7, 0);
        ssSetInputPortIsContinuousQuantity(rts, 8, 0);
        ssSetInputPortIsContinuousQuantity(rts, 9, 0);
        ssSetInputPortIsContinuousQuantity(rts, 10, 0);
        ssSetInputPortIsContinuousQuantity(rts, 11, 0);
        ssSetInputPortIsContinuousQuantity(rts, 12, 0);
        ssSetInputPortIsContinuousQuantity(rts, 13, 0);
        ssSetInputPortIsContinuousQuantity(rts, 14, 0);
        ssSetInputPortIsContinuousQuantity(rts, 15, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          ssSetInputPortRequiredContiguous(rts, 4, 1);
          ssSetInputPortSignal(rts, 4,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }

        /* port 5 */
        {
          ssSetInputPortRequiredContiguous(rts, 5, 1);
          ssSetInputPortSignal(rts, 5,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidth(rts, 5, 1);
        }

        /* port 6 */
        {
          ssSetInputPortRequiredContiguous(rts, 6, 1);
          ssSetInputPortSignal(rts, 6,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidth(rts, 6, 1);
        }

        /* port 7 */
        {
          ssSetInputPortRequiredContiguous(rts, 7, 1);
          ssSetInputPortSignal(rts, 7,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidth(rts, 7, 1);
        }

        /* port 8 */
        {
          ssSetInputPortRequiredContiguous(rts, 8, 1);
          ssSetInputPortSignal(rts, 8,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidth(rts, 8, 1);
        }

        /* port 9 */
        {
          ssSetInputPortRequiredContiguous(rts, 9, 1);
          ssSetInputPortSignal(rts, 9,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidth(rts, 9, 1);
        }

        /* port 10 */
        {
          ssSetInputPortRequiredContiguous(rts, 10, 1);
          ssSetInputPortSignal(rts, 10,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave);
          _ssSetInputPortNumDimensions(rts, 10, 1);
          ssSetInputPortWidth(rts, 10, 1);
        }

        /* port 11 */
        {
          ssSetInputPortRequiredContiguous(rts, 11, 1);
          ssSetInputPortSignal(rts, 11,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave);
          _ssSetInputPortNumDimensions(rts, 11, 1);
          ssSetInputPortWidth(rts, 11, 1);
        }

        /* port 12 */
        {
          ssSetInputPortRequiredContiguous(rts, 12, 1);
          ssSetInputPortSignal(rts, 12,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave);
          _ssSetInputPortNumDimensions(rts, 12, 1);
          ssSetInputPortWidth(rts, 12, 1);
        }

        /* port 13 */
        {
          ssSetInputPortRequiredContiguous(rts, 13, 1);
          ssSetInputPortSignal(rts, 13,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave);
          _ssSetInputPortNumDimensions(rts, 13, 1);
          ssSetInputPortWidth(rts, 13, 1);
        }

        /* port 14 */
        {
          ssSetInputPortRequiredContiguous(rts, 14, 1);
          ssSetInputPortSignal(rts, 14,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave);
          _ssSetInputPortNumDimensions(rts, 14, 1);
          ssSetInputPortWidth(rts, 14, 1);
        }

        /* port 15 */
        {
          ssSetInputPortRequiredContiguous(rts, 15, 1);
          ssSetInputPortSignal(rts, 15,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave);
          _ssSetInputPortNumDimensions(rts, 15, 1);
          ssSetInputPortWidth(rts, 15, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Analog output");
      ssSetPath(rts,
                "speedgoat_test_SN5659_R2021b_IO107/IO107 (1-2)/Analog output");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO107_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutput_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutput_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutput_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutput_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutput_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutput_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutput_P7_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &speedgoat_test_SN5659_R2021b_IO107_DW.Analogoutput_RWORK[0]);
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO107_DW.Analogoutput_IWORK);
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO107_DW.Analogoutput_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &speedgoat_test_SN5659_R2021b_IO107_DW.Analogoutput_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &speedgoat_test_SN5659_R2021b_IO107_DW.Analogoutput_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2,
                   &speedgoat_test_SN5659_R2021b_IO107_DW.Analogoutput_PWORK);
      }

      /* registration */
      sg_IO107_da_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetInputPortConnected(rts, 3, 1);
      _ssSetInputPortConnected(rts, 4, 1);
      _ssSetInputPortConnected(rts, 5, 1);
      _ssSetInputPortConnected(rts, 6, 1);
      _ssSetInputPortConnected(rts, 7, 1);
      _ssSetInputPortConnected(rts, 8, 1);
      _ssSetInputPortConnected(rts, 9, 1);
      _ssSetInputPortConnected(rts, 10, 1);
      _ssSetInputPortConnected(rts, 11, 1);
      _ssSetInputPortConnected(rts, 12, 1);
      _ssSetInputPortConnected(rts, 13, 1);
      _ssSetInputPortConnected(rts, 14, 1);
      _ssSetInputPortConnected(rts, 15, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
      ssSetInputPortBufferDstPort(rts, 6, -1);
      ssSetInputPortBufferDstPort(rts, 7, -1);
      ssSetInputPortBufferDstPort(rts, 8, -1);
      ssSetInputPortBufferDstPort(rts, 9, -1);
      ssSetInputPortBufferDstPort(rts, 10, -1);
      ssSetInputPortBufferDstPort(rts, 11, -1);
      ssSetInputPortBufferDstPort(rts, 12, -1);
      ssSetInputPortBufferDstPort(rts, 13, -1);
      ssSetInputPortBufferDstPort(rts, 14, -1);
      ssSetInputPortBufferDstPort(rts, 15, -1);
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO107/<S1>/Analog output1 (sg_IO107_da_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO107_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.inputOutputPortInfo2
        [1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO107_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.periodicStatesInfo
          [1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 16);
        ssSetPortInfoForInputs(rts,
          &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn1.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn1.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        ssSetInputPortUnit(rts, 4, 0);
        ssSetInputPortUnit(rts, 5, 0);
        ssSetInputPortUnit(rts, 6, 0);
        ssSetInputPortUnit(rts, 7, 0);
        ssSetInputPortUnit(rts, 8, 0);
        ssSetInputPortUnit(rts, 9, 0);
        ssSetInputPortUnit(rts, 10, 0);
        ssSetInputPortUnit(rts, 11, 0);
        ssSetInputPortUnit(rts, 12, 0);
        ssSetInputPortUnit(rts, 13, 0);
        ssSetInputPortUnit(rts, 14, 0);
        ssSetInputPortUnit(rts, 15, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);
        ssSetInputPortIsContinuousQuantity(rts, 4, 0);
        ssSetInputPortIsContinuousQuantity(rts, 5, 0);
        ssSetInputPortIsContinuousQuantity(rts, 6, 0);
        ssSetInputPortIsContinuousQuantity(rts, 7, 0);
        ssSetInputPortIsContinuousQuantity(rts, 8, 0);
        ssSetInputPortIsContinuousQuantity(rts, 9, 0);
        ssSetInputPortIsContinuousQuantity(rts, 10, 0);
        ssSetInputPortIsContinuousQuantity(rts, 11, 0);
        ssSetInputPortIsContinuousQuantity(rts, 12, 0);
        ssSetInputPortIsContinuousQuantity(rts, 13, 0);
        ssSetInputPortIsContinuousQuantity(rts, 14, 0);
        ssSetInputPortIsContinuousQuantity(rts, 15, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave1);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave1);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave1);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          ssSetInputPortRequiredContiguous(rts, 4, 1);
          ssSetInputPortSignal(rts, 4,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave1);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }

        /* port 5 */
        {
          ssSetInputPortRequiredContiguous(rts, 5, 1);
          ssSetInputPortSignal(rts, 5,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave1);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidth(rts, 5, 1);
        }

        /* port 6 */
        {
          ssSetInputPortRequiredContiguous(rts, 6, 1);
          ssSetInputPortSignal(rts, 6,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave1);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidth(rts, 6, 1);
        }

        /* port 7 */
        {
          ssSetInputPortRequiredContiguous(rts, 7, 1);
          ssSetInputPortSignal(rts, 7,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave1);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidth(rts, 7, 1);
        }

        /* port 8 */
        {
          ssSetInputPortRequiredContiguous(rts, 8, 1);
          ssSetInputPortSignal(rts, 8,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave1);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidth(rts, 8, 1);
        }

        /* port 9 */
        {
          ssSetInputPortRequiredContiguous(rts, 9, 1);
          ssSetInputPortSignal(rts, 9,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave1);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidth(rts, 9, 1);
        }

        /* port 10 */
        {
          ssSetInputPortRequiredContiguous(rts, 10, 1);
          ssSetInputPortSignal(rts, 10,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave1);
          _ssSetInputPortNumDimensions(rts, 10, 1);
          ssSetInputPortWidth(rts, 10, 1);
        }

        /* port 11 */
        {
          ssSetInputPortRequiredContiguous(rts, 11, 1);
          ssSetInputPortSignal(rts, 11,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave1);
          _ssSetInputPortNumDimensions(rts, 11, 1);
          ssSetInputPortWidth(rts, 11, 1);
        }

        /* port 12 */
        {
          ssSetInputPortRequiredContiguous(rts, 12, 1);
          ssSetInputPortSignal(rts, 12,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave1);
          _ssSetInputPortNumDimensions(rts, 12, 1);
          ssSetInputPortWidth(rts, 12, 1);
        }

        /* port 13 */
        {
          ssSetInputPortRequiredContiguous(rts, 13, 1);
          ssSetInputPortSignal(rts, 13,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave1);
          _ssSetInputPortNumDimensions(rts, 13, 1);
          ssSetInputPortWidth(rts, 13, 1);
        }

        /* port 14 */
        {
          ssSetInputPortRequiredContiguous(rts, 14, 1);
          ssSetInputPortSignal(rts, 14,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave1);
          _ssSetInputPortNumDimensions(rts, 14, 1);
          ssSetInputPortWidth(rts, 14, 1);
        }

        /* port 15 */
        {
          ssSetInputPortRequiredContiguous(rts, 15, 1);
          ssSetInputPortSignal(rts, 15,
                               &speedgoat_test_SN5659_R2021b_IO107_B.SineWave1);
          _ssSetInputPortNumDimensions(rts, 15, 1);
          ssSetInputPortWidth(rts, 15, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Analog output1");
      ssSetPath(rts,
                "speedgoat_test_SN5659_R2021b_IO107/IO107 (1-2)/Analog output1");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO107_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutput1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutput1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutput1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutput1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutput1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutput1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Analogoutput1_P7_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &speedgoat_test_SN5659_R2021b_IO107_DW.Analogoutput1_RWORK[0]);
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO107_DW.Analogoutput1_IWORK);
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO107_DW.Analogoutput1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &speedgoat_test_SN5659_R2021b_IO107_DW.Analogoutput1_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &speedgoat_test_SN5659_R2021b_IO107_DW.Analogoutput1_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2,
                   &speedgoat_test_SN5659_R2021b_IO107_DW.Analogoutput1_PWORK);
      }

      /* registration */
      sg_IO107_da_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetInputPortConnected(rts, 3, 1);
      _ssSetInputPortConnected(rts, 4, 1);
      _ssSetInputPortConnected(rts, 5, 1);
      _ssSetInputPortConnected(rts, 6, 1);
      _ssSetInputPortConnected(rts, 7, 1);
      _ssSetInputPortConnected(rts, 8, 1);
      _ssSetInputPortConnected(rts, 9, 1);
      _ssSetInputPortConnected(rts, 10, 1);
      _ssSetInputPortConnected(rts, 11, 1);
      _ssSetInputPortConnected(rts, 12, 1);
      _ssSetInputPortConnected(rts, 13, 1);
      _ssSetInputPortConnected(rts, 14, 1);
      _ssSetInputPortConnected(rts, 15, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
      ssSetInputPortBufferDstPort(rts, 6, -1);
      ssSetInputPortBufferDstPort(rts, 7, -1);
      ssSetInputPortBufferDstPort(rts, 8, -1);
      ssSetInputPortBufferDstPort(rts, 9, -1);
      ssSetInputPortBufferDstPort(rts, 10, -1);
      ssSetInputPortBufferDstPort(rts, 11, -1);
      ssSetInputPortBufferDstPort(rts, 12, -1);
      ssSetInputPortBufferDstPort(rts, 13, -1);
      ssSetInputPortBufferDstPort(rts, 14, -1);
      ssSetInputPortBufferDstPort(rts, 15, -1);
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO107/<S1>/Setup (sg_IO107_setup_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO107_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.blkInfo2
                         [2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.inputOutputPortInfo2
        [2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO107_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.periodicStatesInfo
          [2]);
      }

      /* path info */
      ssSetModelName(rts, "Setup");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO107/IO107 (1-2)/Setup");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO107_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 11);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup_P11_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &speedgoat_test_SN5659_R2021b_IO107_DW.Setup_RWORK[0]);
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO107_DW.Setup_IWORK);
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO107_DW.Setup_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &speedgoat_test_SN5659_R2021b_IO107_DW.Setup_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &speedgoat_test_SN5659_R2021b_IO107_DW.Setup_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &speedgoat_test_SN5659_R2021b_IO107_DW.Setup_PWORK);
      }

      /* registration */
      sg_IO107_setup_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO107/<S1>/Setup1 (sg_IO107_setup_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO107_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.blkInfo2
                         [3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.inputOutputPortInfo2
        [3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO107_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.methods2
                           [3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.methods3
                           [3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.methods4
                           [3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.statesInfo2
                         [3]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.periodicStatesInfo
          [3]);
      }

      /* path info */
      ssSetModelName(rts, "Setup1");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO107/IO107 (1-2)/Setup1");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO107_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 11);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup1_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup1_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup1_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup1_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup1_P11_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &speedgoat_test_SN5659_R2021b_IO107_DW.Setup1_RWORK[0]);
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO107_DW.Setup1_IWORK);
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO107_DW.Setup1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO107_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &speedgoat_test_SN5659_R2021b_IO107_DW.Setup1_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &speedgoat_test_SN5659_R2021b_IO107_DW.Setup1_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &speedgoat_test_SN5659_R2021b_IO107_DW.Setup1_PWORK);
      }

      /* registration */
      sg_IO107_setup_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }
  }

  /* Start for S-Function (sg_IO107_da_s): '<S1>/Analog output' */
  /* Level2 S-Function Block: '<S1>/Analog output' (sg_IO107_da_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO107_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO107_da_s): '<S1>/Analog output1' */
  /* Level2 S-Function Block: '<S1>/Analog output1' (sg_IO107_da_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO107_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO107_setup_s): '<S1>/Setup' */
  /* Level2 S-Function Block: '<S1>/Setup' (sg_IO107_setup_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO107_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO107_setup_s): '<S1>/Setup1' */
  /* Level2 S-Function Block: '<S1>/Setup1' (sg_IO107_setup_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO107_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Enable for Sin: '<S1>/Sine Wave' */
  speedgoat_test_SN5659_R2021b_IO107_DW.systemEnable = 1;

  /* Enable for Sin: '<S1>/Sine Wave1' */
  speedgoat_test_SN5659_R2021b_IO107_DW.systemEnable_o = 1;
}

/* Model terminate function */
void speedgoat_test_SN5659_R2021b_IO107_terminate(void)
{
  /* Terminate for S-Function (sg_IO107_da_s): '<S1>/Analog output' */
  /* Level2 S-Function Block: '<S1>/Analog output' (sg_IO107_da_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO107_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO107_da_s): '<S1>/Analog output1' */
  /* Level2 S-Function Block: '<S1>/Analog output1' (sg_IO107_da_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO107_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO107_setup_s): '<S1>/Setup' */
  /* Level2 S-Function Block: '<S1>/Setup' (sg_IO107_setup_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO107_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO107_setup_s): '<S1>/Setup1' */
  /* Level2 S-Function Block: '<S1>/Setup1' (sg_IO107_setup_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO107_M->childSfunctions[3];
    sfcnTerminate(rts);
  }
}
