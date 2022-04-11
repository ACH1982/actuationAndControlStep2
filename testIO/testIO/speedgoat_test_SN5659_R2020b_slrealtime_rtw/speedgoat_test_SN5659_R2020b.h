/*
 * speedgoat_test_SN5659_R2020b.h
 *
 * Code generation for model "speedgoat_test_SN5659_R2020b".
 *
 * Model version              : 1.2
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Fri Apr  8 08:54:49 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_speedgoat_test_SN5659_R2020b_h_
#define RTW_HEADER_speedgoat_test_SN5659_R2020b_h_
#include <stddef.h>
#include <cstring>
#include <cmath>
#include <string.h>
#include <math.h>
#include <logsrv.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "can_message.h"
#include "stdlib.h"
#include "slrtdatatypes.h"
#include "speedgoat_test_SN5659_R2020b_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "speedgoat_test_SN5659_R2020b_cal.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

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

#ifndef rtmCounterLimit
#define rtmCounterLimit(rtm, idx)      ((rtm)->Timing.TaskCounters.cLimit[(idx)])
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
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

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

/* user code (top of export header file) */
#include "can_message.h"

/* Block signals (default storage) */
struct B_speedgoat_test_SN5659_R2020b_T {
  CAN_DATATYPE CANPack;                /* '<S6>/CAN Pack' */
  CAN_DATATYPE CANPack1;               /* '<S6>/CAN Pack1' */
  CAN_DATATYPE CANPack2;               /* '<S6>/CAN Pack2' */
  CAN_DATATYPE CANPack3;               /* '<S6>/CAN Pack3' */
  CAN_DATATYPE CANPack4;               /* '<S6>/CAN Pack4' */
  CAN_DATATYPE CANPack5;               /* '<S6>/CAN Pack5' */
  CAN_DATATYPE CANRead1_o2;            /* '<S11>/CAN Read1' */
  CAN_DATATYPE CANRead_o2;             /* '<S10>/CAN Read' */
  serialfifoptr FIFOwrite;             /* '<S5>/FIFO write' */
  serialfifoptr FIFOwrite1;            /* '<S5>/FIFO write1' */
  serialfifoptr FIFOwrite2;            /* '<S5>/FIFO write2' */
  serialfifoptr FIFOwrite3;            /* '<S5>/FIFO write3' */
  real_T IO133_AI_CH1;                 /* '<S2>/Analog input v2 ' */
  real_T IO133_AI_CH2;                 /* '<S2>/Analog input v2 ' */
  real_T IO133_AI_CH3;                 /* '<S2>/Analog input v2 ' */
  real_T IO133_AI_CH4;                 /* '<S2>/Analog input v2 ' */
  real_T SineWave;                     /* '<S2>/Sine Wave' */
  real_T Gain;                         /* '<S2>/Gain' */
  real_T Gain1;                        /* '<S2>/Gain1' */
  real_T Gain2;                        /* '<S2>/Gain2' */
  real_T Gain3;                        /* '<S2>/Gain3' */
  real_T IO133_DI_CH8;                 /* '<S2>/Digital input v2 ' */
  real_T IO133_DI_CH9;                 /* '<S2>/Digital input v2 ' */
  real_T PulseGenerator;               /* '<S2>/Pulse Generator' */
  real_T PulseGenerator1;              /* '<S2>/Pulse Generator1' */
  real_T IO204_CH1;                    /* '<S3>/Read' */
  real_T Read_o2;                      /* '<S3>/Read' */
  real_T Read_o3;                      /* '<S3>/Read' */
  real_T Read_o4;                      /* '<S3>/Read' */
  real_T Read_o5;                      /* '<S3>/Read' */
  real_T Read_o6;                      /* '<S3>/Read' */
  real_T Read_o7;                      /* '<S3>/Read' */
  real_T Read_o8;                      /* '<S3>/Read' */
  real_T Read_o9;                      /* '<S3>/Read' */
  real_T Read_o10;                     /* '<S3>/Read' */
  real_T Read_o11;                     /* '<S3>/Read' */
  real_T Read_o12;                     /* '<S3>/Read' */
  real_T Read_o13;                     /* '<S3>/Read' */
  real_T Read_o14;                     /* '<S3>/Read' */
  real_T Read_o15;                     /* '<S3>/Read' */
  real_T Read_o16;                     /* '<S3>/Read' */
  real_T IO204_CH6;                    /* '<S3>/Gain' */
  real_T IO204_CH11;                   /* '<S3>/Gain1' */
  real_T IO204_CH16;                   /* '<S3>/Gain2' */
  real_T PulseGenerator_k;             /* '<S3>/Pulse Generator' */
  real_T SineWave_e;                   /* '<S6>/Sine Wave' */
  real_T SineWave1;                    /* '<S6>/Sine Wave1' */
  real_T SineWave2;                    /* '<S6>/Sine Wave2' */
  real_T SineWave3;                    /* '<S6>/Sine Wave3' */
  real_T SineWave4;                    /* '<S6>/Sine Wave4' */
  real_T SineWave5;                    /* '<S6>/Sine Wave5' */
  real_T RXSampleTime;                 /* '<S6>/RX Sample Time' */
  real_T RXSampleTime1;                /* '<S6>/RX Sample Time1' */
  real_T SineWave_h;                   /* '<S1>/Sine Wave' */
  real_T SineWave1_c;                  /* '<S1>/Sine Wave1' */
  real_T IO421_LVDT_POS1;              /* '<S4>/LVDT read' */
  real_T IO421_LVDT_POS2;              /* '<S4>/LVDT read1' */
  real_T Receivev2[51];                /* '<S7>/Receive v2 ' */
  real_T Decode1;                      /* '<S12>/Decode 1' */
  real_T Decode5;                      /* '<S12>/Decode 5' */
  real_T Decode3;                      /* '<S12>/Decode 3' */
  real_T Decode4;                      /* '<S12>/Decode 4' */
  real_T IO682_SerialIN_CH1[4];
  /* '<S7>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 1_at_outport_0Inport1' */
  real_T Receivev21[51];               /* '<S7>/Receive v2 1' */
  real_T Decode1_m;                    /* '<S20>/Decode 1' */
  real_T Decode2;                      /* '<S20>/Decode 2' */
  real_T Decode3_l;                    /* '<S20>/Decode 3' */
  real_T Decode4_d;                    /* '<S20>/Decode 4' */
  real_T IO682_SerialIN_CH2[4];
  /* '<S7>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 2_at_outport_0Inport1' */
  real_T Receivev28[51];               /* '<S7>/Receive v2 8' */
  real_T Decode1_d;                    /* '<S27>/Decode 1' */
  real_T Decode5_p;                    /* '<S27>/Decode 5' */
  real_T Decode3_c;                    /* '<S27>/Decode 3' */
  real_T Decode4_o;                    /* '<S27>/Decode 4' */
  real_T IO682_SerialIN_CH9[4];
  /* '<S7>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 9_at_outport_0Inport1' */
  real_T Receivev29[51];               /* '<S7>/Receive v2 9' */
  real_T Decode1_g;                    /* '<S13>/Decode 1' */
  real_T Decode2_n;                    /* '<S13>/Decode 2' */
  real_T Decode3_j;                    /* '<S13>/Decode 3' */
  real_T Decode4_h;                    /* '<S13>/Decode 4' */
  real_T IO682_SerialIN_CH10[4];
  /* '<S7>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 10_at_outport_0Inport1' */
  real_T Receivev210[51];              /* '<S7>/Receive v2 10' */
  real_T Decode1_f;                    /* '<S14>/Decode 1' */
  real_T Decode2_j;                    /* '<S14>/Decode 2' */
  real_T Decode3_k;                    /* '<S14>/Decode 3' */
  real_T Decode4_c;                    /* '<S14>/Decode 4' */
  real_T IO682_SerialIN_CH11[4];
  /* '<S7>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 11_at_outport_0Inport1' */
  real_T Receivev211[51];              /* '<S7>/Receive v2 11' */
  real_T Decode1_a;                    /* '<S15>/Decode 1' */
  real_T Decode2_j2;                   /* '<S15>/Decode 2' */
  real_T Decode3_m;                    /* '<S15>/Decode 3' */
  real_T Decode4_a;                    /* '<S15>/Decode 4' */
  real_T IO682_SerialIN_CH12[4];
  /* '<S7>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 12_at_outport_0Inport1' */
  real_T Receivev212[51];              /* '<S7>/Receive v2 12' */
  real_T Decode1_i;                    /* '<S16>/Decode 1' */
  real_T Decode5_i;                    /* '<S16>/Decode 5' */
  real_T Decode3_o;                    /* '<S16>/Decode 3' */
  real_T Decode4_b;                    /* '<S16>/Decode 4' */
  real_T IO682_SerialIN_CH13[4];
  /* '<S7>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 13_at_outport_0Inport1' */
  real_T Receivev213[51];              /* '<S7>/Receive v2 13' */
  real_T Decode1_my;                   /* '<S17>/Decode 1' */
  real_T Decode2_i;                    /* '<S17>/Decode 2' */
  real_T Decode3_n;                    /* '<S17>/Decode 3' */
  real_T Decode4_c1;                   /* '<S17>/Decode 4' */
  real_T IO682_SerialIN_CH14[4];
  /* '<S7>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 14_at_outport_0Inport1' */
  real_T Receivev214[51];              /* '<S7>/Receive v2 14' */
  real_T Decode1_n;                    /* '<S18>/Decode 1' */
  real_T Decode2_b;                    /* '<S18>/Decode 2' */
  real_T Decode3_cq;                   /* '<S18>/Decode 3' */
  real_T Decode4_oi;                   /* '<S18>/Decode 4' */
  real_T IO682_SerialIN_CH15[4];
  /* '<S7>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 15_at_outport_0Inport1' */
  real_T Receivev215[51];              /* '<S7>/Receive v2 15' */
  real_T Decode1_al;                   /* '<S19>/Decode 1' */
  real_T Decode2_l;                    /* '<S19>/Decode 2' */
  real_T Decode3_ou;                   /* '<S19>/Decode 3' */
  real_T Decode4_p;                    /* '<S19>/Decode 4' */
  real_T IO682_SerialIN_CH16[4];
  /* '<S7>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 16_at_outport_0Inport1' */
  real_T Receivev22[51];               /* '<S7>/Receive v2 2' */
  real_T Decode1_p;                    /* '<S21>/Decode 1' */
  real_T Decode2_ba;                   /* '<S21>/Decode 2' */
  real_T Decode3_a;                    /* '<S21>/Decode 3' */
  real_T Decode4_f;                    /* '<S21>/Decode 4' */
  real_T IO682_SerialIN_CH3[4];
  /* '<S7>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 3_at_outport_0Inport1' */
  real_T Receivev23[51];               /* '<S7>/Receive v2 3' */
  real_T Decode1_pf;                   /* '<S22>/Decode 1' */
  real_T Decode2_k;                    /* '<S22>/Decode 2' */
  real_T Decode3_b;                    /* '<S22>/Decode 3' */
  real_T Decode4_ff;                   /* '<S22>/Decode 4' */
  real_T IO682_SerialIN_CH4[4];
  /* '<S7>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 4_at_outport_0Inport1' */
  real_T Receivev24[51];               /* '<S7>/Receive v2 4' */
  real_T Decode1_io;                   /* '<S23>/Decode 1' */
  real_T Decode5_b;                    /* '<S23>/Decode 5' */
  real_T Decode3_ny;                   /* '<S23>/Decode 3' */
  real_T Decode4_j;                    /* '<S23>/Decode 4' */
  real_T IO682_SerialIN_CH5[4];
  /* '<S7>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 5_at_outport_0Inport1' */
  real_T Receivev25[51];               /* '<S7>/Receive v2 5' */
  real_T Decode1_gi;                   /* '<S24>/Decode 1' */
  real_T Decode2_f;                    /* '<S24>/Decode 2' */
  real_T Decode3_o4;                   /* '<S24>/Decode 3' */
  real_T Decode4_f4;                   /* '<S24>/Decode 4' */
  real_T IO682_SerialIN_CH6[4];
  /* '<S7>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 6_at_outport_0Inport1' */
  real_T Receivev26[51];               /* '<S7>/Receive v2 6' */
  real_T Decode1_p1;                   /* '<S25>/Decode 1' */
  real_T Decode2_h;                    /* '<S25>/Decode 2' */
  real_T Decode3_lc;                   /* '<S25>/Decode 3' */
  real_T Decode4_l;                    /* '<S25>/Decode 4' */
  real_T IO682_SerialIN_CH7[4];
  /* '<S7>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 7_at_outport_0Inport1' */
  real_T Receivev27[51];               /* '<S7>/Receive v2 7' */
  real_T Decode1_b;                    /* '<S26>/Decode 1' */
  real_T Decode2_nz;                   /* '<S26>/Decode 2' */
  real_T Decode3_mj;                   /* '<S26>/Decode 3' */
  real_T Decode4_m;                    /* '<S26>/Decode 4' */
  real_T IO682_SerialIN_CH8[4];
  /* '<S7>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 8_at_outport_0Inport1' */
  real_T Randomnumber;                 /* '<S28>/Random number' */
  real_T Encode1;                      /* '<S28>/Encode 1' */
  real_T DataTypeConversion;           /* '<S28>/Data Type Conversion' */
  real_T Encode5;                      /* '<S28>/Encode 5' */
  real_T Sinewave;                     /* '<S28>/Sine wave' */
  real_T Encode3;                      /* '<S28>/Encode 3' */
  real_T Divide;                       /* '<S45>/Divide' */
  real_T Multiply;                     /* '<S45>/Multiply' */
  real_T DataTypeConversion1;          /* '<S45>/Data Type Conversion1' */
  real_T Encode2;                      /* '<S28>/Encode 2' */
  real_T Randomnumber_c;               /* '<S29>/Random number' */
  real_T Encode1_b;                    /* '<S29>/Encode 1' */
  real_T DataTypeConversion_h;         /* '<S29>/Data Type Conversion' */
  real_T Encode2_p;                    /* '<S29>/Encode 2' */
  real_T Sinewave_o;                   /* '<S29>/Sine wave' */
  real_T Encode3_i;                    /* '<S29>/Encode 3' */
  real_T Divide_k;                     /* '<S49>/Divide' */
  real_T Multiply_h;                   /* '<S49>/Multiply' */
  real_T DataTypeConversion1_g;        /* '<S49>/Data Type Conversion1' */
  real_T Encode4;                      /* '<S29>/Encode 4' */
  real_T Randomnumber_p;               /* '<S30>/Random number' */
  real_T Encode1_f;                    /* '<S30>/Encode 1' */
  real_T DataTypeConversion_e;         /* '<S30>/Data Type Conversion' */
  real_T Encode2_f;                    /* '<S30>/Encode 2' */
  real_T Sinewave_f;                   /* '<S30>/Sine wave' */
  real_T Encode3_b;                    /* '<S30>/Encode 3' */
  real_T Divide_h;                     /* '<S53>/Divide' */
  real_T Multiply_a;                   /* '<S53>/Multiply' */
  real_T DataTypeConversion1_i;        /* '<S53>/Data Type Conversion1' */
  real_T Encode4_i;                    /* '<S30>/Encode 4' */
  real_T Randomnumber_b;               /* '<S31>/Random number' */
  real_T Encode1_k;                    /* '<S31>/Encode 1' */
  real_T DataTypeConversion_j;         /* '<S31>/Data Type Conversion' */
  real_T Encode2_i;                    /* '<S31>/Encode 2' */
  real_T Sinewave_k;                   /* '<S31>/Sine wave' */
  real_T Encode3_o;                    /* '<S31>/Encode 3' */
  real_T Divide_p;                     /* '<S57>/Divide' */
  real_T Multiply_j;                   /* '<S57>/Multiply' */
  real_T DataTypeConversion1_p;        /* '<S57>/Data Type Conversion1' */
  real_T Encode4_c;                    /* '<S31>/Encode 4' */
  real_T Randomnumber_pz;              /* '<S32>/Random number' */
  real_T Encode1_l;                    /* '<S32>/Encode 1' */
  real_T DataTypeConversion_p;         /* '<S32>/Data Type Conversion' */
  real_T Encode5_d;                    /* '<S32>/Encode 5' */
  real_T Sinewave_p;                   /* '<S32>/Sine wave' */
  real_T Encode3_p;                    /* '<S32>/Encode 3' */
  real_T Divide_i;                     /* '<S61>/Divide' */
  real_T Multiply_he;                  /* '<S61>/Multiply' */
  real_T DataTypeConversion1_n;        /* '<S61>/Data Type Conversion1' */
  real_T Encode2_j;                    /* '<S32>/Encode 2' */
  real_T Randomnumber_n;               /* '<S33>/Random number' */
  real_T Encode1_p;                    /* '<S33>/Encode 1' */
  real_T DataTypeConversion_o;         /* '<S33>/Data Type Conversion' */
  real_T Encode2_fi;                   /* '<S33>/Encode 2' */
  real_T Sinewave_g;                   /* '<S33>/Sine wave' */
  real_T Encode3_f;                    /* '<S33>/Encode 3' */
  real_T Divide_j;                     /* '<S65>/Divide' */
  real_T Multiply_i;                   /* '<S65>/Multiply' */
  real_T DataTypeConversion1_gm;       /* '<S65>/Data Type Conversion1' */
  real_T Encode4_g;                    /* '<S33>/Encode 4' */
  real_T Randomnumber_m;               /* '<S34>/Random number' */
  real_T Encode1_pb;                   /* '<S34>/Encode 1' */
  real_T DataTypeConversion_d;         /* '<S34>/Data Type Conversion' */
  real_T Encode2_h;                    /* '<S34>/Encode 2' */
  real_T Sinewave_kh;                  /* '<S34>/Sine wave' */
  real_T Encode3_l;                    /* '<S34>/Encode 3' */
  real_T Divide_g;                     /* '<S69>/Divide' */
  real_T Multiply_n;                   /* '<S69>/Multiply' */
  real_T DataTypeConversion1_ga;       /* '<S69>/Data Type Conversion1' */
  real_T Encode4_l;                    /* '<S34>/Encode 4' */
  real_T Randomnumber_br;              /* '<S35>/Random number' */
  real_T Encode1_pbz;                  /* '<S35>/Encode 1' */
  real_T DataTypeConversion_jr;        /* '<S35>/Data Type Conversion' */
  real_T Encode2_hc;                   /* '<S35>/Encode 2' */
  real_T Sinewave_a;                   /* '<S35>/Sine wave' */
  real_T Encode3_ou;                   /* '<S35>/Encode 3' */
  real_T Divide_k3;                    /* '<S73>/Divide' */
  real_T Multiply_hd;                  /* '<S73>/Multiply' */
  real_T DataTypeConversion1_d;        /* '<S73>/Data Type Conversion1' */
  real_T Encode4_p;                    /* '<S35>/Encode 4' */
  real_T Randomnumber_e;               /* '<S36>/Random number' */
  real_T Encode1_h;                    /* '<S36>/Encode 1' */
  real_T DataTypeConversion_hu;        /* '<S36>/Data Type Conversion' */
  real_T Encode2_fb;                   /* '<S36>/Encode 2' */
  real_T Sinewave_o5;                  /* '<S36>/Sine wave' */
  real_T Encode3_d;                    /* '<S36>/Encode 3' */
  real_T Divide_g4;                    /* '<S77>/Divide' */
  real_T Multiply_il;                  /* '<S77>/Multiply' */
  real_T DataTypeConversion1_l;        /* '<S77>/Data Type Conversion1' */
  real_T Encode4_n;                    /* '<S36>/Encode 4' */
  real_T Randomnumber_f;               /* '<S37>/Random number' */
  real_T Encode1_f0;                   /* '<S37>/Encode 1' */
  real_T DataTypeConversion_dd;        /* '<S37>/Data Type Conversion' */
  real_T Encode2_iu;                   /* '<S37>/Encode 2' */
  real_T Sinewave_oh;                  /* '<S37>/Sine wave' */
  real_T Encode3_ik;                   /* '<S37>/Encode 3' */
  real_T Divide_n;                     /* '<S81>/Divide' */
  real_T Multiply_e;                   /* '<S81>/Multiply' */
  real_T DataTypeConversion1_a;        /* '<S81>/Data Type Conversion1' */
  real_T Encode4_ix;                   /* '<S37>/Encode 4' */
  real_T Randomnumber_g;               /* '<S38>/Random number' */
  real_T Encode1_c;                    /* '<S38>/Encode 1' */
  real_T DataTypeConversion_f;         /* '<S38>/Data Type Conversion' */
  real_T Encode2_o;                    /* '<S38>/Encode 2' */
  real_T Sinewave_n;                   /* '<S38>/Sine wave' */
  real_T Encode3_g;                    /* '<S38>/Encode 3' */
  real_T Divide_o;                     /* '<S85>/Divide' */
  real_T Multiply_b;                   /* '<S85>/Multiply' */
  real_T DataTypeConversion1_gh;       /* '<S85>/Data Type Conversion1' */
  real_T Encode4_j;                    /* '<S38>/Encode 4' */
  real_T Randomnumber_i;               /* '<S39>/Random number' */
  real_T Encode1_e;                    /* '<S39>/Encode 1' */
  real_T DataTypeConversion_hb;        /* '<S39>/Data Type Conversion' */
  real_T Encode5_a;                    /* '<S39>/Encode 5' */
  real_T Sinewave_d;                   /* '<S39>/Sine wave' */
  real_T Encode3_bv;                   /* '<S39>/Encode 3' */
  real_T Divide_m;                     /* '<S89>/Divide' */
  real_T Multiply_m;                   /* '<S89>/Multiply' */
  real_T DataTypeConversion1_nb;       /* '<S89>/Data Type Conversion1' */
  real_T Encode2_l;                    /* '<S39>/Encode 2' */
  real_T Randomnumber_i2;              /* '<S40>/Random number' */
  real_T Encode1_d;                    /* '<S40>/Encode 1' */
  real_T DataTypeConversion_n;         /* '<S40>/Data Type Conversion' */
  real_T Encode2_pt;                   /* '<S40>/Encode 2' */
  real_T Sinewave_fe;                  /* '<S40>/Sine wave' */
  real_T Encode3_k;                    /* '<S40>/Encode 3' */
  real_T Divide_pl;                    /* '<S93>/Divide' */
  real_T Multiply_k;                   /* '<S93>/Multiply' */
  real_T DataTypeConversion1_f;        /* '<S93>/Data Type Conversion1' */
  real_T Encode4_cp;                   /* '<S40>/Encode 4' */
  real_T Randomnumber_d;               /* '<S41>/Random number' */
  real_T Encode1_i;                    /* '<S41>/Encode 1' */
  real_T DataTypeConversion_i;         /* '<S41>/Data Type Conversion' */
  real_T Encode2_ik;                   /* '<S41>/Encode 2' */
  real_T Sinewave_ff;                  /* '<S41>/Sine wave' */
  real_T Encode3_dc;                   /* '<S41>/Encode 3' */
  real_T Divide_c;                     /* '<S97>/Divide' */
  real_T Multiply_hz;                  /* '<S97>/Multiply' */
  real_T DataTypeConversion1_fw;       /* '<S97>/Data Type Conversion1' */
  real_T Encode4_cn;                   /* '<S41>/Encode 4' */
  real_T Randomnumber_n4;              /* '<S42>/Random number' */
  real_T Encode1_ff;                   /* '<S42>/Encode 1' */
  real_T DataTypeConversion_k;         /* '<S42>/Data Type Conversion' */
  real_T Encode2_o4;                   /* '<S42>/Encode 2' */
  real_T Sinewave_m;                   /* '<S42>/Sine wave' */
  real_T Encode3_dp;                   /* '<S42>/Encode 3' */
  real_T Divide_oc;                    /* '<S101>/Divide' */
  real_T Multiply_kl;                  /* '<S101>/Multiply' */
  real_T DataTypeConversion1_j;        /* '<S101>/Data Type Conversion1' */
  real_T Encode4_a;                    /* '<S42>/Encode 4' */
  real_T Randomnumber_j;               /* '<S43>/Random number' */
  real_T Encode1_kq;                   /* '<S43>/Encode 1' */
  real_T DataTypeConversion_dw;        /* '<S43>/Data Type Conversion' */
  real_T Encode5_n;                    /* '<S43>/Encode 5' */
  real_T Sinewave_ao;                  /* '<S43>/Sine wave' */
  real_T Encode3_h;                    /* '<S43>/Encode 3' */
  real_T Divide_os;                    /* '<S105>/Divide' */
  real_T Multiply_c;                   /* '<S105>/Multiply' */
  real_T DataTypeConversion1_e;        /* '<S105>/Data Type Conversion1' */
  real_T Encode2_o3;                   /* '<S43>/Encode 2' */
  real_T IO503_SerialIN_CH1;           /* '<S5>/ASCII Decode' */
  real_T IO503_SerialIN_CH2;           /* '<S5>/ASCII Decode1' */
  real_T IO503_SerialIN_CH3;           /* '<S5>/ASCII Decode2' */
  real_T IO503_SerialIN_CH4;           /* '<S5>/ASCII Decode3' */
  real_T SineWave1_k;                  /* '<S5>/Sine Wave1' */
  real_T SineWave2_m;                  /* '<S5>/Sine Wave2' */
  real_T SineWave3_k;                  /* '<S5>/Sine Wave3' */
  real_T SineWave4_j;                  /* '<S5>/Sine Wave4' */
  real_T PulseGenerator_p;             /* '<S8>/Pulse Generator' */
  real_T CANUnpack;                    /* '<S11>/CAN Unpack' */
  real_T CANUnpack1;                   /* '<S11>/CAN Unpack1' */
  real_T CANUnpack2;                   /* '<S11>/CAN Unpack2' */
  real_T CANUnpack_c;                  /* '<S10>/CAN Unpack' */
  real_T CANUnpack1_o;                 /* '<S10>/CAN Unpack1' */
  real_T CANUnpack2_j;                 /* '<S10>/CAN Unpack2' */
  uint32_T DataTypeConversion_k5;      /* '<S45>/Data Type Conversion' */
  uint32_T Mask;                       /* '<S45>/Mask ' */
  uint32_T ShifttoSSMslot;             /* '<S45>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot;             /* '<S45>/Shift to SDI slot' */
  uint32_T BitwiseOperator;            /* '<S45>/Bitwise Operator' */
  uint32_T DataTypeConversion_c;       /* '<S49>/Data Type Conversion' */
  uint32_T Mask_a;                     /* '<S49>/Mask ' */
  uint32_T ShifttoSSMslot_h;           /* '<S49>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_l;           /* '<S49>/Shift to SDI slot' */
  uint32_T BitwiseOperator_m;          /* '<S49>/Bitwise Operator' */
  uint32_T DataTypeConversion_ec;      /* '<S53>/Data Type Conversion' */
  uint32_T Mask_n;                     /* '<S53>/Mask ' */
  uint32_T ShifttoSSMslot_m;           /* '<S53>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_a;           /* '<S53>/Shift to SDI slot' */
  uint32_T BitwiseOperator_a;          /* '<S53>/Bitwise Operator' */
  uint32_T DataTypeConversion_jj;      /* '<S57>/Data Type Conversion' */
  uint32_T Mask_i;                     /* '<S57>/Mask ' */
  uint32_T ShifttoSSMslot_b;           /* '<S57>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_k;           /* '<S57>/Shift to SDI slot' */
  uint32_T BitwiseOperator_p;          /* '<S57>/Bitwise Operator' */
  uint32_T DataTypeConversion_b;       /* '<S61>/Data Type Conversion' */
  uint32_T Mask_c;                     /* '<S61>/Mask ' */
  uint32_T ShifttoSSMslot_k;           /* '<S61>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_b;           /* '<S61>/Shift to SDI slot' */
  uint32_T BitwiseOperator_k;          /* '<S61>/Bitwise Operator' */
  uint32_T DataTypeConversion_er;      /* '<S65>/Data Type Conversion' */
  uint32_T Mask_m;                     /* '<S65>/Mask ' */
  uint32_T ShifttoSSMslot_mi;          /* '<S65>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_km;          /* '<S65>/Shift to SDI slot' */
  uint32_T BitwiseOperator_c;          /* '<S65>/Bitwise Operator' */
  uint32_T DataTypeConversion_fb;      /* '<S69>/Data Type Conversion' */
  uint32_T Mask_h;                     /* '<S69>/Mask ' */
  uint32_T ShifttoSSMslot_f;           /* '<S69>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_c;           /* '<S69>/Shift to SDI slot' */
  uint32_T BitwiseOperator_f;          /* '<S69>/Bitwise Operator' */
  uint32_T DataTypeConversion_f5;      /* '<S73>/Data Type Conversion' */
  uint32_T Mask_h0;                    /* '<S73>/Mask ' */
  uint32_T ShifttoSSMslot_m3;          /* '<S73>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_m;           /* '<S73>/Shift to SDI slot' */
  uint32_T BitwiseOperator_e;          /* '<S73>/Bitwise Operator' */
  uint32_T DataTypeConversion_bh;      /* '<S77>/Data Type Conversion' */
  uint32_T Mask_d;                     /* '<S77>/Mask ' */
  uint32_T ShifttoSSMslot_g;           /* '<S77>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_g;           /* '<S77>/Shift to SDI slot' */
  uint32_T BitwiseOperator_j;          /* '<S77>/Bitwise Operator' */
  uint32_T DataTypeConversion_l;       /* '<S81>/Data Type Conversion' */
  uint32_T Mask_k;                     /* '<S81>/Mask ' */
  uint32_T ShifttoSSMslot_kz;          /* '<S81>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_n;           /* '<S81>/Shift to SDI slot' */
  uint32_T BitwiseOperator_a4;         /* '<S81>/Bitwise Operator' */
  uint32_T DataTypeConversion_fr;      /* '<S85>/Data Type Conversion' */
  uint32_T Mask_p;                     /* '<S85>/Mask ' */
  uint32_T ShifttoSSMslot_e;           /* '<S85>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_ck;          /* '<S85>/Shift to SDI slot' */
  uint32_T BitwiseOperator_pk;         /* '<S85>/Bitwise Operator' */
  uint32_T DataTypeConversion_dn;      /* '<S89>/Data Type Conversion' */
  uint32_T Mask_cs;                    /* '<S89>/Mask ' */
  uint32_T ShifttoSSMslot_n;           /* '<S89>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_d;           /* '<S89>/Shift to SDI slot' */
  uint32_T BitwiseOperator_b;          /* '<S89>/Bitwise Operator' */
  uint32_T DataTypeConversion_m;       /* '<S93>/Data Type Conversion' */
  uint32_T Mask_my;                    /* '<S93>/Mask ' */
  uint32_T ShifttoSSMslot_et;          /* '<S93>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_mf;          /* '<S93>/Shift to SDI slot' */
  uint32_T BitwiseOperator_eh;         /* '<S93>/Bitwise Operator' */
  uint32_T DataTypeConversion_cp;      /* '<S97>/Data Type Conversion' */
  uint32_T Mask_b;                     /* '<S97>/Mask ' */
  uint32_T ShifttoSSMslot_o;           /* '<S97>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_bb;          /* '<S97>/Shift to SDI slot' */
  uint32_T BitwiseOperator_n;          /* '<S97>/Bitwise Operator' */
  uint32_T DataTypeConversion_is;      /* '<S101>/Data Type Conversion' */
  uint32_T Mask_aj;                    /* '<S101>/Mask ' */
  uint32_T ShifttoSSMslot_ea;          /* '<S101>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_f;           /* '<S101>/Shift to SDI slot' */
  uint32_T BitwiseOperator_b5;         /* '<S101>/Bitwise Operator' */
  uint32_T DataTypeConversion_ku;      /* '<S105>/Data Type Conversion' */
  uint32_T Mask_cy;                    /* '<S105>/Mask ' */
  uint32_T ShifttoSSMslot_hy;          /* '<S105>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_fi;          /* '<S105>/Shift to SDI slot' */
  uint32_T BitwiseOperator_fl;         /* '<S105>/Bitwise Operator' */
  uint32_T Read[65];                   /* '<S5>/Read ' */
  uint32_T Read1[65];                  /* '<S5>/Read 1' */
  uint32_T Read2[65];                  /* '<S5>/Read 2' */
  uint32_T Read3[65];                  /* '<S5>/Read 3' */
  uint16_T Output;                     /* '<S48>/Output' */
  uint16_T FixPtSum1;                  /* '<S50>/FixPt Sum1' */
  uint16_T FixPtSwitch;                /* '<S51>/FixPt Switch' */
  uint16_T Output_b;                   /* '<S52>/Output' */
  uint16_T FixPtSum1_n;                /* '<S54>/FixPt Sum1' */
  uint16_T FixPtSwitch_h;              /* '<S55>/FixPt Switch' */
  uint16_T Output_p;                   /* '<S56>/Output' */
  uint16_T FixPtSum1_a;                /* '<S58>/FixPt Sum1' */
  uint16_T FixPtSwitch_b;              /* '<S59>/FixPt Switch' */
  uint16_T Output_j;                   /* '<S60>/Output' */
  uint16_T FixPtSum1_g;                /* '<S62>/FixPt Sum1' */
  uint16_T FixPtSwitch_l;              /* '<S63>/FixPt Switch' */
  uint16_T Output_m;                   /* '<S64>/Output' */
  uint16_T FixPtSum1_e;                /* '<S66>/FixPt Sum1' */
  uint16_T FixPtSwitch_bx;             /* '<S67>/FixPt Switch' */
  uint16_T Output_e;                   /* '<S68>/Output' */
  uint16_T FixPtSum1_o;                /* '<S70>/FixPt Sum1' */
  uint16_T FixPtSwitch_lo;             /* '<S71>/FixPt Switch' */
  uint16_T Output_k;                   /* '<S72>/Output' */
  uint16_T FixPtSum1_d;                /* '<S74>/FixPt Sum1' */
  uint16_T FixPtSwitch_l2;             /* '<S75>/FixPt Switch' */
  uint16_T Output_b2;                  /* '<S80>/Output' */
  uint16_T FixPtSum1_h;                /* '<S82>/FixPt Sum1' */
  uint16_T FixPtSwitch_d;              /* '<S83>/FixPt Switch' */
  uint16_T Output_d;                   /* '<S84>/Output' */
  uint16_T FixPtSum1_f;                /* '<S86>/FixPt Sum1' */
  uint16_T FixPtSwitch_j;              /* '<S87>/FixPt Switch' */
  uint16_T Output_jl;                  /* '<S88>/Output' */
  uint16_T FixPtSum1_h2;               /* '<S90>/FixPt Sum1' */
  uint16_T FixPtSwitch_k;              /* '<S91>/FixPt Switch' */
  uint16_T Output_i;                   /* '<S92>/Output' */
  uint16_T FixPtSum1_m;                /* '<S94>/FixPt Sum1' */
  uint16_T FixPtSwitch_hh;             /* '<S95>/FixPt Switch' */
  uint16_T Output_bg;                  /* '<S96>/Output' */
  uint16_T FixPtSum1_he;               /* '<S98>/FixPt Sum1' */
  uint16_T FixPtSwitch_a;              /* '<S99>/FixPt Switch' */
  uint16_T Output_mw;                  /* '<S100>/Output' */
  uint16_T FixPtSum1_p;                /* '<S102>/FixPt Sum1' */
  uint16_T FixPtSwitch_l0;             /* '<S103>/FixPt Switch' */
  uint16_T Output_pd;                  /* '<S104>/Output' */
  uint16_T FixPtSum1_b;                /* '<S106>/FixPt Sum1' */
  uint16_T FixPtSwitch_m;              /* '<S107>/FixPt Switch' */
  uint8_T Output_o;                    /* '<S44>/Output' */
  uint8_T FixPtSum1_i;                 /* '<S46>/FixPt Sum1' */
  uint8_T FixPtSwitch_ha;              /* '<S47>/FixPt Switch' */
  uint8_T Output_g;                    /* '<S76>/Output' */
  uint8_T FixPtSum1_fe;                /* '<S78>/FixPt Sum1' */
  uint8_T FixPtSwitch_jo;              /* '<S79>/FixPt Switch' */
  uint8_T FIFOread[65];                /* '<S5>/FIFO read' */
  uint8_T FIFOread1[65];               /* '<S5>/FIFO read1' */
  uint8_T FIFOread2[65];               /* '<S5>/FIFO read2' */
  uint8_T FIFOread3[65];               /* '<S5>/FIFO read3' */
  uint8_T ASCIIEncode[64];             /* '<S5>/ASCII Encode' */
  uint8_T ASCIIEncode1[64];            /* '<S5>/ASCII Encode1' */
  uint8_T ASCIIEncode2[64];            /* '<S5>/ASCII Encode2' */
  uint8_T ASCIIEncode3[64];            /* '<S5>/ASCII Encode3' */
  boolean_T DataTypeConversion_ib;     /* '<S8>/Data Type Conversion' */
  boolean_T IO941_CH1;                 /* '<S8>/Relays ' */
  boolean_T IO941_CH2;                 /* '<S8>/Relays ' */
  boolean_T IO941_CH3;                 /* '<S8>/Relays ' */
  boolean_T IO941_CH4;                 /* '<S8>/Relays ' */
  boolean_T IO941_CH5;                 /* '<S8>/Relays ' */
  boolean_T IO941_CH6;                 /* '<S8>/Relays ' */
  boolean_T IO941_CH7;                 /* '<S8>/Relays ' */
  boolean_T IO941_CH8;                 /* '<S8>/Relays ' */
  boolean_T CANRead1_o1;               /* '<S11>/CAN Read1' */
  boolean_T CANRead_o1;                /* '<S10>/CAN Read' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_speedgoat_test_SN5659_R2020b_T {
  real_T lastSin;                      /* '<S6>/Sine Wave' */
  real_T lastCos;                      /* '<S6>/Sine Wave' */
  real_T lastSin_c;                    /* '<S6>/Sine Wave1' */
  real_T lastCos_g;                    /* '<S6>/Sine Wave1' */
  real_T lastSin_i;                    /* '<S6>/Sine Wave2' */
  real_T lastCos_i;                    /* '<S6>/Sine Wave2' */
  real_T lastSin_d;                    /* '<S6>/Sine Wave3' */
  real_T lastCos_b;                    /* '<S6>/Sine Wave3' */
  real_T lastSin_h;                    /* '<S6>/Sine Wave4' */
  real_T lastCos_j;                    /* '<S6>/Sine Wave4' */
  real_T lastSin_cd;                   /* '<S6>/Sine Wave5' */
  real_T lastCos_c;                    /* '<S6>/Sine Wave5' */
  real_T lastSin_ib;                   /* '<S1>/Sine Wave' */
  real_T lastCos_i1;                   /* '<S1>/Sine Wave' */
  real_T lastSin_d2;                   /* '<S1>/Sine Wave1' */
  real_T lastCos_o;                    /* '<S1>/Sine Wave1' */
  real_T NextOutput;                   /* '<S28>/Random number' */
  real_T lastSin_o;                    /* '<S28>/Sine wave' */
  real_T lastCos_h;                    /* '<S28>/Sine wave' */
  real_T NextOutput_a;                 /* '<S29>/Random number' */
  real_T lastSin_cq;                   /* '<S29>/Sine wave' */
  real_T lastCos_p;                    /* '<S29>/Sine wave' */
  real_T NextOutput_n;                 /* '<S30>/Random number' */
  real_T lastSin_m;                    /* '<S30>/Sine wave' */
  real_T lastCos_m;                    /* '<S30>/Sine wave' */
  real_T NextOutput_f;                 /* '<S31>/Random number' */
  real_T lastSin_ct;                   /* '<S31>/Sine wave' */
  real_T lastCos_a;                    /* '<S31>/Sine wave' */
  real_T NextOutput_nj;                /* '<S32>/Random number' */
  real_T lastSin_p;                    /* '<S32>/Sine wave' */
  real_T lastCos_af;                   /* '<S32>/Sine wave' */
  real_T NextOutput_ni;                /* '<S33>/Random number' */
  real_T lastSin_dj;                   /* '<S33>/Sine wave' */
  real_T lastCos_ht;                   /* '<S33>/Sine wave' */
  real_T NextOutput_ft;                /* '<S34>/Random number' */
  real_T lastSin_du;                   /* '<S34>/Sine wave' */
  real_T lastCos_l;                    /* '<S34>/Sine wave' */
  real_T NextOutput_i;                 /* '<S35>/Random number' */
  real_T lastSin_f;                    /* '<S35>/Sine wave' */
  real_T lastCos_ld;                   /* '<S35>/Sine wave' */
  real_T NextOutput_j;                 /* '<S36>/Random number' */
  real_T lastSin_e;                    /* '<S36>/Sine wave' */
  real_T lastCos_lh;                   /* '<S36>/Sine wave' */
  real_T NextOutput_m;                 /* '<S37>/Random number' */
  real_T lastSin_pg;                   /* '<S37>/Sine wave' */
  real_T lastCos_gg;                   /* '<S37>/Sine wave' */
  real_T NextOutput_h;                 /* '<S38>/Random number' */
  real_T lastSin_l;                    /* '<S38>/Sine wave' */
  real_T lastCos_ge;                   /* '<S38>/Sine wave' */
  real_T NextOutput_ir;                /* '<S39>/Random number' */
  real_T lastSin_i3;                   /* '<S39>/Sine wave' */
  real_T lastCos_oh;                   /* '<S39>/Sine wave' */
  real_T NextOutput_hu;                /* '<S40>/Random number' */
  real_T lastSin_a;                    /* '<S40>/Sine wave' */
  real_T lastCos_oy;                   /* '<S40>/Sine wave' */
  real_T NextOutput_p;                 /* '<S41>/Random number' */
  real_T lastSin_pf;                   /* '<S41>/Sine wave' */
  real_T lastCos_jh;                   /* '<S41>/Sine wave' */
  real_T NextOutput_jn;                /* '<S42>/Random number' */
  real_T lastSin_iv;                   /* '<S42>/Sine wave' */
  real_T lastCos_ca;                   /* '<S42>/Sine wave' */
  real_T NextOutput_b;                 /* '<S43>/Random number' */
  real_T lastSin_fv;                   /* '<S43>/Sine wave' */
  real_T lastCos_bf;                   /* '<S43>/Sine wave' */
  real_T lastSin_h5;                   /* '<S5>/Sine Wave1' */
  real_T lastCos_aj;                   /* '<S5>/Sine Wave1' */
  real_T lastSin_ew;                   /* '<S5>/Sine Wave2' */
  real_T lastCos_oj;                   /* '<S5>/Sine Wave2' */
  real_T lastSin_ln;                   /* '<S5>/Sine Wave3' */
  real_T lastCos_bs;                   /* '<S5>/Sine Wave3' */
  real_T lastSin_ck;                   /* '<S5>/Sine Wave4' */
  real_T lastCos_ab;                   /* '<S5>/Sine Wave4' */
  real_T Analogoutput_RWORK[2];        /* '<S1>/Analog output' */
  real_T Analogoutput1_RWORK[2];       /* '<S1>/Analog output1' */
  real_T Setup_RWORK[2];               /* '<S1>/Setup' */
  real_T Setup1_RWORK[2];              /* '<S1>/Setup1' */
  real_T REF_RWORK[16];                /* '<S4>/REF' */
  real_T Decode1_RWORK;                /* '<S12>/Decode 1' */
  real_T Decode5_RWORK;                /* '<S12>/Decode 5' */
  real_T Decode3_RWORK;                /* '<S12>/Decode 3' */
  real_T Decode4_RWORK;                /* '<S12>/Decode 4' */
  real_T Decode1_RWORK_o;              /* '<S20>/Decode 1' */
  real_T Decode2_RWORK;                /* '<S20>/Decode 2' */
  real_T Decode3_RWORK_f;              /* '<S20>/Decode 3' */
  real_T Decode4_RWORK_d;              /* '<S20>/Decode 4' */
  real_T Decode1_RWORK_c;              /* '<S27>/Decode 1' */
  real_T Decode5_RWORK_h;              /* '<S27>/Decode 5' */
  real_T Decode3_RWORK_b;              /* '<S27>/Decode 3' */
  real_T Decode4_RWORK_l;              /* '<S27>/Decode 4' */
  real_T Decode1_RWORK_i;              /* '<S13>/Decode 1' */
  real_T Decode2_RWORK_e;              /* '<S13>/Decode 2' */
  real_T Decode3_RWORK_b5;             /* '<S13>/Decode 3' */
  real_T Decode4_RWORK_f;              /* '<S13>/Decode 4' */
  real_T Decode1_RWORK_g;              /* '<S14>/Decode 1' */
  real_T Decode2_RWORK_k;              /* '<S14>/Decode 2' */
  real_T Decode3_RWORK_h;              /* '<S14>/Decode 3' */
  real_T Decode4_RWORK_n;              /* '<S14>/Decode 4' */
  real_T Decode1_RWORK_l;              /* '<S15>/Decode 1' */
  real_T Decode2_RWORK_l;              /* '<S15>/Decode 2' */
  real_T Decode3_RWORK_a;              /* '<S15>/Decode 3' */
  real_T Decode4_RWORK_c;              /* '<S15>/Decode 4' */
  real_T Decode1_RWORK_gr;             /* '<S16>/Decode 1' */
  real_T Decode5_RWORK_c;              /* '<S16>/Decode 5' */
  real_T Decode3_RWORK_e;              /* '<S16>/Decode 3' */
  real_T Decode4_RWORK_ci;             /* '<S16>/Decode 4' */
  real_T Decode1_RWORK_p;              /* '<S17>/Decode 1' */
  real_T Decode2_RWORK_n;              /* '<S17>/Decode 2' */
  real_T Decode3_RWORK_c;              /* '<S17>/Decode 3' */
  real_T Decode4_RWORK_f1;             /* '<S17>/Decode 4' */
  real_T Decode1_RWORK_m;              /* '<S18>/Decode 1' */
  real_T Decode2_RWORK_f;              /* '<S18>/Decode 2' */
  real_T Decode3_RWORK_ag;             /* '<S18>/Decode 3' */
  real_T Decode4_RWORK_i;              /* '<S18>/Decode 4' */
  real_T Decode1_RWORK_pr;             /* '<S19>/Decode 1' */
  real_T Decode2_RWORK_i;              /* '<S19>/Decode 2' */
  real_T Decode3_RWORK_ct;             /* '<S19>/Decode 3' */
  real_T Decode4_RWORK_fa;             /* '<S19>/Decode 4' */
  real_T Decode1_RWORK_h;              /* '<S21>/Decode 1' */
  real_T Decode2_RWORK_iz;             /* '<S21>/Decode 2' */
  real_T Decode3_RWORK_a5;             /* '<S21>/Decode 3' */
  real_T Decode4_RWORK_ci3;            /* '<S21>/Decode 4' */
  real_T Decode1_RWORK_b;              /* '<S22>/Decode 1' */
  real_T Decode2_RWORK_c;              /* '<S22>/Decode 2' */
  real_T Decode3_RWORK_bf;             /* '<S22>/Decode 3' */
  real_T Decode4_RWORK_g;              /* '<S22>/Decode 4' */
  real_T Decode1_RWORK_k;              /* '<S23>/Decode 1' */
  real_T Decode5_RWORK_d;              /* '<S23>/Decode 5' */
  real_T Decode3_RWORK_cb;             /* '<S23>/Decode 3' */
  real_T Decode4_RWORK_p;              /* '<S23>/Decode 4' */
  real_T Decode1_RWORK_c1;             /* '<S24>/Decode 1' */
  real_T Decode2_RWORK_ke;             /* '<S24>/Decode 2' */
  real_T Decode3_RWORK_h0;             /* '<S24>/Decode 3' */
  real_T Decode4_RWORK_b;              /* '<S24>/Decode 4' */
  real_T Decode1_RWORK_kw;             /* '<S25>/Decode 1' */
  real_T Decode2_RWORK_p;              /* '<S25>/Decode 2' */
  real_T Decode3_RWORK_b0;             /* '<S25>/Decode 3' */
  real_T Decode4_RWORK_f1y;            /* '<S25>/Decode 4' */
  real_T Decode1_RWORK_n;              /* '<S26>/Decode 1' */
  real_T Decode2_RWORK_kk;             /* '<S26>/Decode 2' */
  real_T Decode3_RWORK_g;              /* '<S26>/Decode 3' */
  real_T Decode4_RWORK_e;              /* '<S26>/Decode 4' */
  void *Analoginputv2_PWORK[4];        /* '<S2>/Analog input v2 ' */
  struct {
    void *LoggedData[4];
  } Scope2_PWORK;                      /* '<S2>/Scope 2 ' */

