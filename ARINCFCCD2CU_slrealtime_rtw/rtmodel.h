/*
 *  rtmodel.h:
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

#ifndef RTW_HEADER_rtmodel_h_
#define RTW_HEADER_rtmodel_h_

/*
 *  Includes the appropriate headers when we are using rtModel
 */
#include "ARINCFCCD2CU.h"
#define GRTINTERFACE                   0

/* Model wrapper function */
/* Use this function only if you need to maintain compatibility with an existing static main program. */
extern void ARINCFCCD2CU_step(int_T tid);

#endif                                 /* RTW_HEADER_rtmodel_h_ */
