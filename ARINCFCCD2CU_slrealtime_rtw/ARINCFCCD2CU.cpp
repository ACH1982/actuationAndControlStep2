/*
 * ARINCFCCD2CU.cpp
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

#include "ARINCFCCD2CU.h"
#include "ARINCFCCD2CU_private.h"

/* Block signals (default storage) */
B_ARINCFCCD2CU_T ARINCFCCD2CU_B;

/* Block states (default storage) */
DW_ARINCFCCD2CU_T ARINCFCCD2CU_DW;

/* External inputs (root inport signals with default storage) */
ExtU_ARINCFCCD2CU_T ARINCFCCD2CU_U;

/* Real-time model */
RT_MODEL_ARINCFCCD2CU_T ARINCFCCD2CU_M_ = RT_MODEL_ARINCFCCD2CU_T();
RT_MODEL_ARINCFCCD2CU_T *const ARINCFCCD2CU_M = &ARINCFCCD2CU_M_;
const ACE8C_FCC1 ARINCFCCD2CU_rtZACE8C_FCC1 = { false,/* PS */
  false,                               /* RAM_POS_FAILURE */
  false,                               /* ROLL_POS_FAILURE */
  0.0F,                                /* RAM_POS */
  0.0F,                                /* ROLL_POS */
  0.0F,                                /* GEARING_APPLIED */
  0U,                                  /* SPD */
  false,                               /* SPD_FAILURE */
  0U,                                  /* ACE_ID */
  0U,                                  /* ACE8_MODE */
  0U,                                  /* ACE9_MODE */
  false,                               /* ARINC5_ERR */
  false,                               /* ARINC6_ERR */
  false,                               /* ARINC3_ERR */
  false,                               /* ARINC1_ERR */
  false                                /* ARINC9_ERR */
};

/*
 *         This function updates active task flag for each subrate.
 *         The function is called in the model base rate function.
 *         It maintains SampleHit information to allow scheduling
 *         of the subrates from the base rate function.
 */
void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (ARINCFCCD2CU_M->Timing.TaskCounters.TID[1])++;
  if ((ARINCFCCD2CU_M->Timing.TaskCounters.TID[1]) > 1) {/* Sample time: [0.016s, 0.0s] */
    ARINCFCCD2CU_M->Timing.TaskCounters.TID[1] = 0;
  }

  (ARINCFCCD2CU_M->Timing.TaskCounters.TID[2])++;
  if ((ARINCFCCD2CU_M->Timing.TaskCounters.TID[2]) > 7) {/* Sample time: [0.064s, 0.0s] */
    ARINCFCCD2CU_M->Timing.TaskCounters.TID[2] = 0;
  }
}