  void *Analogoutputv2_PWORK[5];       /* '<S2>/Analog output v2 ' */
  void *Digitalinputv2_PWORK[2];       /* '<S2>/Digital input v2 ' */
  struct {
    void *LoggedData[2];
  } Scope4_PWORK;                      /* '<S2>/Scope 4 ' */

  void *Digitaloutputv2_PWORK[2];      /* '<S2>/Digital output v2 ' */
  void *Setup_PWORK;                   /* '<S3>/Setup' */
  void *Read_PWORK;                    /* '<S3>/Read' */
  struct {
    void *LoggedData[4];
  } ScopexPC_PWORK;                    /* '<S3>/Scope (xPC) ' */

  void *Write_PWORK;                   /* '<S3>/Write' */
  void *Setup_PWORK_j;                 /* '<S5>/Setup ' */
  void *CANWrite_PWORK;                /* '<S6>/CAN Write' */
  void *CANWrite2_PWORK;               /* '<S6>/CAN Write2' */
  void *CANWrite3_PWORK;               /* '<S6>/CAN Write3' */
  void *CANWrite1_PWORK;               /* '<S6>/CAN Write1' */
  void *CANWrite4_PWORK;               /* '<S6>/CAN Write4' */
  void *CANWrite5_PWORK;               /* '<S6>/CAN Write5' */
  struct {
    void *LoggedData[6];
  } Scope_PWORK;                       /* '<S6>/Scope  ' */

