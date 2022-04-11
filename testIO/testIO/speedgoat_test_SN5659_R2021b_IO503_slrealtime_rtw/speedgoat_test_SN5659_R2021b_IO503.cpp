/*
 * speedgoat_test_SN5659_R2021b_IO503.cpp
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

#include "speedgoat_test_SN5659_R2021b_IO503.h"
#include "speedgoat_test_SN5659_R2021b_IO503_private.h"

/* Block signals (default storage) */
B_speedgoat_test_SN5659_R2021b_IO503_T speedgoat_test_SN5659_R2021b_IO503_B;

/* Block states (default storage) */
DW_speedgoat_test_SN5659_R2021b_IO503_T speedgoat_test_SN5659_R2021b_IO503_DW;

/* Real-time model */
RT_MODEL_speedgoat_test_SN5659_R2021b_IO503_T
  speedgoat_test_SN5659_R2021b_IO503_M_ =
  RT_MODEL_speedgoat_test_SN5659_R2021b_IO503_T();
RT_MODEL_speedgoat_test_SN5659_R2021b_IO503_T *const
  speedgoat_test_SN5659_R2021b_IO503_M = &speedgoat_test_SN5659_R2021b_IO503_M_;

/* Model step function */
void speedgoat_test_SN5659_R2021b_IO503_step(void)
{
  real_T HoldCosine;
  real_T HoldSine;

  /* S-Function (sg_serial_setup_s): '<S1>/Setup ' */

  /* Level2 S-Function Block: '<S1>/Setup ' (sg_serial_setup_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_serial_read_s): '<S1>/Read ' */

  /* Level2 S-Function Block: '<S1>/Read ' (sg_serial_read_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  /* S-Function (slfifowrite): '<S1>/FIFO write' */
  {
    const char *err;
    static char msg[100];
    err = fifowrite((int32_T *)
                    speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite_PWORK[0],
                    speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite_PWORK[1],
                    &speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite_PWORK[2],
                    &speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite_IWORK[0]);
    if (err) {
      if (strncmp("FIFO", err, 4)) {
        rtmSetErrorStatus(speedgoat_test_SN5659_R2021b_IO503_M, err);
      } else {
        int n = strlen(err);
        strcpy(msg, err);
        strncpy(msg + n, "Rx Ch1 overflow", 99 - n);
        rtmSetErrorStatus(speedgoat_test_SN5659_R2021b_IO503_M, msg);
      }
    }
  }

  /* S-Function (slfiforead): '<S1>/FIFO read' */
  {
    void **iPtrs = &speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread_PWORK[0];
    void **oPtrs = &speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread_PWORK[3];
    fiforead((const void **)iPtrs, oPtrs,
             &speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread_IWORK[0]);
  }

  /* S-Function (slasciidecode): '<S1>/ASCII Decode' */

  /* Level2 S-Function Block: '<S1>/ASCII Decode' (slasciidecode) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_serial_read_s): '<S1>/Read 1' */

  /* Level2 S-Function Block: '<S1>/Read 1' (sg_serial_read_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  /* S-Function (slfifowrite): '<S1>/FIFO write1' */
  {
    const char *err;
    static char msg[100];
    err = fifowrite((int32_T *)
                    speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite1_PWORK[0],
                    speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite1_PWORK[1],
                    &speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite1_PWORK[2],
                    &speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite1_IWORK[0]);
    if (err) {
      if (strncmp("FIFO", err, 4)) {
        rtmSetErrorStatus(speedgoat_test_SN5659_R2021b_IO503_M, err);
      } else {
        int n = strlen(err);
        strcpy(msg, err);
        strncpy(msg + n, "Rx Ch2 overflow", 99 - n);
        rtmSetErrorStatus(speedgoat_test_SN5659_R2021b_IO503_M, msg);
      }
    }
  }

  /* S-Function (slfiforead): '<S1>/FIFO read1' */
  {
    void **iPtrs = &speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread1_PWORK[0];
    void **oPtrs = &speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread1_PWORK[3];
    fiforead((const void **)iPtrs, oPtrs,
             &speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread1_IWORK[0]);
  }

  /* S-Function (slasciidecode): '<S1>/ASCII Decode1' */

  /* Level2 S-Function Block: '<S1>/ASCII Decode1' (slasciidecode) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_serial_read_s): '<S1>/Read 2' */

  /* Level2 S-Function Block: '<S1>/Read 2' (sg_serial_read_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[5];
    sfcnOutputs(rts,0);
  }

  /* S-Function (slfifowrite): '<S1>/FIFO write2' */
  {
    const char *err;
    static char msg[100];
    err = fifowrite((int32_T *)
                    speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite2_PWORK[0],
                    speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite2_PWORK[1],
                    &speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite2_PWORK[2],
                    &speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite2_IWORK[0]);
    if (err) {
      if (strncmp("FIFO", err, 4)) {
        rtmSetErrorStatus(speedgoat_test_SN5659_R2021b_IO503_M, err);
      } else {
        int n = strlen(err);
        strcpy(msg, err);
        strncpy(msg + n, "Rx Ch3 overflow", 99 - n);
        rtmSetErrorStatus(speedgoat_test_SN5659_R2021b_IO503_M, msg);
      }
    }
  }

  /* S-Function (slfiforead): '<S1>/FIFO read2' */
  {
    void **iPtrs = &speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread2_PWORK[0];
    void **oPtrs = &speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread2_PWORK[3];
    fiforead((const void **)iPtrs, oPtrs,
             &speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread2_IWORK[0]);
  }

  /* S-Function (slasciidecode): '<S1>/ASCII Decode2' */

  /* Level2 S-Function Block: '<S1>/ASCII Decode2' (slasciidecode) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[6];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_serial_read_s): '<S1>/Read 3' */

  /* Level2 S-Function Block: '<S1>/Read 3' (sg_serial_read_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[7];
    sfcnOutputs(rts,0);
  }

  /* S-Function (slfifowrite): '<S1>/FIFO write3' */
  {
    const char *err;
    static char msg[100];
    err = fifowrite((int32_T *)
                    speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite3_PWORK[0],
                    speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite3_PWORK[1],
                    &speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite3_PWORK[2],
                    &speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite3_IWORK[0]);
    if (err) {
      if (strncmp("FIFO", err, 4)) {
        rtmSetErrorStatus(speedgoat_test_SN5659_R2021b_IO503_M, err);
      } else {
        int n = strlen(err);
        strcpy(msg, err);
        strncpy(msg + n, "Rx Ch4 overflow", 99 - n);
        rtmSetErrorStatus(speedgoat_test_SN5659_R2021b_IO503_M, msg);
      }
    }
  }

  /* S-Function (slfiforead): '<S1>/FIFO read3' */
  {
    void **iPtrs = &speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread3_PWORK[0];
    void **oPtrs = &speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread3_PWORK[3];
    fiforead((const void **)iPtrs, oPtrs,
             &speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread3_IWORK[0]);
  }

  /* S-Function (slasciidecode): '<S1>/ASCII Decode3' */

  /* Level2 S-Function Block: '<S1>/ASCII Decode3' (slasciidecode) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[8];
    sfcnOutputs(rts,0);
  }

  /* Sin: '<S1>/Sine Wave1' */
  if (speedgoat_test_SN5659_R2021b_IO503_DW.systemEnable != 0) {
    speedgoat_test_SN5659_R2021b_IO503_DW.lastSin = std::sin
      (speedgoat_test_SN5659_R2021_cal->SineWave1_Freq *
       speedgoat_test_SN5659_R2021b_IO503_M->Timing.t[0]);
    speedgoat_test_SN5659_R2021b_IO503_DW.lastCos = std::cos
      (speedgoat_test_SN5659_R2021_cal->SineWave1_Freq *
       speedgoat_test_SN5659_R2021b_IO503_M->Timing.t[0]);
    speedgoat_test_SN5659_R2021b_IO503_DW.systemEnable = 0;
  }

  /* Sin: '<S1>/Sine Wave1' */
  speedgoat_test_SN5659_R2021b_IO503_B.SineWave1 =
    ((speedgoat_test_SN5659_R2021b_IO503_DW.lastSin *
      speedgoat_test_SN5659_R2021_cal->SineWave1_PCos +
      speedgoat_test_SN5659_R2021b_IO503_DW.lastCos *
      speedgoat_test_SN5659_R2021_cal->SineWave1_PSin) *
     speedgoat_test_SN5659_R2021_cal->SineWave1_HCos +
     (speedgoat_test_SN5659_R2021b_IO503_DW.lastCos *
      speedgoat_test_SN5659_R2021_cal->SineWave1_PCos -
      speedgoat_test_SN5659_R2021b_IO503_DW.lastSin *
      speedgoat_test_SN5659_R2021_cal->SineWave1_PSin) *
     speedgoat_test_SN5659_R2021_cal->SineWave1_Hsin) *
    speedgoat_test_SN5659_R2021_cal->SineWave1_Amp +
    speedgoat_test_SN5659_R2021_cal->SineWave1_Bias;

  /* S-Function (slasciiencode): '<S1>/ASCII Encode' */

  /* Level2 S-Function Block: '<S1>/ASCII Encode' (slasciiencode) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[9];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_serial_write_s): '<S1>/Write ' */

  /* Level2 S-Function Block: '<S1>/Write ' (sg_serial_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[10];
    sfcnOutputs(rts,0);
  }

  /* Sin: '<S1>/Sine Wave2' */
  if (speedgoat_test_SN5659_R2021b_IO503_DW.systemEnable_p != 0) {
    speedgoat_test_SN5659_R2021b_IO503_DW.lastSin_e = std::sin
      (speedgoat_test_SN5659_R2021_cal->SineWave2_Freq *
       speedgoat_test_SN5659_R2021b_IO503_M->Timing.t[0]);
    speedgoat_test_SN5659_R2021b_IO503_DW.lastCos_o = std::cos
      (speedgoat_test_SN5659_R2021_cal->SineWave2_Freq *
       speedgoat_test_SN5659_R2021b_IO503_M->Timing.t[0]);
    speedgoat_test_SN5659_R2021b_IO503_DW.systemEnable_p = 0;
  }

  /* Sin: '<S1>/Sine Wave2' */
  speedgoat_test_SN5659_R2021b_IO503_B.SineWave2 =
    ((speedgoat_test_SN5659_R2021b_IO503_DW.lastSin_e *
      speedgoat_test_SN5659_R2021_cal->SineWave2_PCos +
      speedgoat_test_SN5659_R2021b_IO503_DW.lastCos_o *
      speedgoat_test_SN5659_R2021_cal->SineWave2_PSin) *
     speedgoat_test_SN5659_R2021_cal->SineWave2_HCos +
     (speedgoat_test_SN5659_R2021b_IO503_DW.lastCos_o *
      speedgoat_test_SN5659_R2021_cal->SineWave2_PCos -
      speedgoat_test_SN5659_R2021b_IO503_DW.lastSin_e *
      speedgoat_test_SN5659_R2021_cal->SineWave2_PSin) *
     speedgoat_test_SN5659_R2021_cal->SineWave2_Hsin) *
    speedgoat_test_SN5659_R2021_cal->SineWave2_Amp +
    speedgoat_test_SN5659_R2021_cal->SineWave2_Bias;

  /* S-Function (slasciiencode): '<S1>/ASCII Encode1' */

  /* Level2 S-Function Block: '<S1>/ASCII Encode1' (slasciiencode) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[11];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_serial_write_s): '<S1>/Write 1' */

  /* Level2 S-Function Block: '<S1>/Write 1' (sg_serial_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[12];
    sfcnOutputs(rts,0);
  }

  /* Sin: '<S1>/Sine Wave3' */
  if (speedgoat_test_SN5659_R2021b_IO503_DW.systemEnable_a != 0) {
    speedgoat_test_SN5659_R2021b_IO503_DW.lastSin_l = std::sin
      (speedgoat_test_SN5659_R2021_cal->SineWave3_Freq *
       speedgoat_test_SN5659_R2021b_IO503_M->Timing.t[0]);
    speedgoat_test_SN5659_R2021b_IO503_DW.lastCos_b = std::cos
      (speedgoat_test_SN5659_R2021_cal->SineWave3_Freq *
       speedgoat_test_SN5659_R2021b_IO503_M->Timing.t[0]);
    speedgoat_test_SN5659_R2021b_IO503_DW.systemEnable_a = 0;
  }

  /* Sin: '<S1>/Sine Wave3' */
  speedgoat_test_SN5659_R2021b_IO503_B.SineWave3 =
    ((speedgoat_test_SN5659_R2021b_IO503_DW.lastSin_l *
      speedgoat_test_SN5659_R2021_cal->SineWave3_PCos +
      speedgoat_test_SN5659_R2021b_IO503_DW.lastCos_b *
      speedgoat_test_SN5659_R2021_cal->SineWave3_PSin) *
     speedgoat_test_SN5659_R2021_cal->SineWave3_HCos +
     (speedgoat_test_SN5659_R2021b_IO503_DW.lastCos_b *
      speedgoat_test_SN5659_R2021_cal->SineWave3_PCos -
      speedgoat_test_SN5659_R2021b_IO503_DW.lastSin_l *
      speedgoat_test_SN5659_R2021_cal->SineWave3_PSin) *
     speedgoat_test_SN5659_R2021_cal->SineWave3_Hsin) *
    speedgoat_test_SN5659_R2021_cal->SineWave3_Amp +
    speedgoat_test_SN5659_R2021_cal->SineWave3_Bias;

  /* S-Function (slasciiencode): '<S1>/ASCII Encode2' */

  /* Level2 S-Function Block: '<S1>/ASCII Encode2' (slasciiencode) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[13];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_serial_write_s): '<S1>/Write 2' */

  /* Level2 S-Function Block: '<S1>/Write 2' (sg_serial_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[14];
    sfcnOutputs(rts,0);
  }

  /* Sin: '<S1>/Sine Wave4' */
  if (speedgoat_test_SN5659_R2021b_IO503_DW.systemEnable_g != 0) {
    speedgoat_test_SN5659_R2021b_IO503_DW.lastSin_c = std::sin
      (speedgoat_test_SN5659_R2021_cal->SineWave4_Freq *
       speedgoat_test_SN5659_R2021b_IO503_M->Timing.t[0]);
    speedgoat_test_SN5659_R2021b_IO503_DW.lastCos_a = std::cos
      (speedgoat_test_SN5659_R2021_cal->SineWave4_Freq *
       speedgoat_test_SN5659_R2021b_IO503_M->Timing.t[0]);
    speedgoat_test_SN5659_R2021b_IO503_DW.systemEnable_g = 0;
  }

  /* Sin: '<S1>/Sine Wave4' */
  speedgoat_test_SN5659_R2021b_IO503_B.SineWave4 =
    ((speedgoat_test_SN5659_R2021b_IO503_DW.lastSin_c *
      speedgoat_test_SN5659_R2021_cal->SineWave4_PCos +
      speedgoat_test_SN5659_R2021b_IO503_DW.lastCos_a *
      speedgoat_test_SN5659_R2021_cal->SineWave4_PSin) *
     speedgoat_test_SN5659_R2021_cal->SineWave4_HCos +
     (speedgoat_test_SN5659_R2021b_IO503_DW.lastCos_a *
      speedgoat_test_SN5659_R2021_cal->SineWave4_PCos -
      speedgoat_test_SN5659_R2021b_IO503_DW.lastSin_c *
      speedgoat_test_SN5659_R2021_cal->SineWave4_PSin) *
     speedgoat_test_SN5659_R2021_cal->SineWave4_Hsin) *
    speedgoat_test_SN5659_R2021_cal->SineWave4_Amp +
    speedgoat_test_SN5659_R2021_cal->SineWave4_Bias;

  /* S-Function (slasciiencode): '<S1>/ASCII Encode3' */

  /* Level2 S-Function Block: '<S1>/ASCII Encode3' (slasciiencode) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[15];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_serial_write_s): '<S1>/Write 3' */

  /* Level2 S-Function Block: '<S1>/Write 3' (sg_serial_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[16];
    sfcnOutputs(rts,0);
  }

  /* Update for Sin: '<S1>/Sine Wave1' */
  HoldSine = speedgoat_test_SN5659_R2021b_IO503_DW.lastSin;
  HoldCosine = speedgoat_test_SN5659_R2021b_IO503_DW.lastCos;
  speedgoat_test_SN5659_R2021b_IO503_DW.lastSin = HoldSine *
    speedgoat_test_SN5659_R2021_cal->SineWave1_HCos + HoldCosine *
    speedgoat_test_SN5659_R2021_cal->SineWave1_Hsin;
  speedgoat_test_SN5659_R2021b_IO503_DW.lastCos = HoldCosine *
    speedgoat_test_SN5659_R2021_cal->SineWave1_HCos - HoldSine *
    speedgoat_test_SN5659_R2021_cal->SineWave1_Hsin;

  /* Update for Sin: '<S1>/Sine Wave2' */
  HoldSine = speedgoat_test_SN5659_R2021b_IO503_DW.lastSin_e;
  HoldCosine = speedgoat_test_SN5659_R2021b_IO503_DW.lastCos_o;
  speedgoat_test_SN5659_R2021b_IO503_DW.lastSin_e = HoldSine *
    speedgoat_test_SN5659_R2021_cal->SineWave2_HCos + HoldCosine *
    speedgoat_test_SN5659_R2021_cal->SineWave2_Hsin;
  speedgoat_test_SN5659_R2021b_IO503_DW.lastCos_o = HoldCosine *
    speedgoat_test_SN5659_R2021_cal->SineWave2_HCos - HoldSine *
    speedgoat_test_SN5659_R2021_cal->SineWave2_Hsin;

  /* Update for Sin: '<S1>/Sine Wave3' */
  HoldSine = speedgoat_test_SN5659_R2021b_IO503_DW.lastSin_l;
  HoldCosine = speedgoat_test_SN5659_R2021b_IO503_DW.lastCos_b;
  speedgoat_test_SN5659_R2021b_IO503_DW.lastSin_l = HoldSine *
    speedgoat_test_SN5659_R2021_cal->SineWave3_HCos + HoldCosine *
    speedgoat_test_SN5659_R2021_cal->SineWave3_Hsin;
  speedgoat_test_SN5659_R2021b_IO503_DW.lastCos_b = HoldCosine *
    speedgoat_test_SN5659_R2021_cal->SineWave3_HCos - HoldSine *
    speedgoat_test_SN5659_R2021_cal->SineWave3_Hsin;

  /* Update for Sin: '<S1>/Sine Wave4' */
  HoldSine = speedgoat_test_SN5659_R2021b_IO503_DW.lastSin_c;
  HoldCosine = speedgoat_test_SN5659_R2021b_IO503_DW.lastCos_a;
  speedgoat_test_SN5659_R2021b_IO503_DW.lastSin_c = HoldSine *
    speedgoat_test_SN5659_R2021_cal->SineWave4_HCos + HoldCosine *
    speedgoat_test_SN5659_R2021_cal->SineWave4_Hsin;
  speedgoat_test_SN5659_R2021b_IO503_DW.lastCos_a = HoldCosine *
    speedgoat_test_SN5659_R2021_cal->SineWave4_HCos - HoldSine *
    speedgoat_test_SN5659_R2021_cal->SineWave4_Hsin;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++speedgoat_test_SN5659_R2021b_IO503_M->Timing.clockTick0)) {
    ++speedgoat_test_SN5659_R2021b_IO503_M->Timing.clockTickH0;
  }

  speedgoat_test_SN5659_R2021b_IO503_M->Timing.t[0] =
    speedgoat_test_SN5659_R2021b_IO503_M->Timing.clockTick0 *
    speedgoat_test_SN5659_R2021b_IO503_M->Timing.stepSize0 +
    speedgoat_test_SN5659_R2021b_IO503_M->Timing.clockTickH0 *
    speedgoat_test_SN5659_R2021b_IO503_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void speedgoat_test_SN5659_R2021b_IO503_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  rtsiSetSolverName(&speedgoat_test_SN5659_R2021b_IO503_M->solverInfo,
                    "FixedStepDiscrete");
  speedgoat_test_SN5659_R2021b_IO503_M->solverInfoPtr =
    (&speedgoat_test_SN5659_R2021b_IO503_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      speedgoat_test_SN5659_R2021b_IO503_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "speedgoat_test_SN5659_R2021b_IO503_M points to
       static memory which is guaranteed to be non-NULL" */
    speedgoat_test_SN5659_R2021b_IO503_M->Timing.sampleTimeTaskIDPtr =
      (&mdlTsMap[0]);
    speedgoat_test_SN5659_R2021b_IO503_M->Timing.sampleTimes =
      (&speedgoat_test_SN5659_R2021b_IO503_M->Timing.sampleTimesArray[0]);
    speedgoat_test_SN5659_R2021b_IO503_M->Timing.offsetTimes =
      (&speedgoat_test_SN5659_R2021b_IO503_M->Timing.offsetTimesArray[0]);

    /* task periods */
    speedgoat_test_SN5659_R2021b_IO503_M->Timing.sampleTimes[0] = (0.01);

    /* task offsets */
    speedgoat_test_SN5659_R2021b_IO503_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(speedgoat_test_SN5659_R2021b_IO503_M,
             &speedgoat_test_SN5659_R2021b_IO503_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits =
      speedgoat_test_SN5659_R2021b_IO503_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    speedgoat_test_SN5659_R2021b_IO503_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(speedgoat_test_SN5659_R2021b_IO503_M, -1);
  speedgoat_test_SN5659_R2021b_IO503_M->Timing.stepSize0 = 0.01;
  speedgoat_test_SN5659_R2021b_IO503_M->solverInfoPtr =
    (&speedgoat_test_SN5659_R2021b_IO503_M->solverInfo);
  speedgoat_test_SN5659_R2021b_IO503_M->Timing.stepSize = (0.01);
  rtsiSetFixedStepSize(&speedgoat_test_SN5659_R2021b_IO503_M->solverInfo, 0.01);
  rtsiSetSolverMode(&speedgoat_test_SN5659_R2021b_IO503_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&speedgoat_test_SN5659_R2021b_IO503_B)),
                     0,
                     sizeof(B_speedgoat_test_SN5659_R2021b_IO503_T));

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&speedgoat_test_SN5659_R2021b_IO503_DW),
                     0,
                     sizeof(DW_speedgoat_test_SN5659_R2021b_IO503_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo =
      &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.sfcnInfo;
    speedgoat_test_SN5659_R2021b_IO503_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (speedgoat_test_SN5659_R2021b_IO503_M)));
    speedgoat_test_SN5659_R2021b_IO503_M->Sizes.numSampTimes = (1);
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &speedgoat_test_SN5659_R2021b_IO503_M->Sizes.numSampTimes);
    speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.taskTimePtrs[0] =
      &(rtmGetTPtr(speedgoat_test_SN5659_R2021b_IO503_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,
                   speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart
                     (speedgoat_test_SN5659_R2021b_IO503_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal
                     (speedgoat_test_SN5659_R2021b_IO503_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (speedgoat_test_SN5659_R2021b_IO503_M));
    rtssSetStepSizePtr(sfcnInfo,
                       &speedgoat_test_SN5659_R2021b_IO503_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (speedgoat_test_SN5659_R2021b_IO503_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &speedgoat_test_SN5659_R2021b_IO503_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &speedgoat_test_SN5659_R2021b_IO503_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &speedgoat_test_SN5659_R2021b_IO503_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &speedgoat_test_SN5659_R2021b_IO503_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &speedgoat_test_SN5659_R2021b_IO503_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &speedgoat_test_SN5659_R2021b_IO503_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo,
                         &speedgoat_test_SN5659_R2021b_IO503_M->solverInfoPtr);
  }

  speedgoat_test_SN5659_R2021b_IO503_M->Sizes.numSFcns = (17);

  /* register each child */
  {
    (void) std::memset(static_cast<void *>
                       (&speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.childSFunctions
                        [0]), 0,
                       17*sizeof(SimStruct));
    speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions =
      (&speedgoat_test_SN5659_R2021b_IO503_M->
       NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 17; i++) {
        speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[i] =
          (&speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.childSFunctions
           [i]);
      }
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO503/<S1>/Setup  (sg_serial_setup_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.inputOutputPortInfo2
        [0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO503_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.periodicStatesInfo
          [0]);
      }

      /* path info */
      ssSetModelName(rts, "Setup ");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO503/IO503/Setup ");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO503_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 25);
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
        ssSetSFcnParam(rts, 11, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Setup_P25_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.Setup_IWORK[0]);
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.Setup_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &speedgoat_test_SN5659_R2021b_IO503_DW.Setup_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &speedgoat_test_SN5659_R2021b_IO503_DW.Setup_PWORK);
      }

      /* registration */
      sg_serial_setup_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO503/<S1>/Read  (sg_serial_read_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.inputOutputPortInfo2
        [1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO503_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.periodicStatesInfo
          [1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn1.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn1.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 65);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            speedgoat_test_SN5659_R2021b_IO503_B.Read));
        }
      }

      /* path info */
      ssSetModelName(rts, "Read ");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO503/IO503/Read ");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO503_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 9);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read_P9_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.Read_IWORK[0]);
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.Read_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &speedgoat_test_SN5659_R2021b_IO503_DW.Read_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &speedgoat_test_SN5659_R2021b_IO503_DW.Read_PWORK);
      }

      /* registration */
      sg_serial_read_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO503/<S1>/ASCII Decode (slasciidecode) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.blkInfo2
                         [2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.inputOutputPortInfo2
        [2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO503_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.periodicStatesInfo
          [2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn2.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn2.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               speedgoat_test_SN5659_R2021b_IO503_B.FIFOread);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 65);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn2.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn2.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn2.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &speedgoat_test_SN5659_R2021b_IO503_B.IO503_SerialIN_CH1));
        }
      }

      /* path info */
      ssSetModelName(rts, "ASCII Decode");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO503/IO503/ASCII Decode");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO503_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIDecode_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIDecode_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIDecode_P3_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.ASCIIDecode_IWORK[0]);
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.ASCIIDecode_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &speedgoat_test_SN5659_R2021b_IO503_DW.ASCIIDecode_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 2);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &speedgoat_test_SN5659_R2021b_IO503_DW.ASCIIDecode_PWORK[0]);
      }

      /* registration */
      slasciidecode(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 65);
      ssSetInputPortDataType(rts, 0, SS_UINT8);
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

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO503/<S1>/Read 1 (sg_serial_read_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.blkInfo2
                         [3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.inputOutputPortInfo2
        [3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO503_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods2
                           [3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods3
                           [3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods4
                           [3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.statesInfo2
                         [3]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.periodicStatesInfo
          [3]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn3.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn3.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn3.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 65);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            speedgoat_test_SN5659_R2021b_IO503_B.Read1));
        }
      }

      /* path info */
      ssSetModelName(rts, "Read 1");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO503/IO503/Read 1");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO503_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 9);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read1_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read1_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read1_P9_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.Read1_IWORK[0]);
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.Read1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &speedgoat_test_SN5659_R2021b_IO503_DW.Read1_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &speedgoat_test_SN5659_R2021b_IO503_DW.Read1_PWORK);
      }

      /* registration */
      sg_serial_read_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO503/<S1>/ASCII Decode1 (slasciidecode) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.blkInfo2
                         [4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.inputOutputPortInfo2
        [4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO503_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods2
                           [4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods3
                           [4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods4
                           [4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.statesInfo2
                         [4]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.periodicStatesInfo
          [4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn4.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn4.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn4.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               speedgoat_test_SN5659_R2021b_IO503_B.FIFOread1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 65);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn4.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn4.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn4.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &speedgoat_test_SN5659_R2021b_IO503_B.IO503_SerialIN_CH2));
        }
      }

      /* path info */
      ssSetModelName(rts, "ASCII Decode1");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO503/IO503/ASCII Decode1");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO503_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIDecode1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIDecode1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIDecode1_P3_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.ASCIIDecode1_IWORK[0]);
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.ASCIIDecode1_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &speedgoat_test_SN5659_R2021b_IO503_DW.ASCIIDecode1_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 2);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &speedgoat_test_SN5659_R2021b_IO503_DW.ASCIIDecode1_PWORK[0]);
      }

      /* registration */
      slasciidecode(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 65);
      ssSetInputPortDataType(rts, 0, SS_UINT8);
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

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO503/<S1>/Read 2 (sg_serial_read_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.blkInfo2
                         [5]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.inputOutputPortInfo2
        [5]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO503_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods2
                           [5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods3
                           [5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods4
                           [5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.statesInfo2
                         [5]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.periodicStatesInfo
          [5]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn5.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn5.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn5.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 65);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            speedgoat_test_SN5659_R2021b_IO503_B.Read2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Read 2");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO503/IO503/Read 2");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO503_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 9);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read2_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read2_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read2_P9_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.Read2_IWORK[0]);
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.Read2_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &speedgoat_test_SN5659_R2021b_IO503_DW.Read2_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &speedgoat_test_SN5659_R2021b_IO503_DW.Read2_PWORK);
      }

      /* registration */
      sg_serial_read_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO503/<S1>/ASCII Decode2 (slasciidecode) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.blkInfo2
                         [6]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.inputOutputPortInfo2
        [6]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO503_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods2
                           [6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods3
                           [6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods4
                           [6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.statesInfo2
                         [6]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.periodicStatesInfo
          [6]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn6.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn6.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn6.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               speedgoat_test_SN5659_R2021b_IO503_B.FIFOread2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 65);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn6.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn6.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn6.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &speedgoat_test_SN5659_R2021b_IO503_B.IO503_SerialIN_CH3));
        }
      }

      /* path info */
      ssSetModelName(rts, "ASCII Decode2");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO503/IO503/ASCII Decode2");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO503_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIDecode2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIDecode2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIDecode2_P3_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.ASCIIDecode2_IWORK[0]);
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.ASCIIDecode2_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &speedgoat_test_SN5659_R2021b_IO503_DW.ASCIIDecode2_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 2);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &speedgoat_test_SN5659_R2021b_IO503_DW.ASCIIDecode2_PWORK[0]);
      }

      /* registration */
      slasciidecode(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 65);
      ssSetInputPortDataType(rts, 0, SS_UINT8);
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

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO503/<S1>/Read 3 (sg_serial_read_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.blkInfo2
                         [7]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.inputOutputPortInfo2
        [7]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO503_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods2
                           [7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods3
                           [7]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods4
                           [7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.statesInfo2
                         [7]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.periodicStatesInfo
          [7]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn7.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn7.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn7.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 65);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            speedgoat_test_SN5659_R2021b_IO503_B.Read3));
        }
      }

      /* path info */
      ssSetModelName(rts, "Read 3");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO503/IO503/Read 3");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO503_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 9);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read3_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read3_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read3_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read3_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read3_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Read3_P9_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.Read3_IWORK[0]);
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.Read3_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn7.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn7.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &speedgoat_test_SN5659_R2021b_IO503_DW.Read3_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &speedgoat_test_SN5659_R2021b_IO503_DW.Read3_PWORK);
      }

      /* registration */
      sg_serial_read_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO503/<S1>/ASCII Decode3 (slasciidecode) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.blkInfo2
                         [8]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.inputOutputPortInfo2
        [8]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO503_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods2
                           [8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods3
                           [8]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods4
                           [8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.statesInfo2
                         [8]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.periodicStatesInfo
          [8]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn8.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn8.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn8.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               speedgoat_test_SN5659_R2021b_IO503_B.FIFOread3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 65);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn8.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn8.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn8.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &speedgoat_test_SN5659_R2021b_IO503_B.IO503_SerialIN_CH4));
        }
      }

      /* path info */
      ssSetModelName(rts, "ASCII Decode3");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO503/IO503/ASCII Decode3");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO503_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIDecode3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIDecode3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIDecode3_P3_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.ASCIIDecode3_IWORK[0]);
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.ASCIIDecode3_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn8.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn8.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &speedgoat_test_SN5659_R2021b_IO503_DW.ASCIIDecode3_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 2);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &speedgoat_test_SN5659_R2021b_IO503_DW.ASCIIDecode3_PWORK[0]);
      }

      /* registration */
      slasciidecode(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 65);
      ssSetInputPortDataType(rts, 0, SS_UINT8);
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

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO503/<S1>/ASCII Encode (slasciiencode) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[9];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn9.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn9.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn9.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.blkInfo2
                         [9]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.inputOutputPortInfo2
        [9]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO503_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods2
                           [9]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods3
                           [9]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods4
                           [9]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.statesInfo2
                         [9]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.periodicStatesInfo
          [9]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn9.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn9.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn9.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn9.UPtrs0;
          sfcnUPtrs[0] = &speedgoat_test_SN5659_R2021b_IO503_B.SineWave1;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn9.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn9.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn9.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 64);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            speedgoat_test_SN5659_R2021b_IO503_B.ASCIIEncode));
        }
      }

      /* path info */
      ssSetModelName(rts, "ASCII Encode");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO503/IO503/ASCII Encode");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO503_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIEncode_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIEncode_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIEncode_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIEncode_P4_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.ASCIIEncode_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn9.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn9.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &speedgoat_test_SN5659_R2021b_IO503_DW.ASCIIEncode_PWORK);
      }

      /* registration */
      slasciiencode(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
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

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO503/<S1>/Write  (sg_serial_write_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[10];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn10.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn10.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn10.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.blkInfo2
                         [10]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.inputOutputPortInfo2
        [10]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO503_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods2
                           [10]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods3
                           [10]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods4
                           [10]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.statesInfo2
                         [10]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.periodicStatesInfo
          [10]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn10.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn10.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn10.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               speedgoat_test_SN5659_R2021b_IO503_B.ASCIIEncode);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 64);
        }
      }

      /* path info */
      ssSetModelName(rts, "Write ");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO503/IO503/Write ");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO503_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn10.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write_P8_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.Write_IWORK[0]);
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.Write_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn10.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn10.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &speedgoat_test_SN5659_R2021b_IO503_DW.Write_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &speedgoat_test_SN5659_R2021b_IO503_DW.Write_PWORK);
      }

      /* registration */
      sg_serial_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO503/<S1>/ASCII Encode1 (slasciiencode) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[11];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn11.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn11.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn11.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.blkInfo2
                         [11]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.inputOutputPortInfo2
        [11]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO503_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods2
                           [11]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods3
                           [11]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods4
                           [11]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.statesInfo2
                         [11]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.periodicStatesInfo
          [11]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn11.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn11.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn11.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn11.UPtrs0;
          sfcnUPtrs[0] = &speedgoat_test_SN5659_R2021b_IO503_B.SineWave2;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn11.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn11.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn11.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 64);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            speedgoat_test_SN5659_R2021b_IO503_B.ASCIIEncode1));
        }
      }

      /* path info */
      ssSetModelName(rts, "ASCII Encode1");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO503/IO503/ASCII Encode1");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO503_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn11.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIEncode1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIEncode1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIEncode1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIEncode1_P4_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.ASCIIEncode1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn11.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn11.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &speedgoat_test_SN5659_R2021b_IO503_DW.ASCIIEncode1_PWORK);
      }

      /* registration */
      slasciiencode(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
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

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO503/<S1>/Write 1 (sg_serial_write_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[12];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn12.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn12.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn12.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.blkInfo2
                         [12]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.inputOutputPortInfo2
        [12]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO503_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods2
                           [12]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods3
                           [12]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods4
                           [12]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.statesInfo2
                         [12]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.periodicStatesInfo
          [12]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn12.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn12.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn12.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               speedgoat_test_SN5659_R2021b_IO503_B.ASCIIEncode1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 64);
        }
      }

      /* path info */
      ssSetModelName(rts, "Write 1");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO503/IO503/Write 1");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO503_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn12.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write1_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write1_P8_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.Write1_IWORK[0]);
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.Write1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn12.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn12.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &speedgoat_test_SN5659_R2021b_IO503_DW.Write1_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &speedgoat_test_SN5659_R2021b_IO503_DW.Write1_PWORK);
      }

      /* registration */
      sg_serial_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO503/<S1>/ASCII Encode2 (slasciiencode) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[13];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn13.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn13.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn13.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.blkInfo2
                         [13]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.inputOutputPortInfo2
        [13]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO503_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods2
                           [13]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods3
                           [13]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods4
                           [13]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.statesInfo2
                         [13]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.periodicStatesInfo
          [13]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn13.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn13.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn13.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn13.UPtrs0;
          sfcnUPtrs[0] = &speedgoat_test_SN5659_R2021b_IO503_B.SineWave3;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn13.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn13.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn13.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 64);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            speedgoat_test_SN5659_R2021b_IO503_B.ASCIIEncode2));
        }
      }

      /* path info */
      ssSetModelName(rts, "ASCII Encode2");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO503/IO503/ASCII Encode2");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO503_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn13.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIEncode2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIEncode2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIEncode2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIEncode2_P4_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.ASCIIEncode2_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn13.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn13.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &speedgoat_test_SN5659_R2021b_IO503_DW.ASCIIEncode2_PWORK);
      }

      /* registration */
      slasciiencode(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
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

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO503/<S1>/Write 2 (sg_serial_write_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[14];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn14.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn14.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn14.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.blkInfo2
                         [14]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.inputOutputPortInfo2
        [14]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO503_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods2
                           [14]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods3
                           [14]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods4
                           [14]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.statesInfo2
                         [14]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.periodicStatesInfo
          [14]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn14.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn14.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn14.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               speedgoat_test_SN5659_R2021b_IO503_B.ASCIIEncode2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 64);
        }
      }

      /* path info */
      ssSetModelName(rts, "Write 2");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO503/IO503/Write 2");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO503_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn14.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write2_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write2_P8_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.Write2_IWORK[0]);
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.Write2_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn14.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn14.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &speedgoat_test_SN5659_R2021b_IO503_DW.Write2_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &speedgoat_test_SN5659_R2021b_IO503_DW.Write2_PWORK);
      }

      /* registration */
      sg_serial_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO503/<S1>/ASCII Encode3 (slasciiencode) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[15];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn15.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn15.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn15.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.blkInfo2
                         [15]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.inputOutputPortInfo2
        [15]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO503_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods2
                           [15]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods3
                           [15]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods4
                           [15]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.statesInfo2
                         [15]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.periodicStatesInfo
          [15]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn15.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn15.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn15.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn15.UPtrs0;
          sfcnUPtrs[0] = &speedgoat_test_SN5659_R2021b_IO503_B.SineWave4;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn15.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn15.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn15.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 64);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            speedgoat_test_SN5659_R2021b_IO503_B.ASCIIEncode3));
        }
      }

      /* path info */
      ssSetModelName(rts, "ASCII Encode3");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO503/IO503/ASCII Encode3");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO503_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn15.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIEncode3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIEncode3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIEncode3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->ASCIIEncode3_P4_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.ASCIIEncode3_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn15.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn15.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &speedgoat_test_SN5659_R2021b_IO503_DW.ASCIIEncode3_PWORK);
      }

      /* registration */
      slasciiencode(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
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

    /* Level2 S-Function Block: speedgoat_test_SN5659_R2021b_IO503/<S1>/Write 3 (sg_serial_write_s) */
    {
      SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[16];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn16.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn16.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn16.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.blkInfo2
                         [16]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.inputOutputPortInfo2
        [16]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_test_SN5659_R2021b_IO503_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods2
                           [16]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods3
                           [16]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.methods4
                           [16]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.statesInfo2
                         [16]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.periodicStatesInfo
          [16]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn16.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn16.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn16.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               speedgoat_test_SN5659_R2021b_IO503_B.ASCIIEncode3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 64);
        }
      }

      /* path info */
      ssSetModelName(rts, "Write 3");
      ssSetPath(rts, "speedgoat_test_SN5659_R2021b_IO503/IO503/Write 3");
      ssSetRTModel(rts,speedgoat_test_SN5659_R2021b_IO503_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn16.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write3_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write3_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write3_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write3_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       speedgoat_test_SN5659_R2021_cal->Write3_P8_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.Write3_IWORK[0]);
      ssSetPWork(rts, (void **)
                 &speedgoat_test_SN5659_R2021b_IO503_DW.Write3_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn16.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_test_SN5659_R2021b_IO503_M->NonInlinedSFcns.Sfcn16.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &speedgoat_test_SN5659_R2021b_IO503_DW.Write3_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &speedgoat_test_SN5659_R2021b_IO503_DW.Write3_PWORK);
      }

      /* registration */
      sg_serial_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
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

  /* Start for S-Function (sg_serial_setup_s): '<S1>/Setup ' */
  /* Level2 S-Function Block: '<S1>/Setup ' (sg_serial_setup_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_serial_read_s): '<S1>/Read ' */
  /* Level2 S-Function Block: '<S1>/Read ' (sg_serial_read_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (slfifowrite): '<S1>/FIFO write' */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite_IWORK[0] = 64;/* fifo size */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite_IWORK[1] = 2;/* fifo type */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite_IWORK[2] = 65;/* inport width */

  /* allocate memory for FIFO */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite_PWORK[0] = malloc(4 * (64 + 3));
  if (speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite_PWORK[0] == NULL) {
    rtmSetErrorStatus(speedgoat_test_SN5659_R2021b_IO503_M,
                      "Error allocating memory");
    return;
  }

  /* Input pointer */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite_PWORK[1] =
    &speedgoat_test_SN5659_R2021b_IO503_B.Read[0];

  /* Output pointer(s) */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite_PWORK[2] =
    &speedgoat_test_SN5659_R2021b_IO503_B.FIFOwrite;
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite_PWORK[3] = NULL;

  {
    /* Initialize the fifo */
    int *fifo = (int *)speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite_PWORK[0];
    memset(fifo, 0, 4 * (64 + 3));
    serialfifoptr *oPtr = &speedgoat_test_SN5659_R2021b_IO503_B.FIFOwrite;
    fifo[0] = 64;
    oPtr->ptrlow = (uint32_T)( (uint64_T)fifo & 0xffffffff );
    oPtr->ptrhigh = (uint32_T)( ((uint64_T)fifo >> 32) & 0xffffffff );
    oPtr->token = (int)(('F' << 3) | ('i' << 2) | ('F' << 1) | 'o');
  }

  /* Start for S-Function (slfiforead): '<S1>/FIFO read' */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread_IWORK[0] = 64;/* Max to read */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread_IWORK[1] = 1;/* Min to read */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread_IWORK[2] = 1;/* Use delimiter? */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread_IWORK[3] = 13;/* delimiter */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread_IWORK[4] = 6;/* FIFO type */

  /* Input pointer(s) */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread_PWORK[0] =
    &speedgoat_test_SN5659_R2021b_IO503_B.FIFOwrite;
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread_PWORK[1] = NULL;
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread_PWORK[2] = NULL;

  /* Output pointer(s) */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread_PWORK[3] =
    &speedgoat_test_SN5659_R2021b_IO503_B.FIFOread[0];
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread_PWORK[4] = NULL;

  /* Start for S-Function (slasciidecode): '<S1>/ASCII Decode' */
  /* Level2 S-Function Block: '<S1>/ASCII Decode' (slasciidecode) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_serial_read_s): '<S1>/Read 1' */
  /* Level2 S-Function Block: '<S1>/Read 1' (sg_serial_read_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (slfifowrite): '<S1>/FIFO write1' */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite1_IWORK[0] = 64;/* fifo size */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite1_IWORK[1] = 2;/* fifo type */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite1_IWORK[2] = 65;/* inport width */

  /* allocate memory for FIFO */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite1_PWORK[0] = malloc(4 * (64 + 3));
  if (speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite1_PWORK[0] == NULL) {
    rtmSetErrorStatus(speedgoat_test_SN5659_R2021b_IO503_M,
                      "Error allocating memory");
    return;
  }

  /* Input pointer */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite1_PWORK[1] =
    &speedgoat_test_SN5659_R2021b_IO503_B.Read1[0];

  /* Output pointer(s) */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite1_PWORK[2] =
    &speedgoat_test_SN5659_R2021b_IO503_B.FIFOwrite1;
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite1_PWORK[3] = NULL;

  {
    /* Initialize the fifo */
    int *fifo = (int *)speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite1_PWORK[0];
    memset(fifo, 0, 4 * (64 + 3));
    serialfifoptr *oPtr = &speedgoat_test_SN5659_R2021b_IO503_B.FIFOwrite1;
    fifo[0] = 64;
    oPtr->ptrlow = (uint32_T)( (uint64_T)fifo & 0xffffffff );
    oPtr->ptrhigh = (uint32_T)( ((uint64_T)fifo >> 32) & 0xffffffff );
    oPtr->token = (int)(('F' << 3) | ('i' << 2) | ('F' << 1) | 'o');
  }

  /* Start for S-Function (slfiforead): '<S1>/FIFO read1' */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread1_IWORK[0] = 64;/* Max to read */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread1_IWORK[1] = 1;/* Min to read */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread1_IWORK[2] = 1;/* Use delimiter? */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread1_IWORK[3] = 13;/* delimiter */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread1_IWORK[4] = 6;/* FIFO type */

  /* Input pointer(s) */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread1_PWORK[0] =
    &speedgoat_test_SN5659_R2021b_IO503_B.FIFOwrite1;
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread1_PWORK[1] = NULL;
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread1_PWORK[2] = NULL;

  /* Output pointer(s) */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread1_PWORK[3] =
    &speedgoat_test_SN5659_R2021b_IO503_B.FIFOread1[0];
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread1_PWORK[4] = NULL;

  /* Start for S-Function (slasciidecode): '<S1>/ASCII Decode1' */
  /* Level2 S-Function Block: '<S1>/ASCII Decode1' (slasciidecode) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_serial_read_s): '<S1>/Read 2' */
  /* Level2 S-Function Block: '<S1>/Read 2' (sg_serial_read_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (slfifowrite): '<S1>/FIFO write2' */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite2_IWORK[0] = 64;/* fifo size */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite2_IWORK[1] = 2;/* fifo type */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite2_IWORK[2] = 65;/* inport width */

  /* allocate memory for FIFO */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite2_PWORK[0] = malloc(4 * (64 + 3));
  if (speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite2_PWORK[0] == NULL) {
    rtmSetErrorStatus(speedgoat_test_SN5659_R2021b_IO503_M,
                      "Error allocating memory");
    return;
  }

  /* Input pointer */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite2_PWORK[1] =
    &speedgoat_test_SN5659_R2021b_IO503_B.Read2[0];

  /* Output pointer(s) */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite2_PWORK[2] =
    &speedgoat_test_SN5659_R2021b_IO503_B.FIFOwrite2;
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite2_PWORK[3] = NULL;

  {
    /* Initialize the fifo */
    int *fifo = (int *)speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite2_PWORK[0];
    memset(fifo, 0, 4 * (64 + 3));
    serialfifoptr *oPtr = &speedgoat_test_SN5659_R2021b_IO503_B.FIFOwrite2;
    fifo[0] = 64;
    oPtr->ptrlow = (uint32_T)( (uint64_T)fifo & 0xffffffff );
    oPtr->ptrhigh = (uint32_T)( ((uint64_T)fifo >> 32) & 0xffffffff );
    oPtr->token = (int)(('F' << 3) | ('i' << 2) | ('F' << 1) | 'o');
  }

  /* Start for S-Function (slfiforead): '<S1>/FIFO read2' */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread2_IWORK[0] = 64;/* Max to read */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread2_IWORK[1] = 1;/* Min to read */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread2_IWORK[2] = 1;/* Use delimiter? */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread2_IWORK[3] = 13;/* delimiter */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread2_IWORK[4] = 6;/* FIFO type */

  /* Input pointer(s) */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread2_PWORK[0] =
    &speedgoat_test_SN5659_R2021b_IO503_B.FIFOwrite2;
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread2_PWORK[1] = NULL;
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread2_PWORK[2] = NULL;

  /* Output pointer(s) */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread2_PWORK[3] =
    &speedgoat_test_SN5659_R2021b_IO503_B.FIFOread2[0];
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread2_PWORK[4] = NULL;

  /* Start for S-Function (slasciidecode): '<S1>/ASCII Decode2' */
  /* Level2 S-Function Block: '<S1>/ASCII Decode2' (slasciidecode) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_serial_read_s): '<S1>/Read 3' */
  /* Level2 S-Function Block: '<S1>/Read 3' (sg_serial_read_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (slfifowrite): '<S1>/FIFO write3' */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite3_IWORK[0] = 64;/* fifo size */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite3_IWORK[1] = 2;/* fifo type */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite3_IWORK[2] = 65;/* inport width */

  /* allocate memory for FIFO */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite3_PWORK[0] = malloc(4 * (64 + 3));
  if (speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite3_PWORK[0] == NULL) {
    rtmSetErrorStatus(speedgoat_test_SN5659_R2021b_IO503_M,
                      "Error allocating memory");
    return;
  }

  /* Input pointer */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite3_PWORK[1] =
    &speedgoat_test_SN5659_R2021b_IO503_B.Read3[0];

  /* Output pointer(s) */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite3_PWORK[2] =
    &speedgoat_test_SN5659_R2021b_IO503_B.FIFOwrite3;
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite3_PWORK[3] = NULL;

  {
    /* Initialize the fifo */
    int *fifo = (int *)speedgoat_test_SN5659_R2021b_IO503_DW.FIFOwrite3_PWORK[0];
    memset(fifo, 0, 4 * (64 + 3));
    serialfifoptr *oPtr = &speedgoat_test_SN5659_R2021b_IO503_B.FIFOwrite3;
    fifo[0] = 64;
    oPtr->ptrlow = (uint32_T)( (uint64_T)fifo & 0xffffffff );
    oPtr->ptrhigh = (uint32_T)( ((uint64_T)fifo >> 32) & 0xffffffff );
    oPtr->token = (int)(('F' << 3) | ('i' << 2) | ('F' << 1) | 'o');
  }

  /* Start for S-Function (slfiforead): '<S1>/FIFO read3' */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread3_IWORK[0] = 64;/* Max to read */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread3_IWORK[1] = 1;/* Min to read */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread3_IWORK[2] = 1;/* Use delimiter? */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread3_IWORK[3] = 13;/* delimiter */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread3_IWORK[4] = 6;/* FIFO type */

  /* Input pointer(s) */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread3_PWORK[0] =
    &speedgoat_test_SN5659_R2021b_IO503_B.FIFOwrite3;
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread3_PWORK[1] = NULL;
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread3_PWORK[2] = NULL;

  /* Output pointer(s) */
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread3_PWORK[3] =
    &speedgoat_test_SN5659_R2021b_IO503_B.FIFOread3[0];
  speedgoat_test_SN5659_R2021b_IO503_DW.FIFOread3_PWORK[4] = NULL;

  /* Start for S-Function (slasciidecode): '<S1>/ASCII Decode3' */
  /* Level2 S-Function Block: '<S1>/ASCII Decode3' (slasciidecode) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[8];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (slasciiencode): '<S1>/ASCII Encode' */
  /* Level2 S-Function Block: '<S1>/ASCII Encode' (slasciiencode) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[9];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_serial_write_s): '<S1>/Write ' */
  /* Level2 S-Function Block: '<S1>/Write ' (sg_serial_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[10];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (slasciiencode): '<S1>/ASCII Encode1' */
  /* Level2 S-Function Block: '<S1>/ASCII Encode1' (slasciiencode) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[11];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_serial_write_s): '<S1>/Write 1' */
  /* Level2 S-Function Block: '<S1>/Write 1' (sg_serial_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[12];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (slasciiencode): '<S1>/ASCII Encode2' */
  /* Level2 S-Function Block: '<S1>/ASCII Encode2' (slasciiencode) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[13];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_serial_write_s): '<S1>/Write 2' */
  /* Level2 S-Function Block: '<S1>/Write 2' (sg_serial_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[14];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (slasciiencode): '<S1>/ASCII Encode3' */
  /* Level2 S-Function Block: '<S1>/ASCII Encode3' (slasciiencode) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[15];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_serial_write_s): '<S1>/Write 3' */
  /* Level2 S-Function Block: '<S1>/Write 3' (sg_serial_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[16];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Enable for Sin: '<S1>/Sine Wave1' */
  speedgoat_test_SN5659_R2021b_IO503_DW.systemEnable = 1;

  /* Enable for Sin: '<S1>/Sine Wave2' */
  speedgoat_test_SN5659_R2021b_IO503_DW.systemEnable_p = 1;

  /* Enable for Sin: '<S1>/Sine Wave3' */
  speedgoat_test_SN5659_R2021b_IO503_DW.systemEnable_a = 1;

  /* Enable for Sin: '<S1>/Sine Wave4' */
  speedgoat_test_SN5659_R2021b_IO503_DW.systemEnable_g = 1;
}

