/*
 * speedgoat_test_SN5659_R2021b_IO682.h
 *
 * Code generation for model "speedgoat_test_SN5659_R2021b_IO682".
 *
 * Model version              : 3.0
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Fri Apr  8 14:58:42 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_speedgoat_test_SN5659_R2021b_IO682_h_
#define RTW_HEADER_speedgoat_test_SN5659_R2021b_IO682_h_
#include <stddef.h>
#include <cstring>
#include <cmath>
#include <logsrv.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "speedgoat_test_SN5659_R2021b_IO682_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "speedgoat_test_SN5659_R2021b_IO682_cal.h"
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

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
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

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

/* Block signals (default storage) */
struct B_speedgoat_test_SN5659_R2021b_IO682_T {
  real_T Receivev2[51];                /* '<S1>/Receive v2 ' */
  real_T Decode1;                      /* '<S3>/Decode 1' */
  real_T Decode5;                      /* '<S3>/Decode 5' */
  real_T Decode3;                      /* '<S3>/Decode 3' */
  real_T Decode4;                      /* '<S3>/Decode 4' */
  real_T IO682_SerialIN_CH1[4];
  /* '<S1>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 1_at_outport_0Inport1' */
  real_T Receivev21[51];               /* '<S1>/Receive v2 1' */
  real_T Decode1_m;                    /* '<S11>/Decode 1' */
  real_T Decode2;                      /* '<S11>/Decode 2' */
  real_T Decode3_l;                    /* '<S11>/Decode 3' */
  real_T Decode4_d;                    /* '<S11>/Decode 4' */
  real_T IO682_SerialIN_CH2[4];
  /* '<S1>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 2_at_outport_0Inport1' */
  real_T Receivev28[51];               /* '<S1>/Receive v2 8' */
  real_T Decode1_d;                    /* '<S18>/Decode 1' */
  real_T Decode5_p;                    /* '<S18>/Decode 5' */
  real_T Decode3_c;                    /* '<S18>/Decode 3' */
  real_T Decode4_o;                    /* '<S18>/Decode 4' */
  real_T IO682_SerialIN_CH9[4];
  /* '<S1>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 9_at_outport_0Inport1' */
  real_T Receivev29[51];               /* '<S1>/Receive v2 9' */
  real_T Decode1_g;                    /* '<S4>/Decode 1' */
  real_T Decode2_n;                    /* '<S4>/Decode 2' */
  real_T Decode3_j;                    /* '<S4>/Decode 3' */
  real_T Decode4_h;                    /* '<S4>/Decode 4' */
  real_T IO682_SerialIN_CH10[4];
  /* '<S1>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 10_at_outport_0Inport1' */
  real_T Receivev210[51];              /* '<S1>/Receive v2 10' */
  real_T Decode1_f;                    /* '<S5>/Decode 1' */
  real_T Decode2_j;                    /* '<S5>/Decode 2' */
  real_T Decode3_k;                    /* '<S5>/Decode 3' */
  real_T Decode4_c;                    /* '<S5>/Decode 4' */
  real_T IO682_SerialIN_CH11[4];
  /* '<S1>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 11_at_outport_0Inport1' */
  real_T Receivev211[51];              /* '<S1>/Receive v2 11' */
  real_T Decode1_a;                    /* '<S6>/Decode 1' */
  real_T Decode2_j2;                   /* '<S6>/Decode 2' */
  real_T Decode3_m;                    /* '<S6>/Decode 3' */
  real_T Decode4_a;                    /* '<S6>/Decode 4' */
  real_T IO682_SerialIN_CH12[4];
  /* '<S1>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 12_at_outport_0Inport1' */
  real_T Receivev212[51];              /* '<S1>/Receive v2 12' */
  real_T Decode1_i;                    /* '<S7>/Decode 1' */
  real_T Decode5_i;                    /* '<S7>/Decode 5' */
  real_T Decode3_o;                    /* '<S7>/Decode 3' */
  real_T Decode4_b;                    /* '<S7>/Decode 4' */
  real_T IO682_SerialIN_CH13[4];
  /* '<S1>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 13_at_outport_0Inport1' */
  real_T Receivev213[51];              /* '<S1>/Receive v2 13' */
  real_T Decode1_my;                   /* '<S8>/Decode 1' */
  real_T Decode2_i;                    /* '<S8>/Decode 2' */
  real_T Decode3_n;                    /* '<S8>/Decode 3' */
  real_T Decode4_c1;                   /* '<S8>/Decode 4' */
  real_T IO682_SerialIN_CH14[4];
  /* '<S1>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 14_at_outport_0Inport1' */
  real_T Receivev214[51];              /* '<S1>/Receive v2 14' */
  real_T Decode1_n;                    /* '<S9>/Decode 1' */
  real_T Decode2_b;                    /* '<S9>/Decode 2' */
  real_T Decode3_cq;                   /* '<S9>/Decode 3' */
  real_T Decode4_oi;                   /* '<S9>/Decode 4' */
  real_T IO682_SerialIN_CH15[4];
  /* '<S1>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 15_at_outport_0Inport1' */
  real_T Receivev215[51];              /* '<S1>/Receive v2 15' */
  real_T Decode1_al;                   /* '<S10>/Decode 1' */
  real_T Decode2_l;                    /* '<S10>/Decode 2' */
  real_T Decode3_ou;                   /* '<S10>/Decode 3' */
  real_T Decode4_p;                    /* '<S10>/Decode 4' */
  real_T IO682_SerialIN_CH16[4];
  /* '<S1>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 16_at_outport_0Inport1' */
  real_T Receivev22[51];               /* '<S1>/Receive v2 2' */
  real_T Decode1_p;                    /* '<S12>/Decode 1' */
  real_T Decode2_ba;                   /* '<S12>/Decode 2' */
  real_T Decode3_a;                    /* '<S12>/Decode 3' */
  real_T Decode4_f;                    /* '<S12>/Decode 4' */
  real_T IO682_SerialIN_CH3[4];
  /* '<S1>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 3_at_outport_0Inport1' */
  real_T Receivev23[51];               /* '<S1>/Receive v2 3' */
  real_T Decode1_pf;                   /* '<S13>/Decode 1' */
  real_T Decode2_k;                    /* '<S13>/Decode 2' */
  real_T Decode3_b;                    /* '<S13>/Decode 3' */
  real_T Decode4_ff;                   /* '<S13>/Decode 4' */
  real_T IO682_SerialIN_CH4[4];
  /* '<S1>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 4_at_outport_0Inport1' */
  real_T Receivev24[51];               /* '<S1>/Receive v2 4' */
  real_T Decode1_io;                   /* '<S14>/Decode 1' */
  real_T Decode5_b;                    /* '<S14>/Decode 5' */
  real_T Decode3_ny;                   /* '<S14>/Decode 3' */
  real_T Decode4_j;                    /* '<S14>/Decode 4' */
  real_T IO682_SerialIN_CH5[4];
  /* '<S1>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 5_at_outport_0Inport1' */
  real_T Receivev25[51];               /* '<S1>/Receive v2 5' */
  real_T Decode1_gi;                   /* '<S15>/Decode 1' */
  real_T Decode2_f;                    /* '<S15>/Decode 2' */
  real_T Decode3_o4;                   /* '<S15>/Decode 3' */
  real_T Decode4_f4;                   /* '<S15>/Decode 4' */
  real_T IO682_SerialIN_CH6[4];
  /* '<S1>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 6_at_outport_0Inport1' */
  real_T Receivev26[51];               /* '<S1>/Receive v2 6' */
  real_T Decode1_p1;                   /* '<S16>/Decode 1' */
  real_T Decode2_h;                    /* '<S16>/Decode 2' */
  real_T Decode3_lc;                   /* '<S16>/Decode 3' */
  real_T Decode4_l;                    /* '<S16>/Decode 4' */
  real_T IO682_SerialIN_CH7[4];
  /* '<S1>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 7_at_outport_0Inport1' */
  real_T Receivev27[51];               /* '<S1>/Receive v2 7' */
  real_T Decode1_b;                    /* '<S17>/Decode 1' */
  real_T Decode2_nz;                   /* '<S17>/Decode 2' */
  real_T Decode3_mj;                   /* '<S17>/Decode 3' */
  real_T Decode4_m;                    /* '<S17>/Decode 4' */
  real_T IO682_SerialIN_CH8[4];
  /* '<S1>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Decode Channel 8_at_outport_0Inport1' */
  real_T Randomnumber;                 /* '<S19>/Random number' */
  real_T Encode1;                      /* '<S19>/Encode 1' */
  real_T DataTypeConversion;           /* '<S19>/Data Type Conversion' */
  real_T Encode5;                      /* '<S19>/Encode 5' */
  real_T Sinewave;                     /* '<S19>/Sine wave' */
  real_T Encode3;                      /* '<S19>/Encode 3' */
  real_T Divide;                       /* '<S36>/Divide' */
  real_T Multiply;                     /* '<S36>/Multiply' */
  real_T DataTypeConversion1;          /* '<S36>/Data Type Conversion1' */
  real_T Encode2;                      /* '<S19>/Encode 2' */
  real_T Randomnumber_c;               /* '<S20>/Random number' */
  real_T Encode1_b;                    /* '<S20>/Encode 1' */
  real_T DataTypeConversion_h;         /* '<S20>/Data Type Conversion' */
  real_T Encode2_p;                    /* '<S20>/Encode 2' */
  real_T Sinewave_o;                   /* '<S20>/Sine wave' */
  real_T Encode3_i;                    /* '<S20>/Encode 3' */
  real_T Divide_k;                     /* '<S40>/Divide' */
  real_T Multiply_h;                   /* '<S40>/Multiply' */
  real_T DataTypeConversion1_g;        /* '<S40>/Data Type Conversion1' */
  real_T Encode4;                      /* '<S20>/Encode 4' */
  real_T Randomnumber_p;               /* '<S21>/Random number' */
  real_T Encode1_f;                    /* '<S21>/Encode 1' */
  real_T DataTypeConversion_e;         /* '<S21>/Data Type Conversion' */
  real_T Encode2_f;                    /* '<S21>/Encode 2' */
  real_T Sinewave_f;                   /* '<S21>/Sine wave' */
  real_T Encode3_b;                    /* '<S21>/Encode 3' */
  real_T Divide_h;                     /* '<S44>/Divide' */
  real_T Multiply_a;                   /* '<S44>/Multiply' */
  real_T DataTypeConversion1_i;        /* '<S44>/Data Type Conversion1' */
  real_T Encode4_i;                    /* '<S21>/Encode 4' */
  real_T Randomnumber_b;               /* '<S22>/Random number' */
  real_T Encode1_k;                    /* '<S22>/Encode 1' */
  real_T DataTypeConversion_j;         /* '<S22>/Data Type Conversion' */
  real_T Encode2_i;                    /* '<S22>/Encode 2' */
  real_T Sinewave_k;                   /* '<S22>/Sine wave' */
  real_T Encode3_o;                    /* '<S22>/Encode 3' */
  real_T Divide_p;                     /* '<S48>/Divide' */
  real_T Multiply_j;                   /* '<S48>/Multiply' */
  real_T DataTypeConversion1_p;        /* '<S48>/Data Type Conversion1' */
  real_T Encode4_c;                    /* '<S22>/Encode 4' */
  real_T Randomnumber_pz;              /* '<S23>/Random number' */
  real_T Encode1_l;                    /* '<S23>/Encode 1' */
  real_T DataTypeConversion_p;         /* '<S23>/Data Type Conversion' */
  real_T Encode5_d;                    /* '<S23>/Encode 5' */
  real_T Sinewave_p;                   /* '<S23>/Sine wave' */
  real_T Encode3_p;                    /* '<S23>/Encode 3' */
  real_T Divide_i;                     /* '<S52>/Divide' */
  real_T Multiply_he;                  /* '<S52>/Multiply' */
  real_T DataTypeConversion1_n;        /* '<S52>/Data Type Conversion1' */
  real_T Encode2_j;                    /* '<S23>/Encode 2' */
  real_T Randomnumber_n;               /* '<S24>/Random number' */
  real_T Encode1_p;                    /* '<S24>/Encode 1' */
  real_T DataTypeConversion_o;         /* '<S24>/Data Type Conversion' */
  real_T Encode2_fi;                   /* '<S24>/Encode 2' */
  real_T Sinewave_g;                   /* '<S24>/Sine wave' */
  real_T Encode3_f;                    /* '<S24>/Encode 3' */
  real_T Divide_j;                     /* '<S56>/Divide' */
  real_T Multiply_i;                   /* '<S56>/Multiply' */
  real_T DataTypeConversion1_gm;       /* '<S56>/Data Type Conversion1' */
  real_T Encode4_g;                    /* '<S24>/Encode 4' */
  real_T Randomnumber_m;               /* '<S25>/Random number' */
  real_T Encode1_pb;                   /* '<S25>/Encode 1' */
  real_T DataTypeConversion_d;         /* '<S25>/Data Type Conversion' */
  real_T Encode2_h;                    /* '<S25>/Encode 2' */
  real_T Sinewave_kh;                  /* '<S25>/Sine wave' */
  real_T Encode3_l;                    /* '<S25>/Encode 3' */
  real_T Divide_g;                     /* '<S60>/Divide' */
  real_T Multiply_n;                   /* '<S60>/Multiply' */
  real_T DataTypeConversion1_ga;       /* '<S60>/Data Type Conversion1' */
  real_T Encode4_l;                    /* '<S25>/Encode 4' */
  real_T Randomnumber_br;              /* '<S26>/Random number' */
  real_T Encode1_pbz;                  /* '<S26>/Encode 1' */
  real_T DataTypeConversion_jr;        /* '<S26>/Data Type Conversion' */
  real_T Encode2_hc;                   /* '<S26>/Encode 2' */
  real_T Sinewave_a;                   /* '<S26>/Sine wave' */
  real_T Encode3_ou;                   /* '<S26>/Encode 3' */
  real_T Divide_k3;                    /* '<S64>/Divide' */
  real_T Multiply_hd;                  /* '<S64>/Multiply' */
  real_T DataTypeConversion1_d;        /* '<S64>/Data Type Conversion1' */
  real_T Encode4_p;                    /* '<S26>/Encode 4' */
  real_T Randomnumber_e;               /* '<S27>/Random number' */
  real_T Encode1_h;                    /* '<S27>/Encode 1' */
  real_T DataTypeConversion_hu;        /* '<S27>/Data Type Conversion' */
  real_T Encode2_fb;                   /* '<S27>/Encode 2' */
  real_T Sinewave_o5;                  /* '<S27>/Sine wave' */
  real_T Encode3_d;                    /* '<S27>/Encode 3' */
  real_T Divide_g4;                    /* '<S68>/Divide' */
  real_T Multiply_il;                  /* '<S68>/Multiply' */
  real_T DataTypeConversion1_l;        /* '<S68>/Data Type Conversion1' */
  real_T Encode4_n;                    /* '<S27>/Encode 4' */
  real_T Randomnumber_f;               /* '<S28>/Random number' */
  real_T Encode1_f0;                   /* '<S28>/Encode 1' */
  real_T DataTypeConversion_dd;        /* '<S28>/Data Type Conversion' */
  real_T Encode2_iu;                   /* '<S28>/Encode 2' */
  real_T Sinewave_oh;                  /* '<S28>/Sine wave' */
  real_T Encode3_ik;                   /* '<S28>/Encode 3' */
  real_T Divide_n;                     /* '<S72>/Divide' */
  real_T Multiply_e;                   /* '<S72>/Multiply' */
  real_T DataTypeConversion1_a;        /* '<S72>/Data Type Conversion1' */
  real_T Encode4_ix;                   /* '<S28>/Encode 4' */
  real_T Randomnumber_g;               /* '<S29>/Random number' */
  real_T Encode1_c;                    /* '<S29>/Encode 1' */
  real_T DataTypeConversion_f;         /* '<S29>/Data Type Conversion' */
  real_T Encode2_o;                    /* '<S29>/Encode 2' */
  real_T Sinewave_n;                   /* '<S29>/Sine wave' */
  real_T Encode3_g;                    /* '<S29>/Encode 3' */
  real_T Divide_o;                     /* '<S76>/Divide' */
  real_T Multiply_b;                   /* '<S76>/Multiply' */
  real_T DataTypeConversion1_gh;       /* '<S76>/Data Type Conversion1' */
  real_T Encode4_j;                    /* '<S29>/Encode 4' */
  real_T Randomnumber_i;               /* '<S30>/Random number' */
  real_T Encode1_e;                    /* '<S30>/Encode 1' */
  real_T DataTypeConversion_hb;        /* '<S30>/Data Type Conversion' */
  real_T Encode5_a;                    /* '<S30>/Encode 5' */
  real_T Sinewave_d;                   /* '<S30>/Sine wave' */
  real_T Encode3_bv;                   /* '<S30>/Encode 3' */
  real_T Divide_m;                     /* '<S80>/Divide' */
  real_T Multiply_m;                   /* '<S80>/Multiply' */
  real_T DataTypeConversion1_nb;       /* '<S80>/Data Type Conversion1' */
  real_T Encode2_l;                    /* '<S30>/Encode 2' */
  real_T Randomnumber_i2;              /* '<S31>/Random number' */
  real_T Encode1_d;                    /* '<S31>/Encode 1' */
  real_T DataTypeConversion_n;         /* '<S31>/Data Type Conversion' */
  real_T Encode2_pt;                   /* '<S31>/Encode 2' */
  real_T Sinewave_fe;                  /* '<S31>/Sine wave' */
  real_T Encode3_k;                    /* '<S31>/Encode 3' */
  real_T Divide_pl;                    /* '<S84>/Divide' */
  real_T Multiply_k;                   /* '<S84>/Multiply' */
  real_T DataTypeConversion1_f;        /* '<S84>/Data Type Conversion1' */
  real_T Encode4_cp;                   /* '<S31>/Encode 4' */
  real_T Randomnumber_d;               /* '<S32>/Random number' */
  real_T Encode1_i;                    /* '<S32>/Encode 1' */
  real_T DataTypeConversion_i;         /* '<S32>/Data Type Conversion' */
  real_T Encode2_ik;                   /* '<S32>/Encode 2' */
  real_T Sinewave_ff;                  /* '<S32>/Sine wave' */
  real_T Encode3_dc;                   /* '<S32>/Encode 3' */
  real_T Divide_c;                     /* '<S88>/Divide' */
  real_T Multiply_hz;                  /* '<S88>/Multiply' */
  real_T DataTypeConversion1_fw;       /* '<S88>/Data Type Conversion1' */
  real_T Encode4_cn;                   /* '<S32>/Encode 4' */
  real_T Randomnumber_n4;              /* '<S33>/Random number' */
  real_T Encode1_ff;                   /* '<S33>/Encode 1' */
  real_T DataTypeConversion_k;         /* '<S33>/Data Type Conversion' */
  real_T Encode2_o4;                   /* '<S33>/Encode 2' */
  real_T Sinewave_m;                   /* '<S33>/Sine wave' */
  real_T Encode3_dp;                   /* '<S33>/Encode 3' */
  real_T Divide_oc;                    /* '<S92>/Divide' */
  real_T Multiply_kl;                  /* '<S92>/Multiply' */
  real_T DataTypeConversion1_j;        /* '<S92>/Data Type Conversion1' */
  real_T Encode4_a;                    /* '<S33>/Encode 4' */
  real_T Randomnumber_j;               /* '<S34>/Random number' */
  real_T Encode1_kq;                   /* '<S34>/Encode 1' */
  real_T DataTypeConversion_dw;        /* '<S34>/Data Type Conversion' */
  real_T Encode5_n;                    /* '<S34>/Encode 5' */
  real_T Sinewave_ao;                  /* '<S34>/Sine wave' */
  real_T Encode3_h;                    /* '<S34>/Encode 3' */
  real_T Divide_os;                    /* '<S96>/Divide' */
  real_T Multiply_c;                   /* '<S96>/Multiply' */
  real_T DataTypeConversion1_e;        /* '<S96>/Data Type Conversion1' */
  real_T Encode2_o3;                   /* '<S34>/Encode 2' */
  uint32_T DataTypeConversion_k5;      /* '<S36>/Data Type Conversion' */
  uint32_T Mask;                       /* '<S36>/Mask ' */
  uint32_T ShifttoSSMslot;             /* '<S36>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot;             /* '<S36>/Shift to SDI slot' */
  uint32_T BitwiseOperator;            /* '<S36>/Bitwise Operator' */
  uint32_T DataTypeConversion_c;       /* '<S40>/Data Type Conversion' */
  uint32_T Mask_a;                     /* '<S40>/Mask ' */
  uint32_T ShifttoSSMslot_h;           /* '<S40>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_l;           /* '<S40>/Shift to SDI slot' */
  uint32_T BitwiseOperator_m;          /* '<S40>/Bitwise Operator' */
  uint32_T DataTypeConversion_ec;      /* '<S44>/Data Type Conversion' */
  uint32_T Mask_n;                     /* '<S44>/Mask ' */
  uint32_T ShifttoSSMslot_m;           /* '<S44>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_a;           /* '<S44>/Shift to SDI slot' */
  uint32_T BitwiseOperator_a;          /* '<S44>/Bitwise Operator' */
  uint32_T DataTypeConversion_jj;      /* '<S48>/Data Type Conversion' */
  uint32_T Mask_i;                     /* '<S48>/Mask ' */
  uint32_T ShifttoSSMslot_b;           /* '<S48>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_k;           /* '<S48>/Shift to SDI slot' */
  uint32_T BitwiseOperator_p;          /* '<S48>/Bitwise Operator' */
  uint32_T DataTypeConversion_b;       /* '<S52>/Data Type Conversion' */
  uint32_T Mask_c;                     /* '<S52>/Mask ' */
  uint32_T ShifttoSSMslot_k;           /* '<S52>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_b;           /* '<S52>/Shift to SDI slot' */
  uint32_T BitwiseOperator_k;          /* '<S52>/Bitwise Operator' */
  uint32_T DataTypeConversion_er;      /* '<S56>/Data Type Conversion' */
  uint32_T Mask_m;                     /* '<S56>/Mask ' */
  uint32_T ShifttoSSMslot_mi;          /* '<S56>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_km;          /* '<S56>/Shift to SDI slot' */
  uint32_T BitwiseOperator_c;          /* '<S56>/Bitwise Operator' */
  uint32_T DataTypeConversion_fb;      /* '<S60>/Data Type Conversion' */
  uint32_T Mask_h;                     /* '<S60>/Mask ' */
  uint32_T ShifttoSSMslot_f;           /* '<S60>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_c;           /* '<S60>/Shift to SDI slot' */
  uint32_T BitwiseOperator_f;          /* '<S60>/Bitwise Operator' */
  uint32_T DataTypeConversion_f5;      /* '<S64>/Data Type Conversion' */
  uint32_T Mask_h0;                    /* '<S64>/Mask ' */
  uint32_T ShifttoSSMslot_m3;          /* '<S64>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_m;           /* '<S64>/Shift to SDI slot' */
  uint32_T BitwiseOperator_e;          /* '<S64>/Bitwise Operator' */
  uint32_T DataTypeConversion_bh;      /* '<S68>/Data Type Conversion' */
  uint32_T Mask_d;                     /* '<S68>/Mask ' */
  uint32_T ShifttoSSMslot_g;           /* '<S68>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_g;           /* '<S68>/Shift to SDI slot' */
  uint32_T BitwiseOperator_j;          /* '<S68>/Bitwise Operator' */
  uint32_T DataTypeConversion_l;       /* '<S72>/Data Type Conversion' */
  uint32_T Mask_k;                     /* '<S72>/Mask ' */
  uint32_T ShifttoSSMslot_kz;          /* '<S72>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_n;           /* '<S72>/Shift to SDI slot' */
  uint32_T BitwiseOperator_a4;         /* '<S72>/Bitwise Operator' */
  uint32_T DataTypeConversion_fr;      /* '<S76>/Data Type Conversion' */
  uint32_T Mask_p;                     /* '<S76>/Mask ' */
  uint32_T ShifttoSSMslot_e;           /* '<S76>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_ck;          /* '<S76>/Shift to SDI slot' */
  uint32_T BitwiseOperator_pk;         /* '<S76>/Bitwise Operator' */
  uint32_T DataTypeConversion_dn;      /* '<S80>/Data Type Conversion' */
  uint32_T Mask_cs;                    /* '<S80>/Mask ' */
  uint32_T ShifttoSSMslot_n;           /* '<S80>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_d;           /* '<S80>/Shift to SDI slot' */
  uint32_T BitwiseOperator_b;          /* '<S80>/Bitwise Operator' */
  uint32_T DataTypeConversion_m;       /* '<S84>/Data Type Conversion' */
  uint32_T Mask_my;                    /* '<S84>/Mask ' */
  uint32_T ShifttoSSMslot_et;          /* '<S84>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_mf;          /* '<S84>/Shift to SDI slot' */
  uint32_T BitwiseOperator_eh;         /* '<S84>/Bitwise Operator' */
  uint32_T DataTypeConversion_cp;      /* '<S88>/Data Type Conversion' */
  uint32_T Mask_b;                     /* '<S88>/Mask ' */
  uint32_T ShifttoSSMslot_o;           /* '<S88>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_bb;          /* '<S88>/Shift to SDI slot' */
  uint32_T BitwiseOperator_n;          /* '<S88>/Bitwise Operator' */
  uint32_T DataTypeConversion_is;      /* '<S92>/Data Type Conversion' */
  uint32_T Mask_aj;                    /* '<S92>/Mask ' */
  uint32_T ShifttoSSMslot_ea;          /* '<S92>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_f;           /* '<S92>/Shift to SDI slot' */
  uint32_T BitwiseOperator_b5;         /* '<S92>/Bitwise Operator' */
  uint32_T DataTypeConversion_ku;      /* '<S96>/Data Type Conversion' */
  uint32_T Mask_cy;                    /* '<S96>/Mask ' */
  uint32_T ShifttoSSMslot_hy;          /* '<S96>/Shift to SSM slot' */
  uint32_T ShifttoSDIslot_fi;          /* '<S96>/Shift to SDI slot' */
  uint32_T BitwiseOperator_fl;         /* '<S96>/Bitwise Operator' */
  uint16_T Output;                     /* '<S39>/Output' */
  uint16_T FixPtSum1;                  /* '<S41>/FixPt Sum1' */
  uint16_T FixPtSwitch;                /* '<S42>/FixPt Switch' */
  uint16_T Output_b;                   /* '<S43>/Output' */
  uint16_T FixPtSum1_n;                /* '<S45>/FixPt Sum1' */
  uint16_T FixPtSwitch_h;              /* '<S46>/FixPt Switch' */
  uint16_T Output_p;                   /* '<S47>/Output' */
  uint16_T FixPtSum1_a;                /* '<S49>/FixPt Sum1' */
  uint16_T FixPtSwitch_b;              /* '<S50>/FixPt Switch' */
  uint16_T Output_j;                   /* '<S51>/Output' */
  uint16_T FixPtSum1_g;                /* '<S53>/FixPt Sum1' */
  uint16_T FixPtSwitch_l;              /* '<S54>/FixPt Switch' */
  uint16_T Output_m;                   /* '<S55>/Output' */
  uint16_T FixPtSum1_e;                /* '<S57>/FixPt Sum1' */
  uint16_T FixPtSwitch_bx;             /* '<S58>/FixPt Switch' */
  uint16_T Output_e;                   /* '<S59>/Output' */
  uint16_T FixPtSum1_o;                /* '<S61>/FixPt Sum1' */
  uint16_T FixPtSwitch_lo;             /* '<S62>/FixPt Switch' */
  uint16_T Output_k;                   /* '<S63>/Output' */
  uint16_T FixPtSum1_d;                /* '<S65>/FixPt Sum1' */
  uint16_T FixPtSwitch_l2;             /* '<S66>/FixPt Switch' */
  uint16_T Output_b2;                  /* '<S71>/Output' */
  uint16_T FixPtSum1_h;                /* '<S73>/FixPt Sum1' */
  uint16_T FixPtSwitch_d;              /* '<S74>/FixPt Switch' */
  uint16_T Output_d;                   /* '<S75>/Output' */
  uint16_T FixPtSum1_f;                /* '<S77>/FixPt Sum1' */
  uint16_T FixPtSwitch_j;              /* '<S78>/FixPt Switch' */
  uint16_T Output_jl;                  /* '<S79>/Output' */
  uint16_T FixPtSum1_h2;               /* '<S81>/FixPt Sum1' */
  uint16_T FixPtSwitch_k;              /* '<S82>/FixPt Switch' */
  uint16_T Output_i;                   /* '<S83>/Output' */
  uint16_T FixPtSum1_m;                /* '<S85>/FixPt Sum1' */
  uint16_T FixPtSwitch_hh;             /* '<S86>/FixPt Switch' */
  uint16_T Output_bg;                  /* '<S87>/Output' */
  uint16_T FixPtSum1_he;               /* '<S89>/FixPt Sum1' */
  uint16_T FixPtSwitch_a;              /* '<S90>/FixPt Switch' */
  uint16_T Output_mw;                  /* '<S91>/Output' */
  uint16_T FixPtSum1_p;                /* '<S93>/FixPt Sum1' */
  uint16_T FixPtSwitch_l0;             /* '<S94>/FixPt Switch' */
  uint16_T Output_pd;                  /* '<S95>/Output' */
  uint16_T FixPtSum1_b;                /* '<S97>/FixPt Sum1' */
  uint16_T FixPtSwitch_m;              /* '<S98>/FixPt Switch' */
  uint8_T Output_o;                    /* '<S35>/Output' */
  uint8_T FixPtSum1_i;                 /* '<S37>/FixPt Sum1' */
  uint8_T FixPtSwitch_ha;              /* '<S38>/FixPt Switch' */
  uint8_T Output_g;                    /* '<S67>/Output' */
  uint8_T FixPtSum1_fe;                /* '<S69>/FixPt Sum1' */
  uint8_T FixPtSwitch_jo;              /* '<S70>/FixPt Switch' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_speedgoat_test_SN5659_R2021b_IO682_T {
  real_T NextOutput;                   /* '<S19>/Random number' */
  real_T lastSin;                      /* '<S19>/Sine wave' */
  real_T lastCos;                      /* '<S19>/Sine wave' */
  real_T NextOutput_a;                 /* '<S20>/Random number' */
  real_T lastSin_c;                    /* '<S20>/Sine wave' */
  real_T lastCos_p;                    /* '<S20>/Sine wave' */
  real_T NextOutput_n;                 /* '<S21>/Random number' */
  real_T lastSin_m;                    /* '<S21>/Sine wave' */
  real_T lastCos_m;                    /* '<S21>/Sine wave' */
  real_T NextOutput_f;                 /* '<S22>/Random number' */
  real_T lastSin_ct;                   /* '<S22>/Sine wave' */
  real_T lastCos_a;                    /* '<S22>/Sine wave' */
  real_T NextOutput_nj;                /* '<S23>/Random number' */
  real_T lastSin_p;                    /* '<S23>/Sine wave' */
  real_T lastCos_af;                   /* '<S23>/Sine wave' */
  real_T NextOutput_ni;                /* '<S24>/Random number' */
  real_T lastSin_d;                    /* '<S24>/Sine wave' */
  real_T lastCos_h;                    /* '<S24>/Sine wave' */
  real_T NextOutput_ft;                /* '<S25>/Random number' */
  real_T lastSin_du;                   /* '<S25>/Sine wave' */
  real_T lastCos_l;                    /* '<S25>/Sine wave' */
  real_T NextOutput_i;                 /* '<S26>/Random number' */
  real_T lastSin_f;                    /* '<S26>/Sine wave' */
  real_T lastCos_ld;                   /* '<S26>/Sine wave' */
  real_T NextOutput_j;                 /* '<S27>/Random number' */
  real_T lastSin_e;                    /* '<S27>/Sine wave' */
  real_T lastCos_lh;                   /* '<S27>/Sine wave' */
  real_T NextOutput_m;                 /* '<S28>/Random number' */
  real_T lastSin_pg;                   /* '<S28>/Sine wave' */
  real_T lastCos_g;                    /* '<S28>/Sine wave' */
  real_T NextOutput_h;                 /* '<S29>/Random number' */
  real_T lastSin_l;                    /* '<S29>/Sine wave' */
  real_T lastCos_ge;                   /* '<S29>/Sine wave' */
  real_T NextOutput_ir;                /* '<S30>/Random number' */
  real_T lastSin_i;                    /* '<S30>/Sine wave' */
  real_T lastCos_o;                    /* '<S30>/Sine wave' */
  real_T NextOutput_hu;                /* '<S31>/Random number' */
  real_T lastSin_a;                    /* '<S31>/Sine wave' */
  real_T lastCos_oy;                   /* '<S31>/Sine wave' */
  real_T NextOutput_p;                 /* '<S32>/Random number' */
  real_T lastSin_pf;                   /* '<S32>/Sine wave' */
  real_T lastCos_j;                    /* '<S32>/Sine wave' */
  real_T NextOutput_jn;                /* '<S33>/Random number' */
  real_T lastSin_iv;                   /* '<S33>/Sine wave' */
  real_T lastCos_c;                    /* '<S33>/Sine wave' */
  real_T NextOutput_b;                 /* '<S34>/Random number' */
  real_T lastSin_fv;                   /* '<S34>/Sine wave' */
  real_T lastCos_b;                    /* '<S34>/Sine wave' */
  real_T Decode1_RWORK;                /* '<S3>/Decode 1' */
  real_T Decode5_RWORK;                /* '<S3>/Decode 5' */
  real_T Decode3_RWORK;                /* '<S3>/Decode 3' */
  real_T Decode4_RWORK;                /* '<S3>/Decode 4' */
  real_T Decode1_RWORK_o;              /* '<S11>/Decode 1' */
  real_T Decode2_RWORK;                /* '<S11>/Decode 2' */
  real_T Decode3_RWORK_f;              /* '<S11>/Decode 3' */
  real_T Decode4_RWORK_d;              /* '<S11>/Decode 4' */
  real_T Decode1_RWORK_c;              /* '<S18>/Decode 1' */
  real_T Decode5_RWORK_h;              /* '<S18>/Decode 5' */
  real_T Decode3_RWORK_b;              /* '<S18>/Decode 3' */
  real_T Decode4_RWORK_l;              /* '<S18>/Decode 4' */
  real_T Decode1_RWORK_i;              /* '<S4>/Decode 1' */
  real_T Decode2_RWORK_e;              /* '<S4>/Decode 2' */
  real_T Decode3_RWORK_b5;             /* '<S4>/Decode 3' */
  real_T Decode4_RWORK_f;              /* '<S4>/Decode 4' */
  real_T Decode1_RWORK_g;              /* '<S5>/Decode 1' */
  real_T Decode2_RWORK_k;              /* '<S5>/Decode 2' */
  real_T Decode3_RWORK_h;              /* '<S5>/Decode 3' */
  real_T Decode4_RWORK_n;              /* '<S5>/Decode 4' */
  real_T Decode1_RWORK_l;              /* '<S6>/Decode 1' */
  real_T Decode2_RWORK_l;              /* '<S6>/Decode 2' */
  real_T Decode3_RWORK_a;              /* '<S6>/Decode 3' */
  real_T Decode4_RWORK_c;              /* '<S6>/Decode 4' */
  real_T Decode1_RWORK_gr;             /* '<S7>/Decode 1' */
  real_T Decode5_RWORK_c;              /* '<S7>/Decode 5' */
  real_T Decode3_RWORK_e;              /* '<S7>/Decode 3' */
  real_T Decode4_RWORK_ci;             /* '<S7>/Decode 4' */
  real_T Decode1_RWORK_p;              /* '<S8>/Decode 1' */
  real_T Decode2_RWORK_n;              /* '<S8>/Decode 2' */
  real_T Decode3_RWORK_c;              /* '<S8>/Decode 3' */
  real_T Decode4_RWORK_f1;             /* '<S8>/Decode 4' */
  real_T Decode1_RWORK_m;              /* '<S9>/Decode 1' */
  real_T Decode2_RWORK_f;              /* '<S9>/Decode 2' */
  real_T Decode3_RWORK_ag;             /* '<S9>/Decode 3' */
  real_T Decode4_RWORK_i;              /* '<S9>/Decode 4' */
  real_T Decode1_RWORK_pr;             /* '<S10>/Decode 1' */
  real_T Decode2_RWORK_i;              /* '<S10>/Decode 2' */
  real_T Decode3_RWORK_ct;             /* '<S10>/Decode 3' */
  real_T Decode4_RWORK_fa;             /* '<S10>/Decode 4' */
  real_T Decode1_RWORK_h;              /* '<S12>/Decode 1' */
  real_T Decode2_RWORK_iz;             /* '<S12>/Decode 2' */
  real_T Decode3_RWORK_a5;             /* '<S12>/Decode 3' */
  real_T Decode4_RWORK_ci3;            /* '<S12>/Decode 4' */
  real_T Decode1_RWORK_b;              /* '<S13>/Decode 1' */
  real_T Decode2_RWORK_c;              /* '<S13>/Decode 2' */
  real_T Decode3_RWORK_bf;             /* '<S13>/Decode 3' */
  real_T Decode4_RWORK_g;              /* '<S13>/Decode 4' */
  real_T Decode1_RWORK_k;              /* '<S14>/Decode 1' */
  real_T Decode5_RWORK_d;              /* '<S14>/Decode 5' */
  real_T Decode3_RWORK_cb;             /* '<S14>/Decode 3' */
  real_T Decode4_RWORK_p;              /* '<S14>/Decode 4' */
  real_T Decode1_RWORK_c1;             /* '<S15>/Decode 1' */
  real_T Decode2_RWORK_ke;             /* '<S15>/Decode 2' */
  real_T Decode3_RWORK_h0;             /* '<S15>/Decode 3' */
  real_T Decode4_RWORK_b;              /* '<S15>/Decode 4' */
  real_T Decode1_RWORK_kw;             /* '<S16>/Decode 1' */
  real_T Decode2_RWORK_p;              /* '<S16>/Decode 2' */
  real_T Decode3_RWORK_b0;             /* '<S16>/Decode 3' */
  real_T Decode4_RWORK_f1y;            /* '<S16>/Decode 4' */
  real_T Decode1_RWORK_n;              /* '<S17>/Decode 1' */
  real_T Decode2_RWORK_kk;             /* '<S17>/Decode 2' */
  real_T Decode3_RWORK_g;              /* '<S17>/Decode 3' */
  real_T Decode4_RWORK_e;              /* '<S17>/Decode 4' */
  void *Setupv2_PWORK[2];              /* '<S1>/Setup v2 ' */
  void *Receivev2_PWORK[3];            /* '<S1>/Receive v2 ' */
  void *Receivev21_PWORK[3];           /* '<S1>/Receive v2 1' */
  struct {
    void *LoggedData[2];
  } Scope8_PWORK;                      /* '<S1>/Scope 8' */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Decod;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dec_l;   /* synthesized block */