  void *Setupv2_PWORK[2];              /* '<S7>/Setup v2 ' */
  void *Analogoutput_PWORK;            /* '<S1>/Analog output' */
  void *Analogoutput1_PWORK;           /* '<S1>/Analog output1' */
  void *Setup_PWORK_d;                 /* '<S1>/Setup' */
  void *Setup1_PWORK;                  /* '<S1>/Setup1' */
  void *LVDTread_PWORK;                /* '<S4>/LVDT read' */
  struct {
    void *LoggedData;
  } Scope_PWORK_p;                     /* '<S4>/Scope  ' */

  void *LVDTread1_PWORK;               /* '<S4>/LVDT read1' */
  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<S4>/Scope  1' */

  void *REF_PWORK;                     /* '<S4>/REF' */
  void *Receivev2_PWORK[3];            /* '<S7>/Receive v2 ' */
  void *Receivev21_PWORK[3];           /* '<S7>/Receive v2 1' */
  struct {
    void *LoggedData[2];
  } Scope8_PWORK;                      /* '<S7>/Scope 8' */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Decod;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dec_l;   /* synthesized block */

  void *Receivev28_PWORK[3];           /* '<S7>/Receive v2 8' */
  void *Receivev29_PWORK[3];           /* '<S7>/Receive v2 9' */
  struct {
    void *LoggedData[2];
  } Scope10_PWORK;                     /* '<S7>/Scope 10' */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dec_e;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dec_m;   /* synthesized block */

