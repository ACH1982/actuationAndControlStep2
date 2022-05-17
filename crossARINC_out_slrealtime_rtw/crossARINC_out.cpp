/*
 * crossARINC_out.cpp
 *
 * Code generation for model "crossARINC_out".
 *
 * Model version              : 1.45
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Fri May 13 11:44:52 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "crossARINC_out.h"
#include "crossARINC_out_private.h"

/* Block signals (default storage) */
B_crossARINC_out_T crossARINC_out_B;

/* Block states (default storage) */
DW_crossARINC_out_T crossARINC_out_DW;

/* External inputs (root inport signals with default storage) */
ExtU_crossARINC_out_T crossARINC_out_U;

/* Real-time model */
RT_MODEL_crossARINC_out_T crossARINC_out_M_ = RT_MODEL_crossARINC_out_T();
RT_MODEL_crossARINC_out_T *const crossARINC_out_M = &crossARINC_out_M_;
const ACE9C_ACE8x_9C crossARINC_out_rtZACE9C_ACE8x_9 = { 0.0F,/* ACE9C_ACE8x_GEARING_APPLIED */
  false,                               /* ACE9C_ACE8x_GEARING_APP_F_C */
  0U,                                  /* ACE9C_ACE8x_PPROG */
  false,                               /* ACE9C_ACE8x_PPROG_FAILURE */
  false,                               /* ACE9C_ACE8x_RAM_POS_C_FAILURE */
  0.0F,                                /* ACE9C_ACE8x_RAM_POS_C */
  0U,                                  /* ACE9C_ACE8x_MODE_C */
  false,                               /* ACE9C_ACE8x_ROLL_POS_C_FAILURE */
  0.0F,                                /* ACE9C_ACE8x_ROLL_POS_C */
  false,                               /* ACE9C_ACE8x_INC_DEMAND_FAIL */
  false,                               /* ACE9C_ACE8x_TBI_FLAG_APP */
  false,                               /* ACE9C_ACE8x_SPD_C_FAILURE */
  false,                               /* ACE9C_ACE8x_DELTA_P_FAILURE */
  0.0F,                                /* ACE9C_ACE8x_DELTA_P_C */
  false,                               /* ACE9C_ACE8x_WOW1_C */
  false,                               /* ACE9C_ACE8x_WOW2_C */
  0U                                   /* ACE9C_ACE8x_SPD_C */
};

