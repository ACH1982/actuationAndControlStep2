/*
 *  rtmodel.cpp:
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

#include "rtmodel.h"

/* Use this function only if you need to maintain compatibility with an existing static main program. */
void speedgoat_test_SN5659_R2021b_step(int_T tid)
{
  switch (tid) {
   case 0 :
    speedgoat_test_SN5659_R2021b_step0();
    break;

   case 1 :
    speedgoat_test_SN5659_R2021b_step2();
    break;

   case 2 :
    speedgoat_test_SN5659_R2021b_step3();
    break;

   default :
    /* do nothing */
    break;
  }
}