/* Model step function for TID0 */
void ARINCFCCD2CU_step0(void)          /* Sample time: [0.008s, 0.0s] */
{
  real_T HoldCosine;
  real_T HoldSine;

  /* Update the flag to indicate when data transfers from
   *  Sample time: [0.008s, 0.0s] to Sample time: [0.016s, 0.0s]  */
  ARINCFCCD2CU_M->Timing.perTaskSampleHits[1] =
    (ARINCFCCD2CU_M->Timing.RateInteraction.TID0_1 == 0);
  (ARINCFCCD2CU_M->Timing.RateInteraction.TID0_1)++;
  if ((ARINCFCCD2CU_M->Timing.RateInteraction.TID0_1) > 1) {
    ARINCFCCD2CU_M->Timing.RateInteraction.TID0_1 = 0;
  }

  /* Update the flag to indicate when data transfers from
   *  Sample time: [0.008s, 0.0s] to Sample time: [0.064s, 0.0s]  */
  ARINCFCCD2CU_M->Timing.perTaskSampleHits[2] =
    (ARINCFCCD2CU_M->Timing.RateInteraction.TID0_2 == 0);
  (ARINCFCCD2CU_M->Timing.RateInteraction.TID0_2)++;
  if ((ARINCFCCD2CU_M->Timing.RateInteraction.TID0_2) > 7) {
    ARINCFCCD2CU_M->Timing.RateInteraction.TID0_2 = 0;
  }

  /* S-Function (sg_io682_setup_s_v3): '<Root>/Setup v2 1' */

  /* Level2 S-Function Block: '<Root>/Setup v2 1' (sg_io682_setup_s_v3) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* Delay: '<Root>/Delay7' */
  ARINCFCCD2CU_B.Delay7 = ARINCFCCD2CU_DW.Delay7_DSTATE[0];

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  ARINCFCCD2CU_B.PulseGenerator = (ARINCFCCD2CU_DW.clockTickCounter <
    ARINCFCCD2CU_cal->PulseGenerator_Duty) && (ARINCFCCD2CU_DW.clockTickCounter >=
    0) ? ARINCFCCD2CU_cal->PulseGenerator_Amp : 0.0;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  if (ARINCFCCD2CU_DW.clockTickCounter >=
      ARINCFCCD2CU_cal->PulseGenerator_Period - 1.0) {
    ARINCFCCD2CU_DW.clockTickCounter = 0;
  } else {
    ARINCFCCD2CU_DW.clockTickCounter++;
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion6' */
  ARINCFCCD2CU_B.DataTypeConversion6 = (ARINCFCCD2CU_B.PulseGenerator != 0.0);

  /* Delay: '<Root>/Delay' */
  ARINCFCCD2CU_B.Delay = ARINCFCCD2CU_DW.Delay_DSTATE[0];

  /* Sin: '<Root>/Sine Wave1' */
  if (ARINCFCCD2CU_DW.systemEnable != 0) {
    ARINCFCCD2CU_DW.lastSin = std::sin(ARINCFCCD2CU_cal->SineWave1_Freq *
      ARINCFCCD2CU_M->Timing.t[0]);
    ARINCFCCD2CU_DW.lastCos = std::cos(ARINCFCCD2CU_cal->SineWave1_Freq *
      ARINCFCCD2CU_M->Timing.t[0]);
    ARINCFCCD2CU_DW.systemEnable = 0;
  }

  /* Sin: '<Root>/Sine Wave1' */
  ARINCFCCD2CU_B.SineWave1 = ((ARINCFCCD2CU_DW.lastSin *
    ARINCFCCD2CU_cal->SineWave1_PCos + ARINCFCCD2CU_DW.lastCos *
    ARINCFCCD2CU_cal->SineWave1_PSin) * ARINCFCCD2CU_cal->SineWave1_HCos +
    (ARINCFCCD2CU_DW.lastCos * ARINCFCCD2CU_cal->SineWave1_PCos -
     ARINCFCCD2CU_DW.lastSin * ARINCFCCD2CU_cal->SineWave1_PSin) *
    ARINCFCCD2CU_cal->SineWave1_Hsin) * ARINCFCCD2CU_cal->SineWave1_Amp +
    ARINCFCCD2CU_cal->SineWave1_Bias;

  /* DataTypeConversion: '<Root>/Data Type Conversion7' */
  ARINCFCCD2CU_B.DataTypeConversion7 = static_cast<real32_T>
    (ARINCFCCD2CU_B.SineWave1);

  /* Sin: '<Root>/Sine Wave3' */
  if (ARINCFCCD2CU_DW.systemEnable_k != 0) {
    ARINCFCCD2CU_DW.lastSin_p = std::sin(ARINCFCCD2CU_cal->SineWave3_Freq *
      ARINCFCCD2CU_M->Timing.t[0]);
    ARINCFCCD2CU_DW.lastCos_e = std::cos(ARINCFCCD2CU_cal->SineWave3_Freq *
      ARINCFCCD2CU_M->Timing.t[0]);
    ARINCFCCD2CU_DW.systemEnable_k = 0;
  }

  /* Sin: '<Root>/Sine Wave3' */
  ARINCFCCD2CU_B.SineWave3 = ((ARINCFCCD2CU_DW.lastSin_p *
    ARINCFCCD2CU_cal->SineWave3_PCos + ARINCFCCD2CU_DW.lastCos_e *
    ARINCFCCD2CU_cal->SineWave3_PSin) * ARINCFCCD2CU_cal->SineWave3_HCos +
    (ARINCFCCD2CU_DW.lastCos_e * ARINCFCCD2CU_cal->SineWave3_PCos -
     ARINCFCCD2CU_DW.lastSin_p * ARINCFCCD2CU_cal->SineWave3_PSin) *
    ARINCFCCD2CU_cal->SineWave3_Hsin) * ARINCFCCD2CU_cal->SineWave3_Amp +
    ARINCFCCD2CU_cal->SineWave3_Bias;

  /* DataTypeConversion: '<Root>/Data Type Conversion9' */
  ARINCFCCD2CU_B.DataTypeConversion9 = static_cast<real32_T>
    (ARINCFCCD2CU_B.SineWave3);

  /* Sin: '<Root>/Sine Wave' */
  if (ARINCFCCD2CU_DW.systemEnable_l != 0) {
    ARINCFCCD2CU_DW.lastSin_n = std::sin(ARINCFCCD2CU_cal->SineWave_Freq *
      ARINCFCCD2CU_M->Timing.t[0]);
    ARINCFCCD2CU_DW.lastCos_g = std::cos(ARINCFCCD2CU_cal->SineWave_Freq *
      ARINCFCCD2CU_M->Timing.t[0]);
    ARINCFCCD2CU_DW.systemEnable_l = 0;
  }

  /* Sin: '<Root>/Sine Wave' */
  ARINCFCCD2CU_B.SineWave = ((ARINCFCCD2CU_DW.lastSin_n *
    ARINCFCCD2CU_cal->SineWave_PCos + ARINCFCCD2CU_DW.lastCos_g *
    ARINCFCCD2CU_cal->SineWave_PSin) * ARINCFCCD2CU_cal->SineWave_HCos +
    (ARINCFCCD2CU_DW.lastCos_g * ARINCFCCD2CU_cal->SineWave_PCos -
     ARINCFCCD2CU_DW.lastSin_n * ARINCFCCD2CU_cal->SineWave_PSin) *
    ARINCFCCD2CU_cal->SineWave_Hsin) * ARINCFCCD2CU_cal->SineWave_Amp +
    ARINCFCCD2CU_cal->SineWave_Bias;

  /* DataTypeConversion: '<Root>/Data Type Conversion3' */
  ARINCFCCD2CU_B.DataTypeConversion3 = static_cast<real32_T>
    (ARINCFCCD2CU_B.SineWave);

  /* Sin: '<Root>/Sine Wave5' */
  if (ARINCFCCD2CU_DW.systemEnable_g != 0) {
    ARINCFCCD2CU_DW.lastSin_l = std::sin(ARINCFCCD2CU_cal->SineWave5_Freq *
      ARINCFCCD2CU_M->Timing.t[0]);
    ARINCFCCD2CU_DW.lastCos_n = std::cos(ARINCFCCD2CU_cal->SineWave5_Freq *
      ARINCFCCD2CU_M->Timing.t[0]);
    ARINCFCCD2CU_DW.systemEnable_g = 0;
  }

  /* Sin: '<Root>/Sine Wave5' */
  ARINCFCCD2CU_B.SineWave5 = ((ARINCFCCD2CU_DW.lastSin_l *
    ARINCFCCD2CU_cal->SineWave5_PCos + ARINCFCCD2CU_DW.lastCos_n *
    ARINCFCCD2CU_cal->SineWave5_PSin) * ARINCFCCD2CU_cal->SineWave5_HCos +
    (ARINCFCCD2CU_DW.lastCos_n * ARINCFCCD2CU_cal->SineWave5_PCos -
     ARINCFCCD2CU_DW.lastSin_l * ARINCFCCD2CU_cal->SineWave5_PSin) *
    ARINCFCCD2CU_cal->SineWave5_Hsin) * ARINCFCCD2CU_cal->SineWave5_Amp +
    ARINCFCCD2CU_cal->SineWave5_Bias;

  /* DataTypeConversion: '<Root>/Data Type Conversion11' */
  HoldSine = std::floor(ARINCFCCD2CU_B.SineWave5);
  if (rtIsNaN(HoldSine) || rtIsInf(HoldSine)) {
    HoldSine = 0.0;
  } else {
    HoldSine = std::fmod(HoldSine, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion11' */
  ARINCFCCD2CU_B.DataTypeConversion11 = static_cast<uint8_T>(HoldSine < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>(static_cast<
    uint8_T>(-HoldSine)))) : static_cast<int32_T>(static_cast<uint8_T>(HoldSine)));

  /* Delay: '<Root>/Delay1' */
  ARINCFCCD2CU_B.Delay1 = ARINCFCCD2CU_DW.Delay1_DSTATE[0];

  /* Sin: '<Root>/Sine Wave4' */
  if (ARINCFCCD2CU_DW.systemEnable_j != 0) {
    ARINCFCCD2CU_DW.lastSin_nv = std::sin(ARINCFCCD2CU_cal->SineWave4_Freq *
      ARINCFCCD2CU_M->Timing.t[0]);
    ARINCFCCD2CU_DW.lastCos_eb = std::cos(ARINCFCCD2CU_cal->SineWave4_Freq *
      ARINCFCCD2CU_M->Timing.t[0]);
    ARINCFCCD2CU_DW.systemEnable_j = 0;
  }

  /* Sin: '<Root>/Sine Wave4' */
  ARINCFCCD2CU_B.SineWave4 = ((ARINCFCCD2CU_DW.lastSin_nv *
    ARINCFCCD2CU_cal->SineWave4_PCos + ARINCFCCD2CU_DW.lastCos_eb *
    ARINCFCCD2CU_cal->SineWave4_PSin) * ARINCFCCD2CU_cal->SineWave4_HCos +
    (ARINCFCCD2CU_DW.lastCos_eb * ARINCFCCD2CU_cal->SineWave4_PCos -
     ARINCFCCD2CU_DW.lastSin_nv * ARINCFCCD2CU_cal->SineWave4_PSin) *
    ARINCFCCD2CU_cal->SineWave4_Hsin) * ARINCFCCD2CU_cal->SineWave4_Amp +
    ARINCFCCD2CU_cal->SineWave4_Bias;

  /* DataTypeConversion: '<Root>/Data Type Conversion4' */
  HoldSine = std::floor(ARINCFCCD2CU_B.SineWave4);
  if (rtIsNaN(HoldSine) || rtIsInf(HoldSine)) {
    HoldSine = 0.0;
  } else {
    HoldSine = std::fmod(HoldSine, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion4' */
  ARINCFCCD2CU_B.DataTypeConversion4 = static_cast<uint8_T>(HoldSine < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-HoldSine)))) : static_cast<int32_T>
    (static_cast<uint8_T>(HoldSine)));

  /* Sin: '<Root>/Sine Wave8' */
  if (ARINCFCCD2CU_DW.systemEnable_m != 0) {
    ARINCFCCD2CU_DW.lastSin_ns = std::sin(ARINCFCCD2CU_cal->SineWave8_Freq *
      ARINCFCCD2CU_M->Timing.t[0]);
    ARINCFCCD2CU_DW.lastCos_f = std::cos(ARINCFCCD2CU_cal->SineWave8_Freq *
      ARINCFCCD2CU_M->Timing.t[0]);
    ARINCFCCD2CU_DW.systemEnable_m = 0;
  }

  /* Sin: '<Root>/Sine Wave8' */
  ARINCFCCD2CU_B.SineWave8 = ((ARINCFCCD2CU_DW.lastSin_ns *
    ARINCFCCD2CU_cal->SineWave8_PCos + ARINCFCCD2CU_DW.lastCos_f *
    ARINCFCCD2CU_cal->SineWave8_PSin) * ARINCFCCD2CU_cal->SineWave8_HCos +
    (ARINCFCCD2CU_DW.lastCos_f * ARINCFCCD2CU_cal->SineWave8_PCos -
     ARINCFCCD2CU_DW.lastSin_ns * ARINCFCCD2CU_cal->SineWave8_PSin) *
    ARINCFCCD2CU_cal->SineWave8_Hsin) * ARINCFCCD2CU_cal->SineWave8_Amp +
    ARINCFCCD2CU_cal->SineWave8_Bias;

  /* DataTypeConversion: '<Root>/Data Type Conversion10' */
  HoldSine = std::floor(ARINCFCCD2CU_B.SineWave8);
  if (rtIsNaN(HoldSine) || rtIsInf(HoldSine)) {
    HoldSine = 0.0;
  } else {
    HoldSine = std::fmod(HoldSine, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion10' */
  ARINCFCCD2CU_B.DataTypeConversion10 = static_cast<uint8_T>(HoldSine < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-HoldSine)))) : static_cast<int32_T>
    (static_cast<uint8_T>(HoldSine)));

  /* Sin: '<Root>/Sine Wave7' */
  if (ARINCFCCD2CU_DW.systemEnable_ky != 0) {
    ARINCFCCD2CU_DW.lastSin_c = std::sin(ARINCFCCD2CU_cal->SineWave7_Freq *
      ARINCFCCD2CU_M->Timing.t[0]);
    ARINCFCCD2CU_DW.lastCos_h = std::cos(ARINCFCCD2CU_cal->SineWave7_Freq *
      ARINCFCCD2CU_M->Timing.t[0]);
    ARINCFCCD2CU_DW.systemEnable_ky = 0;
  }

  /* Sin: '<Root>/Sine Wave7' */
  ARINCFCCD2CU_B.SineWave7 = ((ARINCFCCD2CU_DW.lastSin_c *
    ARINCFCCD2CU_cal->SineWave7_PCos + ARINCFCCD2CU_DW.lastCos_h *
    ARINCFCCD2CU_cal->SineWave7_PSin) * ARINCFCCD2CU_cal->SineWave7_HCos +
    (ARINCFCCD2CU_DW.lastCos_h * ARINCFCCD2CU_cal->SineWave7_PCos -
     ARINCFCCD2CU_DW.lastSin_c * ARINCFCCD2CU_cal->SineWave7_PSin) *
    ARINCFCCD2CU_cal->SineWave7_Hsin) * ARINCFCCD2CU_cal->SineWave7_Amp +
    ARINCFCCD2CU_cal->SineWave7_Bias;

  /* DataTypeConversion: '<Root>/Data Type Conversion5' */
  HoldSine = std::floor(ARINCFCCD2CU_B.SineWave7);
  if (rtIsNaN(HoldSine) || rtIsInf(HoldSine)) {
    HoldSine = 0.0;
  } else {
    HoldSine = std::fmod(HoldSine, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion5' */
  ARINCFCCD2CU_B.DataTypeConversion5 = static_cast<uint8_T>(HoldSine < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-HoldSine)))) : static_cast<int32_T>
    (static_cast<uint8_T>(HoldSine)));

  /* Delay: '<Root>/Delay4' */
  ARINCFCCD2CU_B.Delay4 = ARINCFCCD2CU_DW.Delay4_DSTATE[0];

  /* Delay: '<Root>/Delay5' */
  ARINCFCCD2CU_B.Delay5 = ARINCFCCD2CU_DW.Delay5_DSTATE[0];

  /* Delay: '<Root>/Delay6' */
  ARINCFCCD2CU_B.Delay6 = ARINCFCCD2CU_DW.Delay6_DSTATE[0];

  /* Delay: '<Root>/Delay2' */
  ARINCFCCD2CU_B.Delay2 = ARINCFCCD2CU_DW.Delay2_DSTATE[0];

  /* Delay: '<Root>/Delay3' */
  ARINCFCCD2CU_B.Delay3 = ARINCFCCD2CU_DW.Delay3_DSTATE[0];

  /* DataTypeConversion: '<Root>/Data Type Conversion' */
  ARINCFCCD2CU_B.DataTypeConversion = ARINCFCCD2CU_B.DataTypeConversion9;

  /* S-Function (signal_encode): '<Root>/C//C++ Code Block1' */
  signal_encode_Outputs_wrapper_cgen(&ARINCFCCD2CU_B.DataTypeConversion,
    &ARINCFCCD2CU_B.CCCodeBlock1, &ARINCFCCD2CU_cal->CCCodeBlock1_P1, 1,
    &ARINCFCCD2CU_cal->CCCodeBlock1_P2, 1, &ARINCFCCD2CU_cal->CCCodeBlock1_P3, 1,
    &ARINCFCCD2CU_cal->CCCodeBlock1_P4, 1, &ARINCFCCD2CU_cal->CCCodeBlock1_P5, 1);

  /* Gain: '<Root>/Gain2' */
  ARINCFCCD2CU_B.Gain2 = static_cast<uint32_T>((static_cast<uint64_T>
    (ARINCFCCD2CU_cal->Gain2_Gain) * ARINCFCCD2CU_B.CCCodeBlock1) >> 21);

  /* Gain: '<Root>/Gain' */
  ARINCFCCD2CU_B.Gain = ARINCFCCD2CU_B.Delay ? static_cast<uint32_T>
    (ARINCFCCD2CU_cal->Gain_Gain) << 2 : 0U;

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  ARINCFCCD2CU_B.DataTypeConversion1 = ARINCFCCD2CU_B.DataTypeConversion7;

  /* S-Function (signal_encode): '<Root>/C//C++ Code Block2' */
  signal_encode_Outputs_wrapper_cgen(&ARINCFCCD2CU_B.DataTypeConversion1,
    &ARINCFCCD2CU_B.CCCodeBlock2, &ARINCFCCD2CU_cal->CCCodeBlock2_P1, 1,
    &ARINCFCCD2CU_cal->CCCodeBlock2_P2, 1, &ARINCFCCD2CU_cal->CCCodeBlock2_P3, 1,
    &ARINCFCCD2CU_cal->CCCodeBlock2_P4, 1, &ARINCFCCD2CU_cal->CCCodeBlock2_P5, 1);

  /* Gain: '<Root>/Gain3' */
  ARINCFCCD2CU_B.Gain3 = static_cast<uint32_T>((static_cast<uint64_T>
    (ARINCFCCD2CU_cal->Gain3_Gain) * ARINCFCCD2CU_B.CCCodeBlock2) >> 30);

  /* Gain: '<Root>/Gain1' */
  ARINCFCCD2CU_B.Gain1 = ARINCFCCD2CU_B.DataTypeConversion6 ? static_cast<
    uint32_T>(ARINCFCCD2CU_cal->Gain1_Gain) >> 7 : 0U;

  /* Sum: '<Root>/Add' */
  ARINCFCCD2CU_B.Add = ((ARINCFCCD2CU_B.Gain2 + ARINCFCCD2CU_B.Gain) +
                        ARINCFCCD2CU_B.Gain3) + ARINCFCCD2CU_B.Gain1;

  /* Gain: '<Root>/Gain10' */
  ARINCFCCD2CU_B.Gain10 = ARINCFCCD2CU_B.Delay2 ? static_cast<uint32_T>
    (ARINCFCCD2CU_cal->Gain10_Gain) >> 2 : 0U;

  /* Gain: '<Root>/Gain11' */
  ARINCFCCD2CU_B.Gain11 = ARINCFCCD2CU_B.Delay6 ? static_cast<uint32_T>
    (ARINCFCCD2CU_cal->Gain11_Gain) >> 1 : 0U;

  /* Gain: '<Root>/Gain12' */
  ARINCFCCD2CU_B.Gain12 = ARINCFCCD2CU_B.Delay4 ? static_cast<uint32_T>
    (ARINCFCCD2CU_cal->Gain12_Gain) << 7 : 0U;

  /* Gain: '<Root>/Gain13' */
  ARINCFCCD2CU_B.Gain13 = ARINCFCCD2CU_B.Delay5 ? static_cast<uint32_T>
    (ARINCFCCD2CU_cal->Gain13_Gain) << 8 : 0U;

  /* Gain: '<Root>/Gain14' */
  ARINCFCCD2CU_B.Gain14 = ARINCFCCD2CU_B.Delay3 ? static_cast<uint32_T>
    (ARINCFCCD2CU_cal->Gain14_Gain) : 0U;

  /* Gain: '<Root>/Gain6' */
  ARINCFCCD2CU_B.Gain6 = (static_cast<uint32_T>(ARINCFCCD2CU_cal->Gain6_Gain) *
    ARINCFCCD2CU_B.DataTypeConversion11) << 2;

  /* Gain: '<Root>/Gain5' */
  ARINCFCCD2CU_B.Gain5 = ARINCFCCD2CU_B.Delay1 ? static_cast<uint32_T>
    (ARINCFCCD2CU_cal->Gain5_Gain) << 1 : 0U;

  /* Gain: '<Root>/Gain15' */
  ARINCFCCD2CU_B.Gain15 = ARINCFCCD2CU_B.Delay7 ? static_cast<uint32_T>
    (ARINCFCCD2CU_cal->Gain15_Gain) >> 3 : 0U;

  /* Sum: '<Root>/Add1' */
  ARINCFCCD2CU_B.Add1 = ((((((ARINCFCCD2CU_B.Gain10 + ARINCFCCD2CU_B.Gain11) +
    ARINCFCCD2CU_B.Gain12) + ARINCFCCD2CU_B.Gain13) + ARINCFCCD2CU_B.Gain14) +
    ARINCFCCD2CU_B.Gain6) + ARINCFCCD2CU_B.Gain5) + ARINCFCCD2CU_B.Gain15;

  /* Gain: '<Root>/Gain7' */
  ARINCFCCD2CU_B.Gain7 = (static_cast<uint32_T>(ARINCFCCD2CU_cal->Gain7_Gain) *
    ARINCFCCD2CU_B.DataTypeConversion4) >> 7;

  /* Gain: '<Root>/Gain8' */
  ARINCFCCD2CU_B.Gain8 = (static_cast<uint32_T>(ARINCFCCD2CU_cal->Gain8_Gain) *
    ARINCFCCD2CU_B.DataTypeConversion10) >> 3;

  /* Gain: '<Root>/Gain9' */
  ARINCFCCD2CU_B.Gain9 = (static_cast<uint32_T>(ARINCFCCD2CU_cal->Gain9_Gain) *
    ARINCFCCD2CU_B.DataTypeConversion5) << 1;

  /* Sum: '<Root>/Add2' */
  ARINCFCCD2CU_B.Add2 = (ARINCFCCD2CU_B.Gain7 + ARINCFCCD2CU_B.Gain8) +
    ARINCFCCD2CU_B.Gain9;

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  ARINCFCCD2CU_B.DataTypeConversion2 = ARINCFCCD2CU_B.DataTypeConversion3;

  /* S-Function (signal_encode): '<Root>/C//C++ Code Block3' */
  signal_encode_Outputs_wrapper_cgen(&ARINCFCCD2CU_B.DataTypeConversion2,
    &ARINCFCCD2CU_B.CCCodeBlock3, &ARINCFCCD2CU_cal->CCCodeBlock3_P1, 1,
    &ARINCFCCD2CU_cal->CCCodeBlock3_P2, 1, &ARINCFCCD2CU_cal->CCCodeBlock3_P3, 1,
    &ARINCFCCD2CU_cal->CCCodeBlock3_P4, 1, &ARINCFCCD2CU_cal->CCCodeBlock3_P5, 1);

  /* S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 2' */

  /* Level2 S-Function Block: '<Root>/Encode v2 2' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 3' */

  /* Level2 S-Function Block: '<Root>/Encode v2 3' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* Gain: '<Root>/Gain4' */
  ARINCFCCD2CU_B.Gain4 = static_cast<uint32_T>((static_cast<uint64_T>
    (ARINCFCCD2CU_cal->Gain4_Gain) * ARINCFCCD2CU_B.CCCodeBlock3) >> 29);

  /* S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 4' */

  /* Level2 S-Function Block: '<Root>/Encode v2 4' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 5' */

  /* Level2 S-Function Block: '<Root>/Encode v2 5' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  /* RateTransition: '<Root>/Rate Transition' */
  if (ARINCFCCD2CU_M->Timing.RateInteraction.TID0_1 == 1) {
    ARINCFCCD2CU_DW.RateTransition_WrBufIdx = static_cast<int8_T>
      (ARINCFCCD2CU_DW.RateTransition_WrBufIdx == 0);
  }

  ARINCFCCD2CU_DW.RateTransition_Buf[ARINCFCCD2CU_DW.RateTransition_WrBufIdx] =
    ARINCFCCD2CU_B.Encodev24;

  /* End of RateTransition: '<Root>/Rate Transition' */

  /* RateTransition: '<Root>/Rate Transition1' */
  if (ARINCFCCD2CU_M->Timing.RateInteraction.TID0_1 == 1) {
    ARINCFCCD2CU_DW.RateTransition1_WrBufIdx = static_cast<int8_T>
      (ARINCFCCD2CU_DW.RateTransition1_WrBufIdx == 0);
  }

  ARINCFCCD2CU_DW.RateTransition1_Buf[ARINCFCCD2CU_DW.RateTransition1_WrBufIdx] =
    ARINCFCCD2CU_B.Encodev25;

  /* End of RateTransition: '<Root>/Rate Transition1' */

  /* RateTransition: '<Root>/Rate Transition2' */
  if (ARINCFCCD2CU_M->Timing.RateInteraction.TID0_1 == 1) {
    ARINCFCCD2CU_DW.RateTransition2_WrBufIdx = static_cast<int8_T>
      (ARINCFCCD2CU_DW.RateTransition2_WrBufIdx == 0);
  }

  ARINCFCCD2CU_DW.RateTransition2_Buf[ARINCFCCD2CU_DW.RateTransition2_WrBufIdx] =
    ARINCFCCD2CU_B.Encodev23;

  /* End of RateTransition: '<Root>/Rate Transition2' */

  /* RateTransition: '<Root>/Rate Transition3' */
  if (ARINCFCCD2CU_M->Timing.RateInteraction.TID0_1 == 1) {
    ARINCFCCD2CU_DW.RateTransition3_WrBufIdx = static_cast<int8_T>
      (ARINCFCCD2CU_DW.RateTransition3_WrBufIdx == 0);
  }

  ARINCFCCD2CU_DW.RateTransition3_Buf[ARINCFCCD2CU_DW.RateTransition3_WrBufIdx] =
    ARINCFCCD2CU_B.Encodev22;

  /* End of RateTransition: '<Root>/Rate Transition3' */

  /* Constant: '<Root>/Constant1' */
  ARINCFCCD2CU_B.Constant1 = ARINCFCCD2CU_cal->Constant1_Value;

  /* S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 ' */

  /* Level2 S-Function Block: '<Root>/Encode v2 ' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[5];
    sfcnOutputs(rts,0);
  }

  /* RateTransition: '<Root>/Rate Transition5' */
  if (ARINCFCCD2CU_M->Timing.RateInteraction.TID0_2 == 1) {
    ARINCFCCD2CU_DW.RateTransition5_WrBufIdx = static_cast<int8_T>
      (ARINCFCCD2CU_DW.RateTransition5_WrBufIdx == 0);
  }

  ARINCFCCD2CU_DW.RateTransition5_Buf[ARINCFCCD2CU_DW.RateTransition5_WrBufIdx] =
    ARINCFCCD2CU_B.Encodev2;

  /* End of RateTransition: '<Root>/Rate Transition5' */

  /* Constant: '<Root>/Constant2' */
  ARINCFCCD2CU_B.Constant2 = ARINCFCCD2CU_cal->Constant2_Value;

  /* S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 1' */

  /* Level2 S-Function Block: '<Root>/Encode v2 1' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[6];
    sfcnOutputs(rts,0);
  }

  /* RateTransition: '<Root>/Rate Transition4' */
  if (ARINCFCCD2CU_M->Timing.RateInteraction.TID0_2 == 1) {
    ARINCFCCD2CU_DW.RateTransition4_WrBufIdx = static_cast<int8_T>
      (ARINCFCCD2CU_DW.RateTransition4_WrBufIdx == 0);
  }

  ARINCFCCD2CU_DW.RateTransition4_Buf[ARINCFCCD2CU_DW.RateTransition4_WrBufIdx] =
    ARINCFCCD2CU_B.Encodev21;

  /* End of RateTransition: '<Root>/Rate Transition4' */

  /* Constant: '<Root>/Constant6' */
  ARINCFCCD2CU_B.Constant6 = ARINCFCCD2CU_cal->Constant6_Value;

  /* Update for Delay: '<Root>/Delay7' */
  ARINCFCCD2CU_DW.Delay7_DSTATE[0] = ARINCFCCD2CU_DW.Delay7_DSTATE[1];
  ARINCFCCD2CU_DW.Delay7_DSTATE[1] = ARINCFCCD2CU_B.Delay6;

  /* Update for Delay: '<Root>/Delay' */
  ARINCFCCD2CU_DW.Delay_DSTATE[0] = ARINCFCCD2CU_DW.Delay_DSTATE[1];
  ARINCFCCD2CU_DW.Delay_DSTATE[1] = ARINCFCCD2CU_B.DataTypeConversion6;

  /* Update for Sin: '<Root>/Sine Wave1' */
  HoldSine = ARINCFCCD2CU_DW.lastSin;
  HoldCosine = ARINCFCCD2CU_DW.lastCos;
  ARINCFCCD2CU_DW.lastSin = HoldSine * ARINCFCCD2CU_cal->SineWave1_HCos +
    HoldCosine * ARINCFCCD2CU_cal->SineWave1_Hsin;
  ARINCFCCD2CU_DW.lastCos = HoldCosine * ARINCFCCD2CU_cal->SineWave1_HCos -
    HoldSine * ARINCFCCD2CU_cal->SineWave1_Hsin;

  /* Update for Sin: '<Root>/Sine Wave3' */
  HoldSine = ARINCFCCD2CU_DW.lastSin_p;
  HoldCosine = ARINCFCCD2CU_DW.lastCos_e;
  ARINCFCCD2CU_DW.lastSin_p = HoldSine * ARINCFCCD2CU_cal->SineWave3_HCos +
    HoldCosine * ARINCFCCD2CU_cal->SineWave3_Hsin;
  ARINCFCCD2CU_DW.lastCos_e = HoldCosine * ARINCFCCD2CU_cal->SineWave3_HCos -
    HoldSine * ARINCFCCD2CU_cal->SineWave3_Hsin;

  /* Update for Sin: '<Root>/Sine Wave' */
  HoldSine = ARINCFCCD2CU_DW.lastSin_n;
  HoldCosine = ARINCFCCD2CU_DW.lastCos_g;
  ARINCFCCD2CU_DW.lastSin_n = HoldSine * ARINCFCCD2CU_cal->SineWave_HCos +
    HoldCosine * ARINCFCCD2CU_cal->SineWave_Hsin;
  ARINCFCCD2CU_DW.lastCos_g = HoldCosine * ARINCFCCD2CU_cal->SineWave_HCos -
    HoldSine * ARINCFCCD2CU_cal->SineWave_Hsin;

  /* Update for Sin: '<Root>/Sine Wave5' */
  HoldSine = ARINCFCCD2CU_DW.lastSin_l;
  HoldCosine = ARINCFCCD2CU_DW.lastCos_n;
  ARINCFCCD2CU_DW.lastSin_l = HoldSine * ARINCFCCD2CU_cal->SineWave5_HCos +
    HoldCosine * ARINCFCCD2CU_cal->SineWave5_Hsin;
  ARINCFCCD2CU_DW.lastCos_n = HoldCosine * ARINCFCCD2CU_cal->SineWave5_HCos -
    HoldSine * ARINCFCCD2CU_cal->SineWave5_Hsin;

  /* Update for Delay: '<Root>/Delay1' */
  ARINCFCCD2CU_DW.Delay1_DSTATE[0] = ARINCFCCD2CU_DW.Delay1_DSTATE[1];
  ARINCFCCD2CU_DW.Delay1_DSTATE[1] = ARINCFCCD2CU_B.Delay;

  /* Update for Sin: '<Root>/Sine Wave4' */
  HoldSine = ARINCFCCD2CU_DW.lastSin_nv;
  HoldCosine = ARINCFCCD2CU_DW.lastCos_eb;
  ARINCFCCD2CU_DW.lastSin_nv = HoldSine * ARINCFCCD2CU_cal->SineWave4_HCos +
    HoldCosine * ARINCFCCD2CU_cal->SineWave4_Hsin;
  ARINCFCCD2CU_DW.lastCos_eb = HoldCosine * ARINCFCCD2CU_cal->SineWave4_HCos -
    HoldSine * ARINCFCCD2CU_cal->SineWave4_Hsin;

  /* Update for Sin: '<Root>/Sine Wave8' */
  HoldSine = ARINCFCCD2CU_DW.lastSin_ns;
  HoldCosine = ARINCFCCD2CU_DW.lastCos_f;
  ARINCFCCD2CU_DW.lastSin_ns = HoldSine * ARINCFCCD2CU_cal->SineWave8_HCos +
    HoldCosine * ARINCFCCD2CU_cal->SineWave8_Hsin;
  ARINCFCCD2CU_DW.lastCos_f = HoldCosine * ARINCFCCD2CU_cal->SineWave8_HCos -
    HoldSine * ARINCFCCD2CU_cal->SineWave8_Hsin;

  /* Update for Sin: '<Root>/Sine Wave7' */
  HoldSine = ARINCFCCD2CU_DW.lastSin_c;
  HoldCosine = ARINCFCCD2CU_DW.lastCos_h;
  ARINCFCCD2CU_DW.lastSin_c = HoldSine * ARINCFCCD2CU_cal->SineWave7_HCos +
    HoldCosine * ARINCFCCD2CU_cal->SineWave7_Hsin;
  ARINCFCCD2CU_DW.lastCos_h = HoldCosine * ARINCFCCD2CU_cal->SineWave7_HCos -
    HoldSine * ARINCFCCD2CU_cal->SineWave7_Hsin;

  /* Update for Delay: '<Root>/Delay4' */
  ARINCFCCD2CU_DW.Delay4_DSTATE[0] = ARINCFCCD2CU_DW.Delay4_DSTATE[1];
  ARINCFCCD2CU_DW.Delay4_DSTATE[1] = ARINCFCCD2CU_B.Delay3;

  /* Update for Delay: '<Root>/Delay5' */
  ARINCFCCD2CU_DW.Delay5_DSTATE[0] = ARINCFCCD2CU_DW.Delay5_DSTATE[1];
  ARINCFCCD2CU_DW.Delay5_DSTATE[1] = ARINCFCCD2CU_B.Delay4;

  /* Update for Delay: '<Root>/Delay6' */
  ARINCFCCD2CU_DW.Delay6_DSTATE[0] = ARINCFCCD2CU_DW.Delay6_DSTATE[1];
  ARINCFCCD2CU_DW.Delay6_DSTATE[1] = ARINCFCCD2CU_B.Delay5;

  /* Update for Delay: '<Root>/Delay2' */
  ARINCFCCD2CU_DW.Delay2_DSTATE[0] = ARINCFCCD2CU_DW.Delay2_DSTATE[1];
  ARINCFCCD2CU_DW.Delay2_DSTATE[1] = ARINCFCCD2CU_B.Delay1;

  /* Update for Delay: '<Root>/Delay3' */
  ARINCFCCD2CU_DW.Delay3_DSTATE[0] = ARINCFCCD2CU_DW.Delay3_DSTATE[1];
  ARINCFCCD2CU_DW.Delay3_DSTATE[1] = ARINCFCCD2CU_B.Delay2;

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++ARINCFCCD2CU_M->Timing.clockTick0)) {
    ++ARINCFCCD2CU_M->Timing.clockTickH0;
  }

  ARINCFCCD2CU_M->Timing.t[0] = ARINCFCCD2CU_M->Timing.clockTick0 *
    ARINCFCCD2CU_M->Timing.stepSize0 + ARINCFCCD2CU_M->Timing.clockTickH0 *
    ARINCFCCD2CU_M->Timing.stepSize0 * 4294967296.0;
}

