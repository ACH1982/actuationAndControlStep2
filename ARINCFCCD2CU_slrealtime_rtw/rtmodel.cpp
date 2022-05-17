/*
 *  rtmodel.cpp:
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

#include "rtmodel.h"

/* Use this function only if you need to maintain compatibility with an existing static main program. */
void ARINCFCCD2CU_step(int_T tid)
{
  switch (tid) {
   case 0 :
    ARINCFCCD2CU_step0();
    break;

   case 1 :
    ARINCFCCD2CU_step1();
    break;

   case 2 :
    ARINCFCCD2CU_step2();
    break;

   default :
    /* do nothing */
    break;
  }
}
