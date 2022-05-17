/*
 * FBIARINC_types.h
 *
 * Code generation for model "FBIARINC".
 *
 * Model version              : 1.34
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Tue May 17 11:17:02 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FBIARINC_types_h_
#define RTW_HEADER_FBIARINC_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_FBI_ACExxxA_C_A_
#define DEFINED_TYPEDEF_FOR_FBI_ACExxxA_C_A_

struct FBI_ACExxxA_C_A
{
  real32_T FBI_AMP;
  uint8_T FBI_TIME_LIMIT;
  uint8_T FBI_ID_TEST;
  uint8_T FBI_CONFIG;
  boolean_T FBI_ACT;
  real32_T FBI_COMMAND;
};

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_FBIARINC_T RT_MODEL_FBIARINC_T;

#endif                                 /* RTW_HEADER_FBIARINC_types_h_ */
