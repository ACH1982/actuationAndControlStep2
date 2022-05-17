/*
 * crossARINC_in.cpp
 *
 * Code generation for model "crossARINC_in".
 *
 * Model version              : 1.26
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Tue May 17 12:21:30 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "crossARINC_in.h"
#include "crossARINC_in_private.h"

/* Block signals (default storage) */
B_crossARINC_in_T crossARINC_in_B;

/* Block states (default storage) */
DW_crossARINC_in_T crossARINC_in_DW;

/* Real-time model */
RT_MODEL_crossARINC_in_T crossARINC_in_M_ = RT_MODEL_crossARINC_in_T();
RT_MODEL_crossARINC_in_T *const crossARINC_in_M = &crossARINC_in_M_;

/* Model step function */
void crossARINC_in_step(void)
{
  /* S-Function (sg_io682_setup_s_v3): '<Root>/Setup v2 ' */

  /* Level2 S-Function Block: '<Root>/Setup v2 ' (sg_io682_setup_s_v3) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_io682_receive_s_v3): '<Root>/Receive v2 ' */

  /* Level2 S-Function Block: '<Root>/Receive v2 ' (sg_io682_receive_s_v3) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 1' */

  /* Level2 S-Function Block: '<S1>/Decode 1' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* S-Function (signal_decode): '<S1>/C//C++ Code Block' */
  signal_decode_Outputs_wrapper_cgen(&crossARINC_in_B.Decode1,
    &crossARINC_in_B.CCCodeBlock, &crossARINC_in_cal->CCCodeBlock_P1, 1,
    &crossARINC_in_cal->CCCodeBlock_P2, 1, &crossARINC_in_cal->CCCodeBlock_P3, 1,
    &crossARINC_in_cal->CCCodeBlock_P4, 1, &crossARINC_in_cal->CCCodeBlock_P5, 1);

  /* DataTypeConversion: '<S1>/Cast' */
  crossARINC_in_B.ACE9C_ACE8x_GEARING_APPLIED = static_cast<real32_T>
    (crossARINC_in_B.CCCodeBlock);

  /* S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 5' */

  /* Level2 S-Function Block: '<S1>/Decode 5' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S1>/Cast1' */
  crossARINC_in_B.ACE9C_ACE8x_GEARING_APP_F_C = crossARINC_in_B.Decode5;

  /* S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 11' */

  /* Level2 S-Function Block: '<S1>/Decode 11' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S1>/Cast9' */
  crossARINC_in_B.ACE9C_ACE8x_TBI_FLAG_APP = crossARINC_in_B.Decode11;

  /* S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 12' */

  /* Level2 S-Function Block: '<S1>/Decode 12' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[5];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S1>/Cast10' */
  crossARINC_in_B.ACE9C_ACE8x_SPD_C_FAILURE = crossARINC_in_B.Decode12;

  /* S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 13' */

  /* Level2 S-Function Block: '<S1>/Decode 13' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[6];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S1>/Cast11' */
  crossARINC_in_B.ACE9C_ACE8x_DELTA_P_FAILURE = crossARINC_in_B.Decode13;

  /* S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 14' */

  /* Level2 S-Function Block: '<S1>/Decode 14' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[7];
    sfcnOutputs(rts,0);
  }

  /* S-Function (signal_decode): '<S1>/C//C++ Code Block3' */
  signal_decode_Outputs_wrapper_cgen(&crossARINC_in_B.Decode14,
    &crossARINC_in_B.CCCodeBlock3, &crossARINC_in_cal->CCCodeBlock3_P1, 1,
    &crossARINC_in_cal->CCCodeBlock3_P2, 1, &crossARINC_in_cal->CCCodeBlock3_P3,
    1, &crossARINC_in_cal->CCCodeBlock3_P4, 1,
    &crossARINC_in_cal->CCCodeBlock3_P5, 1);

  /* DataTypeConversion: '<S1>/Cast15' */
  crossARINC_in_B.ACE9C_ACE8x_DELTA_P_C = static_cast<real32_T>
    (crossARINC_in_B.CCCodeBlock3);

  /* S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 15' */

  /* Level2 S-Function Block: '<S1>/Decode 15' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[8];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S1>/Cast12' */
  crossARINC_in_B.ACE9C_ACE8x_WOW1_C = crossARINC_in_B.Decode15;

  /* S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 16' */

  /* Level2 S-Function Block: '<S1>/Decode 16' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[9];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S1>/Cast13' */
  crossARINC_in_B.ACE9C_ACE8x_WOW2_C = crossARINC_in_B.Decode16;

  /* S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 17' */

  /* Level2 S-Function Block: '<S1>/Decode 17' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[10];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S1>/Cast16' */
  crossARINC_in_B.ACE9C_ACE8x_SPD_C = static_cast<uint8_T>
    (crossARINC_in_B.Decode17);

  /* S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 2' */

  /* Level2 S-Function Block: '<S1>/Decode 2' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[11];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S1>/Cast2' */
  crossARINC_in_B.ACE9C_ACE8x_PPROG = static_cast<uint8_T>
    (crossARINC_in_B.Decode2);

  /* S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 6' */

  /* Level2 S-Function Block: '<S1>/Decode 6' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[12];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S1>/Cast3' */
  crossARINC_in_B.ACE9C_ACE8x_PPROG_FAILURE = crossARINC_in_B.Decode6;

  /* S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 3' */

  /* Level2 S-Function Block: '<S1>/Decode 3' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[13];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S1>/Cast4' */
  crossARINC_in_B.ACE9C_ACE8x_RAM_POS_C_FAILURE = crossARINC_in_B.Decode3;

  /* S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 4' */

  /* Level2 S-Function Block: '<S1>/Decode 4' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[14];
    sfcnOutputs(rts,0);
  }

  /* S-Function (signal_decode): '<S1>/C//C++ Code Block1' */
  signal_decode_Outputs_wrapper_cgen(&crossARINC_in_B.Decode4,
    &crossARINC_in_B.CCCodeBlock1, &crossARINC_in_cal->CCCodeBlock1_P1, 1,
    &crossARINC_in_cal->CCCodeBlock1_P2, 1, &crossARINC_in_cal->CCCodeBlock1_P3,
    1, &crossARINC_in_cal->CCCodeBlock1_P4, 1,
    &crossARINC_in_cal->CCCodeBlock1_P5, 1);

  /* DataTypeConversion: '<S1>/Cast5' */
  crossARINC_in_B.ACE9C_ACE8x_RAM_POS_C = static_cast<real32_T>
    (crossARINC_in_B.CCCodeBlock1);

  /* S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 7' */

  /* Level2 S-Function Block: '<S1>/Decode 7' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[15];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S1>/Cast6' */
  crossARINC_in_B.ACE9C_ACE8x_MODE_C = static_cast<uint8_T>
    (crossARINC_in_B.Decode7);

  /* S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 8' */

  /* Level2 S-Function Block: '<S1>/Decode 8' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[16];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S1>/Cast7' */
  crossARINC_in_B.ACE9C_ACE8x_ROLL_POS_C_FAILURE = crossARINC_in_B.Decode8;

  /* S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 9' */

  /* Level2 S-Function Block: '<S1>/Decode 9' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[17];
    sfcnOutputs(rts,0);
  }

  /* S-Function (signal_decode): '<S1>/C//C++ Code Block2' */
  signal_decode_Outputs_wrapper_cgen(&crossARINC_in_B.Decode9,
    &crossARINC_in_B.CCCodeBlock2, &crossARINC_in_cal->CCCodeBlock2_P1, 1,
    &crossARINC_in_cal->CCCodeBlock2_P2, 1, &crossARINC_in_cal->CCCodeBlock2_P3,
    1, &crossARINC_in_cal->CCCodeBlock2_P4, 1,
    &crossARINC_in_cal->CCCodeBlock2_P5, 1);

  /* DataTypeConversion: '<S1>/Cast14' */
  crossARINC_in_B.ACE9C_ACE8x_ROLL_POS_C = static_cast<real32_T>
    (crossARINC_in_B.CCCodeBlock2);

  /* S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 10' */

  /* Level2 S-Function Block: '<S1>/Decode 10' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[18];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S1>/Cast8' */
  crossARINC_in_B.ACE9C_ACE8x_INC_DEMAND_FAIL = crossARINC_in_B.Decode10;

  /* RelationalOperator: '<S2>/Compare' incorporates:
   *  Constant: '<S2>/Constant'
   */
  crossARINC_in_B.Compare = (crossARINC_in_B.Receivev2[0] >
    crossARINC_in_cal->Constant_Value);

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++crossARINC_in_M->Timing.clockTick0)) {
    ++crossARINC_in_M->Timing.clockTickH0;
  }

  crossARINC_in_M->Timing.t[0] = crossARINC_in_M->Timing.clockTick0 *
    crossARINC_in_M->Timing.stepSize0 + crossARINC_in_M->Timing.clockTickH0 *
    crossARINC_in_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void crossARINC_in_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  rtsiSetSolverName(&crossARINC_in_M->solverInfo,"FixedStepDiscrete");
  crossARINC_in_M->solverInfoPtr = (&crossARINC_in_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = crossARINC_in_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "crossARINC_in_M points to
       static memory which is guaranteed to be non-NULL" */
    crossARINC_in_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    crossARINC_in_M->Timing.sampleTimes =
      (&crossARINC_in_M->Timing.sampleTimesArray[0]);
    crossARINC_in_M->Timing.offsetTimes =
      (&crossARINC_in_M->Timing.offsetTimesArray[0]);

    /* task periods */
    crossARINC_in_M->Timing.sampleTimes[0] = (0.008);

    /* task offsets */
    crossARINC_in_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(crossARINC_in_M, &crossARINC_in_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = crossARINC_in_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    crossARINC_in_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(crossARINC_in_M, -1);
  crossARINC_in_M->Timing.stepSize0 = 0.008;
  crossARINC_in_M->solverInfoPtr = (&crossARINC_in_M->solverInfo);
  crossARINC_in_M->Timing.stepSize = (0.008);
  rtsiSetFixedStepSize(&crossARINC_in_M->solverInfo, 0.008);
  rtsiSetSolverMode(&crossARINC_in_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&crossARINC_in_B)), 0,
                     sizeof(B_crossARINC_in_T));

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&crossARINC_in_DW), 0,
                     sizeof(DW_crossARINC_in_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &crossARINC_in_M->NonInlinedSFcns.sfcnInfo;
    crossARINC_in_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(crossARINC_in_M)));
    crossARINC_in_M->Sizes.numSampTimes = (1);
    rtssSetNumRootSampTimesPtr(sfcnInfo, &crossARINC_in_M->Sizes.numSampTimes);
    crossARINC_in_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (crossARINC_in_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,crossARINC_in_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(crossARINC_in_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(crossARINC_in_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(crossARINC_in_M));
    rtssSetStepSizePtr(sfcnInfo, &crossARINC_in_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(crossARINC_in_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &crossARINC_in_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &crossARINC_in_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &crossARINC_in_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &crossARINC_in_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &crossARINC_in_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &crossARINC_in_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &crossARINC_in_M->solverInfoPtr);
  }

  crossARINC_in_M->Sizes.numSFcns = (19);

  /* register each child */
  {
    (void) std::memset(static_cast<void *>
                       (&crossARINC_in_M->NonInlinedSFcns.childSFunctions[0]), 0,
                       19*sizeof(SimStruct));
    crossARINC_in_M->childSfunctions =
      (&crossARINC_in_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 19; i++) {
        crossARINC_in_M->childSfunctions[i] =
          (&crossARINC_in_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: crossARINC_in/<Root>/Setup v2  (sg_io682_setup_s_v3) */
    {
      SimStruct *rts = crossARINC_in_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_in_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_in_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_in_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_in_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_in_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_in_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_in_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_in_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_in_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_in_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_in_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* path info */
      ssSetModelName(rts, "Setup v2 ");
      ssSetPath(rts, "crossARINC_in/Setup v2 ");
      ssSetRTModel(rts,crossARINC_in_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_in_cal->Setupv2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_in_cal->Setupv2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_in_cal->Setupv2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)crossARINC_in_cal->Setupv2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)crossARINC_in_cal->Setupv2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)crossARINC_in_cal->Setupv2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)crossARINC_in_cal->Setupv2_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)crossARINC_in_cal->Setupv2_P8_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &crossARINC_in_DW.Setupv2_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &crossARINC_in_DW.Setupv2_PWORK[0]);
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

    /* Level2 S-Function Block: crossARINC_in/<Root>/Receive v2  (sg_io682_receive_s_v3) */
    {
      SimStruct *rts = crossARINC_in_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_in_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_in_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_in_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_in_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_in_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_in_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_in_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_in_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_in_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_in_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_in_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn1.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 11);
          ssSetOutputPortSignal(rts, 0, ((real_T *) crossARINC_in_B.Receivev2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Receive v2 ");
      ssSetPath(rts, "crossARINC_in/Receive v2 ");
      ssSetRTModel(rts,crossARINC_in_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_in_cal->Receivev2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_in_cal->Receivev2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_in_cal->Receivev2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)crossARINC_in_cal->Receivev2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)crossARINC_in_cal->Receivev2_P5_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &crossARINC_in_DW.Receivev2_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &crossARINC_in_DW.Receivev2_PWORK[0]);
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

    /* Level2 S-Function Block: crossARINC_in/<S1>/Decode 1 (sg_arinc429_decode_s_v2) */
    {
      SimStruct *rts = crossARINC_in_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_in_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_in_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_in_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_in_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_in_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_in_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_in_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_in_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_in_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_in_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_in_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn2.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, crossARINC_in_B.Receivev2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 11);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn2.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn2.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *) &crossARINC_in_B.Decode1));
        }
      }

      /* path info */
      ssSetModelName(rts, "Decode 1");
      ssSetPath(rts, "crossARINC_in/Decode Channel 1/Decode 1");
      ssSetRTModel(rts,crossARINC_in_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_in_cal->Decode1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_in_cal->Decode1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_in_cal->Decode1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)crossARINC_in_cal->Decode1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)crossARINC_in_cal->Decode1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)crossARINC_in_cal->Decode1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)crossARINC_in_cal->Decode1_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)crossARINC_in_cal->Decode1_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)crossARINC_in_cal->Decode1_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)crossARINC_in_cal->Decode1_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)crossARINC_in_cal->Decode1_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)crossARINC_in_cal->Decode1_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)crossARINC_in_cal->Decode1_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)crossARINC_in_cal->Decode1_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)crossARINC_in_cal->Decode1_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)crossARINC_in_cal->Decode1_P16_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &crossARINC_in_DW.Decode1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &crossARINC_in_DW.Decode1_IWORK[0]);
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

    /* Level2 S-Function Block: crossARINC_in/<S1>/Decode 5 (sg_arinc429_decode_s_v2) */
    {
      SimStruct *rts = crossARINC_in_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_in_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_in_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_in_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_in_M->NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_in_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_in_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_in_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_in_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_in_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_in_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_in_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn3.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn3.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, crossARINC_in_B.Receivev2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 11);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn3.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn3.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *) &crossARINC_in_B.Decode5));
        }
      }

      /* path info */
      ssSetModelName(rts, "Decode 5");
      ssSetPath(rts, "crossARINC_in/Decode Channel 1/Decode 5");
      ssSetRTModel(rts,crossARINC_in_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_in_cal->Decode5_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_in_cal->Decode5_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_in_cal->Decode5_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)crossARINC_in_cal->Decode5_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)crossARINC_in_cal->Decode5_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)crossARINC_in_cal->Decode5_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)crossARINC_in_cal->Decode5_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)crossARINC_in_cal->Decode5_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)crossARINC_in_cal->Decode5_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)crossARINC_in_cal->Decode5_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)crossARINC_in_cal->Decode5_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)crossARINC_in_cal->Decode5_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)crossARINC_in_cal->Decode5_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)crossARINC_in_cal->Decode5_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)crossARINC_in_cal->Decode5_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)crossARINC_in_cal->Decode5_P16_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &crossARINC_in_DW.Decode5_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &crossARINC_in_DW.Decode5_IWORK[0]);
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

    /* Level2 S-Function Block: crossARINC_in/<S1>/Decode 11 (sg_arinc429_decode_s_v2) */
    {
      SimStruct *rts = crossARINC_in_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_in_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_in_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_in_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_in_M->NonInlinedSFcns.blkInfo2[4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_in_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_in_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_in_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_in_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_in_M->NonInlinedSFcns.methods4[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_in_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_in_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn4.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn4.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, crossARINC_in_B.Receivev2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 11);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn4.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn4.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *) &crossARINC_in_B.Decode11));
        }
      }

      /* path info */
      ssSetModelName(rts, "Decode 11");
      ssSetPath(rts, "crossARINC_in/Decode Channel 1/Decode 11");
      ssSetRTModel(rts,crossARINC_in_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_in_cal->Decode11_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_in_cal->Decode11_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_in_cal->Decode11_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)crossARINC_in_cal->Decode11_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)crossARINC_in_cal->Decode11_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)crossARINC_in_cal->Decode11_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)crossARINC_in_cal->Decode11_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)crossARINC_in_cal->Decode11_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)crossARINC_in_cal->Decode11_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)crossARINC_in_cal->Decode11_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)crossARINC_in_cal->Decode11_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)crossARINC_in_cal->Decode11_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)crossARINC_in_cal->Decode11_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)crossARINC_in_cal->Decode11_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)crossARINC_in_cal->Decode11_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)crossARINC_in_cal->Decode11_P16_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &crossARINC_in_DW.Decode11_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &crossARINC_in_DW.Decode11_IWORK[0]);
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

    /* Level2 S-Function Block: crossARINC_in/<S1>/Decode 12 (sg_arinc429_decode_s_v2) */
    {
      SimStruct *rts = crossARINC_in_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_in_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_in_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_in_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_in_M->NonInlinedSFcns.blkInfo2[5]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_in_M->NonInlinedSFcns.inputOutputPortInfo2[5]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_in_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_in_M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_in_M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_in_M->NonInlinedSFcns.methods4[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_in_M->NonInlinedSFcns.statesInfo2[5]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_in_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn5.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn5.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn5.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, crossARINC_in_B.Receivev2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 11);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn5.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn5.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn5.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *) &crossARINC_in_B.Decode12));
        }
      }

      /* path info */
      ssSetModelName(rts, "Decode 12");
      ssSetPath(rts, "crossARINC_in/Decode Channel 1/Decode 12");
      ssSetRTModel(rts,crossARINC_in_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_in_cal->Decode12_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_in_cal->Decode12_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_in_cal->Decode12_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)crossARINC_in_cal->Decode12_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)crossARINC_in_cal->Decode12_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)crossARINC_in_cal->Decode12_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)crossARINC_in_cal->Decode12_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)crossARINC_in_cal->Decode12_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)crossARINC_in_cal->Decode12_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)crossARINC_in_cal->Decode12_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)crossARINC_in_cal->Decode12_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)crossARINC_in_cal->Decode12_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)crossARINC_in_cal->Decode12_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)crossARINC_in_cal->Decode12_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)crossARINC_in_cal->Decode12_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)crossARINC_in_cal->Decode12_P16_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &crossARINC_in_DW.Decode12_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &crossARINC_in_DW.Decode12_IWORK[0]);
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

    /* Level2 S-Function Block: crossARINC_in/<S1>/Decode 13 (sg_arinc429_decode_s_v2) */
    {
      SimStruct *rts = crossARINC_in_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_in_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_in_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_in_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_in_M->NonInlinedSFcns.blkInfo2[6]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_in_M->NonInlinedSFcns.inputOutputPortInfo2[6]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_in_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_in_M->NonInlinedSFcns.methods2[6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_in_M->NonInlinedSFcns.methods3[6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_in_M->NonInlinedSFcns.methods4[6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_in_M->NonInlinedSFcns.statesInfo2[6]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_in_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn6.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn6.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn6.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, crossARINC_in_B.Receivev2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 11);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn6.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn6.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn6.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *) &crossARINC_in_B.Decode13));
        }
      }

      /* path info */
      ssSetModelName(rts, "Decode 13");
      ssSetPath(rts, "crossARINC_in/Decode Channel 1/Decode 13");
      ssSetRTModel(rts,crossARINC_in_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_in_cal->Decode13_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_in_cal->Decode13_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_in_cal->Decode13_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)crossARINC_in_cal->Decode13_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)crossARINC_in_cal->Decode13_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)crossARINC_in_cal->Decode13_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)crossARINC_in_cal->Decode13_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)crossARINC_in_cal->Decode13_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)crossARINC_in_cal->Decode13_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)crossARINC_in_cal->Decode13_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)crossARINC_in_cal->Decode13_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)crossARINC_in_cal->Decode13_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)crossARINC_in_cal->Decode13_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)crossARINC_in_cal->Decode13_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)crossARINC_in_cal->Decode13_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)crossARINC_in_cal->Decode13_P16_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &crossARINC_in_DW.Decode13_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &crossARINC_in_DW.Decode13_IWORK[0]);
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

    /* Level2 S-Function Block: crossARINC_in/<S1>/Decode 14 (sg_arinc429_decode_s_v2) */
    {
      SimStruct *rts = crossARINC_in_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_in_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_in_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_in_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_in_M->NonInlinedSFcns.blkInfo2[7]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_in_M->NonInlinedSFcns.inputOutputPortInfo2[7]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_in_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_in_M->NonInlinedSFcns.methods2[7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_in_M->NonInlinedSFcns.methods3[7]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_in_M->NonInlinedSFcns.methods4[7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_in_M->NonInlinedSFcns.statesInfo2[7]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_in_M->NonInlinedSFcns.periodicStatesInfo[7]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn7.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn7.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn7.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, crossARINC_in_B.Receivev2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 11);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn7.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn7.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn7.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *) &crossARINC_in_B.Decode14));
        }
      }

      /* path info */
      ssSetModelName(rts, "Decode 14");
      ssSetPath(rts, "crossARINC_in/Decode Channel 1/Decode 14");
      ssSetRTModel(rts,crossARINC_in_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_in_cal->Decode14_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_in_cal->Decode14_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_in_cal->Decode14_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)crossARINC_in_cal->Decode14_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)crossARINC_in_cal->Decode14_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)crossARINC_in_cal->Decode14_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)crossARINC_in_cal->Decode14_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)crossARINC_in_cal->Decode14_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)crossARINC_in_cal->Decode14_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)crossARINC_in_cal->Decode14_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)crossARINC_in_cal->Decode14_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)crossARINC_in_cal->Decode14_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)crossARINC_in_cal->Decode14_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)crossARINC_in_cal->Decode14_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)crossARINC_in_cal->Decode14_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)crossARINC_in_cal->Decode14_P16_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &crossARINC_in_DW.Decode14_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn7.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn7.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &crossARINC_in_DW.Decode14_IWORK[0]);
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

    /* Level2 S-Function Block: crossARINC_in/<S1>/Decode 15 (sg_arinc429_decode_s_v2) */
    {
      SimStruct *rts = crossARINC_in_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_in_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_in_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_in_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_in_M->NonInlinedSFcns.blkInfo2[8]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_in_M->NonInlinedSFcns.inputOutputPortInfo2[8]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_in_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_in_M->NonInlinedSFcns.methods2[8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_in_M->NonInlinedSFcns.methods3[8]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_in_M->NonInlinedSFcns.methods4[8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_in_M->NonInlinedSFcns.statesInfo2[8]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_in_M->NonInlinedSFcns.periodicStatesInfo[8]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn8.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn8.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn8.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, crossARINC_in_B.Receivev2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 11);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn8.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn8.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn8.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *) &crossARINC_in_B.Decode15));
        }
      }

      /* path info */
      ssSetModelName(rts, "Decode 15");
      ssSetPath(rts, "crossARINC_in/Decode Channel 1/Decode 15");
      ssSetRTModel(rts,crossARINC_in_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_in_cal->Decode15_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_in_cal->Decode15_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_in_cal->Decode15_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)crossARINC_in_cal->Decode15_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)crossARINC_in_cal->Decode15_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)crossARINC_in_cal->Decode15_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)crossARINC_in_cal->Decode15_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)crossARINC_in_cal->Decode15_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)crossARINC_in_cal->Decode15_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)crossARINC_in_cal->Decode15_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)crossARINC_in_cal->Decode15_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)crossARINC_in_cal->Decode15_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)crossARINC_in_cal->Decode15_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)crossARINC_in_cal->Decode15_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)crossARINC_in_cal->Decode15_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)crossARINC_in_cal->Decode15_P16_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &crossARINC_in_DW.Decode15_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn8.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn8.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &crossARINC_in_DW.Decode15_IWORK[0]);
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

    /* Level2 S-Function Block: crossARINC_in/<S1>/Decode 16 (sg_arinc429_decode_s_v2) */
    {
      SimStruct *rts = crossARINC_in_M->childSfunctions[9];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_in_M->NonInlinedSFcns.Sfcn9.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_in_M->NonInlinedSFcns.Sfcn9.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_in_M->NonInlinedSFcns.Sfcn9.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_in_M->NonInlinedSFcns.blkInfo2[9]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_in_M->NonInlinedSFcns.inputOutputPortInfo2[9]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_in_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_in_M->NonInlinedSFcns.methods2[9]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_in_M->NonInlinedSFcns.methods3[9]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_in_M->NonInlinedSFcns.methods4[9]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_in_M->NonInlinedSFcns.statesInfo2[9]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_in_M->NonInlinedSFcns.periodicStatesInfo[9]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn9.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn9.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn9.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, crossARINC_in_B.Receivev2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 11);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn9.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn9.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn9.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *) &crossARINC_in_B.Decode16));
        }
      }

      /* path info */
      ssSetModelName(rts, "Decode 16");
      ssSetPath(rts, "crossARINC_in/Decode Channel 1/Decode 16");
      ssSetRTModel(rts,crossARINC_in_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_in_cal->Decode16_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_in_cal->Decode16_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_in_cal->Decode16_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)crossARINC_in_cal->Decode16_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)crossARINC_in_cal->Decode16_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)crossARINC_in_cal->Decode16_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)crossARINC_in_cal->Decode16_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)crossARINC_in_cal->Decode16_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)crossARINC_in_cal->Decode16_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)crossARINC_in_cal->Decode16_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)crossARINC_in_cal->Decode16_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)crossARINC_in_cal->Decode16_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)crossARINC_in_cal->Decode16_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)crossARINC_in_cal->Decode16_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)crossARINC_in_cal->Decode16_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)crossARINC_in_cal->Decode16_P16_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &crossARINC_in_DW.Decode16_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn9.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn9.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &crossARINC_in_DW.Decode16_IWORK[0]);
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

    /* Level2 S-Function Block: crossARINC_in/<S1>/Decode 17 (sg_arinc429_decode_s_v2) */
    {
      SimStruct *rts = crossARINC_in_M->childSfunctions[10];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_in_M->NonInlinedSFcns.Sfcn10.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_in_M->NonInlinedSFcns.Sfcn10.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_in_M->NonInlinedSFcns.Sfcn10.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_in_M->NonInlinedSFcns.blkInfo2[10]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_in_M->NonInlinedSFcns.inputOutputPortInfo2[10]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_in_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_in_M->NonInlinedSFcns.methods2[10]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_in_M->NonInlinedSFcns.methods3[10]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_in_M->NonInlinedSFcns.methods4[10]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_in_M->NonInlinedSFcns.statesInfo2[10]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_in_M->NonInlinedSFcns.periodicStatesInfo[10]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn10.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn10.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn10.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, crossARINC_in_B.Receivev2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 11);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn10.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn10.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn10.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *) &crossARINC_in_B.Decode17));
        }
      }

      /* path info */
      ssSetModelName(rts, "Decode 17");
      ssSetPath(rts, "crossARINC_in/Decode Channel 1/Decode 17");
      ssSetRTModel(rts,crossARINC_in_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn10.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_in_cal->Decode17_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_in_cal->Decode17_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_in_cal->Decode17_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)crossARINC_in_cal->Decode17_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)crossARINC_in_cal->Decode17_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)crossARINC_in_cal->Decode17_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)crossARINC_in_cal->Decode17_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)crossARINC_in_cal->Decode17_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)crossARINC_in_cal->Decode17_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)crossARINC_in_cal->Decode17_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)crossARINC_in_cal->Decode17_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)crossARINC_in_cal->Decode17_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)crossARINC_in_cal->Decode17_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)crossARINC_in_cal->Decode17_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)crossARINC_in_cal->Decode17_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)crossARINC_in_cal->Decode17_P16_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &crossARINC_in_DW.Decode17_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn10.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn10.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &crossARINC_in_DW.Decode17_IWORK[0]);
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

    /* Level2 S-Function Block: crossARINC_in/<S1>/Decode 2 (sg_arinc429_decode_s_v2) */
    {
      SimStruct *rts = crossARINC_in_M->childSfunctions[11];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_in_M->NonInlinedSFcns.Sfcn11.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_in_M->NonInlinedSFcns.Sfcn11.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_in_M->NonInlinedSFcns.Sfcn11.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_in_M->NonInlinedSFcns.blkInfo2[11]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_in_M->NonInlinedSFcns.inputOutputPortInfo2[11]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_in_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_in_M->NonInlinedSFcns.methods2[11]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_in_M->NonInlinedSFcns.methods3[11]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_in_M->NonInlinedSFcns.methods4[11]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_in_M->NonInlinedSFcns.statesInfo2[11]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_in_M->NonInlinedSFcns.periodicStatesInfo[11]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn11.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn11.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn11.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, crossARINC_in_B.Receivev2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 11);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn11.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn11.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn11.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *) &crossARINC_in_B.Decode2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Decode 2");
      ssSetPath(rts, "crossARINC_in/Decode Channel 1/Decode 2");
      ssSetRTModel(rts,crossARINC_in_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn11.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_in_cal->Decode2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_in_cal->Decode2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_in_cal->Decode2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)crossARINC_in_cal->Decode2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)crossARINC_in_cal->Decode2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)crossARINC_in_cal->Decode2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)crossARINC_in_cal->Decode2_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)crossARINC_in_cal->Decode2_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)crossARINC_in_cal->Decode2_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)crossARINC_in_cal->Decode2_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)crossARINC_in_cal->Decode2_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)crossARINC_in_cal->Decode2_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)crossARINC_in_cal->Decode2_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)crossARINC_in_cal->Decode2_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)crossARINC_in_cal->Decode2_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)crossARINC_in_cal->Decode2_P16_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &crossARINC_in_DW.Decode2_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn11.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn11.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &crossARINC_in_DW.Decode2_IWORK[0]);
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

    /* Level2 S-Function Block: crossARINC_in/<S1>/Decode 6 (sg_arinc429_decode_s_v2) */
    {
      SimStruct *rts = crossARINC_in_M->childSfunctions[12];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_in_M->NonInlinedSFcns.Sfcn12.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_in_M->NonInlinedSFcns.Sfcn12.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_in_M->NonInlinedSFcns.Sfcn12.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_in_M->NonInlinedSFcns.blkInfo2[12]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_in_M->NonInlinedSFcns.inputOutputPortInfo2[12]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_in_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_in_M->NonInlinedSFcns.methods2[12]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_in_M->NonInlinedSFcns.methods3[12]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_in_M->NonInlinedSFcns.methods4[12]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_in_M->NonInlinedSFcns.statesInfo2[12]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_in_M->NonInlinedSFcns.periodicStatesInfo[12]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn12.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn12.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn12.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, crossARINC_in_B.Receivev2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 11);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn12.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn12.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn12.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *) &crossARINC_in_B.Decode6));
        }
      }

      /* path info */
      ssSetModelName(rts, "Decode 6");
      ssSetPath(rts, "crossARINC_in/Decode Channel 1/Decode 6");
      ssSetRTModel(rts,crossARINC_in_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn12.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_in_cal->Decode6_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_in_cal->Decode6_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_in_cal->Decode6_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)crossARINC_in_cal->Decode6_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)crossARINC_in_cal->Decode6_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)crossARINC_in_cal->Decode6_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)crossARINC_in_cal->Decode6_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)crossARINC_in_cal->Decode6_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)crossARINC_in_cal->Decode6_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)crossARINC_in_cal->Decode6_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)crossARINC_in_cal->Decode6_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)crossARINC_in_cal->Decode6_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)crossARINC_in_cal->Decode6_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)crossARINC_in_cal->Decode6_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)crossARINC_in_cal->Decode6_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)crossARINC_in_cal->Decode6_P16_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &crossARINC_in_DW.Decode6_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn12.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn12.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &crossARINC_in_DW.Decode6_IWORK[0]);
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

    /* Level2 S-Function Block: crossARINC_in/<S1>/Decode 3 (sg_arinc429_decode_s_v2) */
    {
      SimStruct *rts = crossARINC_in_M->childSfunctions[13];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_in_M->NonInlinedSFcns.Sfcn13.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_in_M->NonInlinedSFcns.Sfcn13.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_in_M->NonInlinedSFcns.Sfcn13.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_in_M->NonInlinedSFcns.blkInfo2[13]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_in_M->NonInlinedSFcns.inputOutputPortInfo2[13]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_in_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_in_M->NonInlinedSFcns.methods2[13]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_in_M->NonInlinedSFcns.methods3[13]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_in_M->NonInlinedSFcns.methods4[13]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_in_M->NonInlinedSFcns.statesInfo2[13]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_in_M->NonInlinedSFcns.periodicStatesInfo[13]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn13.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn13.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn13.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, crossARINC_in_B.Receivev2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 11);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn13.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn13.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn13.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *) &crossARINC_in_B.Decode3));
        }
      }

      /* path info */
      ssSetModelName(rts, "Decode 3");
      ssSetPath(rts, "crossARINC_in/Decode Channel 1/Decode 3");
      ssSetRTModel(rts,crossARINC_in_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn13.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_in_cal->Decode3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_in_cal->Decode3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_in_cal->Decode3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)crossARINC_in_cal->Decode3_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)crossARINC_in_cal->Decode3_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)crossARINC_in_cal->Decode3_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)crossARINC_in_cal->Decode3_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)crossARINC_in_cal->Decode3_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)crossARINC_in_cal->Decode3_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)crossARINC_in_cal->Decode3_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)crossARINC_in_cal->Decode3_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)crossARINC_in_cal->Decode3_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)crossARINC_in_cal->Decode3_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)crossARINC_in_cal->Decode3_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)crossARINC_in_cal->Decode3_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)crossARINC_in_cal->Decode3_P16_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &crossARINC_in_DW.Decode3_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn13.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn13.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &crossARINC_in_DW.Decode3_IWORK[0]);
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

    /* Level2 S-Function Block: crossARINC_in/<S1>/Decode 4 (sg_arinc429_decode_s_v2) */
    {
      SimStruct *rts = crossARINC_in_M->childSfunctions[14];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_in_M->NonInlinedSFcns.Sfcn14.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_in_M->NonInlinedSFcns.Sfcn14.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_in_M->NonInlinedSFcns.Sfcn14.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_in_M->NonInlinedSFcns.blkInfo2[14]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_in_M->NonInlinedSFcns.inputOutputPortInfo2[14]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_in_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_in_M->NonInlinedSFcns.methods2[14]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_in_M->NonInlinedSFcns.methods3[14]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_in_M->NonInlinedSFcns.methods4[14]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_in_M->NonInlinedSFcns.statesInfo2[14]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_in_M->NonInlinedSFcns.periodicStatesInfo[14]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn14.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn14.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn14.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, crossARINC_in_B.Receivev2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 11);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn14.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn14.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn14.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *) &crossARINC_in_B.Decode4));
        }
      }

      /* path info */
      ssSetModelName(rts, "Decode 4");
      ssSetPath(rts, "crossARINC_in/Decode Channel 1/Decode 4");
      ssSetRTModel(rts,crossARINC_in_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn14.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_in_cal->Decode4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_in_cal->Decode4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_in_cal->Decode4_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)crossARINC_in_cal->Decode4_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)crossARINC_in_cal->Decode4_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)crossARINC_in_cal->Decode4_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)crossARINC_in_cal->Decode4_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)crossARINC_in_cal->Decode4_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)crossARINC_in_cal->Decode4_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)crossARINC_in_cal->Decode4_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)crossARINC_in_cal->Decode4_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)crossARINC_in_cal->Decode4_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)crossARINC_in_cal->Decode4_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)crossARINC_in_cal->Decode4_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)crossARINC_in_cal->Decode4_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)crossARINC_in_cal->Decode4_P16_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &crossARINC_in_DW.Decode4_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn14.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn14.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &crossARINC_in_DW.Decode4_IWORK[0]);
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

    /* Level2 S-Function Block: crossARINC_in/<S1>/Decode 7 (sg_arinc429_decode_s_v2) */
    {
      SimStruct *rts = crossARINC_in_M->childSfunctions[15];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_in_M->NonInlinedSFcns.Sfcn15.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_in_M->NonInlinedSFcns.Sfcn15.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_in_M->NonInlinedSFcns.Sfcn15.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_in_M->NonInlinedSFcns.blkInfo2[15]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_in_M->NonInlinedSFcns.inputOutputPortInfo2[15]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_in_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_in_M->NonInlinedSFcns.methods2[15]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_in_M->NonInlinedSFcns.methods3[15]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_in_M->NonInlinedSFcns.methods4[15]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_in_M->NonInlinedSFcns.statesInfo2[15]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_in_M->NonInlinedSFcns.periodicStatesInfo[15]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn15.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn15.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn15.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, crossARINC_in_B.Receivev2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 11);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn15.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn15.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn15.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *) &crossARINC_in_B.Decode7));
        }
      }

      /* path info */
      ssSetModelName(rts, "Decode 7");
      ssSetPath(rts, "crossARINC_in/Decode Channel 1/Decode 7");
      ssSetRTModel(rts,crossARINC_in_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn15.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_in_cal->Decode7_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_in_cal->Decode7_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_in_cal->Decode7_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)crossARINC_in_cal->Decode7_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)crossARINC_in_cal->Decode7_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)crossARINC_in_cal->Decode7_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)crossARINC_in_cal->Decode7_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)crossARINC_in_cal->Decode7_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)crossARINC_in_cal->Decode7_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)crossARINC_in_cal->Decode7_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)crossARINC_in_cal->Decode7_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)crossARINC_in_cal->Decode7_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)crossARINC_in_cal->Decode7_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)crossARINC_in_cal->Decode7_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)crossARINC_in_cal->Decode7_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)crossARINC_in_cal->Decode7_P16_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &crossARINC_in_DW.Decode7_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn15.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn15.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &crossARINC_in_DW.Decode7_IWORK[0]);
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

    /* Level2 S-Function Block: crossARINC_in/<S1>/Decode 8 (sg_arinc429_decode_s_v2) */
    {
      SimStruct *rts = crossARINC_in_M->childSfunctions[16];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_in_M->NonInlinedSFcns.Sfcn16.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_in_M->NonInlinedSFcns.Sfcn16.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_in_M->NonInlinedSFcns.Sfcn16.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_in_M->NonInlinedSFcns.blkInfo2[16]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_in_M->NonInlinedSFcns.inputOutputPortInfo2[16]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_in_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_in_M->NonInlinedSFcns.methods2[16]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_in_M->NonInlinedSFcns.methods3[16]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_in_M->NonInlinedSFcns.methods4[16]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_in_M->NonInlinedSFcns.statesInfo2[16]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_in_M->NonInlinedSFcns.periodicStatesInfo[16]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn16.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn16.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn16.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, crossARINC_in_B.Receivev2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 11);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn16.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn16.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn16.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *) &crossARINC_in_B.Decode8));
        }
      }

      /* path info */
      ssSetModelName(rts, "Decode 8");
      ssSetPath(rts, "crossARINC_in/Decode Channel 1/Decode 8");
      ssSetRTModel(rts,crossARINC_in_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn16.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_in_cal->Decode8_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_in_cal->Decode8_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_in_cal->Decode8_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)crossARINC_in_cal->Decode8_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)crossARINC_in_cal->Decode8_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)crossARINC_in_cal->Decode8_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)crossARINC_in_cal->Decode8_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)crossARINC_in_cal->Decode8_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)crossARINC_in_cal->Decode8_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)crossARINC_in_cal->Decode8_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)crossARINC_in_cal->Decode8_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)crossARINC_in_cal->Decode8_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)crossARINC_in_cal->Decode8_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)crossARINC_in_cal->Decode8_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)crossARINC_in_cal->Decode8_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)crossARINC_in_cal->Decode8_P16_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &crossARINC_in_DW.Decode8_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn16.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn16.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &crossARINC_in_DW.Decode8_IWORK[0]);
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

    /* Level2 S-Function Block: crossARINC_in/<S1>/Decode 9 (sg_arinc429_decode_s_v2) */
    {
      SimStruct *rts = crossARINC_in_M->childSfunctions[17];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_in_M->NonInlinedSFcns.Sfcn17.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_in_M->NonInlinedSFcns.Sfcn17.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_in_M->NonInlinedSFcns.Sfcn17.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_in_M->NonInlinedSFcns.blkInfo2[17]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_in_M->NonInlinedSFcns.inputOutputPortInfo2[17]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_in_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_in_M->NonInlinedSFcns.methods2[17]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_in_M->NonInlinedSFcns.methods3[17]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_in_M->NonInlinedSFcns.methods4[17]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_in_M->NonInlinedSFcns.statesInfo2[17]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_in_M->NonInlinedSFcns.periodicStatesInfo[17]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn17.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn17.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn17.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, crossARINC_in_B.Receivev2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 11);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn17.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn17.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn17.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *) &crossARINC_in_B.Decode9));
        }
      }

      /* path info */
      ssSetModelName(rts, "Decode 9");
      ssSetPath(rts, "crossARINC_in/Decode Channel 1/Decode 9");
      ssSetRTModel(rts,crossARINC_in_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn17.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_in_cal->Decode9_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_in_cal->Decode9_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_in_cal->Decode9_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)crossARINC_in_cal->Decode9_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)crossARINC_in_cal->Decode9_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)crossARINC_in_cal->Decode9_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)crossARINC_in_cal->Decode9_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)crossARINC_in_cal->Decode9_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)crossARINC_in_cal->Decode9_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)crossARINC_in_cal->Decode9_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)crossARINC_in_cal->Decode9_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)crossARINC_in_cal->Decode9_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)crossARINC_in_cal->Decode9_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)crossARINC_in_cal->Decode9_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)crossARINC_in_cal->Decode9_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)crossARINC_in_cal->Decode9_P16_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &crossARINC_in_DW.Decode9_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn17.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn17.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &crossARINC_in_DW.Decode9_IWORK[0]);
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

    /* Level2 S-Function Block: crossARINC_in/<S1>/Decode 10 (sg_arinc429_decode_s_v2) */
    {
      SimStruct *rts = crossARINC_in_M->childSfunctions[18];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_in_M->NonInlinedSFcns.Sfcn18.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_in_M->NonInlinedSFcns.Sfcn18.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_in_M->NonInlinedSFcns.Sfcn18.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_in_M->NonInlinedSFcns.blkInfo2[18]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_in_M->NonInlinedSFcns.inputOutputPortInfo2[18]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_in_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_in_M->NonInlinedSFcns.methods2[18]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_in_M->NonInlinedSFcns.methods3[18]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_in_M->NonInlinedSFcns.methods4[18]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_in_M->NonInlinedSFcns.statesInfo2[18]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_in_M->NonInlinedSFcns.periodicStatesInfo[18]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn18.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn18.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn18.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, crossARINC_in_B.Receivev2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 11);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn18.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn18.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &crossARINC_in_M->NonInlinedSFcns.Sfcn18.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *) &crossARINC_in_B.Decode10));
        }
      }

      /* path info */
      ssSetModelName(rts, "Decode 10");
      ssSetPath(rts, "crossARINC_in/Decode Channel 1/Decode 10");
      ssSetRTModel(rts,crossARINC_in_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn18.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_in_cal->Decode10_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_in_cal->Decode10_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_in_cal->Decode10_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)crossARINC_in_cal->Decode10_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)crossARINC_in_cal->Decode10_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)crossARINC_in_cal->Decode10_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)crossARINC_in_cal->Decode10_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)crossARINC_in_cal->Decode10_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)crossARINC_in_cal->Decode10_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)crossARINC_in_cal->Decode10_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)crossARINC_in_cal->Decode10_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)crossARINC_in_cal->Decode10_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)crossARINC_in_cal->Decode10_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)crossARINC_in_cal->Decode10_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)crossARINC_in_cal->Decode10_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)crossARINC_in_cal->Decode10_P16_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &crossARINC_in_DW.Decode10_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn18.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &crossARINC_in_M->NonInlinedSFcns.Sfcn18.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &crossARINC_in_DW.Decode10_IWORK[0]);
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
    SimStruct *rts = crossARINC_in_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_io682_receive_s_v3): '<Root>/Receive v2 ' */
  /* Level2 S-Function Block: '<Root>/Receive v2 ' (sg_io682_receive_s_v3) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 1' */
  /* Level2 S-Function Block: '<S1>/Decode 1' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 5' */
  /* Level2 S-Function Block: '<S1>/Decode 5' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 11' */
  /* Level2 S-Function Block: '<S1>/Decode 11' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 12' */
  /* Level2 S-Function Block: '<S1>/Decode 12' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 13' */
  /* Level2 S-Function Block: '<S1>/Decode 13' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 14' */
  /* Level2 S-Function Block: '<S1>/Decode 14' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 15' */
  /* Level2 S-Function Block: '<S1>/Decode 15' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[8];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 16' */
  /* Level2 S-Function Block: '<S1>/Decode 16' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[9];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 17' */
  /* Level2 S-Function Block: '<S1>/Decode 17' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[10];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 2' */
  /* Level2 S-Function Block: '<S1>/Decode 2' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[11];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 6' */
  /* Level2 S-Function Block: '<S1>/Decode 6' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[12];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 3' */
  /* Level2 S-Function Block: '<S1>/Decode 3' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[13];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 4' */
  /* Level2 S-Function Block: '<S1>/Decode 4' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[14];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 7' */
  /* Level2 S-Function Block: '<S1>/Decode 7' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[15];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 8' */
  /* Level2 S-Function Block: '<S1>/Decode 8' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[16];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 9' */
  /* Level2 S-Function Block: '<S1>/Decode 9' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[17];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 10' */
  /* Level2 S-Function Block: '<S1>/Decode 10' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[18];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Model terminate function */
