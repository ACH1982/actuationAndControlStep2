/*
 *  rtmodel.h:
 *
 * Code generation for model "speedgoat_test_SN5659_R2021b".
 *
 * Model version              : 3.2
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Fri Apr  8 16:04:42 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_rtmodel_h_
#define RTW_HEADER_rtmodel_h_

/*
 *  Includes the appropriate headers when we are using rtModel
 */
#include "speedgoat_test_SN5659_R2021b.h"
#define GRTINTERFACE                   0

/* Model wrapper function */
/* Use this function only if you need to maintain compatibility with an existing static main program. */
extern void speedgoat_test_SN5659_R2021b_step(int_T tid);

#endif                                 /* RTW_HEADER_rtmodel_h_ */