  void *Receivev28_PWORK[3];           /* '<S1>/Receive v2 8' */
  void *Receivev29_PWORK[3];           /* '<S1>/Receive v2 9' */
  struct {
    void *LoggedData[2];
  } Scope10_PWORK;                     /* '<S1>/Scope 10' */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dec_e;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dec_m;   /* synthesized block */

  void *Receivev210_PWORK[3];          /* '<S1>/Receive v2 10' */
  void *Receivev211_PWORK[3];          /* '<S1>/Receive v2 11' */
  struct {
    void *LoggedData[2];
  } Scope6_PWORK;                      /* '<S1>/Scope 6' */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dec_j;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dec_n;   /* synthesized block */

  void *Receivev212_PWORK[3];          /* '<S1>/Receive v2 12' */
  void *Receivev213_PWORK[3];          /* '<S1>/Receive v2 13' */
  struct {
    void *LoggedData[2];
  } Scope11_PWORK;                     /* '<S1>/Scope 11' */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dec_d;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dec_p;   /* synthesized block */

  void *Receivev214_PWORK[3];          /* '<S1>/Receive v2 14' */
  void *Receivev215_PWORK[3];          /* '<S1>/Receive v2 15' */
  struct {
    void *LoggedData[2];
  } Scope7_PWORK;                      /* '<S1>/Scope 7' */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dec_h;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dec_i;   /* synthesized block */