void crossARINC_in_terminate(void)
{
  /* Terminate for S-Function (sg_io682_setup_s_v3): '<Root>/Setup v2 ' */
  /* Level2 S-Function Block: '<Root>/Setup v2 ' (sg_io682_setup_s_v3) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_io682_receive_s_v3): '<Root>/Receive v2 ' */
  /* Level2 S-Function Block: '<Root>/Receive v2 ' (sg_io682_receive_s_v3) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 1' */
  /* Level2 S-Function Block: '<S1>/Decode 1' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 5' */
  /* Level2 S-Function Block: '<S1>/Decode 5' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 11' */
  /* Level2 S-Function Block: '<S1>/Decode 11' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 12' */
  /* Level2 S-Function Block: '<S1>/Decode 12' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 13' */
  /* Level2 S-Function Block: '<S1>/Decode 13' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 14' */
  /* Level2 S-Function Block: '<S1>/Decode 14' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 15' */
  /* Level2 S-Function Block: '<S1>/Decode 15' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 16' */
  /* Level2 S-Function Block: '<S1>/Decode 16' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 17' */
  /* Level2 S-Function Block: '<S1>/Decode 17' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 2' */
  /* Level2 S-Function Block: '<S1>/Decode 2' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 6' */
  /* Level2 S-Function Block: '<S1>/Decode 6' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[12];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 3' */
  /* Level2 S-Function Block: '<S1>/Decode 3' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[13];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 4' */
  /* Level2 S-Function Block: '<S1>/Decode 4' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 7' */
  /* Level2 S-Function Block: '<S1>/Decode 7' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 8' */
  /* Level2 S-Function Block: '<S1>/Decode 8' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 9' */
  /* Level2 S-Function Block: '<S1>/Decode 9' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[17];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_decode_s_v2): '<S1>/Decode 10' */
  /* Level2 S-Function Block: '<S1>/Decode 10' (sg_arinc429_decode_s_v2) */
  {
    SimStruct *rts = crossARINC_in_M->childSfunctions[18];
    sfcnTerminate(rts);
  }
}
