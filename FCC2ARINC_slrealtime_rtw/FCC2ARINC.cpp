/*
 * FCC2ARINC.cpp
 *
 * Code generation for model "FCC2ARINC".
 *
 * Model version              : 1.33
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Tue May 17 11:52:51 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "FCC2ARINC.h"
#include "FCC2ARINC_private.h"

/* Block signals (default storage) */
B_FCC2ARINC_T FCC2ARINC_B;

/* Block states (default storage) */
DW_FCC2ARINC_T FCC2ARINC_DW;

/* Real-time model */
RT_MODEL_FCC2ARINC_T FCC2ARINC_M_ = RT_MODEL_FCC2ARINC_T();
RT_MODEL_FCC2ARINC_T *const FCC2ARINC_M = &FCC2ARINC_M_;

/* Model step function */
void FCC2ARINC_step(void)
{
  /* S-Function (sg_io682_setup_s_v3): '<Root>/Setup v2 ' */

  /* Level2 S-Function Block: '<Root>/Setup v2 ' (sg_io682_setup_s_v3) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_io682_receive_s_v3): '<Root>/Receive v2 ' */

  /* Level2 S-Function Block: '<Root>/Receive v2 ' (sg_io682_receive_s_v3) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 1' */

  /* Level2 S-Function Block: '<S1>/Decode 1' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* S-Function (signal_decode): '<S1>/C//C++ Code Block' */
  signal_decode_Outputs_wrapper_cgen(&FCC2ARINC_B.Decode1,
    &FCC2ARINC_B.CCCodeBlock, &FCC2ARINC_cal->CCCodeBlock_P1, 1,
    &FCC2ARINC_cal->CCCodeBlock_P2, 1, &FCC2ARINC_cal->CCCodeBlock_P3, 1,
    &FCC2ARINC_cal->CCCodeBlock_P4, 1, &FCC2ARINC_cal->CCCodeBlock_P5, 1);

  /* DataTypeConversion: '<S1>/Cast' */
  FCC2ARINC_B.FCC2_ACExxxA_WHEEL_POS_2 = static_cast<real32_T>
    (FCC2ARINC_B.CCCodeBlock);

  /* S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 5' */

  /* Level2 S-Function Block: '<S1>/Decode 5' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  /* S-Function (signal_decode): '<S1>/C//C++ Code Block4' */
  signal_decode_Outputs_wrapper_cgen(&FCC2ARINC_B.Decode5,
    &FCC2ARINC_B.CCCodeBlock4, &FCC2ARINC_cal->CCCodeBlock4_P1, 1,
    &FCC2ARINC_cal->CCCodeBlock4_P2, 1, &FCC2ARINC_cal->CCCodeBlock4_P3, 1,
    &FCC2ARINC_cal->CCCodeBlock4_P4, 1, &FCC2ARINC_cal->CCCodeBlock4_P5, 1);

  /* DataTypeConversion: '<S1>/Cast1' */
  FCC2ARINC_B.FCC2_ACExxxA_SUR_POS_2_AIL = static_cast<real32_T>
    (FCC2ARINC_B.CCCodeBlock4);

  /* S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 2' */

  /* Level2 S-Function Block: '<S1>/Decode 2' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S1>/Cast2' */
  FCC2ARINC_B.FCC2_ACExxxA_WHEEL_POS_2_FAIL = FCC2ARINC_B.Decode2;

  /* S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 6' */

  /* Level2 S-Function Block: '<S1>/Decode 6' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[5];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S1>/Cast3' */
  FCC2ARINC_B.FCC2_ACExxxA_SUR_POS_2_AIL_FAIL = FCC2ARINC_B.Decode6;

  /* S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 3' */

  /* Level2 S-Function Block: '<S1>/Decode 3' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[6];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S1>/Cast4' */
  FCC2ARINC_B.FCC2_ACExxxA_GEARING_ROLL_HB = FCC2ARINC_B.Decode3;

  /* S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 4' */

  /* Level2 S-Function Block: '<S1>/Decode 4' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[7];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S1>/Cast5' */
  FCC2ARINC_B.FCC2_ACExxxA_TBI_HB = FCC2ARINC_B.Decode4;

  /* S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 7' */

  /* Level2 S-Function Block: '<S1>/Decode 7' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[8];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S1>/Cast6' */
  FCC2ARINC_B.FCC2_ACExxxA_TBI_INCREMENTAL_DE = FCC2ARINC_B.Decode7;

  /* RelationalOperator: '<S2>/Compare' incorporates:
   *  Constant: '<S2>/Constant'
   */
  FCC2ARINC_B.Compare = (FCC2ARINC_B.Receivev2[0] >
    FCC2ARINC_cal->Constant_Value);

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++FCC2ARINC_M->Timing.clockTick0)) {
    ++FCC2ARINC_M->Timing.clockTickH0;
  }

  FCC2ARINC_M->Timing.t[0] = FCC2ARINC_M->Timing.clockTick0 *
    FCC2ARINC_M->Timing.stepSize0 + FCC2ARINC_M->Timing.clockTickH0 *
    FCC2ARINC_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void FCC2ARINC_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  rtsiSetSolverName(&FCC2ARINC_M->solverInfo,"FixedStepDiscrete");
  FCC2ARINC_M->solverInfoPtr = (&FCC2ARINC_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = FCC2ARINC_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "FCC2ARINC_M points to
       static memory which is guaranteed to be non-NULL" */
    FCC2ARINC_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    FCC2ARINC_M->Timing.sampleTimes = (&FCC2ARINC_M->Timing.sampleTimesArray[0]);
    FCC2ARINC_M->Timing.offsetTimes = (&FCC2ARINC_M->Timing.offsetTimesArray[0]);

    /* task periods */
    FCC2ARINC_M->Timing.sampleTimes[0] = (0.008);

    /* task offsets */
    FCC2ARINC_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(FCC2ARINC_M, &FCC2ARINC_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = FCC2ARINC_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    FCC2ARINC_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(FCC2ARINC_M, -1);
  FCC2ARINC_M->Timing.stepSize0 = 0.008;
  FCC2ARINC_M->solverInfoPtr = (&FCC2ARINC_M->solverInfo);
  FCC2ARINC_M->Timing.stepSize = (0.008);
  rtsiSetFixedStepSize(&FCC2ARINC_M->solverInfo, 0.008);
  rtsiSetSolverMode(&FCC2ARINC_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&FCC2ARINC_B)), 0,
                     sizeof(B_FCC2ARINC_T));

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&FCC2ARINC_DW), 0,
                     sizeof(DW_FCC2ARINC_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &FCC2ARINC_M->NonInlinedSFcns.sfcnInfo;
    FCC2ARINC_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(FCC2ARINC_M)));
    FCC2ARINC_M->Sizes.numSampTimes = (1);
    rtssSetNumRootSampTimesPtr(sfcnInfo, &FCC2ARINC_M->Sizes.numSampTimes);
    FCC2ARINC_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(FCC2ARINC_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,FCC2ARINC_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(FCC2ARINC_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(FCC2ARINC_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(FCC2ARINC_M));
    rtssSetStepSizePtr(sfcnInfo, &FCC2ARINC_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(FCC2ARINC_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo, &FCC2ARINC_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &FCC2ARINC_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &FCC2ARINC_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &FCC2ARINC_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo, &FCC2ARINC_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &FCC2ARINC_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &FCC2ARINC_M->solverInfoPtr);
  }

  FCC2ARINC_M->Sizes.numSFcns = (9);

  /* register each child */
  {
    (void) std::memset(static_cast<void *>
                       (&FCC2ARINC_M->NonInlinedSFcns.childSFunctions[0]), 0,
                       9*sizeof(SimStruct));
    FCC2ARINC_M->childSfunctions =
      (&FCC2ARINC_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 9; i++) {
        FCC2ARINC_M->childSfunctions[i] =
          (&FCC2ARINC_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: FCC2ARINC/<Root>/Setup v2  (sg_io682_setup_s_v3) */
    {
      SimStruct *rts = FCC2ARINC_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = FCC2ARINC_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = FCC2ARINC_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = FCC2ARINC_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &FCC2ARINC_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &FCC2ARINC_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, FCC2ARINC_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &FCC2ARINC_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &FCC2ARINC_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &FCC2ARINC_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &FCC2ARINC_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &FCC2ARINC_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* path info */
      ssSetModelName(rts, "Setup v2 ");
      ssSetPath(rts, "FCC2ARINC/Setup v2 ");
      ssSetRTModel(rts,FCC2ARINC_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)FCC2ARINC_cal->Setupv2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)FCC2ARINC_cal->Setupv2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)FCC2ARINC_cal->Setupv2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)FCC2ARINC_cal->Setupv2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)FCC2ARINC_cal->Setupv2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)FCC2ARINC_cal->Setupv2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)FCC2ARINC_cal->Setupv2_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)FCC2ARINC_cal->Setupv2_P8_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &FCC2ARINC_DW.Setupv2_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &FCC2ARINC_DW.Setupv2_PWORK[0]);
      }

      /* registration */
      sg_io682_setup_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.008);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: FCC2ARINC/<Root>/Receive v2  (sg_io682_receive_s_v3) */
    {
      SimStruct *rts = FCC2ARINC_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = FCC2ARINC_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = FCC2ARINC_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = FCC2ARINC_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &FCC2ARINC_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &FCC2ARINC_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, FCC2ARINC_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &FCC2ARINC_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &FCC2ARINC_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &FCC2ARINC_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &FCC2ARINC_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &FCC2ARINC_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn1.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 11);
          ssSetOutputPortSignal(rts, 0, ((real_T *) FCC2ARINC_B.Receivev2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Receive v2 ");
      ssSetPath(rts, "FCC2ARINC/Receive v2 ");
      ssSetRTModel(rts,FCC2ARINC_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)FCC2ARINC_cal->Receivev2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)FCC2ARINC_cal->Receivev2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)FCC2ARINC_cal->Receivev2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)FCC2ARINC_cal->Receivev2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)FCC2ARINC_cal->Receivev2_P5_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &FCC2ARINC_DW.Receivev2_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &FCC2ARINC_DW.Receivev2_PWORK[0]);
      }

      /* registration */
      sg_io682_receive_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.008);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: FCC2ARINC/<S1>/Decode 1 (sg_arinc429_decode_s_v2) */
    {
      SimStruct *rts = FCC2ARINC_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = FCC2ARINC_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = FCC2ARINC_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = FCC2ARINC_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &FCC2ARINC_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &FCC2ARINC_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, FCC2ARINC_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &FCC2ARINC_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &FCC2ARINC_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &FCC2ARINC_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &FCC2ARINC_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &FCC2ARINC_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn2.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, FCC2ARINC_B.Receivev2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 11);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn2.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn2.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *) &FCC2ARINC_B.Decode1));
        }
      }

      /* path info */
      ssSetModelName(rts, "Decode 1");
      ssSetPath(rts, "FCC2ARINC/Decode Channel 1/Decode 1");
      ssSetRTModel(rts,FCC2ARINC_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)FCC2ARINC_cal->Decode1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)FCC2ARINC_cal->Decode1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)FCC2ARINC_cal->Decode1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)FCC2ARINC_cal->Decode1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)FCC2ARINC_cal->Decode1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)FCC2ARINC_cal->Decode1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)FCC2ARINC_cal->Decode1_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)FCC2ARINC_cal->Decode1_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)FCC2ARINC_cal->Decode1_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)FCC2ARINC_cal->Decode1_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)FCC2ARINC_cal->Decode1_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)FCC2ARINC_cal->Decode1_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)FCC2ARINC_cal->Decode1_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)FCC2ARINC_cal->Decode1_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)FCC2ARINC_cal->Decode1_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)FCC2ARINC_cal->Decode1_P16_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &FCC2ARINC_DW.Decode1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &FCC2ARINC_DW.Decode1_IWORK[0]);
      }

      /* registration */
      sg_arinc429_decode_s_v2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.008);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 11);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: FCC2ARINC/<S1>/Decode 5 (sg_arinc429_decode_s_v2) */
    {
      SimStruct *rts = FCC2ARINC_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = FCC2ARINC_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = FCC2ARINC_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = FCC2ARINC_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &FCC2ARINC_M->NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &FCC2ARINC_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, FCC2ARINC_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &FCC2ARINC_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &FCC2ARINC_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &FCC2ARINC_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &FCC2ARINC_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &FCC2ARINC_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn3.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn3.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, FCC2ARINC_B.Receivev2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 11);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn3.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn3.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *) &FCC2ARINC_B.Decode5));
        }
      }

      /* path info */
      ssSetModelName(rts, "Decode 5");
      ssSetPath(rts, "FCC2ARINC/Decode Channel 1/Decode 5");
      ssSetRTModel(rts,FCC2ARINC_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)FCC2ARINC_cal->Decode5_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)FCC2ARINC_cal->Decode5_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)FCC2ARINC_cal->Decode5_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)FCC2ARINC_cal->Decode5_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)FCC2ARINC_cal->Decode5_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)FCC2ARINC_cal->Decode5_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)FCC2ARINC_cal->Decode5_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)FCC2ARINC_cal->Decode5_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)FCC2ARINC_cal->Decode5_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)FCC2ARINC_cal->Decode5_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)FCC2ARINC_cal->Decode5_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)FCC2ARINC_cal->Decode5_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)FCC2ARINC_cal->Decode5_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)FCC2ARINC_cal->Decode5_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)FCC2ARINC_cal->Decode5_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)FCC2ARINC_cal->Decode5_P16_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &FCC2ARINC_DW.Decode5_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &FCC2ARINC_DW.Decode5_IWORK[0]);
      }

      /* registration */
      sg_arinc429_decode_s_v2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.008);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 11);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: FCC2ARINC/<S1>/Decode 2 (sg_arinc429_decode_s_v2) */
    {
      SimStruct *rts = FCC2ARINC_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = FCC2ARINC_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = FCC2ARINC_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = FCC2ARINC_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &FCC2ARINC_M->NonInlinedSFcns.blkInfo2[4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &FCC2ARINC_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, FCC2ARINC_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &FCC2ARINC_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &FCC2ARINC_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &FCC2ARINC_M->NonInlinedSFcns.methods4[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &FCC2ARINC_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &FCC2ARINC_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn4.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn4.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, FCC2ARINC_B.Receivev2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 11);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn4.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn4.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *) &FCC2ARINC_B.Decode2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Decode 2");
      ssSetPath(rts, "FCC2ARINC/Decode Channel 1/Decode 2");
      ssSetRTModel(rts,FCC2ARINC_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)FCC2ARINC_cal->Decode2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)FCC2ARINC_cal->Decode2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)FCC2ARINC_cal->Decode2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)FCC2ARINC_cal->Decode2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)FCC2ARINC_cal->Decode2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)FCC2ARINC_cal->Decode2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)FCC2ARINC_cal->Decode2_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)FCC2ARINC_cal->Decode2_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)FCC2ARINC_cal->Decode2_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)FCC2ARINC_cal->Decode2_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)FCC2ARINC_cal->Decode2_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)FCC2ARINC_cal->Decode2_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)FCC2ARINC_cal->Decode2_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)FCC2ARINC_cal->Decode2_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)FCC2ARINC_cal->Decode2_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)FCC2ARINC_cal->Decode2_P16_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &FCC2ARINC_DW.Decode2_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &FCC2ARINC_DW.Decode2_IWORK[0]);
      }

      /* registration */
      sg_arinc429_decode_s_v2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.008);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 11);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: FCC2ARINC/<S1>/Decode 6 (sg_arinc429_decode_s_v2) */
    {
      SimStruct *rts = FCC2ARINC_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod = FCC2ARINC_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset = FCC2ARINC_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap = FCC2ARINC_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &FCC2ARINC_M->NonInlinedSFcns.blkInfo2[5]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &FCC2ARINC_M->NonInlinedSFcns.inputOutputPortInfo2[5]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, FCC2ARINC_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &FCC2ARINC_M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &FCC2ARINC_M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &FCC2ARINC_M->NonInlinedSFcns.methods4[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &FCC2ARINC_M->NonInlinedSFcns.statesInfo2[5]);
        ssSetPeriodicStatesInfo(rts,
          &FCC2ARINC_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn5.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn5.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn5.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, FCC2ARINC_B.Receivev2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 11);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn5.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn5.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn5.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *) &FCC2ARINC_B.Decode6));
        }
      }

      /* path info */
      ssSetModelName(rts, "Decode 6");
      ssSetPath(rts, "FCC2ARINC/Decode Channel 1/Decode 6");
      ssSetRTModel(rts,FCC2ARINC_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)FCC2ARINC_cal->Decode6_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)FCC2ARINC_cal->Decode6_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)FCC2ARINC_cal->Decode6_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)FCC2ARINC_cal->Decode6_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)FCC2ARINC_cal->Decode6_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)FCC2ARINC_cal->Decode6_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)FCC2ARINC_cal->Decode6_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)FCC2ARINC_cal->Decode6_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)FCC2ARINC_cal->Decode6_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)FCC2ARINC_cal->Decode6_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)FCC2ARINC_cal->Decode6_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)FCC2ARINC_cal->Decode6_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)FCC2ARINC_cal->Decode6_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)FCC2ARINC_cal->Decode6_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)FCC2ARINC_cal->Decode6_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)FCC2ARINC_cal->Decode6_P16_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &FCC2ARINC_DW.Decode6_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &FCC2ARINC_DW.Decode6_IWORK[0]);
      }

      /* registration */
      sg_arinc429_decode_s_v2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.008);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 11);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: FCC2ARINC/<S1>/Decode 3 (sg_arinc429_decode_s_v2) */
    {
      SimStruct *rts = FCC2ARINC_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod = FCC2ARINC_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset = FCC2ARINC_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap = FCC2ARINC_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &FCC2ARINC_M->NonInlinedSFcns.blkInfo2[6]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &FCC2ARINC_M->NonInlinedSFcns.inputOutputPortInfo2[6]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, FCC2ARINC_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &FCC2ARINC_M->NonInlinedSFcns.methods2[6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &FCC2ARINC_M->NonInlinedSFcns.methods3[6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &FCC2ARINC_M->NonInlinedSFcns.methods4[6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &FCC2ARINC_M->NonInlinedSFcns.statesInfo2[6]);
        ssSetPeriodicStatesInfo(rts,
          &FCC2ARINC_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn6.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn6.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn6.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, FCC2ARINC_B.Receivev2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 11);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn6.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn6.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn6.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *) &FCC2ARINC_B.Decode3));
        }
      }

      /* path info */
      ssSetModelName(rts, "Decode 3");
      ssSetPath(rts, "FCC2ARINC/Decode Channel 1/Decode 3");
      ssSetRTModel(rts,FCC2ARINC_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)FCC2ARINC_cal->Decode3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)FCC2ARINC_cal->Decode3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)FCC2ARINC_cal->Decode3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)FCC2ARINC_cal->Decode3_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)FCC2ARINC_cal->Decode3_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)FCC2ARINC_cal->Decode3_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)FCC2ARINC_cal->Decode3_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)FCC2ARINC_cal->Decode3_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)FCC2ARINC_cal->Decode3_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)FCC2ARINC_cal->Decode3_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)FCC2ARINC_cal->Decode3_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)FCC2ARINC_cal->Decode3_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)FCC2ARINC_cal->Decode3_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)FCC2ARINC_cal->Decode3_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)FCC2ARINC_cal->Decode3_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)FCC2ARINC_cal->Decode3_P16_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &FCC2ARINC_DW.Decode3_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &FCC2ARINC_DW.Decode3_IWORK[0]);
      }

      /* registration */
      sg_arinc429_decode_s_v2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.008);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 11);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: FCC2ARINC/<S1>/Decode 4 (sg_arinc429_decode_s_v2) */
    {
      SimStruct *rts = FCC2ARINC_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod = FCC2ARINC_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset = FCC2ARINC_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap = FCC2ARINC_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &FCC2ARINC_M->NonInlinedSFcns.blkInfo2[7]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &FCC2ARINC_M->NonInlinedSFcns.inputOutputPortInfo2[7]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, FCC2ARINC_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &FCC2ARINC_M->NonInlinedSFcns.methods2[7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &FCC2ARINC_M->NonInlinedSFcns.methods3[7]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &FCC2ARINC_M->NonInlinedSFcns.methods4[7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &FCC2ARINC_M->NonInlinedSFcns.statesInfo2[7]);
        ssSetPeriodicStatesInfo(rts,
          &FCC2ARINC_M->NonInlinedSFcns.periodicStatesInfo[7]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn7.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn7.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn7.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, FCC2ARINC_B.Receivev2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 11);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn7.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn7.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn7.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *) &FCC2ARINC_B.Decode4));
        }
      }

      /* path info */
      ssSetModelName(rts, "Decode 4");
      ssSetPath(rts, "FCC2ARINC/Decode Channel 1/Decode 4");
      ssSetRTModel(rts,FCC2ARINC_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)FCC2ARINC_cal->Decode4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)FCC2ARINC_cal->Decode4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)FCC2ARINC_cal->Decode4_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)FCC2ARINC_cal->Decode4_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)FCC2ARINC_cal->Decode4_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)FCC2ARINC_cal->Decode4_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)FCC2ARINC_cal->Decode4_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)FCC2ARINC_cal->Decode4_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)FCC2ARINC_cal->Decode4_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)FCC2ARINC_cal->Decode4_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)FCC2ARINC_cal->Decode4_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)FCC2ARINC_cal->Decode4_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)FCC2ARINC_cal->Decode4_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)FCC2ARINC_cal->Decode4_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)FCC2ARINC_cal->Decode4_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)FCC2ARINC_cal->Decode4_P16_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &FCC2ARINC_DW.Decode4_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn7.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn7.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &FCC2ARINC_DW.Decode4_IWORK[0]);
      }

      /* registration */
      sg_arinc429_decode_s_v2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.008);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 11);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: FCC2ARINC/<S1>/Decode 7 (sg_arinc429_decode_s_v2) */
    {
      SimStruct *rts = FCC2ARINC_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod = FCC2ARINC_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset = FCC2ARINC_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap = FCC2ARINC_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &FCC2ARINC_M->NonInlinedSFcns.blkInfo2[8]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &FCC2ARINC_M->NonInlinedSFcns.inputOutputPortInfo2[8]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, FCC2ARINC_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &FCC2ARINC_M->NonInlinedSFcns.methods2[8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &FCC2ARINC_M->NonInlinedSFcns.methods3[8]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &FCC2ARINC_M->NonInlinedSFcns.methods4[8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &FCC2ARINC_M->NonInlinedSFcns.statesInfo2[8]);
        ssSetPeriodicStatesInfo(rts,
          &FCC2ARINC_M->NonInlinedSFcns.periodicStatesInfo[8]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn8.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn8.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn8.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, FCC2ARINC_B.Receivev2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 11);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn8.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn8.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn8.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *) &FCC2ARINC_B.Decode7));
        }
      }

      /* path info */
      ssSetModelName(rts, "Decode 7");
      ssSetPath(rts, "FCC2ARINC/Decode Channel 1/Decode 7");
      ssSetRTModel(rts,FCC2ARINC_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)FCC2ARINC_cal->Decode7_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)FCC2ARINC_cal->Decode7_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)FCC2ARINC_cal->Decode7_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)FCC2ARINC_cal->Decode7_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)FCC2ARINC_cal->Decode7_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)FCC2ARINC_cal->Decode7_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)FCC2ARINC_cal->Decode7_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)FCC2ARINC_cal->Decode7_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)FCC2ARINC_cal->Decode7_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)FCC2ARINC_cal->Decode7_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)FCC2ARINC_cal->Decode7_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)FCC2ARINC_cal->Decode7_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)FCC2ARINC_cal->Decode7_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)FCC2ARINC_cal->Decode7_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)FCC2ARINC_cal->Decode7_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)FCC2ARINC_cal->Decode7_P16_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &FCC2ARINC_DW.Decode7_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn8.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &FCC2ARINC_M->NonInlinedSFcns.Sfcn8.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &FCC2ARINC_DW.Decode7_IWORK[0]);
      }

      /* registration */
      sg_arinc429_decode_s_v2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.008);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 11);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Start for S-Function (sg_io682_setup_s_v3): '<Root>/Setup v2 ' */
  /* Level2 S-Function Block: '<Root>/Setup v2 ' (sg_io682_setup_s_v3) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_io682_receive_s_v3): '<Root>/Receive v2 ' */
  /* Level2 S-Function Block: '<Root>/Receive v2 ' (sg_io682_receive_s_v3) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 1' */
  /* Level2 S-Function Block: '<S1>/Decode 1' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 5' */
  /* Level2 S-Function Block: '<S1>/Decode 5' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 2' */
  /* Level2 S-Function Block: '<S1>/Decode 2' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 6' */
  /* Level2 S-Function Block: '<S1>/Decode 6' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 3' */
  /* Level2 S-Function Block: '<S1>/Decode 3' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 4' */
  /* Level2 S-Function Block: '<S1>/Decode 4' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 7' */
  /* Level2 S-Function Block: '<S1>/Decode 7' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[8];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Model terminate function */
void FCC2ARINC_terminate(void)
{
  /* Terminate for S-Function (sg_io682_setup_s_v3): '<Root>/Setup v2 ' */
  /* Level2 S-Function Block: '<Root>/Setup v2 ' (sg_io682_setup_s_v3) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_io682_receive_s_v3): '<Root>/Receive v2 ' */
  /* Level2 S-Function Block: '<Root>/Receive v2 ' (sg_io682_receive_s_v3) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 1' */
  /* Level2 S-Function Block: '<S1>/Decode 1' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 5' */
  /* Level2 S-Function Block: '<S1>/Decode 5' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 2' */
  /* Level2 S-Function Block: '<S1>/Decode 2' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 6' */
  /* Level2 S-Function Block: '<S1>/Decode 6' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 3' */
  /* Level2 S-Function Block: '<S1>/Decode 3' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 4' */
  /* Level2 S-Function Block: '<S1>/Decode 4' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 7' */
  /* Level2 S-Function Block: '<S1>/Decode 7' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = FCC2ARINC_M->childSfunctions[8];
    sfcnTerminate(rts);
  }
}