  void *Receivev22_PWORK[3];           /* '<S1>/Receive v2 2' */
  void *Receivev23_PWORK[3];           /* '<S1>/Receive v2 3' */
  struct {
    void *LoggedData[2];
  } Scope4_PWORK;                      /* '<S1>/Scope 4' */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_De_p3;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dec_o;   /* synthesized block */

  void *Receivev24_PWORK[3];           /* '<S1>/Receive v2 4' */
  void *Receivev25_PWORK[3];           /* '<S1>/Receive v2 5' */
  struct {
    void *LoggedData[2];
  } Scope9_PWORK;                      /* '<S1>/Scope 9' */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_De_e3;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_De_n2;   /* synthesized block */

  void *Receivev26_PWORK[3];           /* '<S1>/Receive v2 6' */
  void *Receivev27_PWORK[3];           /* '<S1>/Receive v2 7' */
  struct {
    void *LoggedData[2];
  } Scope5_PWORK;                      /* '<S1>/Scope 5' */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_De_iv;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dec_g;   /* synthesized block */

  void *Sendv2_PWORK[2];               /* '<S1>/Send v2 ' */
  void *Sendv29_PWORK[2];              /* '<S1>/Send v2 9' */
  void *Sendv210_PWORK[2];             /* '<S1>/Send v2 10' */
  void *Sendv211_PWORK[2];             /* '<S1>/Send v2 11' */
  void *Sendv212_PWORK[2];             /* '<S1>/Send v2 12' */
  void *Sendv213_PWORK[2];             /* '<S1>/Send v2 13' */
  void *Sendv214_PWORK[2];             /* '<S1>/Send v2 14' */
  void *Sendv215_PWORK[2];             /* '<S1>/Send v2 15' */
  void *Sendv21_PWORK[2];              /* '<S1>/Send v2 1' */
  void *Sendv22_PWORK[2];              /* '<S1>/Send v2 2' */
  void *Sendv23_PWORK[2];              /* '<S1>/Send v2 3' */
  void *Sendv24_PWORK[2];              /* '<S1>/Send v2 4' */
  void *Sendv25_PWORK[2];              /* '<S1>/Send v2 5' */
  void *Sendv26_PWORK[2];              /* '<S1>/Send v2 6' */
  void *Sendv27_PWORK[2];              /* '<S1>/Send v2 7' */
  void *Sendv28_PWORK[2];              /* '<S1>/Send v2 8' */
  int32_T systemEnable;                /* '<S19>/Sine wave' */
  int32_T systemEnable_n;              /* '<S20>/Sine wave' */
  int32_T systemEnable_b;              /* '<S21>/Sine wave' */
  int32_T systemEnable_f;              /* '<S22>/Sine wave' */
  int32_T systemEnable_m;              /* '<S23>/Sine wave' */
  int32_T systemEnable_j;              /* '<S24>/Sine wave' */
  int32_T systemEnable_a;              /* '<S25>/Sine wave' */
  int32_T systemEnable_p;              /* '<S26>/Sine wave' */
  int32_T systemEnable_ml;             /* '<S27>/Sine wave' */
  int32_T systemEnable_bx;             /* '<S28>/Sine wave' */
  int32_T systemEnable_g;              /* '<S29>/Sine wave' */
  int32_T systemEnable_pe;             /* '<S30>/Sine wave' */
  int32_T systemEnable_i;              /* '<S31>/Sine wave' */
  int32_T systemEnable_jy;             /* '<S32>/Sine wave' */
  int32_T systemEnable_gv;             /* '<S33>/Sine wave' */
  int32_T systemEnable_o;              /* '<S34>/Sine wave' */
  uint32_T RandSeed;                   /* '<S19>/Random number' */
  uint32_T RandSeed_m;                 /* '<S20>/Random number' */
  uint32_T RandSeed_h;                 /* '<S21>/Random number' */
  uint32_T RandSeed_k;                 /* '<S22>/Random number' */
  uint32_T RandSeed_g;                 /* '<S23>/Random number' */
  uint32_T RandSeed_f;                 /* '<S24>/Random number' */
  uint32_T RandSeed_f4;                /* '<S25>/Random number' */
  uint32_T RandSeed_i;                 /* '<S26>/Random number' */
  uint32_T RandSeed_d;                 /* '<S27>/Random number' */
  uint32_T RandSeed_b;                 /* '<S28>/Random number' */
  uint32_T RandSeed_hi;                /* '<S29>/Random number' */
  uint32_T RandSeed_bw;                /* '<S30>/Random number' */
  uint32_T RandSeed_j;                 /* '<S31>/Random number' */
  uint32_T RandSeed_n;                 /* '<S32>/Random number' */
  uint32_T RandSeed_l;                 /* '<S33>/Random number' */
  uint32_T RandSeed_fs;                /* '<S34>/Random number' */
  int_T Decode1_IWORK[2];              /* '<S3>/Decode 1' */
  int_T Decode5_IWORK[2];              /* '<S3>/Decode 5' */
  int_T Decode3_IWORK[2];              /* '<S3>/Decode 3' */
  int_T Decode4_IWORK[2];              /* '<S3>/Decode 4' */
  int_T Decode1_IWORK_f[2];            /* '<S11>/Decode 1' */
  int_T Decode2_IWORK[2];              /* '<S11>/Decode 2' */
  int_T Decode3_IWORK_c[2];            /* '<S11>/Decode 3' */
  int_T Decode4_IWORK_b[2];            /* '<S11>/Decode 4' */
  int_T Decode1_IWORK_l[2];            /* '<S18>/Decode 1' */
  int_T Decode5_IWORK_i[2];            /* '<S18>/Decode 5' */
  int_T Decode3_IWORK_j[2];            /* '<S18>/Decode 3' */
  int_T Decode4_IWORK_f[2];            /* '<S18>/Decode 4' */
  int_T Decode1_IWORK_o[2];            /* '<S4>/Decode 1' */
  int_T Decode2_IWORK_l[2];            /* '<S4>/Decode 2' */
  int_T Decode3_IWORK_h[2];            /* '<S4>/Decode 3' */
  int_T Decode4_IWORK_m[2];            /* '<S4>/Decode 4' */
  int_T Decode1_IWORK_h[2];            /* '<S5>/Decode 1' */
  int_T Decode2_IWORK_p[2];            /* '<S5>/Decode 2' */
  int_T Decode3_IWORK_f[2];            /* '<S5>/Decode 3' */
  int_T Decode4_IWORK_j[2];            /* '<S5>/Decode 4' */
  int_T Decode1_IWORK_e[2];            /* '<S6>/Decode 1' */
  int_T Decode2_IWORK_a[2];            /* '<S6>/Decode 2' */
  int_T Decode3_IWORK_b[2];            /* '<S6>/Decode 3' */
  int_T Decode4_IWORK_k[2];            /* '<S6>/Decode 4' */
  int_T Decode1_IWORK_i[2];            /* '<S7>/Decode 1' */
  int_T Decode5_IWORK_k[2];            /* '<S7>/Decode 5' */
  int_T Decode3_IWORK_e[2];            /* '<S7>/Decode 3' */
  int_T Decode4_IWORK_mw[2];           /* '<S7>/Decode 4' */
  int_T Decode1_IWORK_m[2];            /* '<S8>/Decode 1' */
  int_T Decode2_IWORK_lc[2];           /* '<S8>/Decode 2' */
  int_T Decode3_IWORK_p[2];            /* '<S8>/Decode 3' */
  int_T Decode4_IWORK_me[2];           /* '<S8>/Decode 4' */
  int_T Decode1_IWORK_b[2];            /* '<S9>/Decode 1' */
  int_T Decode2_IWORK_b[2];            /* '<S9>/Decode 2' */
  int_T Decode3_IWORK_cp[2];           /* '<S9>/Decode 3' */
  int_T Decode4_IWORK_f5[2];           /* '<S9>/Decode 4' */
  int_T Decode1_IWORK_hs[2];           /* '<S10>/Decode 1' */
  int_T Decode2_IWORK_m[2];            /* '<S10>/Decode 2' */
  int_T Decode3_IWORK_a[2];            /* '<S10>/Decode 3' */
  int_T Decode4_IWORK_g[2];            /* '<S10>/Decode 4' */
  int_T Decode1_IWORK_o2[2];           /* '<S12>/Decode 1' */
  int_T Decode2_IWORK_f[2];            /* '<S12>/Decode 2' */
  int_T Decode3_IWORK_cq[2];           /* '<S12>/Decode 3' */
  int_T Decode4_IWORK_o[2];            /* '<S12>/Decode 4' */
  int_T Decode1_IWORK_lf[2];           /* '<S13>/Decode 1' */
  int_T Decode2_IWORK_j[2];            /* '<S13>/Decode 2' */
  int_T Decode3_IWORK_m[2];            /* '<S13>/Decode 3' */
  int_T Decode4_IWORK_l[2];            /* '<S13>/Decode 4' */
  int_T Decode1_IWORK_c[2];            /* '<S14>/Decode 1' */
  int_T Decode5_IWORK_b[2];            /* '<S14>/Decode 5' */
  int_T Decode3_IWORK_pb[2];           /* '<S14>/Decode 3' */
  int_T Decode4_IWORK_ms[2];           /* '<S14>/Decode 4' */
  int_T Decode1_IWORK_ep[2];           /* '<S15>/Decode 1' */
  int_T Decode2_IWORK_k[2];            /* '<S15>/Decode 2' */
  int_T Decode3_IWORK_n[2];            /* '<S15>/Decode 3' */
  int_T Decode4_IWORK_n[2];            /* '<S15>/Decode 4' */
  int_T Decode1_IWORK_f0[2];           /* '<S16>/Decode 1' */
  int_T Decode2_IWORK_m2[2];           /* '<S16>/Decode 2' */
  int_T Decode3_IWORK_ei[2];           /* '<S16>/Decode 3' */
  int_T Decode4_IWORK_lq[2];           /* '<S16>/Decode 4' */
  int_T Decode1_IWORK_b0[2];           /* '<S17>/Decode 1' */
  int_T Decode2_IWORK_d[2];            /* '<S17>/Decode 2' */
  int_T Decode3_IWORK_o[2];            /* '<S17>/Decode 3' */
  int_T Decode4_IWORK_e[2];            /* '<S17>/Decode 4' */
  uint16_T Output_DSTATE;              /* '<S39>/Output' */
  uint16_T Output_DSTATE_o;            /* '<S43>/Output' */
  uint16_T Output_DSTATE_o0;           /* '<S47>/Output' */
  uint16_T Output_DSTATE_m;            /* '<S51>/Output' */
  uint16_T Output_DSTATE_oy;           /* '<S55>/Output' */
  uint16_T Output_DSTATE_e;            /* '<S59>/Output' */
  uint16_T Output_DSTATE_k;            /* '<S63>/Output' */
  uint16_T Output_DSTATE_g;            /* '<S71>/Output' */
  uint16_T Output_DSTATE_p;            /* '<S75>/Output' */
  uint16_T Output_DSTATE_b;            /* '<S79>/Output' */
  uint16_T Output_DSTATE_f;            /* '<S83>/Output' */
  uint16_T Output_DSTATE_h;            /* '<S87>/Output' */
  uint16_T Output_DSTATE_m4;           /* '<S91>/Output' */
  uint16_T Output_DSTATE_fw;           /* '<S95>/Output' */
  uint8_T Output_DSTATE_c;             /* '<S35>/Output' */
  uint8_T Output_DSTATE_e0;            /* '<S67>/Output' */
};