  void *Receivev210_PWORK[3];          /* '<S7>/Receive v2 10' */
  void *Receivev211_PWORK[3];          /* '<S7>/Receive v2 11' */
  struct {
    void *LoggedData[2];
  } Scope6_PWORK;                      /* '<S7>/Scope 6' */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dec_j;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dec_n;   /* synthesized block */

  void *Receivev212_PWORK[3];          /* '<S7>/Receive v2 12' */
  void *Receivev213_PWORK[3];          /* '<S7>/Receive v2 13' */
  struct {
    void *LoggedData[2];
  } Scope11_PWORK;                     /* '<S7>/Scope 11' */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dec_d;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dec_p;   /* synthesized block */

  void *Receivev214_PWORK[3];          /* '<S7>/Receive v2 14' */
  void *Receivev215_PWORK[3];          /* '<S7>/Receive v2 15' */
  struct {
    void *LoggedData[2];
  } Scope7_PWORK;                      /* '<S7>/Scope 7' */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dec_h;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dec_i;   /* synthesized block */

  void *Receivev22_PWORK[3];           /* '<S7>/Receive v2 2' */
  void *Receivev23_PWORK[3];           /* '<S7>/Receive v2 3' */
  struct {
    void *LoggedData[2];
  } Scope4_PWORK_l;                    /* '<S7>/Scope 4' */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_De_p3;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dec_o;   /* synthesized block */

