/*
 * FCC1ARINC_types.h
 *
 * Code generation for model "FCC1ARINC".
 *
 * Model version              : 1.39
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Tue May 17 11:46:18 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FCC1ARINC_types_h_
#define RTW_HEADER_FCC1ARINC_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_FCC1_ACExxxA_C1_A_
#define DEFINED_TYPEDEF_FOR_FCC1_ACExxxA_C1_A_

struct FCC1_ACExxxA_C1_A
{
  real32_T FCC1_ACExxxA_GEARING_ROLL;
  boolean_T FCC1_ACExxxA_GEARING_ROLL_FAIL;
  boolean_T FCC1_ACExxxA_ROLL_INCREMENTAL_DEM_FAIL;
  boolean_T FCC1_ACExxxA_TBI_FAIL;
  boolean_T FCC1_ACExxxA_WHEEL_POS_1_FAIL;
  boolean_T FCC1_ACExxxA_SUR_POS_1_AIL_FAIL;
  real32_T FCC1_ACExxxA_TBI_LH;
  real32_T FCC1_ACExxxA_ROLL_INCREMENTAL_DEM_LH;
  real32_T FCC1_ACExxxA_TBI_RH;
  real32_T FCC1_ACExxxA_WHEEL_POS_1;
  real32_T FCC1_ACExxxA_SUR_POS_1_AIL;
  real32_T FCC1_ACExxxA_ROLL_INCREMENTAL_DEM_RH;
};

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_FCC1ARINC_T RT_MODEL_FCC1ARINC_T;

#endif                                 /* RTW_HEADER_FCC1ARINC_types_h_ */