/* Model step function for TID1 */
void ARINCFCCD2CU_step1(void)          /* Sample time: [0.016s, 0.0s] */
{
  /* RateTransition: '<Root>/Rate Transition3' */
  ARINCFCCD2CU_DW.RateTransition3_RdBufIdx = static_cast<int8_T>
    (ARINCFCCD2CU_DW.RateTransition3_RdBufIdx == 0);

  /* RateTransition: '<Root>/Rate Transition3' */
  ARINCFCCD2CU_B.RateTransition3 =
    ARINCFCCD2CU_DW.RateTransition3_Buf[ARINCFCCD2CU_DW.RateTransition3_RdBufIdx];

  /* S-Function (sg_io682_send_s_v3): '<Root>/Send v3 2' */

  /* Level2 S-Function Block: '<Root>/Send v3 2' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[7];
    sfcnOutputs(rts,1);
  }

  /* RateTransition: '<Root>/Rate Transition2' */
  ARINCFCCD2CU_DW.RateTransition2_RdBufIdx = static_cast<int8_T>
    (ARINCFCCD2CU_DW.RateTransition2_RdBufIdx == 0);

  /* RateTransition: '<Root>/Rate Transition2' */
  ARINCFCCD2CU_B.RateTransition2 =
    ARINCFCCD2CU_DW.RateTransition2_Buf[ARINCFCCD2CU_DW.RateTransition2_RdBufIdx];

  /* S-Function (sg_io682_send_s_v3): '<Root>/Send v3 3' */

  /* Level2 S-Function Block: '<Root>/Send v3 3' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[8];
    sfcnOutputs(rts,1);
  }

  /* RateTransition: '<Root>/Rate Transition' */
  ARINCFCCD2CU_DW.RateTransition_RdBufIdx = static_cast<int8_T>
    (ARINCFCCD2CU_DW.RateTransition_RdBufIdx == 0);

  /* RateTransition: '<Root>/Rate Transition' */
  ARINCFCCD2CU_B.RateTransition =
    ARINCFCCD2CU_DW.RateTransition_Buf[ARINCFCCD2CU_DW.RateTransition_RdBufIdx];

  /* S-Function (sg_io682_send_s_v3): '<Root>/Send v3 4' */

  /* Level2 S-Function Block: '<Root>/Send v3 4' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[9];
    sfcnOutputs(rts,1);
  }

  /* RateTransition: '<Root>/Rate Transition1' */
  ARINCFCCD2CU_DW.RateTransition1_RdBufIdx = static_cast<int8_T>
    (ARINCFCCD2CU_DW.RateTransition1_RdBufIdx == 0);

  /* RateTransition: '<Root>/Rate Transition1' */
  ARINCFCCD2CU_B.RateTransition1 =
    ARINCFCCD2CU_DW.RateTransition1_Buf[ARINCFCCD2CU_DW.RateTransition1_RdBufIdx];

  /* S-Function (sg_io682_send_s_v3): '<Root>/Send v3 5' */

  /* Level2 S-Function Block: '<Root>/Send v3 5' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[10];
    sfcnOutputs(rts,1);
  }

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick1"
   * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++ARINCFCCD2CU_M->Timing.clockTick1)) {
    ++ARINCFCCD2CU_M->Timing.clockTickH1;
  }

  ARINCFCCD2CU_M->Timing.t[1] = ARINCFCCD2CU_M->Timing.clockTick1 *
    ARINCFCCD2CU_M->Timing.stepSize1 + ARINCFCCD2CU_M->Timing.clockTickH1 *
    ARINCFCCD2CU_M->Timing.stepSize1 * 4294967296.0;
}

/* Model step function for TID2 */
void ARINCFCCD2CU_step2(void)          /* Sample time: [0.064s, 0.0s] */
{
  /* RateTransition: '<Root>/Rate Transition5' */
  ARINCFCCD2CU_DW.RateTransition5_RdBufIdx = static_cast<int8_T>
    (ARINCFCCD2CU_DW.RateTransition5_RdBufIdx == 0);

  /* RateTransition: '<Root>/Rate Transition5' */
  ARINCFCCD2CU_B.RateTransition5 =
    ARINCFCCD2CU_DW.RateTransition5_Buf[ARINCFCCD2CU_DW.RateTransition5_RdBufIdx];

  /* S-Function (sg_io682_send_s_v3): '<Root>/Send v3 ' */

  /* Level2 S-Function Block: '<Root>/Send v3 ' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[11];
    sfcnOutputs(rts,2);
  }

  /* RateTransition: '<Root>/Rate Transition4' */
  ARINCFCCD2CU_DW.RateTransition4_RdBufIdx = static_cast<int8_T>
    (ARINCFCCD2CU_DW.RateTransition4_RdBufIdx == 0);

  /* RateTransition: '<Root>/Rate Transition4' */
  ARINCFCCD2CU_B.RateTransition4 =
    ARINCFCCD2CU_DW.RateTransition4_Buf[ARINCFCCD2CU_DW.RateTransition4_RdBufIdx];

  /* S-Function (sg_io682_send_s_v3): '<Root>/Send v3 1' */

  /* Level2 S-Function Block: '<Root>/Send v3 1' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[12];
    sfcnOutputs(rts,2);
  }

  /* Update absolute time */
  /* The "clockTick2" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick2"
   * and "Timing.stepSize2". Size of "clockTick2" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick2 and the high bits
   * Timing.clockTickH2. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++ARINCFCCD2CU_M->Timing.clockTick2)) {
    ++ARINCFCCD2CU_M->Timing.clockTickH2;
  }

  ARINCFCCD2CU_M->Timing.t[2] = ARINCFCCD2CU_M->Timing.clockTick2 *
    ARINCFCCD2CU_M->Timing.stepSize2 + ARINCFCCD2CU_M->Timing.clockTickH2 *
    ARINCFCCD2CU_M->Timing.stepSize2 * 4294967296.0;
}

/* Model initialize function */
void ARINCFCCD2CU_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  (ARINCFCCD2CU_M)->Timing.TaskCounters.cLimit[0] = 1;
  (ARINCFCCD2CU_M)->Timing.TaskCounters.cLimit[1] = 2;
  (ARINCFCCD2CU_M)->Timing.TaskCounters.cLimit[2] = 8;
  rtsiSetSolverName(&ARINCFCCD2CU_M->solverInfo,"FixedStepDiscrete");
  ARINCFCCD2CU_M->solverInfoPtr = (&ARINCFCCD2CU_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = ARINCFCCD2CU_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    mdlTsMap[2] = 2;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "ARINCFCCD2CU_M points to
       static memory which is guaranteed to be non-NULL" */
    ARINCFCCD2CU_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    ARINCFCCD2CU_M->Timing.sampleTimes =
      (&ARINCFCCD2CU_M->Timing.sampleTimesArray[0]);
    ARINCFCCD2CU_M->Timing.offsetTimes =
      (&ARINCFCCD2CU_M->Timing.offsetTimesArray[0]);

    /* task periods */
    ARINCFCCD2CU_M->Timing.sampleTimes[0] = (0.008);
    ARINCFCCD2CU_M->Timing.sampleTimes[1] = (0.016);
    ARINCFCCD2CU_M->Timing.sampleTimes[2] = (0.064);

    /* task offsets */
    ARINCFCCD2CU_M->Timing.offsetTimes[0] = (0.0);
    ARINCFCCD2CU_M->Timing.offsetTimes[1] = (0.0);
    ARINCFCCD2CU_M->Timing.offsetTimes[2] = (0.0);
  }

  rtmSetTPtr(ARINCFCCD2CU_M, &ARINCFCCD2CU_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = ARINCFCCD2CU_M->Timing.sampleHitArray;
    int_T *mdlPerTaskSampleHits = ARINCFCCD2CU_M->Timing.perTaskSampleHitsArray;
    ARINCFCCD2CU_M->Timing.perTaskSampleHits = (&mdlPerTaskSampleHits[0]);
    mdlSampleHits[0] = 1;
    ARINCFCCD2CU_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(ARINCFCCD2CU_M, -1);
  ARINCFCCD2CU_M->Timing.stepSize0 = 0.008;
  ARINCFCCD2CU_M->Timing.stepSize1 = 0.016;
  ARINCFCCD2CU_M->Timing.stepSize2 = 0.064;
  ARINCFCCD2CU_M->solverInfoPtr = (&ARINCFCCD2CU_M->solverInfo);
  ARINCFCCD2CU_M->Timing.stepSize = (0.008);
  rtsiSetFixedStepSize(&ARINCFCCD2CU_M->solverInfo, 0.008);
  rtsiSetSolverMode(&ARINCFCCD2CU_M->solverInfo, SOLVER_MODE_MULTITASKING);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&ARINCFCCD2CU_B)), 0,
                     sizeof(B_ARINCFCCD2CU_T));

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&ARINCFCCD2CU_DW), 0,
                     sizeof(DW_ARINCFCCD2CU_T));

  /* external inputs */
  ARINCFCCD2CU_U.In1 = ARINCFCCD2CU_rtZACE8C_FCC1;

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &ARINCFCCD2CU_M->NonInlinedSFcns.sfcnInfo;
    ARINCFCCD2CU_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(ARINCFCCD2CU_M)));
    ARINCFCCD2CU_M->Sizes.numSampTimes = (3);
    rtssSetNumRootSampTimesPtr(sfcnInfo, &ARINCFCCD2CU_M->Sizes.numSampTimes);
    ARINCFCCD2CU_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (ARINCFCCD2CU_M)[0]);
    ARINCFCCD2CU_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr
      (ARINCFCCD2CU_M)[1]);
    ARINCFCCD2CU_M->NonInlinedSFcns.taskTimePtrs[2] = &(rtmGetTPtr
      (ARINCFCCD2CU_M)[2]);
    rtssSetTPtrPtr(sfcnInfo,ARINCFCCD2CU_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(ARINCFCCD2CU_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(ARINCFCCD2CU_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(ARINCFCCD2CU_M));
    rtssSetStepSizePtr(sfcnInfo, &ARINCFCCD2CU_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(ARINCFCCD2CU_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &ARINCFCCD2CU_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &ARINCFCCD2CU_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &ARINCFCCD2CU_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &ARINCFCCD2CU_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &ARINCFCCD2CU_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &ARINCFCCD2CU_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &ARINCFCCD2CU_M->solverInfoPtr);
  }

  ARINCFCCD2CU_M->Sizes.numSFcns = (13);

  /* register each child */
  {
    (void) std::memset(static_cast<void *>
                       (&ARINCFCCD2CU_M->NonInlinedSFcns.childSFunctions[0]), 0,
                       13*sizeof(SimStruct));
    ARINCFCCD2CU_M->childSfunctions =
      (&ARINCFCCD2CU_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 13; i++) {
        ARINCFCCD2CU_M->childSfunctions[i] =
          (&ARINCFCCD2CU_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: ARINCFCCD2CU/<Root>/Setup v2 1 (sg_io682_setup_s_v3) */
    {
      SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ARINCFCCD2CU_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, ARINCFCCD2CU_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* path info */
      ssSetModelName(rts, "Setup v2 1");
      ssSetPath(rts, "ARINCFCCD2CU/Setup v2 1");
      ssSetRTModel(rts,ARINCFCCD2CU_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)ARINCFCCD2CU_cal->Setupv21_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)ARINCFCCD2CU_cal->Setupv21_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)ARINCFCCD2CU_cal->Setupv21_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)ARINCFCCD2CU_cal->Setupv21_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)ARINCFCCD2CU_cal->Setupv21_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)ARINCFCCD2CU_cal->Setupv21_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)ARINCFCCD2CU_cal->Setupv21_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)ARINCFCCD2CU_cal->Setupv21_P8_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &ARINCFCCD2CU_DW.Setupv21_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &ARINCFCCD2CU_DW.Setupv21_PWORK[0]);
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

    /* Level2 S-Function Block: ARINCFCCD2CU/<Root>/Encode v2 2 (sg_arinc429_encode_s_v2) */
    {
      SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ARINCFCCD2CU_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, ARINCFCCD2CU_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn1.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &ARINCFCCD2CU_B.Add2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn1.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &ARINCFCCD2CU_B.Encodev22));
        }
      }

      /* path info */
      ssSetModelName(rts, "Encode v2 2");
      ssSetPath(rts, "ARINCFCCD2CU/Encode v2 2");
      ssSetRTModel(rts,ARINCFCCD2CU_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 15);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)ARINCFCCD2CU_cal->Encodev22_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)ARINCFCCD2CU_cal->Encodev22_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)ARINCFCCD2CU_cal->Encodev22_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)ARINCFCCD2CU_cal->Encodev22_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)ARINCFCCD2CU_cal->Encodev22_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)ARINCFCCD2CU_cal->Encodev22_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)ARINCFCCD2CU_cal->Encodev22_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)ARINCFCCD2CU_cal->Encodev22_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)ARINCFCCD2CU_cal->Encodev22_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)ARINCFCCD2CU_cal->Encodev22_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)ARINCFCCD2CU_cal->Encodev22_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)ARINCFCCD2CU_cal->Encodev22_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)ARINCFCCD2CU_cal->Encodev22_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)ARINCFCCD2CU_cal->Encodev22_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)ARINCFCCD2CU_cal->Encodev22_P15_Size);
      }

      /* registration */
      sg_arinc429_encode_s_v2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.008);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: ARINCFCCD2CU/<Root>/Encode v2 3 (sg_arinc429_encode_s_v2) */
    {
      SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ARINCFCCD2CU_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, ARINCFCCD2CU_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn2.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &ARINCFCCD2CU_B.Add1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn2.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn2.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &ARINCFCCD2CU_B.Encodev23));
        }
      }

      /* path info */
      ssSetModelName(rts, "Encode v2 3");
      ssSetPath(rts, "ARINCFCCD2CU/Encode v2 3");
      ssSetRTModel(rts,ARINCFCCD2CU_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 15);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)ARINCFCCD2CU_cal->Encodev23_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)ARINCFCCD2CU_cal->Encodev23_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)ARINCFCCD2CU_cal->Encodev23_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)ARINCFCCD2CU_cal->Encodev23_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)ARINCFCCD2CU_cal->Encodev23_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)ARINCFCCD2CU_cal->Encodev23_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)ARINCFCCD2CU_cal->Encodev23_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)ARINCFCCD2CU_cal->Encodev23_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)ARINCFCCD2CU_cal->Encodev23_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)ARINCFCCD2CU_cal->Encodev23_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)ARINCFCCD2CU_cal->Encodev23_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)ARINCFCCD2CU_cal->Encodev23_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)ARINCFCCD2CU_cal->Encodev23_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)ARINCFCCD2CU_cal->Encodev23_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)ARINCFCCD2CU_cal->Encodev23_P15_Size);
      }

      /* registration */
      sg_arinc429_encode_s_v2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.008);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: ARINCFCCD2CU/<Root>/Encode v2 4 (sg_arinc429_encode_s_v2) */
    {
      SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ARINCFCCD2CU_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, ARINCFCCD2CU_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn3.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn3.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &ARINCFCCD2CU_B.Gain4);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn3.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn3.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &ARINCFCCD2CU_B.Encodev24));
        }
      }

      /* path info */
      ssSetModelName(rts, "Encode v2 4");
      ssSetPath(rts, "ARINCFCCD2CU/Encode v2 4");
      ssSetRTModel(rts,ARINCFCCD2CU_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 15);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)ARINCFCCD2CU_cal->Encodev24_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)ARINCFCCD2CU_cal->Encodev24_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)ARINCFCCD2CU_cal->Encodev24_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)ARINCFCCD2CU_cal->Encodev24_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)ARINCFCCD2CU_cal->Encodev24_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)ARINCFCCD2CU_cal->Encodev24_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)ARINCFCCD2CU_cal->Encodev24_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)ARINCFCCD2CU_cal->Encodev24_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)ARINCFCCD2CU_cal->Encodev24_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)ARINCFCCD2CU_cal->Encodev24_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)ARINCFCCD2CU_cal->Encodev24_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)ARINCFCCD2CU_cal->Encodev24_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)ARINCFCCD2CU_cal->Encodev24_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)ARINCFCCD2CU_cal->Encodev24_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)ARINCFCCD2CU_cal->Encodev24_P15_Size);
      }

      /* registration */
      sg_arinc429_encode_s_v2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.008);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: ARINCFCCD2CU/<Root>/Encode v2 5 (sg_arinc429_encode_s_v2) */
    {
      SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.blkInfo2[4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ARINCFCCD2CU_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, ARINCFCCD2CU_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods4[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn4.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn4.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &ARINCFCCD2CU_B.Add);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn4.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn4.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &ARINCFCCD2CU_B.Encodev25));
        }
      }

      /* path info */
      ssSetModelName(rts, "Encode v2 5");
      ssSetPath(rts, "ARINCFCCD2CU/Encode v2 5");
      ssSetRTModel(rts,ARINCFCCD2CU_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 15);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)ARINCFCCD2CU_cal->Encodev25_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)ARINCFCCD2CU_cal->Encodev25_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)ARINCFCCD2CU_cal->Encodev25_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)ARINCFCCD2CU_cal->Encodev25_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)ARINCFCCD2CU_cal->Encodev25_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)ARINCFCCD2CU_cal->Encodev25_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)ARINCFCCD2CU_cal->Encodev25_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)ARINCFCCD2CU_cal->Encodev25_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)ARINCFCCD2CU_cal->Encodev25_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)ARINCFCCD2CU_cal->Encodev25_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)ARINCFCCD2CU_cal->Encodev25_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)ARINCFCCD2CU_cal->Encodev25_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)ARINCFCCD2CU_cal->Encodev25_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)ARINCFCCD2CU_cal->Encodev25_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)ARINCFCCD2CU_cal->Encodev25_P15_Size);
      }

      /* registration */
      sg_arinc429_encode_s_v2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.008);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: ARINCFCCD2CU/<Root>/Encode v2  (sg_arinc429_encode_s_v2) */
    {
      SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.blkInfo2[5]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ARINCFCCD2CU_M->NonInlinedSFcns.inputOutputPortInfo2[5]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, ARINCFCCD2CU_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods4[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.statesInfo2[5]);
        ssSetPeriodicStatesInfo(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn5.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn5.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn5.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &ARINCFCCD2CU_B.Constant1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn5.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn5.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn5.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &ARINCFCCD2CU_B.Encodev2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Encode v2 ");
      ssSetPath(rts, "ARINCFCCD2CU/Encode v2 ");
      ssSetRTModel(rts,ARINCFCCD2CU_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 15);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)ARINCFCCD2CU_cal->Encodev2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)ARINCFCCD2CU_cal->Encodev2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)ARINCFCCD2CU_cal->Encodev2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)ARINCFCCD2CU_cal->Encodev2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)ARINCFCCD2CU_cal->Encodev2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)ARINCFCCD2CU_cal->Encodev2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)ARINCFCCD2CU_cal->Encodev2_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)ARINCFCCD2CU_cal->Encodev2_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)ARINCFCCD2CU_cal->Encodev2_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)ARINCFCCD2CU_cal->Encodev2_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)ARINCFCCD2CU_cal->Encodev2_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)ARINCFCCD2CU_cal->Encodev2_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)ARINCFCCD2CU_cal->Encodev2_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)ARINCFCCD2CU_cal->Encodev2_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)ARINCFCCD2CU_cal->Encodev2_P15_Size);
      }

      /* registration */
      sg_arinc429_encode_s_v2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.008);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: ARINCFCCD2CU/<Root>/Encode v2 1 (sg_arinc429_encode_s_v2) */
    {
      SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.blkInfo2[6]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ARINCFCCD2CU_M->NonInlinedSFcns.inputOutputPortInfo2[6]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, ARINCFCCD2CU_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods2[6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods3[6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods4[6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.statesInfo2[6]);
        ssSetPeriodicStatesInfo(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn6.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn6.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn6.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &ARINCFCCD2CU_B.Constant2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn6.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn6.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn6.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &ARINCFCCD2CU_B.Encodev21));
        }
      }

      /* path info */
      ssSetModelName(rts, "Encode v2 1");
      ssSetPath(rts, "ARINCFCCD2CU/Encode v2 1");
      ssSetRTModel(rts,ARINCFCCD2CU_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 15);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)ARINCFCCD2CU_cal->Encodev21_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)ARINCFCCD2CU_cal->Encodev21_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)ARINCFCCD2CU_cal->Encodev21_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)ARINCFCCD2CU_cal->Encodev21_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)ARINCFCCD2CU_cal->Encodev21_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)ARINCFCCD2CU_cal->Encodev21_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)ARINCFCCD2CU_cal->Encodev21_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)ARINCFCCD2CU_cal->Encodev21_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)ARINCFCCD2CU_cal->Encodev21_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)ARINCFCCD2CU_cal->Encodev21_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)ARINCFCCD2CU_cal->Encodev21_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)ARINCFCCD2CU_cal->Encodev21_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)ARINCFCCD2CU_cal->Encodev21_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)ARINCFCCD2CU_cal->Encodev21_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)ARINCFCCD2CU_cal->Encodev21_P15_Size);
      }

      /* registration */
      sg_arinc429_encode_s_v2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.008);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: ARINCFCCD2CU/<Root>/Send v3 2 (sg_io682_send_s_v3) */
    {
      SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.blkInfo2[7]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ARINCFCCD2CU_M->NonInlinedSFcns.inputOutputPortInfo2[7]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, ARINCFCCD2CU_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods2[7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods3[7]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods4[7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.statesInfo2[7]);
        ssSetPeriodicStatesInfo(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.periodicStatesInfo[7]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn7.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn7.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn7.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn7.UPtrs0;
          sfcnUPtrs[0] = &ARINCFCCD2CU_B.RateTransition3;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Send v3 2");
      ssSetPath(rts, "ARINCFCCD2CU/Send v3 2");
      ssSetRTModel(rts,ARINCFCCD2CU_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)ARINCFCCD2CU_cal->Sendv32_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)ARINCFCCD2CU_cal->Sendv32_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)ARINCFCCD2CU_cal->Sendv32_P3_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &ARINCFCCD2CU_DW.Sendv32_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn7.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn7.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &ARINCFCCD2CU_DW.Sendv32_PWORK[0]);
      }

      /* registration */
      sg_io682_send_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.016);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: ARINCFCCD2CU/<Root>/Send v3 3 (sg_io682_send_s_v3) */
    {
      SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.blkInfo2[8]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ARINCFCCD2CU_M->NonInlinedSFcns.inputOutputPortInfo2[8]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, ARINCFCCD2CU_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods2[8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods3[8]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods4[8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.statesInfo2[8]);
        ssSetPeriodicStatesInfo(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.periodicStatesInfo[8]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn8.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn8.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn8.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn8.UPtrs0;
          sfcnUPtrs[0] = &ARINCFCCD2CU_B.RateTransition2;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Send v3 3");
      ssSetPath(rts, "ARINCFCCD2CU/Send v3 3");
      ssSetRTModel(rts,ARINCFCCD2CU_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)ARINCFCCD2CU_cal->Sendv33_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)ARINCFCCD2CU_cal->Sendv33_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)ARINCFCCD2CU_cal->Sendv33_P3_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &ARINCFCCD2CU_DW.Sendv33_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn8.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn8.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &ARINCFCCD2CU_DW.Sendv33_PWORK[0]);
      }

      /* registration */
      sg_io682_send_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.016);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: ARINCFCCD2CU/<Root>/Send v3 4 (sg_io682_send_s_v3) */
    {
      SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[9];

      /* timing info */
      time_T *sfcnPeriod = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn9.sfcnPeriod;
      time_T *sfcnOffset = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn9.sfcnOffset;
      int_T *sfcnTsMap = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn9.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.blkInfo2[9]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ARINCFCCD2CU_M->NonInlinedSFcns.inputOutputPortInfo2[9]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, ARINCFCCD2CU_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods2[9]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods3[9]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods4[9]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.statesInfo2[9]);
        ssSetPeriodicStatesInfo(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.periodicStatesInfo[9]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn9.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn9.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn9.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn9.UPtrs0;
          sfcnUPtrs[0] = &ARINCFCCD2CU_B.RateTransition;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Send v3 4");
      ssSetPath(rts, "ARINCFCCD2CU/Send v3 4");
      ssSetRTModel(rts,ARINCFCCD2CU_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)ARINCFCCD2CU_cal->Sendv34_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)ARINCFCCD2CU_cal->Sendv34_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)ARINCFCCD2CU_cal->Sendv34_P3_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &ARINCFCCD2CU_DW.Sendv34_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn9.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn9.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &ARINCFCCD2CU_DW.Sendv34_PWORK[0]);
      }

      /* registration */
      sg_io682_send_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.016);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: ARINCFCCD2CU/<Root>/Send v3 5 (sg_io682_send_s_v3) */
    {
      SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[10];

      /* timing info */
      time_T *sfcnPeriod = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn10.sfcnPeriod;
      time_T *sfcnOffset = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn10.sfcnOffset;
      int_T *sfcnTsMap = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn10.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.blkInfo2[10]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ARINCFCCD2CU_M->NonInlinedSFcns.inputOutputPortInfo2[10]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, ARINCFCCD2CU_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods2[10]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods3[10]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods4[10]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.statesInfo2[10]);
        ssSetPeriodicStatesInfo(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.periodicStatesInfo[10]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn10.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn10.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn10.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn10.UPtrs0;
          sfcnUPtrs[0] = &ARINCFCCD2CU_B.RateTransition1;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Send v3 5");
      ssSetPath(rts, "ARINCFCCD2CU/Send v3 5");
      ssSetRTModel(rts,ARINCFCCD2CU_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn10.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)ARINCFCCD2CU_cal->Sendv35_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)ARINCFCCD2CU_cal->Sendv35_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)ARINCFCCD2CU_cal->Sendv35_P3_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &ARINCFCCD2CU_DW.Sendv35_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn10.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn10.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &ARINCFCCD2CU_DW.Sendv35_PWORK[0]);
      }

      /* registration */
      sg_io682_send_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.016);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: ARINCFCCD2CU/<Root>/Send v3  (sg_io682_send_s_v3) */
    {
      SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[11];

      /* timing info */
      time_T *sfcnPeriod = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn11.sfcnPeriod;
      time_T *sfcnOffset = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn11.sfcnOffset;
      int_T *sfcnTsMap = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn11.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.blkInfo2[11]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ARINCFCCD2CU_M->NonInlinedSFcns.inputOutputPortInfo2[11]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, ARINCFCCD2CU_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods2[11]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods3[11]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods4[11]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.statesInfo2[11]);
        ssSetPeriodicStatesInfo(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.periodicStatesInfo[11]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn11.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn11.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn11.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn11.UPtrs0;
          sfcnUPtrs[0] = &ARINCFCCD2CU_B.RateTransition5;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Send v3 ");
      ssSetPath(rts, "ARINCFCCD2CU/Send v3 ");
      ssSetRTModel(rts,ARINCFCCD2CU_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn11.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)ARINCFCCD2CU_cal->Sendv3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)ARINCFCCD2CU_cal->Sendv3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)ARINCFCCD2CU_cal->Sendv3_P3_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &ARINCFCCD2CU_DW.Sendv3_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn11.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn11.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &ARINCFCCD2CU_DW.Sendv3_PWORK[0]);
      }

      /* registration */
      sg_io682_send_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.064);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: ARINCFCCD2CU/<Root>/Send v3 1 (sg_io682_send_s_v3) */
    {
      SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[12];

      /* timing info */
      time_T *sfcnPeriod = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn12.sfcnPeriod;
      time_T *sfcnOffset = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn12.sfcnOffset;
      int_T *sfcnTsMap = ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn12.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.blkInfo2[12]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ARINCFCCD2CU_M->NonInlinedSFcns.inputOutputPortInfo2[12]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, ARINCFCCD2CU_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods2[12]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods3[12]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.methods4[12]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &ARINCFCCD2CU_M->NonInlinedSFcns.statesInfo2[12]);
        ssSetPeriodicStatesInfo(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.periodicStatesInfo[12]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn12.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn12.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn12.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn12.UPtrs0;
          sfcnUPtrs[0] = &ARINCFCCD2CU_B.RateTransition4;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Send v3 1");
      ssSetPath(rts, "ARINCFCCD2CU/Send v3 1");
      ssSetRTModel(rts,ARINCFCCD2CU_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn12.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)ARINCFCCD2CU_cal->Sendv31_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)ARINCFCCD2CU_cal->Sendv31_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)ARINCFCCD2CU_cal->Sendv31_P3_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &ARINCFCCD2CU_DW.Sendv31_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn12.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &ARINCFCCD2CU_M->NonInlinedSFcns.Sfcn12.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &ARINCFCCD2CU_DW.Sendv31_PWORK[0]);
      }

      /* registration */
      sg_io682_send_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.064);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Start for S-Function (sg_io682_setup_s_v3): '<Root>/Setup v2 1' */
  /* Level2 S-Function Block: '<Root>/Setup v2 1' (sg_io682_setup_s_v3) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 2' */
  /* Level2 S-Function Block: '<Root>/Encode v2 2' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 3' */
  /* Level2 S-Function Block: '<Root>/Encode v2 3' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 4' */
  /* Level2 S-Function Block: '<Root>/Encode v2 4' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 5' */
  /* Level2 S-Function Block: '<Root>/Encode v2 5' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<Root>/Constant1' */
  ARINCFCCD2CU_B.Constant1 = ARINCFCCD2CU_cal->Constant1_Value;

  /* Start for S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 ' */
  /* Level2 S-Function Block: '<Root>/Encode v2 ' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<Root>/Constant2' */
  ARINCFCCD2CU_B.Constant2 = ARINCFCCD2CU_cal->Constant2_Value;

  /* Start for S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 1' */
  /* Level2 S-Function Block: '<Root>/Encode v2 1' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_io682_send_s_v3): '<Root>/Send v3 2' */
  /* Level2 S-Function Block: '<Root>/Send v3 2' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_io682_send_s_v3): '<Root>/Send v3 3' */
  /* Level2 S-Function Block: '<Root>/Send v3 3' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[8];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_io682_send_s_v3): '<Root>/Send v3 4' */
  /* Level2 S-Function Block: '<Root>/Send v3 4' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[9];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_io682_send_s_v3): '<Root>/Send v3 5' */
  /* Level2 S-Function Block: '<Root>/Send v3 5' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[10];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_io682_send_s_v3): '<Root>/Send v3 ' */
  /* Level2 S-Function Block: '<Root>/Send v3 ' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[11];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_io682_send_s_v3): '<Root>/Send v3 1' */
  /* Level2 S-Function Block: '<Root>/Send v3 1' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[12];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for Delay: '<Root>/Delay7' */
  ARINCFCCD2CU_DW.Delay7_DSTATE[0] = ARINCFCCD2CU_cal->Delay7_InitialCondition;
  ARINCFCCD2CU_DW.Delay7_DSTATE[1] = ARINCFCCD2CU_cal->Delay7_InitialCondition;

  /* InitializeConditions for DiscretePulseGenerator: '<Root>/Pulse Generator' */
  ARINCFCCD2CU_DW.clockTickCounter = 0;

  /* InitializeConditions for Delay: '<Root>/Delay' */
  ARINCFCCD2CU_DW.Delay_DSTATE[0] = ARINCFCCD2CU_cal->Delay_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay1' */
  ARINCFCCD2CU_DW.Delay1_DSTATE[0] = ARINCFCCD2CU_cal->Delay1_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay4' */
  ARINCFCCD2CU_DW.Delay4_DSTATE[0] = ARINCFCCD2CU_cal->Delay4_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay5' */
  ARINCFCCD2CU_DW.Delay5_DSTATE[0] = ARINCFCCD2CU_cal->Delay5_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay6' */
  ARINCFCCD2CU_DW.Delay6_DSTATE[0] = ARINCFCCD2CU_cal->Delay6_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay2' */
  ARINCFCCD2CU_DW.Delay2_DSTATE[0] = ARINCFCCD2CU_cal->Delay2_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay3' */
  ARINCFCCD2CU_DW.Delay3_DSTATE[0] = ARINCFCCD2CU_cal->Delay3_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay' */
  ARINCFCCD2CU_DW.Delay_DSTATE[1] = ARINCFCCD2CU_cal->Delay_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay1' */
  ARINCFCCD2CU_DW.Delay1_DSTATE[1] = ARINCFCCD2CU_cal->Delay1_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay4' */
  ARINCFCCD2CU_DW.Delay4_DSTATE[1] = ARINCFCCD2CU_cal->Delay4_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay5' */
  ARINCFCCD2CU_DW.Delay5_DSTATE[1] = ARINCFCCD2CU_cal->Delay5_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay6' */
  ARINCFCCD2CU_DW.Delay6_DSTATE[1] = ARINCFCCD2CU_cal->Delay6_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay2' */
  ARINCFCCD2CU_DW.Delay2_DSTATE[1] = ARINCFCCD2CU_cal->Delay2_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay3' */
  ARINCFCCD2CU_DW.Delay3_DSTATE[1] = ARINCFCCD2CU_cal->Delay3_InitialCondition;

  /* InitializeConditions for RateTransition: '<Root>/Rate Transition' */
  ARINCFCCD2CU_DW.RateTransition_Buf[0] =
    ARINCFCCD2CU_cal->RateTransition_InitialCondition;
  ARINCFCCD2CU_DW.RateTransition_WrBufIdx = 0;
  ARINCFCCD2CU_DW.RateTransition_RdBufIdx = 1;

  /* InitializeConditions for RateTransition: '<Root>/Rate Transition1' */
  ARINCFCCD2CU_DW.RateTransition1_Buf[0] =
    ARINCFCCD2CU_cal->RateTransition1_InitialConditio;
  ARINCFCCD2CU_DW.RateTransition1_WrBufIdx = 0;
  ARINCFCCD2CU_DW.RateTransition1_RdBufIdx = 1;

  /* InitializeConditions for RateTransition: '<Root>/Rate Transition2' */
  ARINCFCCD2CU_DW.RateTransition2_Buf[0] =
    ARINCFCCD2CU_cal->RateTransition2_InitialConditio;
  ARINCFCCD2CU_DW.RateTransition2_WrBufIdx = 0;
  ARINCFCCD2CU_DW.RateTransition2_RdBufIdx = 1;

  /* InitializeConditions for RateTransition: '<Root>/Rate Transition3' */
  ARINCFCCD2CU_DW.RateTransition3_Buf[0] =
    ARINCFCCD2CU_cal->RateTransition3_InitialConditio;
  ARINCFCCD2CU_DW.RateTransition3_WrBufIdx = 0;
  ARINCFCCD2CU_DW.RateTransition3_RdBufIdx = 1;

  /* InitializeConditions for RateTransition: '<Root>/Rate Transition5' */
  ARINCFCCD2CU_DW.RateTransition5_Buf[0] =
    ARINCFCCD2CU_cal->RateTransition5_InitialConditio;
  ARINCFCCD2CU_DW.RateTransition5_WrBufIdx = 0;
  ARINCFCCD2CU_DW.RateTransition5_RdBufIdx = 1;

  /* InitializeConditions for RateTransition: '<Root>/Rate Transition4' */
  ARINCFCCD2CU_DW.RateTransition4_Buf[0] =
    ARINCFCCD2CU_cal->RateTransition4_InitialConditio;
  ARINCFCCD2CU_DW.RateTransition4_WrBufIdx = 0;
  ARINCFCCD2CU_DW.RateTransition4_RdBufIdx = 1;

  /* Enable for Sin: '<Root>/Sine Wave1' */
  ARINCFCCD2CU_DW.systemEnable = 1;

  /* Enable for Sin: '<Root>/Sine Wave3' */
  ARINCFCCD2CU_DW.systemEnable_k = 1;

  /* Enable for Sin: '<Root>/Sine Wave' */
  ARINCFCCD2CU_DW.systemEnable_l = 1;

  /* Enable for Sin: '<Root>/Sine Wave5' */
  ARINCFCCD2CU_DW.systemEnable_g = 1;

  /* Enable for Sin: '<Root>/Sine Wave4' */
  ARINCFCCD2CU_DW.systemEnable_j = 1;

  /* Enable for Sin: '<Root>/Sine Wave8' */
  ARINCFCCD2CU_DW.systemEnable_m = 1;

  /* Enable for Sin: '<Root>/Sine Wave7' */
  ARINCFCCD2CU_DW.systemEnable_ky = 1;
}