  void *Receivev24_PWORK[3];           /* '<S7>/Receive v2 4' */
  void *Receivev25_PWORK[3];           /* '<S7>/Receive v2 5' */
  struct {
    void *LoggedData[2];
  } Scope9_PWORK;                      /* '<S7>/Scope 9' */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_De_e3;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_De_n2;   /* synthesized block */

  void *Receivev26_PWORK[3];           /* '<S7>/Receive v2 6' */
  void *Receivev27_PWORK[3];           /* '<S7>/Receive v2 7' */
  struct {
    void *LoggedData[2];
  } Scope5_PWORK;                      /* '<S7>/Scope 5' */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_De_iv;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dec_g;   /* synthesized block */

  void *Sendv2_PWORK[2];               /* '<S7>/Send v2 ' */
  void *Sendv29_PWORK[2];              /* '<S7>/Send v2 9' */
  void *Sendv210_PWORK[2];             /* '<S7>/Send v2 10' */
  void *Sendv211_PWORK[2];             /* '<S7>/Send v2 11' */
  void *Sendv212_PWORK[2];             /* '<S7>/Send v2 12' */
  void *Sendv213_PWORK[2];             /* '<S7>/Send v2 13' */
  void *Sendv214_PWORK[2];             /* '<S7>/Send v2 14' */
  void *Sendv215_PWORK[2];             /* '<S7>/Send v2 15' */
  void *Sendv21_PWORK[2];              /* '<S7>/Send v2 1' */
  void *Sendv22_PWORK[2];              /* '<S7>/Send v2 2' */
  void *Sendv23_PWORK[2];              /* '<S7>/Send v2 3' */
  void *Sendv24_PWORK[2];              /* '<S7>/Send v2 4' */
  void *Sendv25_PWORK[2];              /* '<S7>/Send v2 5' */
  void *Sendv26_PWORK[2];              /* '<S7>/Send v2 6' */
  void *Sendv27_PWORK[2];              /* '<S7>/Send v2 7' */
  void *Sendv28_PWORK[2];              /* '<S7>/Send v2 8' */
  void *Read_PWORK_g;                  /* '<S5>/Read ' */
  void *FIFOwrite_PWORK[4];            /* '<S5>/FIFO write' */
  void *FIFOread_PWORK[5];             /* '<S5>/FIFO read' */
  void *ASCIIDecode_PWORK[2];          /* '<S5>/ASCII Decode' */
  void *Read1_PWORK;                   /* '<S5>/Read 1' */
  void *FIFOwrite1_PWORK[4];           /* '<S5>/FIFO write1' */
  void *FIFOread1_PWORK[5];            /* '<S5>/FIFO read1' */
  void *ASCIIDecode1_PWORK[2];         /* '<S5>/ASCII Decode1' */
  void *Read2_PWORK;                   /* '<S5>/Read 2' */
  void *FIFOwrite2_PWORK[4];           /* '<S5>/FIFO write2' */
  void *FIFOread2_PWORK[5];            /* '<S5>/FIFO read2' */
  void *ASCIIDecode2_PWORK[2];         /* '<S5>/ASCII Decode2' */
  void *Read3_PWORK;                   /* '<S5>/Read 3' */
  void *FIFOwrite3_PWORK[4];           /* '<S5>/FIFO write3' */
  void *FIFOread3_PWORK[5];            /* '<S5>/FIFO read3' */
  void *ASCIIDecode3_PWORK[2];         /* '<S5>/ASCII Decode3' */
  struct {
    void *LoggedData[4];
  } ScopexPC2_PWORK;                   /* '<S5>/Scope (xPC) 2 ' */