/* Model step function */
void crossARINC_out_step(void)
{
  real_T HoldCosine;
  real_T HoldSine;

  /* S-Function (sg_io682_setup_s_v3): '<Root>/Setup v2 ' */

  /* Level2 S-Function Block: '<Root>/Setup v2 ' (sg_io682_setup_s_v3) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* Sin: '<Root>/Sine Wave' */
  if (crossARINC_out_DW.systemEnable != 0) {
    crossARINC_out_DW.lastSin = std::sin(crossARINC_out_cal->SineWave_Freq *
      crossARINC_out_M->Timing.t[0]);
    crossARINC_out_DW.lastCos = std::cos(crossARINC_out_cal->SineWave_Freq *
      crossARINC_out_M->Timing.t[0]);
    crossARINC_out_DW.systemEnable = 0;
  }

  /* Sin: '<Root>/Sine Wave' */
  crossARINC_out_B.SineWave = ((crossARINC_out_DW.lastSin *
    crossARINC_out_cal->SineWave_PCos + crossARINC_out_DW.lastCos *
    crossARINC_out_cal->SineWave_PSin) * crossARINC_out_cal->SineWave_HCos +
    (crossARINC_out_DW.lastCos * crossARINC_out_cal->SineWave_PCos -
     crossARINC_out_DW.lastSin * crossARINC_out_cal->SineWave_PSin) *
    crossARINC_out_cal->SineWave_Hsin) * crossARINC_out_cal->SineWave_Amp +
    crossARINC_out_cal->SineWave_Bias;

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  crossARINC_out_B.DataTypeConversion2 = static_cast<real32_T>
    (crossARINC_out_B.SineWave);

  /* DataTypeConversion: '<Root>/Data Type Conversion3' */
  crossARINC_out_B.DataTypeConversion3 = crossARINC_out_B.DataTypeConversion2;

  /* S-Function (signal_encode): '<Root>/C//C++ Code Block4' */
  signal_encode_Outputs_wrapper_cgen(&crossARINC_out_B.DataTypeConversion3,
    &crossARINC_out_B.CCCodeBlock4, &crossARINC_out_cal->CCCodeBlock4_P1, 1,
    &crossARINC_out_cal->CCCodeBlock4_P2, 1,
    &crossARINC_out_cal->CCCodeBlock4_P3, 1,
    &crossARINC_out_cal->CCCodeBlock4_P4, 1,
    &crossARINC_out_cal->CCCodeBlock4_P5, 1);

  /* Gain: '<Root>/Gain10' */
  crossARINC_out_B.Gain10 = static_cast<uint32_T>((static_cast<uint64_T>
    (crossARINC_out_cal->Gain10_Gain) * crossARINC_out_B.CCCodeBlock4) >> 31);

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  crossARINC_out_B.PulseGenerator = (crossARINC_out_DW.clockTickCounter <
    crossARINC_out_cal->PulseGenerator_Duty) &&
    (crossARINC_out_DW.clockTickCounter >= 0) ?
    crossARINC_out_cal->PulseGenerator_Amp : 0.0;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  if (crossARINC_out_DW.clockTickCounter >=
      crossARINC_out_cal->PulseGenerator_Period - 1.0) {
    crossARINC_out_DW.clockTickCounter = 0;
  } else {
    crossARINC_out_DW.clockTickCounter++;
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion6' */
  crossARINC_out_B.DataTypeConversion6 = (crossARINC_out_B.PulseGenerator != 0.0);

  /* Gain: '<Root>/Gain11' */
  crossARINC_out_B.Gain11 = crossARINC_out_B.DataTypeConversion6 ?
    static_cast<uint32_T>(crossARINC_out_cal->Gain11_Gain) << 5 : 0U;

  /* Sin: '<Root>/Sine Wave6' */
  if (crossARINC_out_DW.systemEnable_m != 0) {
    crossARINC_out_DW.lastSin_d = std::sin(crossARINC_out_cal->SineWave6_Freq *
      crossARINC_out_M->Timing.t[0]);
    crossARINC_out_DW.lastCos_g = std::cos(crossARINC_out_cal->SineWave6_Freq *
      crossARINC_out_M->Timing.t[0]);
    crossARINC_out_DW.systemEnable_m = 0;
  }

  /* Sin: '<Root>/Sine Wave6' */
  crossARINC_out_B.SineWave6 = ((crossARINC_out_DW.lastSin_d *
    crossARINC_out_cal->SineWave6_PCos + crossARINC_out_DW.lastCos_g *
    crossARINC_out_cal->SineWave6_PSin) * crossARINC_out_cal->SineWave6_HCos +
    (crossARINC_out_DW.lastCos_g * crossARINC_out_cal->SineWave6_PCos -
     crossARINC_out_DW.lastSin_d * crossARINC_out_cal->SineWave6_PSin) *
    crossARINC_out_cal->SineWave6_Hsin) * crossARINC_out_cal->SineWave6_Amp +
    crossARINC_out_cal->SineWave6_Bias;

  /* DataTypeConversion: '<Root>/Data Type Conversion12' */
  HoldSine = std::floor(crossARINC_out_B.SineWave6);
  if (rtIsNaN(HoldSine) || rtIsInf(HoldSine)) {
    HoldSine = 0.0;
  } else {
    HoldSine = std::fmod(HoldSine, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion12' */
  crossARINC_out_B.DataTypeConversion12 = static_cast<uint8_T>(HoldSine < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-HoldSine)))) : static_cast<int32_T>
    (static_cast<uint8_T>(HoldSine)));

  /* Gain: '<Root>/Gain12' */
  crossARINC_out_B.Gain12 = (static_cast<uint32_T>
    (crossARINC_out_cal->Gain12_Gain) * crossARINC_out_B.DataTypeConversion12) <<
    6;

  /* Delay: '<Root>/Delay' */
  crossARINC_out_B.Delay = crossARINC_out_DW.Delay_DSTATE;

  /* Gain: '<Root>/Gain13' */
  crossARINC_out_B.Gain13 = crossARINC_out_B.Delay ? static_cast<uint32_T>
    (crossARINC_out_cal->Gain13_Gain) << 11 : 0U;

  /* Sum: '<Root>/Add3' */
  crossARINC_out_B.Add3 = ((crossARINC_out_B.Gain10 + crossARINC_out_B.Gain11) +
    crossARINC_out_B.Gain12) + crossARINC_out_B.Gain13;

  /* S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 ' */

  /* Level2 S-Function Block: '<Root>/Encode v2 ' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_io682_send_s_v3): '<Root>/Send v3 ' */

  /* Level2 S-Function Block: '<Root>/Send v3 ' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* Delay: '<Root>/Delay1' */
  crossARINC_out_B.Delay1 = crossARINC_out_DW.Delay1_DSTATE;

  /* Gain: '<Root>/Gain14' */
  crossARINC_out_B.Gain14 = crossARINC_out_B.Delay1 ? static_cast<uint32_T>
    (crossARINC_out_cal->Gain14_Gain) >> 7 : 0U;

  /* Sin: '<Root>/Sine Wave1' */
  if (crossARINC_out_DW.systemEnable_a != 0) {
    crossARINC_out_DW.lastSin_a = std::sin(crossARINC_out_cal->SineWave1_Freq *
      crossARINC_out_M->Timing.t[0]);
    crossARINC_out_DW.lastCos_b = std::cos(crossARINC_out_cal->SineWave1_Freq *
      crossARINC_out_M->Timing.t[0]);
    crossARINC_out_DW.systemEnable_a = 0;
  }

  /* Sin: '<Root>/Sine Wave1' */
  crossARINC_out_B.SineWave1 = ((crossARINC_out_DW.lastSin_a *
    crossARINC_out_cal->SineWave1_PCos + crossARINC_out_DW.lastCos_b *
    crossARINC_out_cal->SineWave1_PSin) * crossARINC_out_cal->SineWave1_HCos +
    (crossARINC_out_DW.lastCos_b * crossARINC_out_cal->SineWave1_PCos -
     crossARINC_out_DW.lastSin_a * crossARINC_out_cal->SineWave1_PSin) *
    crossARINC_out_cal->SineWave1_Hsin) * crossARINC_out_cal->SineWave1_Amp +
    crossARINC_out_cal->SineWave1_Bias;

  /* DataTypeConversion: '<Root>/Data Type Conversion7' */
  crossARINC_out_B.DataTypeConversion7 = static_cast<real32_T>
    (crossARINC_out_B.SineWave1);

  /* DataTypeConversion: '<Root>/Data Type Conversion4' */
  crossARINC_out_B.DataTypeConversion4 = crossARINC_out_B.DataTypeConversion7;

  /* S-Function (signal_encode): '<Root>/C//C++ Code Block5' */
  signal_encode_Outputs_wrapper_cgen(&crossARINC_out_B.DataTypeConversion4,
    &crossARINC_out_B.CCCodeBlock5, &crossARINC_out_cal->CCCodeBlock5_P1, 1,
    &crossARINC_out_cal->CCCodeBlock5_P2, 1,
    &crossARINC_out_cal->CCCodeBlock5_P3, 1,
    &crossARINC_out_cal->CCCodeBlock5_P4, 1,
    &crossARINC_out_cal->CCCodeBlock5_P5, 1);

  /* Gain: '<Root>/Gain15' */
  crossARINC_out_B.Gain15 = static_cast<uint32_T>((static_cast<uint64_T>
    (crossARINC_out_cal->Gain15_Gain) * crossARINC_out_B.CCCodeBlock5) >> 30);

  /* Sin: '<Root>/Sine Wave2' */
  if (crossARINC_out_DW.systemEnable_n != 0) {
    crossARINC_out_DW.lastSin_c = std::sin(crossARINC_out_cal->SineWave2_Freq *
      crossARINC_out_M->Timing.t[0]);
    crossARINC_out_DW.lastCos_p = std::cos(crossARINC_out_cal->SineWave2_Freq *
      crossARINC_out_M->Timing.t[0]);
    crossARINC_out_DW.systemEnable_n = 0;
  }

  /* Sin: '<Root>/Sine Wave2' */
  crossARINC_out_B.SineWave2 = ((crossARINC_out_DW.lastSin_c *
    crossARINC_out_cal->SineWave2_PCos + crossARINC_out_DW.lastCos_p *
    crossARINC_out_cal->SineWave2_PSin) * crossARINC_out_cal->SineWave2_HCos +
    (crossARINC_out_DW.lastCos_p * crossARINC_out_cal->SineWave2_PCos -
     crossARINC_out_DW.lastSin_c * crossARINC_out_cal->SineWave2_PSin) *
    crossARINC_out_cal->SineWave2_Hsin) * crossARINC_out_cal->SineWave2_Amp +
    crossARINC_out_cal->SineWave2_Bias;

  /* DataTypeConversion: '<Root>/Data Type Conversion8' */
  HoldSine = std::floor(crossARINC_out_B.SineWave2);
  if (rtIsNaN(HoldSine) || rtIsInf(HoldSine)) {
    HoldSine = 0.0;
  } else {
    HoldSine = std::fmod(HoldSine, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion8' */
  crossARINC_out_B.DataTypeConversion8 = static_cast<uint8_T>(HoldSine < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>(static_cast<
    uint8_T>(-HoldSine)))) : static_cast<int32_T>(static_cast<uint8_T>(HoldSine)));

  /* Gain: '<Root>/Gain16' */
  crossARINC_out_B.Gain16 = (static_cast<uint32_T>
    (crossARINC_out_cal->Gain16_Gain) * crossARINC_out_B.DataTypeConversion8) <<
    8;

  /* Sum: '<Root>/Add4' */
  crossARINC_out_B.Add4 = (crossARINC_out_B.Gain14 + crossARINC_out_B.Gain15) +
    crossARINC_out_B.Gain16;

  /* S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 1' */

  /* Level2 S-Function Block: '<Root>/Encode v2 1' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_io682_send_s_v3): '<Root>/Send v3 1' */

  /* Level2 S-Function Block: '<Root>/Send v3 1' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  /* Delay: '<Root>/Delay2' */
  crossARINC_out_B.Delay2 = crossARINC_out_DW.Delay2_DSTATE;

  /* Gain: '<Root>/Gain17' */
  crossARINC_out_B.Gain17 = crossARINC_out_B.Delay2 ? static_cast<uint32_T>
    (crossARINC_out_cal->Gain17_Gain) >> 7 : 0U;

  /* Sin: '<Root>/Sine Wave3' */
  if (crossARINC_out_DW.systemEnable_e != 0) {
    crossARINC_out_DW.lastSin_f = std::sin(crossARINC_out_cal->SineWave3_Freq *
      crossARINC_out_M->Timing.t[0]);
    crossARINC_out_DW.lastCos_k = std::cos(crossARINC_out_cal->SineWave3_Freq *
      crossARINC_out_M->Timing.t[0]);
    crossARINC_out_DW.systemEnable_e = 0;
  }

  /* Sin: '<Root>/Sine Wave3' */
  crossARINC_out_B.SineWave3 = ((crossARINC_out_DW.lastSin_f *
    crossARINC_out_cal->SineWave3_PCos + crossARINC_out_DW.lastCos_k *
    crossARINC_out_cal->SineWave3_PSin) * crossARINC_out_cal->SineWave3_HCos +
    (crossARINC_out_DW.lastCos_k * crossARINC_out_cal->SineWave3_PCos -
     crossARINC_out_DW.lastSin_f * crossARINC_out_cal->SineWave3_PSin) *
    crossARINC_out_cal->SineWave3_Hsin) * crossARINC_out_cal->SineWave3_Amp +
    crossARINC_out_cal->SineWave3_Bias;

  /* DataTypeConversion: '<Root>/Data Type Conversion9' */
  crossARINC_out_B.DataTypeConversion9 = static_cast<real32_T>
    (crossARINC_out_B.SineWave3);

  /* DataTypeConversion: '<Root>/Data Type Conversion5' */
  crossARINC_out_B.DataTypeConversion5 = crossARINC_out_B.DataTypeConversion9;

  /* S-Function (signal_encode): '<Root>/C//C++ Code Block6' */
  signal_encode_Outputs_wrapper_cgen(&crossARINC_out_B.DataTypeConversion5,
    &crossARINC_out_B.CCCodeBlock6, &crossARINC_out_cal->CCCodeBlock6_P1, 1,
    &crossARINC_out_cal->CCCodeBlock6_P2, 1,
    &crossARINC_out_cal->CCCodeBlock6_P3, 1,
    &crossARINC_out_cal->CCCodeBlock6_P4, 1,
    &crossARINC_out_cal->CCCodeBlock6_P5, 1);

  /* Gain: '<Root>/Gain21' */
  crossARINC_out_B.Gain21 = static_cast<uint32_T>((static_cast<uint64_T>
    (crossARINC_out_cal->Gain21_Gain) * crossARINC_out_B.CCCodeBlock6) >> 30);

  /* Delay: '<Root>/Delay3' */
  crossARINC_out_B.Delay3 = crossARINC_out_DW.Delay3_DSTATE;

  /* Gain: '<Root>/Gain20' */
  crossARINC_out_B.Gain20 = crossARINC_out_B.Delay3 ? static_cast<uint32_T>
    (crossARINC_out_cal->Gain20_Gain) << 8 : 0U;

  /* Delay: '<Root>/Delay4' */
  crossARINC_out_B.Delay4 = crossARINC_out_DW.Delay4_DSTATE;

  /* Gain: '<Root>/Gain19' */
  crossARINC_out_B.Gain19 = crossARINC_out_B.Delay4 ? static_cast<uint32_T>
    (crossARINC_out_cal->Gain19_Gain) << 9 : 0U;

  /* Delay: '<Root>/Delay5' */
  crossARINC_out_B.Delay5 = crossARINC_out_DW.Delay5_DSTATE;

  /* Gain: '<Root>/Gain18' */
  crossARINC_out_B.Gain18 = crossARINC_out_B.Delay5 ? static_cast<uint32_T>
    (crossARINC_out_cal->Gain18_Gain) << 11 : 0U;

  /* Sum: '<Root>/Add5' */
  crossARINC_out_B.Add5 = (((crossARINC_out_B.Gain17 + crossARINC_out_B.Gain21)
    + crossARINC_out_B.Gain20) + crossARINC_out_B.Gain19) +
    crossARINC_out_B.Gain18;

  /* S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 2' */

  /* Level2 S-Function Block: '<Root>/Encode v2 2' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[5];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_io682_send_s_v3): '<Root>/Send v3 2' */

  /* Level2 S-Function Block: '<Root>/Send v3 2' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[6];
    sfcnOutputs(rts,0);
  }

  /* Delay: '<Root>/Delay6' */
  crossARINC_out_B.Delay6 = crossARINC_out_DW.Delay6_DSTATE;

  /* Gain: '<Root>/Gain1' */
  crossARINC_out_B.Gain1 = crossARINC_out_B.Delay6 ? static_cast<uint32_T>
    (crossARINC_out_cal->Gain1_Gain) >> 7 : 0U;

  /* Sin: '<Root>/Sine Wave4' */
  if (crossARINC_out_DW.systemEnable_g != 0) {
    crossARINC_out_DW.lastSin_b = std::sin(crossARINC_out_cal->SineWave4_Freq *
      crossARINC_out_M->Timing.t[0]);
    crossARINC_out_DW.lastCos_f = std::cos(crossARINC_out_cal->SineWave4_Freq *
      crossARINC_out_M->Timing.t[0]);
    crossARINC_out_DW.systemEnable_g = 0;
  }

  /* Sin: '<Root>/Sine Wave4' */
  crossARINC_out_B.SineWave4 = ((crossARINC_out_DW.lastSin_b *
    crossARINC_out_cal->SineWave4_PCos + crossARINC_out_DW.lastCos_f *
    crossARINC_out_cal->SineWave4_PSin) * crossARINC_out_cal->SineWave4_HCos +
    (crossARINC_out_DW.lastCos_f * crossARINC_out_cal->SineWave4_PCos -
     crossARINC_out_DW.lastSin_b * crossARINC_out_cal->SineWave4_PSin) *
    crossARINC_out_cal->SineWave4_Hsin) * crossARINC_out_cal->SineWave4_Amp +
    crossARINC_out_cal->SineWave4_Bias;

  /* DataTypeConversion: '<Root>/Data Type Conversion10' */
  crossARINC_out_B.DataTypeConversion10 = static_cast<real32_T>
    (crossARINC_out_B.SineWave4);

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  crossARINC_out_B.DataTypeConversion1 = crossARINC_out_B.DataTypeConversion10;

  /* S-Function (signal_encode): '<Root>/C//C++ Code Block1' */
  signal_encode_Outputs_wrapper_cgen(&crossARINC_out_B.DataTypeConversion1,
    &crossARINC_out_B.CCCodeBlock1, &crossARINC_out_cal->CCCodeBlock1_P1, 1,
    &crossARINC_out_cal->CCCodeBlock1_P2, 1,
    &crossARINC_out_cal->CCCodeBlock1_P3, 1,
    &crossARINC_out_cal->CCCodeBlock1_P4, 1,
    &crossARINC_out_cal->CCCodeBlock1_P5, 1);

  /* Gain: '<Root>/Gain5' */
  crossARINC_out_B.Gain5 = static_cast<uint32_T>((static_cast<uint64_T>
    (crossARINC_out_cal->Gain5_Gain) * crossARINC_out_B.CCCodeBlock1) >> 30);

  /* Delay: '<Root>/Delay7' */
  crossARINC_out_B.Delay7 = crossARINC_out_DW.Delay7_DSTATE;

  /* Gain: '<Root>/Gain4' */
  crossARINC_out_B.Gain4 = crossARINC_out_B.Delay7 ? static_cast<uint32_T>
    (crossARINC_out_cal->Gain4_Gain) << 8 : 0U;

  /* Delay: '<Root>/Delay8' */
  crossARINC_out_B.Delay8 = crossARINC_out_DW.Delay8_DSTATE;

  /* Gain: '<Root>/Gain3' */
  crossARINC_out_B.Gain3 = crossARINC_out_B.Delay8 ? static_cast<uint32_T>
    (crossARINC_out_cal->Gain3_Gain) << 9 : 0U;

  /* Sin: '<Root>/Sine Wave5' */
  if (crossARINC_out_DW.systemEnable_c != 0) {
    crossARINC_out_DW.lastSin_h = std::sin(crossARINC_out_cal->SineWave5_Freq *
      crossARINC_out_M->Timing.t[0]);
    crossARINC_out_DW.lastCos_kh = std::cos(crossARINC_out_cal->SineWave5_Freq *
      crossARINC_out_M->Timing.t[0]);
    crossARINC_out_DW.systemEnable_c = 0;
  }

  /* Sin: '<Root>/Sine Wave5' */
  crossARINC_out_B.SineWave5 = ((crossARINC_out_DW.lastSin_h *
    crossARINC_out_cal->SineWave5_PCos + crossARINC_out_DW.lastCos_kh *
    crossARINC_out_cal->SineWave5_PSin) * crossARINC_out_cal->SineWave5_HCos +
    (crossARINC_out_DW.lastCos_kh * crossARINC_out_cal->SineWave5_PCos -
     crossARINC_out_DW.lastSin_h * crossARINC_out_cal->SineWave5_PSin) *
    crossARINC_out_cal->SineWave5_Hsin) * crossARINC_out_cal->SineWave5_Amp +
    crossARINC_out_cal->SineWave5_Bias;

  /* DataTypeConversion: '<Root>/Data Type Conversion11' */
  HoldSine = std::floor(crossARINC_out_B.SineWave5);
  if (rtIsNaN(HoldSine) || rtIsInf(HoldSine)) {
    HoldSine = 0.0;
  } else {
    HoldSine = std::fmod(HoldSine, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion11' */
  crossARINC_out_B.DataTypeConversion11 = static_cast<uint8_T>(HoldSine < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-HoldSine)))) : static_cast<int32_T>
    (static_cast<uint8_T>(HoldSine)));

  /* Gain: '<Root>/Gain2' */
  crossARINC_out_B.Gain2 = (static_cast<uint32_T>(crossARINC_out_cal->Gain2_Gain)
    * crossARINC_out_B.DataTypeConversion11) << 10;

  /* Sum: '<Root>/Add1' */
  crossARINC_out_B.Add1 = (((crossARINC_out_B.Gain1 + crossARINC_out_B.Gain5) +
    crossARINC_out_B.Gain4) + crossARINC_out_B.Gain3) + crossARINC_out_B.Gain2;

  /* S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 3' */

  /* Level2 S-Function Block: '<Root>/Encode v2 3' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[7];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_io682_send_s_v3): '<Root>/Send v3 3' */

  /* Level2 S-Function Block: '<Root>/Send v3 3' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[8];
    sfcnOutputs(rts,0);
  }

  /* Constant: '<Root>/Constant6' */
  crossARINC_out_B.Constant6 = crossARINC_out_cal->Constant6_Value;

  /* Update for Sin: '<Root>/Sine Wave' */
  HoldSine = crossARINC_out_DW.lastSin;
  HoldCosine = crossARINC_out_DW.lastCos;
  crossARINC_out_DW.lastSin = HoldSine * crossARINC_out_cal->SineWave_HCos +
    HoldCosine * crossARINC_out_cal->SineWave_Hsin;
  crossARINC_out_DW.lastCos = HoldCosine * crossARINC_out_cal->SineWave_HCos -
    HoldSine * crossARINC_out_cal->SineWave_Hsin;

  /* Update for Sin: '<Root>/Sine Wave6' */
  HoldSine = crossARINC_out_DW.lastSin_d;
  HoldCosine = crossARINC_out_DW.lastCos_g;
  crossARINC_out_DW.lastSin_d = HoldSine * crossARINC_out_cal->SineWave6_HCos +
    HoldCosine * crossARINC_out_cal->SineWave6_Hsin;
  crossARINC_out_DW.lastCos_g = HoldCosine * crossARINC_out_cal->SineWave6_HCos
    - HoldSine * crossARINC_out_cal->SineWave6_Hsin;

  /* Update for Delay: '<Root>/Delay' */
  crossARINC_out_DW.Delay_DSTATE = crossARINC_out_B.DataTypeConversion6;

  /* Update for Delay: '<Root>/Delay1' */
  crossARINC_out_DW.Delay1_DSTATE = crossARINC_out_B.Delay;

  /* Update for Sin: '<Root>/Sine Wave1' */
  HoldSine = crossARINC_out_DW.lastSin_a;
  HoldCosine = crossARINC_out_DW.lastCos_b;
  crossARINC_out_DW.lastSin_a = HoldSine * crossARINC_out_cal->SineWave1_HCos +
    HoldCosine * crossARINC_out_cal->SineWave1_Hsin;
  crossARINC_out_DW.lastCos_b = HoldCosine * crossARINC_out_cal->SineWave1_HCos
    - HoldSine * crossARINC_out_cal->SineWave1_Hsin;

  /* Update for Sin: '<Root>/Sine Wave2' */
  HoldSine = crossARINC_out_DW.lastSin_c;
  HoldCosine = crossARINC_out_DW.lastCos_p;
  crossARINC_out_DW.lastSin_c = HoldSine * crossARINC_out_cal->SineWave2_HCos +
    HoldCosine * crossARINC_out_cal->SineWave2_Hsin;
  crossARINC_out_DW.lastCos_p = HoldCosine * crossARINC_out_cal->SineWave2_HCos
    - HoldSine * crossARINC_out_cal->SineWave2_Hsin;

  /* Update for Delay: '<Root>/Delay2' */
  crossARINC_out_DW.Delay2_DSTATE = crossARINC_out_B.Delay1;

  /* Update for Sin: '<Root>/Sine Wave3' */
  HoldSine = crossARINC_out_DW.lastSin_f;
  HoldCosine = crossARINC_out_DW.lastCos_k;
  crossARINC_out_DW.lastSin_f = HoldSine * crossARINC_out_cal->SineWave3_HCos +
    HoldCosine * crossARINC_out_cal->SineWave3_Hsin;
  crossARINC_out_DW.lastCos_k = HoldCosine * crossARINC_out_cal->SineWave3_HCos
    - HoldSine * crossARINC_out_cal->SineWave3_Hsin;

  /* Update for Delay: '<Root>/Delay3' */
  crossARINC_out_DW.Delay3_DSTATE = crossARINC_out_B.Delay2;

  /* Update for Delay: '<Root>/Delay4' */
  crossARINC_out_DW.Delay4_DSTATE = crossARINC_out_B.Delay3;

  /* Update for Delay: '<Root>/Delay5' */
  crossARINC_out_DW.Delay5_DSTATE = crossARINC_out_B.Delay4;

  /* Update for Delay: '<Root>/Delay6' */
  crossARINC_out_DW.Delay6_DSTATE = crossARINC_out_B.Delay5;

  /* Update for Sin: '<Root>/Sine Wave4' */
  HoldSine = crossARINC_out_DW.lastSin_b;
  HoldCosine = crossARINC_out_DW.lastCos_f;
  crossARINC_out_DW.lastSin_b = HoldSine * crossARINC_out_cal->SineWave4_HCos +
    HoldCosine * crossARINC_out_cal->SineWave4_Hsin;
  crossARINC_out_DW.lastCos_f = HoldCosine * crossARINC_out_cal->SineWave4_HCos
    - HoldSine * crossARINC_out_cal->SineWave4_Hsin;

  /* Update for Delay: '<Root>/Delay7' */
  crossARINC_out_DW.Delay7_DSTATE = crossARINC_out_B.Delay6;

  /* Update for Delay: '<Root>/Delay8' */
  crossARINC_out_DW.Delay8_DSTATE = crossARINC_out_B.Delay7;

  /* Update for Sin: '<Root>/Sine Wave5' */
  HoldSine = crossARINC_out_DW.lastSin_h;
  HoldCosine = crossARINC_out_DW.lastCos_kh;
  crossARINC_out_DW.lastSin_h = HoldSine * crossARINC_out_cal->SineWave5_HCos +
    HoldCosine * crossARINC_out_cal->SineWave5_Hsin;
  crossARINC_out_DW.lastCos_kh = HoldCosine * crossARINC_out_cal->SineWave5_HCos
    - HoldSine * crossARINC_out_cal->SineWave5_Hsin;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++crossARINC_out_M->Timing.clockTick0)) {
    ++crossARINC_out_M->Timing.clockTickH0;
  }

  crossARINC_out_M->Timing.t[0] = crossARINC_out_M->Timing.clockTick0 *
    crossARINC_out_M->Timing.stepSize0 + crossARINC_out_M->Timing.clockTickH0 *
    crossARINC_out_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void crossARINC_out_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  rtsiSetSolverName(&crossARINC_out_M->solverInfo,"FixedStepDiscrete");
  crossARINC_out_M->solverInfoPtr = (&crossARINC_out_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = crossARINC_out_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "crossARINC_out_M points to
       static memory which is guaranteed to be non-NULL" */
    crossARINC_out_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    crossARINC_out_M->Timing.sampleTimes =
      (&crossARINC_out_M->Timing.sampleTimesArray[0]);
    crossARINC_out_M->Timing.offsetTimes =
      (&crossARINC_out_M->Timing.offsetTimesArray[0]);

    /* task periods */
    crossARINC_out_M->Timing.sampleTimes[0] = (0.008);

    /* task offsets */
    crossARINC_out_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(crossARINC_out_M, &crossARINC_out_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = crossARINC_out_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    crossARINC_out_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(crossARINC_out_M, -1);
  crossARINC_out_M->Timing.stepSize0 = 0.008;
  crossARINC_out_M->solverInfoPtr = (&crossARINC_out_M->solverInfo);
  crossARINC_out_M->Timing.stepSize = (0.008);
  rtsiSetFixedStepSize(&crossARINC_out_M->solverInfo, 0.008);
  rtsiSetSolverMode(&crossARINC_out_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&crossARINC_out_B)), 0,
                     sizeof(B_crossARINC_out_T));

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&crossARINC_out_DW), 0,
                     sizeof(DW_crossARINC_out_T));

  /* external inputs */
  crossARINC_out_U.In1 = crossARINC_out_rtZACE9C_ACE8x_9;

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &crossARINC_out_M->NonInlinedSFcns.sfcnInfo;
    crossARINC_out_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(crossARINC_out_M)));
    crossARINC_out_M->Sizes.numSampTimes = (1);
    rtssSetNumRootSampTimesPtr(sfcnInfo, &crossARINC_out_M->Sizes.numSampTimes);
    crossARINC_out_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (crossARINC_out_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,crossARINC_out_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(crossARINC_out_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(crossARINC_out_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (crossARINC_out_M));
    rtssSetStepSizePtr(sfcnInfo, &crossARINC_out_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(crossARINC_out_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &crossARINC_out_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &crossARINC_out_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &crossARINC_out_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &crossARINC_out_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &crossARINC_out_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &crossARINC_out_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &crossARINC_out_M->solverInfoPtr);
  }

  crossARINC_out_M->Sizes.numSFcns = (9);

  /* register each child */
  {
    (void) std::memset(static_cast<void *>
                       (&crossARINC_out_M->NonInlinedSFcns.childSFunctions[0]),
                       0,
                       9*sizeof(SimStruct));
    crossARINC_out_M->childSfunctions =
      (&crossARINC_out_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 9; i++) {
        crossARINC_out_M->childSfunctions[i] =
          (&crossARINC_out_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: crossARINC_out/<Root>/Setup v2  (sg_io682_setup_s_v3) */
    {
      SimStruct *rts = crossARINC_out_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_out_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_out_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_out_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_out_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_out_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_out_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_out_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_out_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_out_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_out_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_out_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* path info */
      ssSetModelName(rts, "Setup v2 ");
      ssSetPath(rts, "crossARINC_out/Setup v2 ");
      ssSetRTModel(rts,crossARINC_out_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_out_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_out_cal->Setupv2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_out_cal->Setupv2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_out_cal->Setupv2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)crossARINC_out_cal->Setupv2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)crossARINC_out_cal->Setupv2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)crossARINC_out_cal->Setupv2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)crossARINC_out_cal->Setupv2_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)crossARINC_out_cal->Setupv2_P8_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &crossARINC_out_DW.Setupv2_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &crossARINC_out_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &crossARINC_out_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &crossARINC_out_DW.Setupv2_PWORK[0]);
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

    /* Level2 S-Function Block: crossARINC_out/<Root>/Encode v2  (sg_arinc429_encode_s_v2) */
    {
      SimStruct *rts = crossARINC_out_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_out_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_out_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_out_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_out_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_out_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_out_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_out_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_out_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_out_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_out_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_out_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn1.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &crossARINC_out_B.Add3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn1.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &crossARINC_out_B.Encodev2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Encode v2 ");
      ssSetPath(rts, "crossARINC_out/Encode v2 ");
      ssSetRTModel(rts,crossARINC_out_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_out_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 15);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_out_cal->Encodev2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_out_cal->Encodev2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_out_cal->Encodev2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)crossARINC_out_cal->Encodev2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)crossARINC_out_cal->Encodev2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)crossARINC_out_cal->Encodev2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)crossARINC_out_cal->Encodev2_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)crossARINC_out_cal->Encodev2_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)crossARINC_out_cal->Encodev2_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)crossARINC_out_cal->Encodev2_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)crossARINC_out_cal->Encodev2_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)crossARINC_out_cal->Encodev2_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)crossARINC_out_cal->Encodev2_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)crossARINC_out_cal->Encodev2_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)crossARINC_out_cal->Encodev2_P15_Size);
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

    /* Level2 S-Function Block: crossARINC_out/<Root>/Send v3  (sg_io682_send_s_v3) */
    {
      SimStruct *rts = crossARINC_out_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_out_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_out_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_out_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_out_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_out_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_out_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_out_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_out_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_out_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_out_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_out_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn2.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &crossARINC_out_M->NonInlinedSFcns.Sfcn2.UPtrs0;
          sfcnUPtrs[0] = &crossARINC_out_B.Encodev2;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Send v3 ");
      ssSetPath(rts, "crossARINC_out/Send v3 ");
      ssSetRTModel(rts,crossARINC_out_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_out_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_out_cal->Sendv3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_out_cal->Sendv3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_out_cal->Sendv3_P3_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &crossARINC_out_DW.Sendv3_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &crossARINC_out_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &crossARINC_out_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &crossARINC_out_DW.Sendv3_PWORK[0]);
      }

      /* registration */
      sg_io682_send_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.008);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

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

    /* Level2 S-Function Block: crossARINC_out/<Root>/Encode v2 1 (sg_arinc429_encode_s_v2) */
    {
      SimStruct *rts = crossARINC_out_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_out_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_out_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_out_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_out_M->NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_out_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_out_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_out_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_out_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_out_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_out_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_out_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn3.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn3.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &crossARINC_out_B.Add4);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn3.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn3.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &crossARINC_out_B.Encodev21));
        }
      }

      /* path info */
      ssSetModelName(rts, "Encode v2 1");
      ssSetPath(rts, "crossARINC_out/Encode v2 1");
      ssSetRTModel(rts,crossARINC_out_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_out_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 15);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_out_cal->Encodev21_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_out_cal->Encodev21_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_out_cal->Encodev21_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)crossARINC_out_cal->Encodev21_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)crossARINC_out_cal->Encodev21_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)crossARINC_out_cal->Encodev21_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)crossARINC_out_cal->Encodev21_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)crossARINC_out_cal->Encodev21_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)crossARINC_out_cal->Encodev21_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)crossARINC_out_cal->Encodev21_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)crossARINC_out_cal->Encodev21_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)crossARINC_out_cal->Encodev21_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)crossARINC_out_cal->Encodev21_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)crossARINC_out_cal->Encodev21_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)crossARINC_out_cal->Encodev21_P15_Size);
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

    /* Level2 S-Function Block: crossARINC_out/<Root>/Send v3 1 (sg_io682_send_s_v3) */
    {
      SimStruct *rts = crossARINC_out_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_out_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_out_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_out_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_out_M->NonInlinedSFcns.blkInfo2[4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_out_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_out_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_out_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_out_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_out_M->NonInlinedSFcns.methods4[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_out_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_out_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn4.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn4.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &crossARINC_out_M->NonInlinedSFcns.Sfcn4.UPtrs0;
          sfcnUPtrs[0] = &crossARINC_out_B.Encodev21;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Send v3 1");
      ssSetPath(rts, "crossARINC_out/Send v3 1");
      ssSetRTModel(rts,crossARINC_out_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_out_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_out_cal->Sendv31_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_out_cal->Sendv31_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_out_cal->Sendv31_P3_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &crossARINC_out_DW.Sendv31_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &crossARINC_out_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &crossARINC_out_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &crossARINC_out_DW.Sendv31_PWORK[0]);
      }

      /* registration */
      sg_io682_send_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.008);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

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

    /* Level2 S-Function Block: crossARINC_out/<Root>/Encode v2 2 (sg_arinc429_encode_s_v2) */
    {
      SimStruct *rts = crossARINC_out_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_out_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_out_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_out_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_out_M->NonInlinedSFcns.blkInfo2[5]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_out_M->NonInlinedSFcns.inputOutputPortInfo2[5]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_out_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_out_M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_out_M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_out_M->NonInlinedSFcns.methods4[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_out_M->NonInlinedSFcns.statesInfo2[5]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_out_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn5.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn5.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn5.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &crossARINC_out_B.Add5);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn5.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn5.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn5.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &crossARINC_out_B.Encodev22));
        }
      }

      /* path info */
      ssSetModelName(rts, "Encode v2 2");
      ssSetPath(rts, "crossARINC_out/Encode v2 2");
      ssSetRTModel(rts,crossARINC_out_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_out_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 15);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_out_cal->Encodev22_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_out_cal->Encodev22_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_out_cal->Encodev22_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)crossARINC_out_cal->Encodev22_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)crossARINC_out_cal->Encodev22_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)crossARINC_out_cal->Encodev22_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)crossARINC_out_cal->Encodev22_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)crossARINC_out_cal->Encodev22_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)crossARINC_out_cal->Encodev22_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)crossARINC_out_cal->Encodev22_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)crossARINC_out_cal->Encodev22_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)crossARINC_out_cal->Encodev22_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)crossARINC_out_cal->Encodev22_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)crossARINC_out_cal->Encodev22_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)crossARINC_out_cal->Encodev22_P15_Size);
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

    /* Level2 S-Function Block: crossARINC_out/<Root>/Send v3 2 (sg_io682_send_s_v3) */
    {
      SimStruct *rts = crossARINC_out_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_out_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_out_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_out_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_out_M->NonInlinedSFcns.blkInfo2[6]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_out_M->NonInlinedSFcns.inputOutputPortInfo2[6]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_out_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_out_M->NonInlinedSFcns.methods2[6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_out_M->NonInlinedSFcns.methods3[6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_out_M->NonInlinedSFcns.methods4[6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_out_M->NonInlinedSFcns.statesInfo2[6]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_out_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn6.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn6.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn6.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &crossARINC_out_M->NonInlinedSFcns.Sfcn6.UPtrs0;
          sfcnUPtrs[0] = &crossARINC_out_B.Encodev22;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Send v3 2");
      ssSetPath(rts, "crossARINC_out/Send v3 2");
      ssSetRTModel(rts,crossARINC_out_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_out_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_out_cal->Sendv32_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_out_cal->Sendv32_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_out_cal->Sendv32_P3_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &crossARINC_out_DW.Sendv32_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &crossARINC_out_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &crossARINC_out_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &crossARINC_out_DW.Sendv32_PWORK[0]);
      }

      /* registration */
      sg_io682_send_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.008);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

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

    /* Level2 S-Function Block: crossARINC_out/<Root>/Encode v2 3 (sg_arinc429_encode_s_v2) */
    {
      SimStruct *rts = crossARINC_out_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_out_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_out_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_out_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_out_M->NonInlinedSFcns.blkInfo2[7]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_out_M->NonInlinedSFcns.inputOutputPortInfo2[7]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_out_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_out_M->NonInlinedSFcns.methods2[7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_out_M->NonInlinedSFcns.methods3[7]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_out_M->NonInlinedSFcns.methods4[7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_out_M->NonInlinedSFcns.statesInfo2[7]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_out_M->NonInlinedSFcns.periodicStatesInfo[7]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn7.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn7.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn7.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &crossARINC_out_B.Add1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn7.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn7.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn7.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &crossARINC_out_B.Encodev23));
        }
      }

      /* path info */
      ssSetModelName(rts, "Encode v2 3");
      ssSetPath(rts, "crossARINC_out/Encode v2 3");
      ssSetRTModel(rts,crossARINC_out_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_out_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 15);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_out_cal->Encodev23_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_out_cal->Encodev23_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_out_cal->Encodev23_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)crossARINC_out_cal->Encodev23_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)crossARINC_out_cal->Encodev23_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)crossARINC_out_cal->Encodev23_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)crossARINC_out_cal->Encodev23_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)crossARINC_out_cal->Encodev23_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)crossARINC_out_cal->Encodev23_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)crossARINC_out_cal->Encodev23_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)crossARINC_out_cal->Encodev23_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)crossARINC_out_cal->Encodev23_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)crossARINC_out_cal->Encodev23_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)crossARINC_out_cal->Encodev23_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)crossARINC_out_cal->Encodev23_P15_Size);
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

    /* Level2 S-Function Block: crossARINC_out/<Root>/Send v3 3 (sg_io682_send_s_v3) */
    {
      SimStruct *rts = crossARINC_out_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod = crossARINC_out_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset = crossARINC_out_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap = crossARINC_out_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &crossARINC_out_M->NonInlinedSFcns.blkInfo2[8]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &crossARINC_out_M->NonInlinedSFcns.inputOutputPortInfo2[8]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, crossARINC_out_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &crossARINC_out_M->NonInlinedSFcns.methods2[8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &crossARINC_out_M->NonInlinedSFcns.methods3[8]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &crossARINC_out_M->NonInlinedSFcns.methods4[8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &crossARINC_out_M->NonInlinedSFcns.statesInfo2[8]);
        ssSetPeriodicStatesInfo(rts,
          &crossARINC_out_M->NonInlinedSFcns.periodicStatesInfo[8]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn8.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn8.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &crossARINC_out_M->NonInlinedSFcns.Sfcn8.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &crossARINC_out_M->NonInlinedSFcns.Sfcn8.UPtrs0;
          sfcnUPtrs[0] = &crossARINC_out_B.Encodev23;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Send v3 3");
      ssSetPath(rts, "crossARINC_out/Send v3 3");
      ssSetRTModel(rts,crossARINC_out_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &crossARINC_out_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)crossARINC_out_cal->Sendv33_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)crossARINC_out_cal->Sendv33_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)crossARINC_out_cal->Sendv33_P3_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &crossARINC_out_DW.Sendv33_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &crossARINC_out_M->NonInlinedSFcns.Sfcn8.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &crossARINC_out_M->NonInlinedSFcns.Sfcn8.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &crossARINC_out_DW.Sendv33_PWORK[0]);
      }

      /* registration */
      sg_io682_send_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.008);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

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

  /* Start for S-Function (sg_io682_setup_s_v3): '<Root>/Setup v2 ' */
  /* Level2 S-Function Block: '<Root>/Setup v2 ' (sg_io682_setup_s_v3) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 ' */
  /* Level2 S-Function Block: '<Root>/Encode v2 ' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_io682_send_s_v3): '<Root>/Send v3 ' */
  /* Level2 S-Function Block: '<Root>/Send v3 ' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 1' */
  /* Level2 S-Function Block: '<Root>/Encode v2 1' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_io682_send_s_v3): '<Root>/Send v3 1' */
  /* Level2 S-Function Block: '<Root>/Send v3 1' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 2' */
  /* Level2 S-Function Block: '<Root>/Encode v2 2' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_io682_send_s_v3): '<Root>/Send v3 2' */
  /* Level2 S-Function Block: '<Root>/Send v3 2' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 3' */
  /* Level2 S-Function Block: '<Root>/Encode v2 3' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_io682_send_s_v3): '<Root>/Send v3 3' */
  /* Level2 S-Function Block: '<Root>/Send v3 3' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[8];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for DiscretePulseGenerator: '<Root>/Pulse Generator' */
  crossARINC_out_DW.clockTickCounter = 0;

  /* InitializeConditions for Delay: '<Root>/Delay' */
  crossARINC_out_DW.Delay_DSTATE = crossARINC_out_cal->Delay_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay1' */
  crossARINC_out_DW.Delay1_DSTATE = crossARINC_out_cal->Delay1_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay2' */
  crossARINC_out_DW.Delay2_DSTATE = crossARINC_out_cal->Delay2_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay3' */
  crossARINC_out_DW.Delay3_DSTATE = crossARINC_out_cal->Delay3_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay4' */
  crossARINC_out_DW.Delay4_DSTATE = crossARINC_out_cal->Delay4_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay5' */
  crossARINC_out_DW.Delay5_DSTATE = crossARINC_out_cal->Delay5_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay6' */
  crossARINC_out_DW.Delay6_DSTATE = crossARINC_out_cal->Delay6_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay7' */
  crossARINC_out_DW.Delay7_DSTATE = crossARINC_out_cal->Delay7_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay8' */
  crossARINC_out_DW.Delay8_DSTATE = crossARINC_out_cal->Delay8_InitialCondition;

  /* Enable for Sin: '<Root>/Sine Wave' */
  crossARINC_out_DW.systemEnable = 1;

  /* Enable for Sin: '<Root>/Sine Wave6' */
  crossARINC_out_DW.systemEnable_m = 1;

  /* Enable for Sin: '<Root>/Sine Wave1' */
  crossARINC_out_DW.systemEnable_a = 1;

  /* Enable for Sin: '<Root>/Sine Wave2' */
  crossARINC_out_DW.systemEnable_n = 1;

  /* Enable for Sin: '<Root>/Sine Wave3' */
  crossARINC_out_DW.systemEnable_e = 1;

  /* Enable for Sin: '<Root>/Sine Wave4' */
  crossARINC_out_DW.systemEnable_g = 1;

  /* Enable for Sin: '<Root>/Sine Wave5' */
  crossARINC_out_DW.systemEnable_c = 1;
}

