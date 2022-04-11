/*
 * speedgoat_test_SN5659_R2021b_IO421.cpp
 *
 * Code generation for model "speedgoat_test_SN5659_R2021b_IO421".
 *
 * Model version              : 3.1
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Fri Apr  8 14:45:56 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "speedgoat_test_SN5659_R2021b_IO421.h"
#include "speedgoat_test_SN5659_R2021b_IO421_private.h"

/* Block signals (default storage) */
B_speedgoat_test_SN5659_R2021b_IO421_T speedgoat_test_SN5659_R2021b_IO421_B;

/* Block states (default storage) */
DW_speedgoat_test_SN5659_R2021b_IO421_T speedgoat_test_SN5659_R2021b_IO421_DW;

/* Real-time model */
RT_MODEL_speedgoat_test_SN5659_R2021b_IO421_T
  speedgoat_test_SN5659_R2021b_IO421_M_ =
  RT_MODEL_speedgoat_test_SN5659_R2021b_IO421_T();
RT_MODEL_speedgoat_test_SN5659_R2021b_IO421_T *const
  speedgoat_test_SN5659_R2021b_IO421_M = &speedgoat_test_SN5659_R2021b_IO421_M_;

/* Model step function */
void speedgoat_test_SN5659_R2021b_IO421_step(void)
{
  /* S-Function (sg_IO421_lvdt_read_s): '<S1>/LVDT read' */

  /* Level2 S-Function Block: '<S1>/LVDT read' (sg_IO421_lvdt_read_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO421_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_IO421_lvdt_read_s): '<S1>/LVDT read1' */

  /* Level2 S-Function Block: '<S1>/LVDT read1' (sg_IO421_lvdt_read_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO421_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_IO421_ref_s): '<S1>/REF' */

  /* Level2 S-Function Block: '<S1>/REF' (sg_IO421_ref_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO421_M->childSfunctions[2];
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
  if (!(++speedgoat_test_SN5659_R2021b_IO421_M->Timing.clockTick0)) {
    ++speedgoat_test_SN5659_R2021b_IO421_M->Timing.clockTickH0;
  }

  speedgoat_test_SN5659_R2021b_IO421_M->Timing.t[0] =
    speedgoat_test_SN5659_R2021b_IO421_M->Timing.clockTick0 *
    speedgoat_test_SN5659_R2021b_IO421_M->Timing.stepSize0 +
    speedgoat_test_SN5659_R2021b_IO421_M->Timing.clockTickH0 *
    speedgoat_test_SN5659_R2021b_IO421_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void speedgoat_test_SN5659_R2021b_IO421_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  rtsiSetSolverName(&speedgoat_test_SN5659_R2021b_IO421_M->solverInfo,
                    "FixedStepDiscrete");
  speedgoat_test_SN5659_R2021b_IO421_M->solverInfoPtr =
    (&speedgoat_test_SN5659_R2021b_IO421_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      speedgoat_test_SN5659_R2021b_IO421_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "speedgoat_test_SN5659_R2021b_IO421_M points to
       static memory which is guaranteed to be non-NULL" */
    speedgoat_test_SN5659_R2021b_IO421_M->Timing.sampleTimeTaskIDPtr =
      (&mdlTsMap[0]);
    speedgoat_test_SN5659_R2021b_IO421_M->Timing.sampleTimes =
      (&speedgoat_test_SN5659_R2021b_IO421_M->Timing.sampleTimesArray[0]);
    speedgoat_test_SN5659_R2021b_IO421_M->Timing.offsetTimes =
      (&speedgoat_test_SN5659_R2021b_IO421_M->Timing.offsetTimesArray[0]);

    /* task periods */
    speedgoat_test_SN5659_R2021b_IO421_M->Timing.sampleTimes[0] = (0.001);

    /* task offsets */
    speedgoat_test_SN5659_R2021b_IO421_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(speedgoat_test_SN5659_R2021b_IO421_M,
             &speedgoat_test_SN5659_R2021b_IO421_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits =
      speedgoat_test_SN5659_R2021b_IO421_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    speedgoat_test_SN5659_R2021b_IO421_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(speedgoat_test_SN5659_R2021b_IO421_M, -1);
  speedgoat_test_SN5659_R2021b_IO421_M->Timing.stepSize0 = 0.001;
  speedgoat_test_SN5659_R2021b_IO421_M->solverInfoPtr =
    (&speedgoat_test_SN5659_R2021b_IO421_M->solverInfo);
  speedgoat_test_SN5659_R2021b_IO421_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&speedgoat_test_SN5659_R2021b_IO421_M->solverInfo, 0.001);
  rtsiSetSolverMode(&speedgoat_test_SN5659_R2021b_IO421_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&speedgoat_test_SN5659_R2021b_IO421_B)),
                     0,
                     sizeof(B_speedgoat_test_SN5659_R2021b_IO421_T));

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&speedgoat_test_SN5659_R2021b_IO421_DW),
                     0,
                     sizeof(DW_speedgoat_test_SN5659_R2021b_IO421_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo =
      &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.sfcnInfo;
    speedgoat_test_SN5659_R2021b_IO421_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (speedgoat_test_SN5659_R2021b_IO421_M)));
    speedgoat_test_SN5659_R2021b_IO421_M->Sizes.numSampTimes = (1);
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &speedgoat_test_SN5659_R2021b_IO421_M->Sizes.numSampTimes);
    speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.taskTimePtrs[0] =
      &(rtmGetTPtr(speedgoat_test_SN5659_R2021b_IO421_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,
                   speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart
                     (speedgoat_test_SN5659_R2021b_IO421_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal
                     (speedgoat_test_SN5659_R2021b_IO421_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (speedgoat_test_SN5659_R2021b_IO421_M));
    rtssSetStepSizePtr(sfcnInfo,
                       &speedgoat_test_SN5659_R2021b_IO421_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (speedgoat_test_SN5659_R2021b_IO421_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &speedgoat_test_SN5659_R2021b_IO421_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &speedgoat_test_SN5659_R2021b_IO421_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &speedgoat_test_SN5659_R2021b_IO421_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &speedgoat_test_SN5659_R2021b_IO421_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &speedgoat_test_SN5659_R2021b_IO421_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &speedgoat_test_SN5659_R2021b_IO421_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo,
                         &speedgoat_test_SN5659_R2021b_IO421_M->solverInfoPtr);
  }

  speedgoat_test_SN5659_R2021b_IO421_M->Sizes.numSFcns = (3);

  /* register each child */
  {
    (void) std::memset(static_cast<void *>
                       (&speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.childSFunctions
                        [0]), 0,
                       3*sizeof(SimStruct));
    speedgoat_test_SN5659_R2021b_IO421_M->childSfunctions =
      (&speedgoat_test_SN5659_R2021b_IO421_M->
       NonInlinedSFcns.childSFunctionPtrs[0]);
    speedgoat_test_SN5659_R2021b_IO421_M->childSfunctions[0] =
      (&speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.childSFunctions[0]);
    speedgoat_test_SN5659_R2021b_IO421_M->childSfunctions[1] =
      (&speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.childSFunctions[1]);
    speedgoat_test_SN5659_R2021b_IO421_M->childSfunctions[2] =
      (&speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.childSFunctions[2]);

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO421/<S1>/LVDT read (sg_IO421_lvdt_read_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO421_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.inputOutputPortInfo2
        [0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO421_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.periodicStatesInfo
          [0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.Sfcn0.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.Sfcn0.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &speedgoat_test_SN5659_R2021b_IO421_B.IO421_LVDT_POS1));
        }
      }

      /* path info */
      ssSetModelName(rts, "LVDT read");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO421/IO421-1/LVDT read");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO421_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->LVDTread_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->LVDTread_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->LVDTread_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->LVDTread_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->LVDTread_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->LVDTread_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->LVDTread_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->LVDTread_P8_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO421_DW.LVDTread_IWORK);
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO421_DW.LVDTread_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &speedgoat_test_SN5659_R2021b_IO421_DW.LVDTread_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &speedgoat_test_SN5659_R2021b_IO421_DW.LVDTread_PWORK);
      }

      /* registration */
      sg_IO421_lvdt_read_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO421/<S1>/LVDT read1 (sg_IO421_lvdt_read_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO421_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.inputOutputPortInfo2
        [1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO421_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.periodicStatesInfo
          [1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.Sfcn1.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.Sfcn1.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &speedgoat_test_SN5659_R2021b_IO421_B.IO421_LVDT_POS2));
        }
      }

      /* path info */
      ssSetModelName(rts, "LVDT read1");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO421/IO421-1/LVDT read1");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO421_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->LVDTread1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->LVDTread1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->LVDTread1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->LVDTread1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->LVDTread1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->LVDTread1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->LVDTread1_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->LVDTread1_P8_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO421_DW.LVDTread1_IWORK);
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO421_DW.LVDTread1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &speedgoat_test_SN5659_R2021b_IO421_DW.LVDTread1_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &speedgoat_test_SN5659_R2021b_IO421_DW.LVDTread1_PWORK);
      }

      /* registration */
      sg_IO421_lvdt_read_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO421/<S1>/REF (sg_IO421_ref_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO421_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.blkInfo2
                         [2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.inputOutputPortInfo2
        [2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO421_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.periodicStatesInfo
          [2]);
      }

      /* path info */
      ssSetModelName(rts, "REF");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO421/IO421-1/REF");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO421_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->REF_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->REF_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->REF_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->REF_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->REF_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &speedgoat_test_SN5659_R2021b_IO421_DW.REF_RWORK[0]);
      ssSetIWork(rts, (int_T *) &speedgoat_test_SN5659_R2021b_IO421_DW.REF_IWORK);
      ssSetPWork(rts, (void **) &speedgoat_test_SN5659_R2021b_IO421_DW.REF_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO421_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 16);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &speedgoat_test_SN5659_R2021b_IO421_DW.REF_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &speedgoat_test_SN5659_R2021b_IO421_DW.REF_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &speedgoat_test_SN5659_R2021b_IO421_DW.REF_PWORK);
      }

      /* registration */
      sg_IO421_ref_s(rts);
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

  /* Start for S-Function (sg_IO421_lvdt_read_s): '<S1>/LVDT read' */
  /* Level2 S-Function Block: '<S1>/LVDT read' (sg_IO421_lvdt_read_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO421_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO421_lvdt_read_s): '<S1>/LVDT read1' */
  /* Level2 S-Function Block: '<S1>/LVDT read1' (sg_IO421_lvdt_read_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO421_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO421_ref_s): '<S1>/REF' */
  /* Level2 S-Function Block: '<S1>/REF' (sg_IO421_ref_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO421_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Model terminate function */
void speedgoat_test_SN5659_R2021b_IO421_terminate(void)
{
  /* Terminate for S-Function (sg_IO421_lvdt_read_s): '<S1>/LVDT read' */
  /* Level2 S-Function Block: '<S1>/LVDT read' (sg_IO421_lvdt_read_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO421_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO421_lvdt_read_s): '<S1>/LVDT read1' */
  /* Level2 S-Function Block: '<S1>/LVDT read1' (sg_IO421_lvdt_read_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO421_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO421_ref_s): '<S1>/REF' */
  /* Level2 S-Function Block: '<S1>/REF' (sg_IO421_ref_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO421_M->childSfunctions[2];
    sfcnTerminate(rts);
  }
}
