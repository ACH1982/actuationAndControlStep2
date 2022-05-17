/*
 * crossARINC_in_types.h
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

#ifndef RTW_HEADER_crossARINC_in_types_h_
#define RTW_HEADER_crossARINC_in_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_ACE9C_ACE8x_9C_
#define DEFINED_TYPEDEF_FOR_ACE9C_ACE8x_9C_

struct ACE9C_ACE8x_9C
{
  real32_T ACE9C_ACE8x_GEARING_APPLIED;
  boolean_T ACE9C_ACE8x_GEARING_APP_F_C;
  uint8_T ACE9C_ACE8x_PPROG;
  boolean_T ACE9C_ACE8x_PPROG_FAILURE;
  boolean_T ACE9C_ACE8x_RAM_POS_C_FAILURE;
  real32_T ACE9C_ACE8x_RAM_POS_C;
  uint8_T ACE9C_ACE8x_MODE_C;
  boolean_T ACE9C_ACE8x_ROLL_POS_C_FAILURE;
  real32_T ACE9C_ACE8x_ROLL_POS_C;
  boolean_T ACE9C_ACE8x_INC_DEMAND_FAIL;
  boolean_T ACE9C_ACE8x_TBI_FLAG_APP;
  boolean_T ACE9C_ACE8x_SPD_C_FAILURE;
  boolean_T ACE9C_ACE8x_DELTA_P_FAILURE;
  real32_T ACE9C_ACE8x_DELTA_P_C;
  boolean_T ACE9C_ACE8x_WOW1_C;
  boolean_T ACE9C_ACE8x_WOW2_C;
  uint8_T ACE9C_ACE8x_SPD_C;
};

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_crossARINC_in_T RT_MODEL_crossARINC_in_T;

#endif                                 /* RTW_HEADER_crossARINC_in_types_h_ */