/* Model terminate function */
void crossARINC_out_terminate(void)
{
  /* Terminate for S-Function (sg_io682_setup_s_v3): '<Root>/Setup v2 ' */
  /* Level2 S-Function Block: '<Root>/Setup v2 ' (sg_io682_setup_s_v3) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 ' */
  /* Level2 S-Function Block: '<Root>/Encode v2 ' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_io682_send_s_v3): '<Root>/Send v3 ' */
  /* Level2 S-Function Block: '<Root>/Send v3 ' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 1' */
  /* Level2 S-Function Block: '<Root>/Encode v2 1' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_io682_send_s_v3): '<Root>/Send v3 1' */
  /* Level2 S-Function Block: '<Root>/Send v3 1' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 2' */
  /* Level2 S-Function Block: '<Root>/Encode v2 2' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_io682_send_s_v3): '<Root>/Send v3 2' */
  /* Level2 S-Function Block: '<Root>/Send v3 2' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_arinc429_encode_s_v2): '<Root>/Encode v2 3' */
  /* Level2 S-Function Block: '<Root>/Encode v2 3' (sg_arinc429_encode_s_v2) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_io682_send_s_v3): '<Root>/Send v3 3' */
  /* Level2 S-Function Block: '<Root>/Send v3 3' (sg_io682_send_s_v3) */
  {
    SimStruct *rts = crossARINC_out_M->childSfunctions[8];
    sfcnTerminate(rts);
  }
}