/* Real-time Model Data Structure */
struct tag_RTM_speedgoat_test_SN5659_R2021b_IO682_T {
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
    time_T *taskTimePtrs[1];
    SimStruct childSFunctions[161];
    SimStruct *childSFunctionPtrs[161];
    struct _ssBlkInfo2 blkInfo2[161];
    struct _ssSFcnModelMethods2 methods2[161];
    struct _ssSFcnModelMethods3 methods3[161];
    struct _ssSFcnModelMethods4 methods4[161];
    struct _ssStatesInfo2 statesInfo2[161];
    ssPeriodicStatesInfo periodicStatesInfo[161];
    struct _ssPortInfo2 inputOutputPortInfo2[161];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

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
    } Sfcn1;

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
    } Sfcn2;

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
    } Sfcn3;

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
    } Sfcn4;

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
    } Sfcn5;

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
    } Sfcn6;

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
    } Sfcn7;

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
    } Sfcn8;

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
    } Sfcn9;

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
    } Sfcn10;

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
    } Sfcn11;

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
    } Sfcn12;

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
    } Sfcn13;

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
    } Sfcn14;

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
    } Sfcn15;

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
    } Sfcn16;

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
    } Sfcn17;

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
    } Sfcn18;

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
    } Sfcn19;

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
    } Sfcn20;

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
    } Sfcn21;

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
    } Sfcn22;

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
    } Sfcn23;

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
    } Sfcn24;

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
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[15];
      mxArray *params[15];
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
      uint_T attribs[15];
      mxArray *params[15];
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
      uint_T attribs[15];
      mxArray *params[15];
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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn84;

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
    } Sfcn85;

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
      uint_T attribs[15];
      mxArray *params[15];
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
      uint_T attribs[15];
      mxArray *params[15];
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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn89;

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
    } Sfcn90;

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
      uint_T attribs[15];
      mxArray *params[15];
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
      uint_T attribs[15];
      mxArray *params[15];
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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn94;

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
    } Sfcn95;

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
      uint_T attribs[15];
      mxArray *params[15];
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
      uint_T attribs[15];
      mxArray *params[15];
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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn99;

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
    } Sfcn100;

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
      uint_T attribs[15];
      mxArray *params[15];
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
      uint_T attribs[15];
      mxArray *params[15];
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
      uint_T attribs[15];
      mxArray *params[15];
    } Sfcn104;

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
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[1];
    time_T offsetTimesArray[1];
    int_T sampleTimeTaskIDArray[1];
    int_T sampleHitArray[1];
    int_T perTaskSampleHitsArray[1];
    time_T tArray[1];
  } Timing;
};

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_speedgoat_test_SN5659_R2021b_IO682_T
    speedgoat_test_SN5659_R2021b_IO682_B;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern struct DW_speedgoat_test_SN5659_R2021b_IO682_T
  speedgoat_test_SN5659_R2021b_IO682_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void speedgoat_test_SN5659_R2021b_IO682_initialize(void);
  extern void speedgoat_test_SN5659_R2021b_IO682_step(void);
  extern void speedgoat_test_SN5659_R2021b_IO682_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_speedgoat_test_SN5659_R2021b_IO682_T *const
    speedgoat_test_SN5659_R2021b_IO682_M;

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
 * '<Root>' : 'speedgoat_test_SN5659_R2021b_IO682'
 * '<S1>'   : 'speedgoat_test_SN5659_R2021b_IO682/IO682'
 * '<S2>'   : 'speedgoat_test_SN5659_R2021b_IO682/info'
 * '<S3>'   : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Decode Channel 1'
 * '<S4>'   : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Decode Channel 10'
 * '<S5>'   : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Decode Channel 11'
 * '<S6>'   : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Decode Channel 12'
 * '<S7>'   : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Decode Channel 13'
 * '<S8>'   : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Decode Channel 14'
 * '<S9>'   : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Decode Channel 15'
 * '<S10>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Decode Channel 16'
 * '<S11>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Decode Channel 2'
 * '<S12>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Decode Channel 3'
 * '<S13>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Decode Channel 4'
 * '<S14>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Decode Channel 5'
 * '<S15>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Decode Channel 6'
 * '<S16>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Decode Channel 7'
 * '<S17>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Decode Channel 8'
 * '<S18>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Decode Channel 9'
 * '<S19>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 1'
 * '<S20>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 10'
 * '<S21>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 11'
 * '<S22>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 12'
 * '<S23>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 13'
 * '<S24>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 14'
 * '<S25>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 15'
 * '<S26>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 16'
 * '<S27>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 2'
 * '<S28>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 3'
 * '<S29>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 4'
 * '<S30>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 5'
 * '<S31>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 6'
 * '<S32>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 7'
 * '<S33>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 8'
 * '<S34>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 9'
 * '<S35>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 1/Counter Limited'
 * '<S36>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 1/Prepare RAW value'
 * '<S37>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 1/Counter Limited/Increment Real World'
 * '<S38>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 1/Counter Limited/Wrap To Zero'
 * '<S39>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 10/Counter Limited'
 * '<S40>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 10/Prepare RAW value'
 * '<S41>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 10/Counter Limited/Increment Real World'
 * '<S42>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 10/Counter Limited/Wrap To Zero'
 * '<S43>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 11/Counter Limited'
 * '<S44>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 11/Prepare RAW value'
 * '<S45>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 11/Counter Limited/Increment Real World'
 * '<S46>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 11/Counter Limited/Wrap To Zero'
 * '<S47>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 12/Counter Limited'
 * '<S48>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 12/Prepare RAW value'
 * '<S49>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 12/Counter Limited/Increment Real World'
 * '<S50>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 12/Counter Limited/Wrap To Zero'
 * '<S51>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 13/Counter Limited'
 * '<S52>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 13/Prepare RAW value'
 * '<S53>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 13/Counter Limited/Increment Real World'
 * '<S54>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 13/Counter Limited/Wrap To Zero'
 * '<S55>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 14/Counter Limited'
 * '<S56>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 14/Prepare RAW value'
 * '<S57>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 14/Counter Limited/Increment Real World'
 * '<S58>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 14/Counter Limited/Wrap To Zero'
 * '<S59>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 15/Counter Limited'
 * '<S60>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 15/Prepare RAW value'
 * '<S61>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 15/Counter Limited/Increment Real World'
 * '<S62>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 15/Counter Limited/Wrap To Zero'
 * '<S63>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 16/Counter Limited'
 * '<S64>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 16/Prepare RAW value'
 * '<S65>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 16/Counter Limited/Increment Real World'
 * '<S66>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 16/Counter Limited/Wrap To Zero'
 * '<S67>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 2/Counter Limited'
 * '<S68>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 2/Prepare RAW value'
 * '<S69>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 2/Counter Limited/Increment Real World'
 * '<S70>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 2/Counter Limited/Wrap To Zero'
 * '<S71>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 3/Counter Limited'
 * '<S72>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 3/Prepare RAW value'
 * '<S73>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 3/Counter Limited/Increment Real World'
 * '<S74>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 3/Counter Limited/Wrap To Zero'
 * '<S75>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 4/Counter Limited'
 * '<S76>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 4/Prepare RAW value'
 * '<S77>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 4/Counter Limited/Increment Real World'
 * '<S78>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 4/Counter Limited/Wrap To Zero'
 * '<S79>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 5/Counter Limited'
 * '<S80>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 5/Prepare RAW value'
 * '<S81>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 5/Counter Limited/Increment Real World'
 * '<S82>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 5/Counter Limited/Wrap To Zero'
 * '<S83>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 6/Counter Limited'
 * '<S84>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 6/Prepare RAW value'
 * '<S85>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 6/Counter Limited/Increment Real World'
 * '<S86>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 6/Counter Limited/Wrap To Zero'
 * '<S87>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 7/Counter Limited'
 * '<S88>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 7/Prepare RAW value'
 * '<S89>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 7/Counter Limited/Increment Real World'
 * '<S90>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 7/Counter Limited/Wrap To Zero'
 * '<S91>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 8/Counter Limited'
 * '<S92>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 8/Prepare RAW value'
 * '<S93>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 8/Counter Limited/Increment Real World'
 * '<S94>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 8/Counter Limited/Wrap To Zero'
 * '<S95>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 9/Counter Limited'
 * '<S96>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 9/Prepare RAW value'
 * '<S97>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 9/Counter Limited/Increment Real World'
 * '<S98>'  : 'speedgoat_test_SN5659_R2021b_IO682/IO682/Encode Channel 9/Counter Limited/Wrap To Zero'
 */
#endif                    /* RTW_HEADER_speedgoat_test_SN5659_R2021b_IO682_h_ */