  void *ASCIIEncode_PWORK;             /* '<S5>/ASCII Encode' */
  void *Write_PWORK_d;                 /* '<S5>/Write ' */
  void *ASCIIEncode1_PWORK;            /* '<S5>/ASCII Encode1' */
  void *Write1_PWORK;                  /* '<S5>/Write 1' */
  void *ASCIIEncode2_PWORK;            /* '<S5>/ASCII Encode2' */
  void *Write2_PWORK;                  /* '<S5>/Write 2' */
  void *ASCIIEncode3_PWORK;            /* '<S5>/ASCII Encode3' */
  void *Write3_PWORK;                  /* '<S5>/Write 3' */
  struct {
    void *LoggedData[8];
  } Scope_PWORK_n;                     /* '<S8>/Scope  ' */

  int32_T clockTickCounter;            /* '<S2>/Pulse Generator' */
  int32_T clockTickCounter_c;          /* '<S2>/Pulse Generator1' */
  int32_T clockTickCounter_b;          /* '<S3>/Pulse Generator' */
  int32_T systemEnable;                /* '<S6>/Sine Wave' */
  int32_T systemEnable_p;              /* '<S6>/Sine Wave1' */
  int32_T systemEnable_i;              /* '<S6>/Sine Wave2' */
  int32_T systemEnable_h;              /* '<S6>/Sine Wave3' */
  int32_T systemEnable_b;              /* '<S6>/Sine Wave4' */
  int32_T systemEnable_py;             /* '<S6>/Sine Wave5' */
  int32_T systemEnable_bc;             /* '<S1>/Sine Wave' */
  int32_T systemEnable_o;              /* '<S1>/Sine Wave1' */
  int32_T systemEnable_i2;             /* '<S28>/Sine wave' */
  int32_T systemEnable_n;              /* '<S29>/Sine wave' */
  int32_T systemEnable_bt;             /* '<S30>/Sine wave' */
  int32_T systemEnable_f;              /* '<S31>/Sine wave' */
  int32_T systemEnable_m;              /* '<S32>/Sine wave' */
  int32_T systemEnable_j;              /* '<S33>/Sine wave' */
  int32_T systemEnable_a;              /* '<S34>/Sine wave' */
  int32_T systemEnable_p0;             /* '<S35>/Sine wave' */
  int32_T systemEnable_ml;             /* '<S36>/Sine wave' */
  int32_T systemEnable_bx;             /* '<S37>/Sine wave' */
  int32_T systemEnable_g;              /* '<S38>/Sine wave' */
  int32_T systemEnable_pe;             /* '<S39>/Sine wave' */
  int32_T systemEnable_ik;             /* '<S40>/Sine wave' */
  int32_T systemEnable_jy;             /* '<S41>/Sine wave' */
  int32_T systemEnable_gv;             /* '<S42>/Sine wave' */
  int32_T systemEnable_o1;             /* '<S43>/Sine wave' */
  int32_T systemEnable_k;              /* '<S5>/Sine Wave1' */
  int32_T systemEnable_p2;             /* '<S5>/Sine Wave2' */
  int32_T systemEnable_av;             /* '<S5>/Sine Wave3' */
  int32_T systemEnable_gp;             /* '<S5>/Sine Wave4' */
  int32_T clockTickCounter_i;          /* '<S8>/Pulse Generator' */
  uint32_T RandSeed;                   /* '<S28>/Random number' */
  uint32_T RandSeed_m;                 /* '<S29>/Random number' */
  uint32_T RandSeed_h;                 /* '<S30>/Random number' */
  uint32_T RandSeed_k;                 /* '<S31>/Random number' */
  uint32_T RandSeed_g;                 /* '<S32>/Random number' */
  uint32_T RandSeed_f;                 /* '<S33>/Random number' */
  uint32_T RandSeed_f4;                /* '<S34>/Random number' */
  uint32_T RandSeed_i;                 /* '<S35>/Random number' */
  uint32_T RandSeed_d;                 /* '<S36>/Random number' */
  uint32_T RandSeed_b;                 /* '<S37>/Random number' */
  uint32_T RandSeed_hi;                /* '<S38>/Random number' */
  uint32_T RandSeed_bw;                /* '<S39>/Random number' */
  uint32_T RandSeed_j;                 /* '<S40>/Random number' */
  uint32_T RandSeed_n;                 /* '<S41>/Random number' */
  uint32_T RandSeed_l;                 /* '<S42>/Random number' */
  uint32_T RandSeed_fs;                /* '<S43>/Random number' */
  int_T Setup_IWORK;                   /* '<S3>/Setup' */
  int_T Read_IWORK;                    /* '<S3>/Read' */
  int_T Write_IWORK;                   /* '<S3>/Write' */
  int_T Setup_IWORK_m[2];              /* '<S5>/Setup ' */
  int_T CANSetup_IWORK;                /* '<S6>/CAN Setup' */
  int_T CANPack_ModeSignalID;          /* '<S6>/CAN Pack' */
  int_T CANWrite_IWORK;                /* '<S6>/CAN Write' */
  int_T CANPack1_ModeSignalID;         /* '<S6>/CAN Pack1' */
  int_T CANWrite2_IWORK;               /* '<S6>/CAN Write2' */
  int_T CANPack2_ModeSignalID;         /* '<S6>/CAN Pack2' */
  int_T CANWrite3_IWORK;               /* '<S6>/CAN Write3' */
  int_T CANPack3_ModeSignalID;         /* '<S6>/CAN Pack3' */
  int_T CANWrite1_IWORK;               /* '<S6>/CAN Write1' */
  int_T CANPack4_ModeSignalID;         /* '<S6>/CAN Pack4' */
  int_T CANWrite4_IWORK;               /* '<S6>/CAN Write4' */
  int_T CANPack5_ModeSignalID;         /* '<S6>/CAN Pack5' */
  int_T CANWrite5_IWORK;               /* '<S6>/CAN Write5' */
  int_T Analogoutput_IWORK;            /* '<S1>/Analog output' */
  int_T Analogoutput1_IWORK;           /* '<S1>/Analog output1' */
  int_T Setup_IWORK_j;                 /* '<S1>/Setup' */
  int_T Setup1_IWORK;                  /* '<S1>/Setup1' */
  int_T LVDTread_IWORK;                /* '<S4>/LVDT read' */
  int_T LVDTread1_IWORK;               /* '<S4>/LVDT read1' */
  int_T REF_IWORK;                     /* '<S4>/REF' */
  int_T Decode1_IWORK[2];              /* '<S12>/Decode 1' */
  int_T Decode5_IWORK[2];              /* '<S12>/Decode 5' */
  int_T Decode3_IWORK[2];              /* '<S12>/Decode 3' */
  int_T Decode4_IWORK[2];              /* '<S12>/Decode 4' */
  int_T Decode1_IWORK_f[2];            /* '<S20>/Decode 1' */
  int_T Decode2_IWORK[2];              /* '<S20>/Decode 2' */
  int_T Decode3_IWORK_c[2];            /* '<S20>/Decode 3' */
  int_T Decode4_IWORK_b[2];            /* '<S20>/Decode 4' */
  int_T Decode1_IWORK_l[2];            /* '<S27>/Decode 1' */
  int_T Decode5_IWORK_i[2];            /* '<S27>/Decode 5' */
  int_T Decode3_IWORK_j[2];            /* '<S27>/Decode 3' */
  int_T Decode4_IWORK_f[2];            /* '<S27>/Decode 4' */
  int_T Decode1_IWORK_o[2];            /* '<S13>/Decode 1' */
  int_T Decode2_IWORK_l[2];            /* '<S13>/Decode 2' */
  int_T Decode3_IWORK_h[2];            /* '<S13>/Decode 3' */
  int_T Decode4_IWORK_m[2];            /* '<S13>/Decode 4' */
  int_T Decode1_IWORK_h[2];            /* '<S14>/Decode 1' */
  int_T Decode2_IWORK_p[2];            /* '<S14>/Decode 2' */
  int_T Decode3_IWORK_f[2];            /* '<S14>/Decode 3' */
  int_T Decode4_IWORK_j[2];            /* '<S14>/Decode 4' */
  int_T Decode1_IWORK_e[2];            /* '<S15>/Decode 1' */
  int_T Decode2_IWORK_a[2];            /* '<S15>/Decode 2' */
  int_T Decode3_IWORK_b[2];            /* '<S15>/Decode 3' */
  int_T Decode4_IWORK_k[2];            /* '<S15>/Decode 4' */
  int_T Decode1_IWORK_i[2];            /* '<S16>/Decode 1' */
  int_T Decode5_IWORK_k[2];            /* '<S16>/Decode 5' */
  int_T Decode3_IWORK_e[2];            /* '<S16>/Decode 3' */
  int_T Decode4_IWORK_mw[2];           /* '<S16>/Decode 4' */
  int_T Decode1_IWORK_m[2];            /* '<S17>/Decode 1' */
  int_T Decode2_IWORK_lc[2];           /* '<S17>/Decode 2' */
  int_T Decode3_IWORK_p[2];            /* '<S17>/Decode 3' */
  int_T Decode4_IWORK_me[2];           /* '<S17>/Decode 4' */
  int_T Decode1_IWORK_b[2];            /* '<S18>/Decode 1' */
  int_T Decode2_IWORK_b[2];            /* '<S18>/Decode 2' */
  int_T Decode3_IWORK_cp[2];           /* '<S18>/Decode 3' */
  int_T Decode4_IWORK_f5[2];           /* '<S18>/Decode 4' */
  int_T Decode1_IWORK_hs[2];           /* '<S19>/Decode 1' */
  int_T Decode2_IWORK_m[2];            /* '<S19>/Decode 2' */
  int_T Decode3_IWORK_a[2];            /* '<S19>/Decode 3' */
  int_T Decode4_IWORK_g[2];            /* '<S19>/Decode 4' */
  int_T Decode1_IWORK_o2[2];           /* '<S21>/Decode 1' */
  int_T Decode2_IWORK_f[2];            /* '<S21>/Decode 2' */
  int_T Decode3_IWORK_cq[2];           /* '<S21>/Decode 3' */
  int_T Decode4_IWORK_o[2];            /* '<S21>/Decode 4' */
  int_T Decode1_IWORK_lf[2];           /* '<S22>/Decode 1' */
  int_T Decode2_IWORK_j[2];            /* '<S22>/Decode 2' */
  int_T Decode3_IWORK_m[2];            /* '<S22>/Decode 3' */
  int_T Decode4_IWORK_l[2];            /* '<S22>/Decode 4' */
  int_T Decode1_IWORK_c[2];            /* '<S23>/Decode 1' */
  int_T Decode5_IWORK_b[2];            /* '<S23>/Decode 5' */
  int_T Decode3_IWORK_pb[2];           /* '<S23>/Decode 3' */
  int_T Decode4_IWORK_ms[2];           /* '<S23>/Decode 4' */
  int_T Decode1_IWORK_ep[2];           /* '<S24>/Decode 1' */
  int_T Decode2_IWORK_k[2];            /* '<S24>/Decode 2' */
  int_T Decode3_IWORK_n[2];            /* '<S24>/Decode 3' */
  int_T Decode4_IWORK_n[2];            /* '<S24>/Decode 4' */
  int_T Decode1_IWORK_f0[2];           /* '<S25>/Decode 1' */
  int_T Decode2_IWORK_m2[2];           /* '<S25>/Decode 2' */
  int_T Decode3_IWORK_ei[2];           /* '<S25>/Decode 3' */
  int_T Decode4_IWORK_lq[2];           /* '<S25>/Decode 4' */
  int_T Decode1_IWORK_b0[2];           /* '<S26>/Decode 1' */
  int_T Decode2_IWORK_d[2];            /* '<S26>/Decode 2' */
  int_T Decode3_IWORK_o[2];            /* '<S26>/Decode 3' */
  int_T Decode4_IWORK_e[2];            /* '<S26>/Decode 4' */
  int_T Read_IWORK_a[3];               /* '<S5>/Read ' */
  int_T FIFOwrite_IWORK[3];            /* '<S5>/FIFO write' */
  int_T FIFOread_IWORK[5];             /* '<S5>/FIFO read' */
  int_T ASCIIDecode_IWORK[4];          /* '<S5>/ASCII Decode' */
  int_T Read1_IWORK[3];                /* '<S5>/Read 1' */
  int_T FIFOwrite1_IWORK[3];           /* '<S5>/FIFO write1' */
  int_T FIFOread1_IWORK[5];            /* '<S5>/FIFO read1' */
  int_T ASCIIDecode1_IWORK[4];         /* '<S5>/ASCII Decode1' */
  int_T Read2_IWORK[3];                /* '<S5>/Read 2' */
  int_T FIFOwrite2_IWORK[3];           /* '<S5>/FIFO write2' */
  int_T FIFOread2_IWORK[5];            /* '<S5>/FIFO read2' */
  int_T ASCIIDecode2_IWORK[4];         /* '<S5>/ASCII Decode2' */
  int_T Read3_IWORK[3];                /* '<S5>/Read 3' */
  int_T FIFOwrite3_IWORK[3];           /* '<S5>/FIFO write3' */
  int_T FIFOread3_IWORK[5];            /* '<S5>/FIFO read3' */
  int_T ASCIIDecode3_IWORK[4];         /* '<S5>/ASCII Decode3' */
  int_T Write_IWORK_j[3];              /* '<S5>/Write ' */
  int_T Write1_IWORK[3];               /* '<S5>/Write 1' */
  int_T Write2_IWORK[3];               /* '<S5>/Write 2' */
  int_T Write3_IWORK[3];               /* '<S5>/Write 3' */
  int_T Relays_IWORK;                  /* '<S8>/Relays ' */
  int_T CANRead1_IWORK;                /* '<S11>/CAN Read1' */
  int_T CANUnpack_ModeSignalID;        /* '<S11>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S11>/CAN Unpack' */
  int_T CANUnpack1_ModeSignalID;       /* '<S11>/CAN Unpack1' */
  int_T CANUnpack1_StatusPortID;       /* '<S11>/CAN Unpack1' */
  int_T CANUnpack2_ModeSignalID;       /* '<S11>/CAN Unpack2' */
  int_T CANUnpack2_StatusPortID;       /* '<S11>/CAN Unpack2' */
  int_T CANRead_IWORK;                 /* '<S10>/CAN Read' */
  int_T CANUnpack_ModeSignalID_b;      /* '<S10>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_g;      /* '<S10>/CAN Unpack' */
  int_T CANUnpack1_ModeSignalID_i;     /* '<S10>/CAN Unpack1' */
  int_T CANUnpack1_StatusPortID_o;     /* '<S10>/CAN Unpack1' */
  int_T CANUnpack2_ModeSignalID_g;     /* '<S10>/CAN Unpack2' */
  int_T CANUnpack2_StatusPortID_m;     /* '<S10>/CAN Unpack2' */
  uint16_T Output_DSTATE;              /* '<S48>/Output' */
  uint16_T Output_DSTATE_o;            /* '<S52>/Output' */
  uint16_T Output_DSTATE_o0;           /* '<S56>/Output' */
  uint16_T Output_DSTATE_m;            /* '<S60>/Output' */
  uint16_T Output_DSTATE_oy;           /* '<S64>/Output' */
  uint16_T Output_DSTATE_e;            /* '<S68>/Output' */
  uint16_T Output_DSTATE_k;            /* '<S72>/Output' */
  uint16_T Output_DSTATE_g;            /* '<S80>/Output' */
  uint16_T Output_DSTATE_p;            /* '<S84>/Output' */
  uint16_T Output_DSTATE_b;            /* '<S88>/Output' */
  uint16_T Output_DSTATE_f;            /* '<S92>/Output' */
  uint16_T Output_DSTATE_h;            /* '<S96>/Output' */
  uint16_T Output_DSTATE_m4;           /* '<S100>/Output' */
  uint16_T Output_DSTATE_fw;           /* '<S104>/Output' */
  uint8_T Output_DSTATE_c;             /* '<S44>/Output' */
  uint8_T Output_DSTATE_e0;            /* '<S76>/Output' */
};