/* Model terminate function */
void ARINCFCCD2CU_terminate(void)
{
  /* Terminate for S-Function (sg_io682_setup_s_v3): '<Root>/Setup v2 1' */
  /* Level2 S-Function Block: '<Root>/Setup v2 1' (sg_io682_setup_s_v3) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 2' */
  /* Level2 S-Function Block: '<Root>/Encode v2 2' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 3' */
  /* Level2 S-Function Block: '<Root>/Encode v2 3' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 4' */
  /* Level2 S-Function Block: '<Root>/Encode v2 4' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 5' */
  /* Level2 S-Function Block: '<Root>/Encode v2 5' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 ' */
  /* Level2 S-Function Block: '<Root>/Encode v2 ' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 1' */
  /* Level2 S-Function Block: '<Root>/Encode v2 1' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_io682_send_s_v3): '<Root>/Send v3 2' */
  /* Level2 S-Function Block: '<Root>/Send v3 2' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_io682_send_s_v3): '<Root>/Send v3 3' */
  /* Level2 S-Function Block: '<Root>/Send v3 3' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_io682_send_s_v3): '<Root>/Send v3 4' */
  /* Level2 S-Function Block: '<Root>/Send v3 4' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_io682_send_s_v3): '<Root>/Send v3 5' */
  /* Level2 S-Function Block: '<Root>/Send v3 5' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_io682_send_s_v3): '<Root>/Send v3 ' */
  /* Level2 S-Function Block: '<Root>/Send v3 ' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_io682_send_s_v3): '<Root>/Send v3 1' */
  /* Level2 S-Function Block: '<Root>/Send v3 1' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = ARINCFCCD2CU_M->childSfunctions[12];
    sfcnTerminate(rts);
  }
}
