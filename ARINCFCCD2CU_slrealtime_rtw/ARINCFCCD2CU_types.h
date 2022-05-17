/*
 * ARINCFCCD2CU_types.h
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

#ifndef RTW_HEADER_ARINCFCCD2CU_types_h_
#define RTW_HEADER_ARINCFCCD2CU_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_ACE8C_FCC1_
#define DEFINED_TYPEDEF_FOR_ACE8C_FCC1_

struct ACE8C_FCC1
{
  boolean_T PS;
  boolean_T RAM_POS_FAILURE;
  boolean_T ROLL_POS_FAILURE;
  real32_T RAM_POS;
  real32_T ROLL_POS;
  real32_T GEARING_APPLIED;
  uint8_T SPD;
  boolean_T SPD_FAILURE;
  uint8_T ACE_ID;
  uint8_T ACE8_MODE;
  uint8_T ACE9_MODE;
  boolean_T ARINC5_ERR;
  boolean_T ARINC6_ERR;
  boolean_T ARINC3_ERR;
  boolean_T ARINC1_ERR;
  boolean_T ARINC9_ERR;
};

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_ARINCFCCD2CU_T RT_MODEL_ARINCFCCD2CU_T;

#endif                                 /* RTW_HEADER_ARINCFCCD2CU_types_h_ */