/* Real-time Model Data Structure */
struct tag_RTM_speedgoat_test_SN5659_R2020b_T {
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
    time_T *taskTimePtrs[4];
    SimStruct childSFunctions[203];
    SimStruct *childSFunctionPtrs[203];
    struct _ssBlkInfo2 blkInfo2[203];
    struct _ssSFcnModelMethods2 methods2[203];
    struct _ssSFcnModelMethods3 methods3[203];
    struct _ssSFcnModelMethods4 methods4[203];
    struct _ssStatesInfo2 statesInfo2[203];
    ssPeriodicStatesInfo periodicStatesInfo[203];
    struct _ssPortInfo2 inputOutputPortInfo2[203];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[35];
      mxArray *params[35];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[4];
      struct _ssOutPortUnit outputPortUnits[4];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[4];
      uint_T attribs[11];
      mxArray *params[11];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[4];
      struct _ssInPortUnit inputPortUnits[4];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[4];
      uint_T attribs[13];
      mxArray *params[13];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn6;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn7;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[16];
      struct _ssOutPortUnit outputPortUnits[16];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[16];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn8;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[16];
      struct _ssInPortUnit inputPortUnits[16];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[16];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn9;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[25];
      mxArray *params[25];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn10;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[31];
      mxArray *params[31];
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
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
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
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
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
    } Sfcn17;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn18;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[16];
      struct _ssInPortUnit inputPortUnits[16];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[16];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn19;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[16];
      struct _ssInPortUnit inputPortUnits[16];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[16];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn20;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[11];
      mxArray *params[11];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn21;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[11];
      mxArray *params[11];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn22;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn23;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn24;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn25;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn26;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn27;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn28;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn29;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn30;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn31;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn32;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn33;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn34;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn35;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn36;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn37;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn38;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn39;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn40;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn41;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn42;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn43;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn44;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn45;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn46;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn47;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn48;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn49;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn50;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn51;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn52;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn53;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn54;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn55;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn56;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn57;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn58;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn59;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn60;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn61;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn62;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn63;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn64;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn65;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn66;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn67;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn68;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn69;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn70;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn71;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn72;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn73;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn74;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn75;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn76;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn77;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn78;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn79;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn80;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn81;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn82;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn83;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn84;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn85;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn86;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn87;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn88;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn89;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn90;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn91;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn92;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn93;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn94;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn95;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn96;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn97;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn98;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn99;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn100;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn101;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn102;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn103;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn104;

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
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn105;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn106;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn107;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn108;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn109;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[4];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn110;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn111;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn112;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn113;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn114;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[4];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn115;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn116;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn117;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn118;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn119;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[4];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn120;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn121;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn122;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn123;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn124;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[4];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn125;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn126;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn127;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn128;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn129;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[4];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn130;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn131;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn132;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn133;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn134;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[4];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn135;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn136;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn137;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn138;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn139;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[4];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn140;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn141;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn142;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn143;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn144;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[4];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn145;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn146;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn147;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn148;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn149;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[4];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn150;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn151;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn152;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn153;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn154;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[4];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn155;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn156;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn157;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn158;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn159;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[4];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn160;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn161;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn162;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn163;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn164;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[4];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn165;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn166;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn167;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn168;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn169;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[4];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn170;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn171;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn172;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn173;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn174;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[4];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn175;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn176;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn177;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn178;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn179;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[4];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn180;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn181;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn182;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn183;

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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn184;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[4];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn185;

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
    } Sfcn186;

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
    } Sfcn187;

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
    } Sfcn188;

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
    } Sfcn189;

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
    } Sfcn190;

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
    } Sfcn191;

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
    } Sfcn192;

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
    } Sfcn193;

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
    } Sfcn194;

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
    } Sfcn195;

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
    } Sfcn196;

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
    } Sfcn197;

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
    } Sfcn198;

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
    } Sfcn199;

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
    } Sfcn200;

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
    } Sfcn201;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[8];
      struct _ssInPortUnit inputPortUnits[8];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[8];
      struct _ssPortOutputs outputPortInfo[8];
      struct _ssOutPortUnit outputPortUnits[8];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[8];
      uint_T attribs[17];
      mxArray *params[17];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn202;
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
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    uint32_T clockTick2;
    uint32_T clockTickH2;
    time_T stepSize2;
    uint32_T clockTick3;
    uint32_T clockTickH3;
    time_T stepSize3;
    struct {
      uint8_T TID[4];
      uint8_T cLimit[4];
    } TaskCounters;

    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[4];
    time_T offsetTimesArray[4];
    int_T sampleTimeTaskIDArray[4];
    int_T sampleHitArray[4];
    int_T perTaskSampleHitsArray[16];
    time_T tArray[4];
  } Timing;
};

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_speedgoat_test_SN5659_R2020b_T speedgoat_test_SN5659_R2020b_B;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern struct DW_speedgoat_test_SN5659_R2020b_T speedgoat_test_SN5659_R2020b_DW;

