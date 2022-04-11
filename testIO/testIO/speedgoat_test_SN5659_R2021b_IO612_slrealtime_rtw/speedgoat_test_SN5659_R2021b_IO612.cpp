/*
 * speedgoat_test_SN5659_R2021b_IO612.cpp
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

#include "speedgoat_test_SN5659_R2021b_IO612.h"
#include "speedgoat_test_SN5659_R2021b_IO612_private.h"

/* Block signals (default storage) */
B_speedgoat_test_SN5659_R2021b_IO612_T speedgoat_test_SN5659_R2021b_IO612_B;

/* Block states (default storage) */
DW_speedgoat_test_SN5659_R2021b_IO612_T speedgoat_test_SN5659_R2021b_IO612_DW;

/* Real-time model */
RT_MODEL_speedgoat_test_SN5659_R2021b_IO612_T
  speedgoat_test_SN5659_R2021b_IO612_M_ =
  RT_MODEL_speedgoat_test_SN5659_R2021b_IO612_T();
RT_MODEL_speedgoat_test_SN5659_R2021b_IO612_T *const
  speedgoat_test_SN5659_R2021b_IO612_M = &speedgoat_test_SN5659_R2021b_IO612_M_;

/* Model step function */
void speedgoat_test_SN5659_R2021b_IO612_step(void)
{
  int32_T s3_iter;

  /* S-Function (sg_IO612_setup_s): '<S1>/CAN Setup' */

  /* Level2 S-Function Block: '<S1>/CAN Setup' (sg_IO612_setup_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* Sin: '<S1>/Sine Wave' */
  if (speedgoat_test_SN5659_R2021b_IO612_DW.systemEnable != 0) {
    speedgoat_test_SN5659_R2021b_IO612_DW.lastSin = std::sin
      (speedgoat_test_SN5659_R2021_cal->SineWave_Freq *
       speedgoat_test_SN5659_R2021b_IO612_M->Timing.t[0]);
    speedgoat_test_SN5659_R2021b_IO612_DW.lastCos = std::cos
      (speedgoat_test_SN5659_R2021_cal->SineWave_Freq *
       speedgoat_test_SN5659_R2021b_IO612_M->Timing.t[0]);
    speedgoat_test_SN5659_R2021b_IO612_DW.systemEnable = 0;
  }

  /* Sin: '<S1>/Sine Wave' */
  speedgoat_test_SN5659_R2021b_IO612_B.SineWave =
    ((speedgoat_test_SN5659_R2021b_IO612_DW.lastSin *
      speedgoat_test_SN5659_R2021_cal->SineWave_PCos +
      speedgoat_test_SN5659_R2021b_IO612_DW.lastCos *
      speedgoat_test_SN5659_R2021_cal->SineWave_PSin) *
     speedgoat_test_SN5659_R2021_cal->SineWave_HCos +
     (speedgoat_test_SN5659_R2021b_IO612_DW.lastCos *
      speedgoat_test_SN5659_R2021_cal->SineWave_PCos -
      speedgoat_test_SN5659_R2021b_IO612_DW.lastSin *
      speedgoat_test_SN5659_R2021_cal->SineWave_PSin) *
     speedgoat_test_SN5659_R2021_cal->SineWave_Hsin) *
    speedgoat_test_SN5659_R2021_cal->SineWave_Amp +
    speedgoat_test_SN5659_R2021_cal->SineWave_Bias;

  /* S-Function (scanpack): '<S1>/CAN Pack' */
  /* S-Function (scanpack): '<S1>/CAN Pack' */
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack.ID = 100U;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack.Length = 8U;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack.Extended = 0U;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack.Remote = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack.Data[0] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack.Data[1] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack.Data[2] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack.Data[3] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack.Data[4] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack.Data[5] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack.Data[6] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 0
     *  length                  = 64
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = DOUBLE
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = speedgoat_test_SN5659_R2021b_IO612_B.SineWave;

        /* no scaling required */
        outValue = result;
      }

      {
        real64_T typedValue = outValue;

        {
          (void) std::memcpy(speedgoat_test_SN5659_R2021b_IO612_B.CANPack.Data,
                             &typedValue,
                             8);
        }
      }
    }
  }

  /* S-Function (sg_IO61X_write_s): '<S1>/CAN Write' */

  /* Level2 S-Function Block: '<S1>/CAN Write' (sg_IO61X_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  /* Sin: '<S1>/Sine Wave1' */
  if (speedgoat_test_SN5659_R2021b_IO612_DW.systemEnable_p != 0) {
    speedgoat_test_SN5659_R2021b_IO612_DW.lastSin_c = std::sin
      (speedgoat_test_SN5659_R2021_cal->SineWave1_Freq *
       speedgoat_test_SN5659_R2021b_IO612_M->Timing.t[0]);
    speedgoat_test_SN5659_R2021b_IO612_DW.lastCos_g = std::cos
      (speedgoat_test_SN5659_R2021_cal->SineWave1_Freq *
       speedgoat_test_SN5659_R2021b_IO612_M->Timing.t[0]);
    speedgoat_test_SN5659_R2021b_IO612_DW.systemEnable_p = 0;
  }

  /* Sin: '<S1>/Sine Wave1' */
  speedgoat_test_SN5659_R2021b_IO612_B.SineWave1 =
    ((speedgoat_test_SN5659_R2021b_IO612_DW.lastSin_c *
      speedgoat_test_SN5659_R2021_cal->SineWave1_PCos +
      speedgoat_test_SN5659_R2021b_IO612_DW.lastCos_g *
      speedgoat_test_SN5659_R2021_cal->SineWave1_PSin) *
     speedgoat_test_SN5659_R2021_cal->SineWave1_HCos +
     (speedgoat_test_SN5659_R2021b_IO612_DW.lastCos_g *
      speedgoat_test_SN5659_R2021_cal->SineWave1_PCos -
      speedgoat_test_SN5659_R2021b_IO612_DW.lastSin_c *
      speedgoat_test_SN5659_R2021_cal->SineWave1_PSin) *
     speedgoat_test_SN5659_R2021_cal->SineWave1_Hsin) *
    speedgoat_test_SN5659_R2021_cal->SineWave1_Amp +
    speedgoat_test_SN5659_R2021_cal->SineWave1_Bias;

  /* S-Function (scanpack): '<S1>/CAN Pack1' */
  /* S-Function (scanpack): '<S1>/CAN Pack1' */
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack1.ID = 101U;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack1.Length = 8U;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack1.Extended = 0U;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack1.Remote = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack1.Data[0] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack1.Data[1] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack1.Data[2] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack1.Data[3] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack1.Data[4] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack1.Data[5] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack1.Data[6] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack1.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 0
     *  length                  = 64
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = DOUBLE
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = speedgoat_test_SN5659_R2021b_IO612_B.SineWave1;

        /* no scaling required */
        outValue = result;
      }

      {
        real64_T typedValue = outValue;

        {
          (void) std::memcpy(speedgoat_test_SN5659_R2021b_IO612_B.CANPack1.Data,
                             &typedValue,
                             8);
        }
      }
    }
  }

  /* S-Function (sg_IO61X_write_s): '<S1>/CAN Write2' */

  /* Level2 S-Function Block: '<S1>/CAN Write2' (sg_IO61X_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  /* Sin: '<S1>/Sine Wave2' */
  if (speedgoat_test_SN5659_R2021b_IO612_DW.systemEnable_i != 0) {
    speedgoat_test_SN5659_R2021b_IO612_DW.lastSin_i = std::sin
      (speedgoat_test_SN5659_R2021_cal->SineWave2_Freq *
       speedgoat_test_SN5659_R2021b_IO612_M->Timing.t[0]);
    speedgoat_test_SN5659_R2021b_IO612_DW.lastCos_i = std::cos
      (speedgoat_test_SN5659_R2021_cal->SineWave2_Freq *
       speedgoat_test_SN5659_R2021b_IO612_M->Timing.t[0]);
    speedgoat_test_SN5659_R2021b_IO612_DW.systemEnable_i = 0;
  }

  /* Sin: '<S1>/Sine Wave2' */
  speedgoat_test_SN5659_R2021b_IO612_B.SineWave2 =
    ((speedgoat_test_SN5659_R2021b_IO612_DW.lastSin_i *
      speedgoat_test_SN5659_R2021_cal->SineWave2_PCos +
      speedgoat_test_SN5659_R2021b_IO612_DW.lastCos_i *
      speedgoat_test_SN5659_R2021_cal->SineWave2_PSin) *
     speedgoat_test_SN5659_R2021_cal->SineWave2_HCos +
     (speedgoat_test_SN5659_R2021b_IO612_DW.lastCos_i *
      speedgoat_test_SN5659_R2021_cal->SineWave2_PCos -
      speedgoat_test_SN5659_R2021b_IO612_DW.lastSin_i *
      speedgoat_test_SN5659_R2021_cal->SineWave2_PSin) *
     speedgoat_test_SN5659_R2021_cal->SineWave2_Hsin) *
    speedgoat_test_SN5659_R2021_cal->SineWave2_Amp +
    speedgoat_test_SN5659_R2021_cal->SineWave2_Bias;

  /* S-Function (scanpack): '<S1>/CAN Pack2' */
  /* S-Function (scanpack): '<S1>/CAN Pack2' */
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack2.ID = 102U;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack2.Length = 8U;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack2.Extended = 0U;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack2.Remote = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack2.Data[0] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack2.Data[1] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack2.Data[2] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack2.Data[3] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack2.Data[4] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack2.Data[5] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack2.Data[6] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack2.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 0
     *  length                  = 64
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = DOUBLE
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = speedgoat_test_SN5659_R2021b_IO612_B.SineWave2;

        /* no scaling required */
        outValue = result;
      }

      {
        real64_T typedValue = outValue;

        {
          (void) std::memcpy(speedgoat_test_SN5659_R2021b_IO612_B.CANPack2.Data,
                             &typedValue,
                             8);
        }
      }
    }
  }

  /* S-Function (sg_IO61X_write_s): '<S1>/CAN Write3' */

  /* Level2 S-Function Block: '<S1>/CAN Write3' (sg_IO61X_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[5];
    sfcnOutputs(rts,0);
  }

  /* Sin: '<S1>/Sine Wave3' */
  if (speedgoat_test_SN5659_R2021b_IO612_DW.systemEnable_h != 0) {
    speedgoat_test_SN5659_R2021b_IO612_DW.lastSin_d = std::sin
      (speedgoat_test_SN5659_R2021_cal->SineWave3_Freq *
       speedgoat_test_SN5659_R2021b_IO612_M->Timing.t[0]);
    speedgoat_test_SN5659_R2021b_IO612_DW.lastCos_b = std::cos
      (speedgoat_test_SN5659_R2021_cal->SineWave3_Freq *
       speedgoat_test_SN5659_R2021b_IO612_M->Timing.t[0]);
    speedgoat_test_SN5659_R2021b_IO612_DW.systemEnable_h = 0;
  }

  /* Sin: '<S1>/Sine Wave3' */
  speedgoat_test_SN5659_R2021b_IO612_B.SineWave3 =
    ((speedgoat_test_SN5659_R2021b_IO612_DW.lastSin_d *
      speedgoat_test_SN5659_R2021_cal->SineWave3_PCos +
      speedgoat_test_SN5659_R2021b_IO612_DW.lastCos_b *
      speedgoat_test_SN5659_R2021_cal->SineWave3_PSin) *
     speedgoat_test_SN5659_R2021_cal->SineWave3_HCos +
     (speedgoat_test_SN5659_R2021b_IO612_DW.lastCos_b *
      speedgoat_test_SN5659_R2021_cal->SineWave3_PCos -
      speedgoat_test_SN5659_R2021b_IO612_DW.lastSin_d *
      speedgoat_test_SN5659_R2021_cal->SineWave3_PSin) *
     speedgoat_test_SN5659_R2021_cal->SineWave3_Hsin) *
    speedgoat_test_SN5659_R2021_cal->SineWave3_Amp +
    speedgoat_test_SN5659_R2021_cal->SineWave3_Bias;

  /* S-Function (scanpack): '<S1>/CAN Pack3' */
  /* S-Function (scanpack): '<S1>/CAN Pack3' */
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack3.ID = 300U;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack3.Length = 8U;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack3.Extended = 0U;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack3.Remote = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack3.Data[0] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack3.Data[1] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack3.Data[2] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack3.Data[3] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack3.Data[4] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack3.Data[5] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack3.Data[6] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack3.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 0
     *  length                  = 64
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = DOUBLE
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = speedgoat_test_SN5659_R2021b_IO612_B.SineWave3;

        /* no scaling required */
        outValue = result;
      }

      {
        real64_T typedValue = outValue;

        {
          (void) std::memcpy(speedgoat_test_SN5659_R2021b_IO612_B.CANPack3.Data,
                             &typedValue,
                             8);
        }
      }
    }
  }

  /* S-Function (sg_IO61X_write_s): '<S1>/CAN Write1' */

  /* Level2 S-Function Block: '<S1>/CAN Write1' (sg_IO61X_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[6];
    sfcnOutputs(rts,0);
  }

  /* Sin: '<S1>/Sine Wave4' */
  if (speedgoat_test_SN5659_R2021b_IO612_DW.systemEnable_b != 0) {
    speedgoat_test_SN5659_R2021b_IO612_DW.lastSin_h = std::sin
      (speedgoat_test_SN5659_R2021_cal->SineWave4_Freq *
       speedgoat_test_SN5659_R2021b_IO612_M->Timing.t[0]);
    speedgoat_test_SN5659_R2021b_IO612_DW.lastCos_j = std::cos
      (speedgoat_test_SN5659_R2021_cal->SineWave4_Freq *
       speedgoat_test_SN5659_R2021b_IO612_M->Timing.t[0]);
    speedgoat_test_SN5659_R2021b_IO612_DW.systemEnable_b = 0;
  }

  /* Sin: '<S1>/Sine Wave4' */
  speedgoat_test_SN5659_R2021b_IO612_B.SineWave4 =
    ((speedgoat_test_SN5659_R2021b_IO612_DW.lastSin_h *
      speedgoat_test_SN5659_R2021_cal->SineWave4_PCos +
      speedgoat_test_SN5659_R2021b_IO612_DW.lastCos_j *
      speedgoat_test_SN5659_R2021_cal->SineWave4_PSin) *
     speedgoat_test_SN5659_R2021_cal->SineWave4_HCos +
     (speedgoat_test_SN5659_R2021b_IO612_DW.lastCos_j *
      speedgoat_test_SN5659_R2021_cal->SineWave4_PCos -
      speedgoat_test_SN5659_R2021b_IO612_DW.lastSin_h *
      speedgoat_test_SN5659_R2021_cal->SineWave4_PSin) *
     speedgoat_test_SN5659_R2021_cal->SineWave4_Hsin) *
    speedgoat_test_SN5659_R2021_cal->SineWave4_Amp +
    speedgoat_test_SN5659_R2021_cal->SineWave4_Bias;

  /* S-Function (scanpack): '<S1>/CAN Pack4' */
  /* S-Function (scanpack): '<S1>/CAN Pack4' */
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack4.ID = 301U;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack4.Length = 8U;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack4.Extended = 0U;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack4.Remote = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack4.Data[0] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack4.Data[1] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack4.Data[2] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack4.Data[3] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack4.Data[4] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack4.Data[5] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack4.Data[6] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack4.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 0
     *  length                  = 64
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = DOUBLE
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = speedgoat_test_SN5659_R2021b_IO612_B.SineWave4;

        /* no scaling required */
        outValue = result;
      }

      {
        real64_T typedValue = outValue;

        {
          (void) std::memcpy(speedgoat_test_SN5659_R2021b_IO612_B.CANPack4.Data,
                             &typedValue,
                             8);
        }
      }
    }
  }

  /* S-Function (sg_IO61X_write_s): '<S1>/CAN Write4' */

  /* Level2 S-Function Block: '<S1>/CAN Write4' (sg_IO61X_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[7];
    sfcnOutputs(rts,0);
  }

  /* Sin: '<S1>/Sine Wave5' */
  if (speedgoat_test_SN5659_R2021b_IO612_DW.systemEnable_py != 0) {
    speedgoat_test_SN5659_R2021b_IO612_DW.lastSin_cd = std::sin
      (speedgoat_test_SN5659_R2021_cal->SineWave5_Freq *
       speedgoat_test_SN5659_R2021b_IO612_M->Timing.t[0]);
    speedgoat_test_SN5659_R2021b_IO612_DW.lastCos_c = std::cos
      (speedgoat_test_SN5659_R2021_cal->SineWave5_Freq *
       speedgoat_test_SN5659_R2021b_IO612_M->Timing.t[0]);
    speedgoat_test_SN5659_R2021b_IO612_DW.systemEnable_py = 0;
  }

  /* Sin: '<S1>/Sine Wave5' */
  speedgoat_test_SN5659_R2021b_IO612_B.SineWave5 =
    ((speedgoat_test_SN5659_R2021b_IO612_DW.lastSin_cd *
      speedgoat_test_SN5659_R2021_cal->SineWave5_PCos +
      speedgoat_test_SN5659_R2021b_IO612_DW.lastCos_c *
      speedgoat_test_SN5659_R2021_cal->SineWave5_PSin) *
     speedgoat_test_SN5659_R2021_cal->SineWave5_HCos +
     (speedgoat_test_SN5659_R2021b_IO612_DW.lastCos_c *
      speedgoat_test_SN5659_R2021_cal->SineWave5_PCos -
      speedgoat_test_SN5659_R2021b_IO612_DW.lastSin_cd *
      speedgoat_test_SN5659_R2021_cal->SineWave5_PSin) *
     speedgoat_test_SN5659_R2021_cal->SineWave5_Hsin) *
    speedgoat_test_SN5659_R2021_cal->SineWave5_Amp +
    speedgoat_test_SN5659_R2021_cal->SineWave5_Bias;

  /* S-Function (scanpack): '<S1>/CAN Pack5' */
  /* S-Function (scanpack): '<S1>/CAN Pack5' */
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack5.ID = 302U;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack5.Length = 8U;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack5.Extended = 0U;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack5.Remote = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack5.Data[0] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack5.Data[1] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack5.Data[2] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack5.Data[3] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack5.Data[4] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack5.Data[5] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack5.Data[6] = 0;
  speedgoat_test_SN5659_R2021b_IO612_B.CANPack5.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 0
     *  length                  = 64
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = DOUBLE
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = speedgoat_test_SN5659_R2021b_IO612_B.SineWave5;

        /* no scaling required */
        outValue = result;
      }

      {
        real64_T typedValue = outValue;

        {
          (void) std::memcpy(speedgoat_test_SN5659_R2021b_IO612_B.CANPack5.Data,
                             &typedValue,
                             8);
        }
      }
    }
  }

  /* S-Function (sg_IO61X_write_s): '<S1>/CAN Write5' */

  /* Level2 S-Function Block: '<S1>/CAN Write5' (sg_IO61X_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[8];
    sfcnOutputs(rts,0);
  }

  /* Constant: '<S1>/RX Sample Time' */
  speedgoat_test_SN5659_R2021b_IO612_B.RXSampleTime =
    speedgoat_test_SN5659_R2021_cal->RXSampleTime_Value;

  /* Outputs for Iterator SubSystem: '<S1>/CAN Read Loop - Port 3' incorporates:
   *  WhileIterator: '<S3>/While Iterator'
   */
  s3_iter = 1;
  do {
    /* Level2 S-Function Block: '<S3>/CAN Read' (sg_IO61X_read_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[0];
      sfcnOutputs(rts,0);
    }

    {
      /* S-Function (scanunpack): '<S3>/CAN Unpack' */
      if ((8 == speedgoat_test_SN5659_R2021b_IO612_B.CANRead_o2.Length) &&
          (speedgoat_test_SN5659_R2021b_IO612_B.CANRead_o2.ID != INVALID_CAN_ID)
          ) {
        if ((100 == speedgoat_test_SN5659_R2021b_IO612_B.CANRead_o2.ID) && (0U ==
             speedgoat_test_SN5659_R2021b_IO612_B.CANRead_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 0
             *  length                  = 64
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = DOUBLE
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                real64_T typeUnpackedValue = 0;

                {
                  (void) std::memcpy(&typeUnpackedValue,
                                     speedgoat_test_SN5659_R2021b_IO612_B.CANRead_o2.Data,
                                     8);
                }

                outValue = (real64_T) (typeUnpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                speedgoat_test_SN5659_R2021b_IO612_B.CANUnpack_c = result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S3>/CAN Unpack1' */
      if ((8 == speedgoat_test_SN5659_R2021b_IO612_B.CANRead_o2.Length) &&
          (speedgoat_test_SN5659_R2021b_IO612_B.CANRead_o2.ID != INVALID_CAN_ID)
          ) {
        if ((101 == speedgoat_test_SN5659_R2021b_IO612_B.CANRead_o2.ID) && (0U ==
             speedgoat_test_SN5659_R2021b_IO612_B.CANRead_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 0
             *  length                  = 64
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = DOUBLE
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                real64_T typeUnpackedValue = 0;

                {
                  (void) std::memcpy(&typeUnpackedValue,
                                     speedgoat_test_SN5659_R2021b_IO612_B.CANRead_o2.Data,
                                     8);
                }

                outValue = (real64_T) (typeUnpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                speedgoat_test_SN5659_R2021b_IO612_B.CANUnpack1_o = result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S3>/CAN Unpack2' */
      if ((8 == speedgoat_test_SN5659_R2021b_IO612_B.CANRead_o2.Length) &&
          (speedgoat_test_SN5659_R2021b_IO612_B.CANRead_o2.ID != INVALID_CAN_ID)
          ) {
        if ((102 == speedgoat_test_SN5659_R2021b_IO612_B.CANRead_o2.ID) && (0U ==
             speedgoat_test_SN5659_R2021b_IO612_B.CANRead_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 0
             *  length                  = 64
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = DOUBLE
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                real64_T typeUnpackedValue = 0;

                {
                  (void) std::memcpy(&typeUnpackedValue,
                                     speedgoat_test_SN5659_R2021b_IO612_B.CANRead_o2.Data,
                                     8);
                }

                outValue = (real64_T) (typeUnpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                speedgoat_test_SN5659_R2021b_IO612_B.CANUnpack2_j = result;
              }
            }
          }
        }
      }
    }

    s3_iter++;
  } while (speedgoat_test_SN5659_R2021b_IO612_B.CANRead_o1 && (s3_iter <= 501));

  /* End of Outputs for SubSystem: '<S1>/CAN Read Loop - Port 3' */

  /* Constant: '<S1>/RX Sample Time1' */
  speedgoat_test_SN5659_R2021b_IO612_B.RXSampleTime1 =
    speedgoat_test_SN5659_R2021_cal->RXSampleTime1_Value;

  /* Outputs for Iterator SubSystem: '<S1>/CAN Read Loop - Port 4' incorporates:
   *  WhileIterator: '<S4>/While Iterator'
   */
  s3_iter = 1;
  do {
    /* Level2 S-Function Block: '<S4>/CAN Read1' (sg_IO61X_read_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[1];
      sfcnOutputs(rts,0);
    }

    {
      /* S-Function (scanunpack): '<S4>/CAN Unpack' */
      if ((8 == speedgoat_test_SN5659_R2021b_IO612_B.CANRead1_o2.Length) &&
          (speedgoat_test_SN5659_R2021b_IO612_B.CANRead1_o2.ID != INVALID_CAN_ID)
          ) {
        if ((300 == speedgoat_test_SN5659_R2021b_IO612_B.CANRead1_o2.ID) && (0U ==
             speedgoat_test_SN5659_R2021b_IO612_B.CANRead1_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 0
             *  length                  = 64
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = DOUBLE
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                real64_T typeUnpackedValue = 0;

                {
                  (void) std::memcpy(&typeUnpackedValue,
                                     speedgoat_test_SN5659_R2021b_IO612_B.CANRead1_o2.Data,
                                     8);
                }

                outValue = (real64_T) (typeUnpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                speedgoat_test_SN5659_R2021b_IO612_B.CANUnpack = result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S4>/CAN Unpack1' */
      if ((8 == speedgoat_test_SN5659_R2021b_IO612_B.CANRead1_o2.Length) &&
          (speedgoat_test_SN5659_R2021b_IO612_B.CANRead1_o2.ID != INVALID_CAN_ID)
          ) {
        if ((301 == speedgoat_test_SN5659_R2021b_IO612_B.CANRead1_o2.ID) && (0U ==
             speedgoat_test_SN5659_R2021b_IO612_B.CANRead1_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 0
             *  length                  = 64
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = DOUBLE
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                real64_T typeUnpackedValue = 0;

                {
                  (void) std::memcpy(&typeUnpackedValue,
                                     speedgoat_test_SN5659_R2021b_IO612_B.CANRead1_o2.Data,
                                     8);
                }

                outValue = (real64_T) (typeUnpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                speedgoat_test_SN5659_R2021b_IO612_B.CANUnpack1 = result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S4>/CAN Unpack2' */
      if ((8 == speedgoat_test_SN5659_R2021b_IO612_B.CANRead1_o2.Length) &&
          (speedgoat_test_SN5659_R2021b_IO612_B.CANRead1_o2.ID != INVALID_CAN_ID)
          ) {
        if ((302 == speedgoat_test_SN5659_R2021b_IO612_B.CANRead1_o2.ID) && (0U ==
             speedgoat_test_SN5659_R2021b_IO612_B.CANRead1_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 0
             *  length                  = 64
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = DOUBLE
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                real64_T typeUnpackedValue = 0;

                {
                  (void) std::memcpy(&typeUnpackedValue,
                                     speedgoat_test_SN5659_R2021b_IO612_B.CANRead1_o2.Data,
                                     8);
                }

                outValue = (real64_T) (typeUnpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                speedgoat_test_SN5659_R2021b_IO612_B.CANUnpack2 = result;
              }
            }
          }
        }
      }
    }

    s3_iter++;
  } while (speedgoat_test_SN5659_R2021b_IO612_B.CANRead1_o1 && (s3_iter <= 501));

  real_T HoldCosine;
  real_T HoldSine;

  /* End of Outputs for SubSystem: '<S1>/CAN Read Loop - Port 4' */
  /* Update for Sin: '<S1>/Sine Wave' */
  HoldSine = speedgoat_test_SN5659_R2021b_IO612_DW.lastSin;
  HoldCosine = speedgoat_test_SN5659_R2021b_IO612_DW.lastCos;
  speedgoat_test_SN5659_R2021b_IO612_DW.lastSin = HoldSine *
    speedgoat_test_SN5659_R2021_cal->SineWave_HCos + HoldCosine *
    speedgoat_test_SN5659_R2021_cal->SineWave_Hsin;
  speedgoat_test_SN5659_R2021b_IO612_DW.lastCos = HoldCosine *
    speedgoat_test_SN5659_R2021_cal->SineWave_HCos - HoldSine *
    speedgoat_test_SN5659_R2021_cal->SineWave_Hsin;

  /* Update for Sin: '<S1>/Sine Wave1' */
  HoldSine = speedgoat_test_SN5659_R2021b_IO612_DW.lastSin_c;
  HoldCosine = speedgoat_test_SN5659_R2021b_IO612_DW.lastCos_g;
  speedgoat_test_SN5659_R2021b_IO612_DW.lastSin_c = HoldSine *
    speedgoat_test_SN5659_R2021_cal->SineWave1_HCos + HoldCosine *
    speedgoat_test_SN5659_R2021_cal->SineWave1_Hsin;
  speedgoat_test_SN5659_R2021b_IO612_DW.lastCos_g = HoldCosine *
    speedgoat_test_SN5659_R2021_cal->SineWave1_HCos - HoldSine *
    speedgoat_test_SN5659_R2021_cal->SineWave1_Hsin;

  /* Update for Sin: '<S1>/Sine Wave2' */
  HoldSine = speedgoat_test_SN5659_R2021b_IO612_DW.lastSin_i;
  HoldCosine = speedgoat_test_SN5659_R2021b_IO612_DW.lastCos_i;
  speedgoat_test_SN5659_R2021b_IO612_DW.lastSin_i = HoldSine *
    speedgoat_test_SN5659_R2021_cal->SineWave2_HCos + HoldCosine *
    speedgoat_test_SN5659_R2021_cal->SineWave2_Hsin;
  speedgoat_test_SN5659_R2021b_IO612_DW.lastCos_i = HoldCosine *
    speedgoat_test_SN5659_R2021_cal->SineWave2_HCos - HoldSine *
    speedgoat_test_SN5659_R2021_cal->SineWave2_Hsin;

  /* Update for Sin: '<S1>/Sine Wave3' */
  HoldSine = speedgoat_test_SN5659_R2021b_IO612_DW.lastSin_d;
  HoldCosine = speedgoat_test_SN5659_R2021b_IO612_DW.lastCos_b;
  speedgoat_test_SN5659_R2021b_IO612_DW.lastSin_d = HoldSine *
    speedgoat_test_SN5659_R2021_cal->SineWave3_HCos + HoldCosine *
    speedgoat_test_SN5659_R2021_cal->SineWave3_Hsin;
  speedgoat_test_SN5659_R2021b_IO612_DW.lastCos_b = HoldCosine *
    speedgoat_test_SN5659_R2021_cal->SineWave3_HCos - HoldSine *
    speedgoat_test_SN5659_R2021_cal->SineWave3_Hsin;

  /* Update for Sin: '<S1>/Sine Wave4' */
  HoldSine = speedgoat_test_SN5659_R2021b_IO612_DW.lastSin_h;
  HoldCosine = speedgoat_test_SN5659_R2021b_IO612_DW.lastCos_j;
  speedgoat_test_SN5659_R2021b_IO612_DW.lastSin_h = HoldSine *
    speedgoat_test_SN5659_R2021_cal->SineWave4_HCos + HoldCosine *
    speedgoat_test_SN5659_R2021_cal->SineWave4_Hsin;
  speedgoat_test_SN5659_R2021b_IO612_DW.lastCos_j = HoldCosine *
    speedgoat_test_SN5659_R2021_cal->SineWave4_HCos - HoldSine *
    speedgoat_test_SN5659_R2021_cal->SineWave4_Hsin;

  /* Update for Sin: '<S1>/Sine Wave5' */
  HoldSine = speedgoat_test_SN5659_R2021b_IO612_DW.lastSin_cd;
  HoldCosine = speedgoat_test_SN5659_R2021b_IO612_DW.lastCos_c;
  speedgoat_test_SN5659_R2021b_IO612_DW.lastSin_cd = HoldSine *
    speedgoat_test_SN5659_R2021_cal->SineWave5_HCos + HoldCosine *
    speedgoat_test_SN5659_R2021_cal->SineWave5_Hsin;
  speedgoat_test_SN5659_R2021b_IO612_DW.lastCos_c = HoldCosine *
    speedgoat_test_SN5659_R2021_cal->SineWave5_HCos - HoldSine *
    speedgoat_test_SN5659_R2021_cal->SineWave5_Hsin;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++speedgoat_test_SN5659_R2021b_IO612_M->Timing.clockTick0)) {
    ++speedgoat_test_SN5659_R2021b_IO612_M->Timing.clockTickH0;
  }

  speedgoat_test_SN5659_R2021b_IO612_M->Timing.t[0] =
    speedgoat_test_SN5659_R2021b_IO612_M->Timing.clockTick0 *
    speedgoat_test_SN5659_R2021b_IO612_M->Timing.stepSize0 +
    speedgoat_test_SN5659_R2021b_IO612_M->Timing.clockTickH0 *
    speedgoat_test_SN5659_R2021b_IO612_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void speedgoat_test_SN5659_R2021b_IO612_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  rtsiSetSolverName(&speedgoat_test_SN5659_R2021b_IO612_M->solverInfo,
                    "FixedStepDiscrete");
  speedgoat_test_SN5659_R2021b_IO612_M->solverInfoPtr =
    (&speedgoat_test_SN5659_R2021b_IO612_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      speedgoat_test_SN5659_R2021b_IO612_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "speedgoat_test_SN5659_R2021b_IO612_M points to
       static memory which is guaranteed to be non-NULL" */
    speedgoat_test_SN5659_R2021b_IO612_M->Timing.sampleTimeTaskIDPtr =
      (&mdlTsMap[0]);
    speedgoat_test_SN5659_R2021b_IO612_M->Timing.sampleTimes =
      (&speedgoat_test_SN5659_R2021b_IO612_M->Timing.sampleTimesArray[0]);
    speedgoat_test_SN5659_R2021b_IO612_M->Timing.offsetTimes =
      (&speedgoat_test_SN5659_R2021b_IO612_M->Timing.offsetTimesArray[0]);

    /* task periods */
    speedgoat_test_SN5659_R2021b_IO612_M->Timing.sampleTimes[0] = (0.001);

    /* task offsets */
    speedgoat_test_SN5659_R2021b_IO612_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(speedgoat_test_SN5659_R2021b_IO612_M,
             &speedgoat_test_SN5659_R2021b_IO612_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits =
      speedgoat_test_SN5659_R2021b_IO612_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    speedgoat_test_SN5659_R2021b_IO612_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(speedgoat_test_SN5659_R2021b_IO612_M, -1);
  speedgoat_test_SN5659_R2021b_IO612_M->Timing.stepSize0 = 0.001;
  speedgoat_test_SN5659_R2021b_IO612_M->solverInfoPtr =
    (&speedgoat_test_SN5659_R2021b_IO612_M->solverInfo);
  speedgoat_test_SN5659_R2021b_IO612_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&speedgoat_test_SN5659_R2021b_IO612_M->solverInfo, 0.001);
  rtsiSetSolverMode(&speedgoat_test_SN5659_R2021b_IO612_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&speedgoat_test_SN5659_R2021b_IO612_B)),
                     0,
                     sizeof(B_speedgoat_test_SN5659_R2021b_IO612_T));

  {
    speedgoat_test_SN5659_R2021b_IO612_B.CANPack = CAN_DATATYPE_GROUND;
    speedgoat_test_SN5659_R2021b_IO612_B.CANPack1 = CAN_DATATYPE_GROUND;
    speedgoat_test_SN5659_R2021b_IO612_B.CANPack2 = CAN_DATATYPE_GROUND;
    speedgoat_test_SN5659_R2021b_IO612_B.CANPack3 = CAN_DATATYPE_GROUND;
    speedgoat_test_SN5659_R2021b_IO612_B.CANPack4 = CAN_DATATYPE_GROUND;
    speedgoat_test_SN5659_R2021b_IO612_B.CANPack5 = CAN_DATATYPE_GROUND;
    speedgoat_test_SN5659_R2021b_IO612_B.CANRead1_o2 = CAN_DATATYPE_GROUND;
    speedgoat_test_SN5659_R2021b_IO612_B.CANRead_o2 = CAN_DATATYPE_GROUND;
  }

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&speedgoat_test_SN5659_R2021b_IO612_DW),
                     0,
                     sizeof(DW_speedgoat_test_SN5659_R2021b_IO612_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo =
      &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.sfcnInfo;
    speedgoat_test_SN5659_R2021b_IO612_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (speedgoat_test_SN5659_R2021b_IO612_M)));
    speedgoat_test_SN5659_R2021b_IO612_M->Sizes.numSampTimes = (1);
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &speedgoat_test_SN5659_R2021b_IO612_M->Sizes.numSampTimes);
    speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.taskTimePtrs[0] =
      &(rtmGetTPtr(speedgoat_test_SN5659_R2021b_IO612_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,
                   speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart
                     (speedgoat_test_SN5659_R2021b_IO612_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal
                     (speedgoat_test_SN5659_R2021b_IO612_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (speedgoat_test_SN5659_R2021b_IO612_M));
    rtssSetStepSizePtr(sfcnInfo,
                       &speedgoat_test_SN5659_R2021b_IO612_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (speedgoat_test_SN5659_R2021b_IO612_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &speedgoat_test_SN5659_R2021b_IO612_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &speedgoat_test_SN5659_R2021b_IO612_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &speedgoat_test_SN5659_R2021b_IO612_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &speedgoat_test_SN5659_R2021b_IO612_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &speedgoat_test_SN5659_R2021b_IO612_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &speedgoat_test_SN5659_R2021b_IO612_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo,
                         &speedgoat_test_SN5659_R2021b_IO612_M->solverInfoPtr);
  }

  speedgoat_test_SN5659_R2021b_IO612_M->Sizes.numSFcns = (9);

  /* register each child */
  {
    (void) std::memset(static_cast<void *>
                       (&speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.childSFunctions
                        [0]), 0,
                       9*sizeof(SimStruct));
    speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions =
      (&speedgoat_test_SN5659_R2021b_IO612_M->
       NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 9; i++) {
        speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[i] =
          (&speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.childSFunctions
           [i]);
      }
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO612/<S3>/CAN Read (sg_IO61X_read_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.inputOutputPortInfo2
        [0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO612_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.periodicStatesInfo
          [0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn0.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn0.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &speedgoat_test_SN5659_R2021b_IO612_B.CANRead_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((CAN_DATATYPE *)
            &speedgoat_test_SN5659_R2021b_IO612_B.CANRead_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Read");
      ssSetPath(rts,
                "speedgoat_test_SN5659_R2021b_IO612/IO612/CAN Read Loop - Port 3/CAN Read");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO612_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANRead_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANRead_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANRead_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANRead_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANRead_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANRead_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANRead_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO612_DW.CANRead_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &speedgoat_test_SN5659_R2021b_IO612_DW.CANRead_IWORK);
      }

      /* registration */
      sg_IO61X_read_s(rts);
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
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO612/<S4>/CAN Read1 (sg_IO61X_read_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.inputOutputPortInfo2
        [1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO612_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.periodicStatesInfo
          [1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn1.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn1.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &speedgoat_test_SN5659_R2021b_IO612_B.CANRead1_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((CAN_DATATYPE *)
            &speedgoat_test_SN5659_R2021b_IO612_B.CANRead1_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Read1");
      ssSetPath(rts,
                "speedgoat_test_SN5659_R2021b_IO612/IO612/CAN Read Loop - Port 4/CAN Read1");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO612_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANRead1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANRead1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANRead1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANRead1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANRead1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANRead1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANRead1_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO612_DW.CANRead1_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &speedgoat_test_SN5659_R2021b_IO612_DW.CANRead1_IWORK);
      }

      /* registration */
      sg_IO61X_read_s(rts);
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
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO612/<S1>/CAN Setup (sg_IO612_setup_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.blkInfo2
                         [2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.inputOutputPortInfo2
        [2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO612_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.periodicStatesInfo
          [2]);
      }

      /* path info */
      ssSetModelName(rts, "CAN Setup");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO612/IO612/CAN Setup");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO612_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 31);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P25_Size);
        ssSetSFcnParam(rts, 25, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P26_Size);
        ssSetSFcnParam(rts, 26, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P27_Size);
        ssSetSFcnParam(rts, 27, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P28_Size);
        ssSetSFcnParam(rts, 28, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P29_Size);
        ssSetSFcnParam(rts, 29, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P30_Size);
        ssSetSFcnParam(rts, 30, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANSetup_P31_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO612_DW.CANSetup_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &speedgoat_test_SN5659_R2021b_IO612_DW.CANSetup_IWORK);
      }

      /* registration */
      sg_IO612_setup_s(rts);
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

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO612/<S1>/CAN Write (sg_IO61X_write_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.blkInfo2
                         [3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.inputOutputPortInfo2
        [3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO612_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods2
                           [3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods3
                           [3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods4
                           [3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.statesInfo2
                         [3]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.periodicStatesInfo
          [3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn3.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn3.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn3.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &speedgoat_test_SN5659_R2021b_IO612_B.CANPack);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO612/IO612/CAN Write");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO612_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite_P8_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO612_DW.CANWrite_IWORK);
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO612_DW.CANWrite_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &speedgoat_test_SN5659_R2021b_IO612_DW.CANWrite_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &speedgoat_test_SN5659_R2021b_IO612_DW.CANWrite_PWORK);
      }

      /* registration */
      sg_IO61X_write_s(rts);
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

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO612/<S1>/CAN Write2 (sg_IO61X_write_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.blkInfo2
                         [4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.inputOutputPortInfo2
        [4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO612_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods2
                           [4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods3
                           [4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods4
                           [4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.statesInfo2
                         [4]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.periodicStatesInfo
          [4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn4.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn4.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn4.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &speedgoat_test_SN5659_R2021b_IO612_B.CANPack1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write2");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO612/IO612/CAN Write2");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO612_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite2_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite2_P8_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO612_DW.CANWrite2_IWORK);
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO612_DW.CANWrite2_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &speedgoat_test_SN5659_R2021b_IO612_DW.CANWrite2_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &speedgoat_test_SN5659_R2021b_IO612_DW.CANWrite2_PWORK);
      }

      /* registration */
      sg_IO61X_write_s(rts);
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

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO612/<S1>/CAN Write3 (sg_IO61X_write_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.blkInfo2
                         [5]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.inputOutputPortInfo2
        [5]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO612_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods2
                           [5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods3
                           [5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods4
                           [5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.statesInfo2
                         [5]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.periodicStatesInfo
          [5]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn5.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn5.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn5.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &speedgoat_test_SN5659_R2021b_IO612_B.CANPack2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write3");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO612/IO612/CAN Write3");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO612_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite3_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite3_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite3_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite3_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite3_P8_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO612_DW.CANWrite3_IWORK);
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO612_DW.CANWrite3_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &speedgoat_test_SN5659_R2021b_IO612_DW.CANWrite3_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &speedgoat_test_SN5659_R2021b_IO612_DW.CANWrite3_PWORK);
      }

      /* registration */
      sg_IO61X_write_s(rts);
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

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO612/<S1>/CAN Write1 (sg_IO61X_write_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.blkInfo2
                         [6]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.inputOutputPortInfo2
        [6]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO612_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods2
                           [6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods3
                           [6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods4
                           [6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.statesInfo2
                         [6]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.periodicStatesInfo
          [6]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn6.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn6.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn6.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &speedgoat_test_SN5659_R2021b_IO612_B.CANPack3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write1");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO612/IO612/CAN Write1");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO612_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite1_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite1_P8_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO612_DW.CANWrite1_IWORK);
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO612_DW.CANWrite1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &speedgoat_test_SN5659_R2021b_IO612_DW.CANWrite1_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &speedgoat_test_SN5659_R2021b_IO612_DW.CANWrite1_PWORK);
      }

      /* registration */
      sg_IO61X_write_s(rts);
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

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO612/<S1>/CAN Write4 (sg_IO61X_write_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.blkInfo2
                         [7]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.inputOutputPortInfo2
        [7]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO612_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods2
                           [7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods3
                           [7]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods4
                           [7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.statesInfo2
                         [7]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.periodicStatesInfo
          [7]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn7.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn7.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn7.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &speedgoat_test_SN5659_R2021b_IO612_B.CANPack4);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write4");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO612/IO612/CAN Write4");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO612_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite4_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite4_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite4_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite4_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite4_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite4_P8_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO612_DW.CANWrite4_IWORK);
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO612_DW.CANWrite4_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn7.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn7.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &speedgoat_test_SN5659_R2021b_IO612_DW.CANWrite4_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &speedgoat_test_SN5659_R2021b_IO612_DW.CANWrite4_PWORK);
      }

      /* registration */
      sg_IO61X_write_s(rts);
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

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO612/<S1>/CAN Write5 (sg_IO61X_write_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.blkInfo2
                         [8]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.inputOutputPortInfo2
        [8]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO612_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods2
                           [8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods3
                           [8]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.methods4
                           [8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.statesInfo2
                         [8]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.periodicStatesInfo
          [8]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn8.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn8.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn8.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &speedgoat_test_SN5659_R2021b_IO612_B.CANPack5);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write5");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO612/IO612/CAN Write5");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO612_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite5_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite5_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite5_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite5_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite5_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite5_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite5_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->CANWrite5_P8_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO612_DW.CANWrite5_IWORK);
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO612_DW.CANWrite5_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn8.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO612_M->NonInlinedSFcns.Sfcn8.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &speedgoat_test_SN5659_R2021b_IO612_DW.CANWrite5_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &speedgoat_test_SN5659_R2021b_IO612_DW.CANWrite5_PWORK);
      }

      /* registration */
      sg_IO61X_write_s(rts);
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

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Start for S-Function (sg_IO612_setup_s): '<S1>/CAN Setup' */
  /* Level2 S-Function Block: '<S1>/CAN Setup' (sg_IO612_setup_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO61X_write_s): '<S1>/CAN Write' */
  /* Level2 S-Function Block: '<S1>/CAN Write' (sg_IO61X_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO61X_write_s): '<S1>/CAN Write2' */
  /* Level2 S-Function Block: '<S1>/CAN Write2' (sg_IO61X_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO61X_write_s): '<S1>/CAN Write3' */
  /* Level2 S-Function Block: '<S1>/CAN Write3' (sg_IO61X_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO61X_write_s): '<S1>/CAN Write1' */
  /* Level2 S-Function Block: '<S1>/CAN Write1' (sg_IO61X_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO61X_write_s): '<S1>/CAN Write4' */
  /* Level2 S-Function Block: '<S1>/CAN Write4' (sg_IO61X_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO61X_write_s): '<S1>/CAN Write5' */
  /* Level2 S-Function Block: '<S1>/CAN Write5' (sg_IO61X_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[8];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO61X_read_s): '<S3>/CAN Read' */
  /* Level2 S-Function Block: '<S3>/CAN Read' (sg_IO61X_read_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (scanunpack): '<S3>/CAN Unpack' */

  /*-----------S-Function Block: <S3>/CAN Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S3>/CAN Unpack1' */

  /*-----------S-Function Block: <S3>/CAN Unpack1 -----------------*/

  /* Start for S-Function (scanunpack): '<S3>/CAN Unpack2' */

  /*-----------S-Function Block: <S3>/CAN Unpack2 -----------------*/

  /* SystemInitialize for S-Function (scanunpack): '<S3>/CAN Unpack' incorporates:
   *  Outport: '<S3>/ID100_Signal1'
   */
  speedgoat_test_SN5659_R2021b_IO612_B.CANUnpack_c =
    speedgoat_test_SN5659_R2021_cal->ID100_Signal1_Y0;

  /* SystemInitialize for S-Function (scanunpack): '<S3>/CAN Unpack1' incorporates:
   *  Outport: '<S3>/ID101_Signal1'
   */
  speedgoat_test_SN5659_R2021b_IO612_B.CANUnpack1_o =
    speedgoat_test_SN5659_R2021_cal->ID101_Signal1_Y0;

  /* SystemInitialize for S-Function (scanunpack): '<S3>/CAN Unpack2' incorporates:
   *  Outport: '<S3>/ID102_Signal1'
   */
  speedgoat_test_SN5659_R2021b_IO612_B.CANUnpack2_j =
    speedgoat_test_SN5659_R2021_cal->ID102_Signal1_Y0;

  /* End of SystemInitialize for SubSystem: '<S1>/CAN Read Loop - Port 3' */
  /* Start for S-Function (sg_IO61X_read_s): '<S4>/CAN Read1' */
  /* Level2 S-Function Block: '<S4>/CAN Read1' (sg_IO61X_read_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (scanunpack): '<S4>/CAN Unpack' */

  /*-----------S-Function Block: <S4>/CAN Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S4>/CAN Unpack1' */

  /*-----------S-Function Block: <S4>/CAN Unpack1 -----------------*/

  /* Start for S-Function (scanunpack): '<S4>/CAN Unpack2' */

  /*-----------S-Function Block: <S4>/CAN Unpack2 -----------------*/

  /* SystemInitialize for S-Function (scanunpack): '<S4>/CAN Unpack' incorporates:
   *  Outport: '<S4>/ID100_Signal1'
   */
  speedgoat_test_SN5659_R2021b_IO612_B.CANUnpack =
    speedgoat_test_SN5659_R2021_cal->ID100_Signal1_Y0_j;

  /* SystemInitialize for S-Function (scanunpack): '<S4>/CAN Unpack1' incorporates:
   *  Outport: '<S4>/ID101_Signal1'
   */
  speedgoat_test_SN5659_R2021b_IO612_B.CANUnpack1 =
    speedgoat_test_SN5659_R2021_cal->ID101_Signal1_Y0_o;

  /* SystemInitialize for S-Function (scanunpack): '<S4>/CAN Unpack2' incorporates:
   *  Outport: '<S4>/ID102_Signal1'
   */
  speedgoat_test_SN5659_R2021b_IO612_B.CANUnpack2 =
    speedgoat_test_SN5659_R2021_cal->ID102_Signal1_Y0_i;

  /* End of SystemInitialize for SubSystem: '<S1>/CAN Read Loop - Port 4' */

  /* Enable for Sin: '<S1>/Sine Wave' */
  speedgoat_test_SN5659_R2021b_IO612_DW.systemEnable = 1;

  /* Enable for Sin: '<S1>/Sine Wave1' */
  speedgoat_test_SN5659_R2021b_IO612_DW.systemEnable_p = 1;

  /* Enable for Sin: '<S1>/Sine Wave2' */
  speedgoat_test_SN5659_R2021b_IO612_DW.systemEnable_i = 1;

  /* Enable for Sin: '<S1>/Sine Wave3' */
  speedgoat_test_SN5659_R2021b_IO612_DW.systemEnable_h = 1;

  /* Enable for Sin: '<S1>/Sine Wave4' */
  speedgoat_test_SN5659_R2021b_IO612_DW.systemEnable_b = 1;

  /* Enable for Sin: '<S1>/Sine Wave5' */
  speedgoat_test_SN5659_R2021b_IO612_DW.systemEnable_py = 1;
}

/* Model terminate function */
void speedgoat_test_SN5659_R2021b_IO612_terminate(void)
{
  /* Terminate for S-Function (sg_IO612_setup_s): '<S1>/CAN Setup' */
  /* Level2 S-Function Block: '<S1>/CAN Setup' (sg_IO612_setup_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO61X_write_s): '<S1>/CAN Write' */
  /* Level2 S-Function Block: '<S1>/CAN Write' (sg_IO61X_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO61X_write_s): '<S1>/CAN Write2' */
  /* Level2 S-Function Block: '<S1>/CAN Write2' (sg_IO61X_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO61X_write_s): '<S1>/CAN Write3' */
  /* Level2 S-Function Block: '<S1>/CAN Write3' (sg_IO61X_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO61X_write_s): '<S1>/CAN Write1' */
  /* Level2 S-Function Block: '<S1>/CAN Write1' (sg_IO61X_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO61X_write_s): '<S1>/CAN Write4' */
  /* Level2 S-Function Block: '<S1>/CAN Write4' (sg_IO61X_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO61X_write_s): '<S1>/CAN Write5' */
  /* Level2 S-Function Block: '<S1>/CAN Write5' (sg_IO61X_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Terminate for Iterator SubSystem: '<S1>/CAN Read Loop - Port 3' */

  /* Terminate for S-Function (sg_IO61X_read_s): '<S3>/CAN Read' */
  /* Level2 S-Function Block: '<S3>/CAN Read' (sg_IO61X_read_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S1>/CAN Read Loop - Port 3' */

  /* Terminate for Iterator SubSystem: '<S1>/CAN Read Loop - Port 4' */

  /* Terminate for S-Function (sg_IO61X_read_s): '<S4>/CAN Read1' */
  /* Level2 S-Function Block: '<S4>/CAN Read1' (sg_IO61X_read_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO612_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S1>/CAN Read Loop - Port 4' */
}