/* Model terminate function */
void speedgoat_test_SN5659_R2021b_IO503_terminate(void)
{
  /* Terminate for S-Function (sg_serial_setup_s): '<S1>/Setup ' */
  /* Level2 S-Function Block: '<S1>/Setup ' (sg_serial_setup_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_serial_read_s): '<S1>/Read ' */
  /* Level2 S-Function Block: '<S1>/Read ' (sg_serial_read_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (slasciidecode): '<S1>/ASCII Decode' */
  /* Level2 S-Function Block: '<S1>/ASCII Decode' (slasciidecode) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_serial_read_s): '<S1>/Read 1' */
  /* Level2 S-Function Block: '<S1>/Read 1' (sg_serial_read_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (slasciidecode): '<S1>/ASCII Decode1' */
  /* Level2 S-Function Block: '<S1>/ASCII Decode1' (slasciidecode) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_serial_read_s): '<S1>/Read 2' */
  /* Level2 S-Function Block: '<S1>/Read 2' (sg_serial_read_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (slasciidecode): '<S1>/ASCII Decode2' */
  /* Level2 S-Function Block: '<S1>/ASCII Decode2' (slasciidecode) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_serial_read_s): '<S1>/Read 3' */
  /* Level2 S-Function Block: '<S1>/Read 3' (sg_serial_read_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (slasciidecode): '<S1>/ASCII Decode3' */
  /* Level2 S-Function Block: '<S1>/ASCII Decode3' (slasciidecode) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (slasciiencode): '<S1>/ASCII Encode' */
  /* Level2 S-Function Block: '<S1>/ASCII Encode' (slasciiencode) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_serial_write_s): '<S1>/Write ' */
  /* Level2 S-Function Block: '<S1>/Write ' (sg_serial_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (slasciiencode): '<S1>/ASCII Encode1' */
  /* Level2 S-Function Block: '<S1>/ASCII Encode1' (slasciiencode) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_serial_write_s): '<S1>/Write 1' */
  /* Level2 S-Function Block: '<S1>/Write 1' (sg_serial_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[12];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (slasciiencode): '<S1>/ASCII Encode2' */
  /* Level2 S-Function Block: '<S1>/ASCII Encode2' (slasciiencode) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[13];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_serial_write_s): '<S1>/Write 2' */
  /* Level2 S-Function Block: '<S1>/Write 2' (sg_serial_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (slasciiencode): '<S1>/ASCII Encode3' */
  /* Level2 S-Function Block: '<S1>/ASCII Encode3' (slasciiencode) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_serial_write_s): '<S1>/Write 3' */
  /* Level2 S-Function Block: '<S1>/Write 3' (sg_serial_write_s) */
  {
    SimStruct *rts = speedgoat_test_SN5659_R2021b_IO503_M->childSfunctions[16];
    sfcnTerminate(rts);
  }
}