/* External data declarations for dependent source files */
extern const real_T speedgoat_test_SN5659_R2020b_RGND;/* real_T ground */
extern void rate_scheduler(void);

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void speedgoat_test_SN5659_R2020b_initialize(void);
  extern void speedgoat_test_SN5659_R2020b_step0(void);
  extern void speedgoat_test_SN5659_R2020b_step2(void);
  extern void speedgoat_test_SN5659_R2020b_step3(void);
  extern void speedgoat_test_SN5659_R2020b_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_speedgoat_test_SN5659_R2020b_T *const
    speedgoat_test_SN5659_R2020b_M;

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
 * '<Root>' : 'speedgoat_test_SN5659_R2020b'
 * '<S1>'   : 'speedgoat_test_SN5659_R2020b/IO107 (1-2)'
 * '<S2>'   : 'speedgoat_test_SN5659_R2020b/IO133'
 * '<S3>'   : 'speedgoat_test_SN5659_R2020b/IO204'
 * '<S4>'   : 'speedgoat_test_SN5659_R2020b/IO421-1'
 * '<S5>'   : 'speedgoat_test_SN5659_R2020b/IO503'
 * '<S6>'   : 'speedgoat_test_SN5659_R2020b/IO612'
 * '<S7>'   : 'speedgoat_test_SN5659_R2020b/IO682'
 * '<S8>'   : 'speedgoat_test_SN5659_R2020b/IO941-SPDT-64'
 * '<S9>'   : 'speedgoat_test_SN5659_R2020b/info'
 * '<S10>'  : 'speedgoat_test_SN5659_R2020b/IO612/CAN Read Loop - Port 3'
 * '<S11>'  : 'speedgoat_test_SN5659_R2020b/IO612/CAN Read Loop - Port 4'
 * '<S12>'  : 'speedgoat_test_SN5659_R2020b/IO682/Decode Channel 1'
 * '<S13>'  : 'speedgoat_test_SN5659_R2020b/IO682/Decode Channel 10'
 * '<S14>'  : 'speedgoat_test_SN5659_R2020b/IO682/Decode Channel 11'
 * '<S15>'  : 'speedgoat_test_SN5659_R2020b/IO682/Decode Channel 12'
 * '<S16>'  : 'speedgoat_test_SN5659_R2020b/IO682/Decode Channel 13'
 * '<S17>'  : 'speedgoat_test_SN5659_R2020b/IO682/Decode Channel 14'
 * '<S18>'  : 'speedgoat_test_SN5659_R2020b/IO682/Decode Channel 15'
 * '<S19>'  : 'speedgoat_test_SN5659_R2020b/IO682/Decode Channel 16'
 * '<S20>'  : 'speedgoat_test_SN5659_R2020b/IO682/Decode Channel 2'
 * '<S21>'  : 'speedgoat_test_SN5659_R2020b/IO682/Decode Channel 3'
 * '<S22>'  : 'speedgoat_test_SN5659_R2020b/IO682/Decode Channel 4'
 * '<S23>'  : 'speedgoat_test_SN5659_R2020b/IO682/Decode Channel 5'
 * '<S24>'  : 'speedgoat_test_SN5659_R2020b/IO682/Decode Channel 6'
 * '<S25>'  : 'speedgoat_test_SN5659_R2020b/IO682/Decode Channel 7'
 * '<S26>'  : 'speedgoat_test_SN5659_R2020b/IO682/Decode Channel 8'
 * '<S27>'  : 'speedgoat_test_SN5659_R2020b/IO682/Decode Channel 9'
 * '<S28>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 1'
 * '<S29>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 10'
 * '<S30>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 11'
 * '<S31>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 12'
 * '<S32>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 13'
 * '<S33>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 14'
 * '<S34>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 15'
 * '<S35>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 16'
 * '<S36>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 2'
 * '<S37>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 3'
 * '<S38>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 4'
 * '<S39>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 5'
 * '<S40>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 6'
 * '<S41>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 7'
 * '<S42>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 8'
 * '<S43>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 9'
 * '<S44>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 1/Counter Limited'
 * '<S45>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 1/Prepare RAW value'
 * '<S46>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 1/Counter Limited/Increment Real World'
 * '<S47>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 1/Counter Limited/Wrap To Zero'
 * '<S48>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 10/Counter Limited'
 * '<S49>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 10/Prepare RAW value'
 * '<S50>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 10/Counter Limited/Increment Real World'
 * '<S51>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 10/Counter Limited/Wrap To Zero'
 * '<S52>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 11/Counter Limited'
 * '<S53>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 11/Prepare RAW value'
 * '<S54>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 11/Counter Limited/Increment Real World'
 * '<S55>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 11/Counter Limited/Wrap To Zero'
 * '<S56>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 12/Counter Limited'
 * '<S57>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 12/Prepare RAW value'
 * '<S58>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 12/Counter Limited/Increment Real World'
 * '<S59>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 12/Counter Limited/Wrap To Zero'
 * '<S60>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 13/Counter Limited'
 * '<S61>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 13/Prepare RAW value'
 * '<S62>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 13/Counter Limited/Increment Real World'
 * '<S63>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 13/Counter Limited/Wrap To Zero'
 * '<S64>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 14/Counter Limited'
 * '<S65>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 14/Prepare RAW value'
 * '<S66>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 14/Counter Limited/Increment Real World'
 * '<S67>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 14/Counter Limited/Wrap To Zero'
 * '<S68>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 15/Counter Limited'
 * '<S69>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 15/Prepare RAW value'
 * '<S70>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 15/Counter Limited/Increment Real World'
 * '<S71>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 15/Counter Limited/Wrap To Zero'
 * '<S72>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 16/Counter Limited'
 * '<S73>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 16/Prepare RAW value'
 * '<S74>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 16/Counter Limited/Increment Real World'
 * '<S75>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 16/Counter Limited/Wrap To Zero'
 * '<S76>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 2/Counter Limited'
 * '<S77>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 2/Prepare RAW value'
 * '<S78>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 2/Counter Limited/Increment Real World'
 * '<S79>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 2/Counter Limited/Wrap To Zero'
 * '<S80>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 3/Counter Limited'
 * '<S81>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 3/Prepare RAW value'
 * '<S82>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 3/Counter Limited/Increment Real World'
 * '<S83>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 3/Counter Limited/Wrap To Zero'
 * '<S84>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 4/Counter Limited'
 * '<S85>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 4/Prepare RAW value'
 * '<S86>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 4/Counter Limited/Increment Real World'
 * '<S87>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 4/Counter Limited/Wrap To Zero'
 * '<S88>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 5/Counter Limited'
 * '<S89>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 5/Prepare RAW value'
 * '<S90>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 5/Counter Limited/Increment Real World'
 * '<S91>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 5/Counter Limited/Wrap To Zero'
 * '<S92>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 6/Counter Limited'
 * '<S93>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 6/Prepare RAW value'
 * '<S94>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 6/Counter Limited/Increment Real World'
 * '<S95>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 6/Counter Limited/Wrap To Zero'
 * '<S96>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 7/Counter Limited'
 * '<S97>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 7/Prepare RAW value'
 * '<S98>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 7/Counter Limited/Increment Real World'
 * '<S99>'  : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 7/Counter Limited/Wrap To Zero'
 * '<S100>' : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 8/Counter Limited'
 * '<S101>' : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 8/Prepare RAW value'
 * '<S102>' : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 8/Counter Limited/Increment Real World'
 * '<S103>' : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 8/Counter Limited/Wrap To Zero'
 * '<S104>' : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 9/Counter Limited'
 * '<S105>' : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 9/Prepare RAW value'
 * '<S106>' : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 9/Counter Limited/Increment Real World'
 * '<S107>' : 'speedgoat_test_SN5659_R2020b/IO682/Encode Channel 9/Counter Limited/Wrap To Zero'
 */
#endif                          /* RTW_HEADER_speedgoat_test_SN5659_R2020b_h_ */
