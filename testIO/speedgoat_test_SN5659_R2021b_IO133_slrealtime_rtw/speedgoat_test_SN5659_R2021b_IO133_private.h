/*
 * speedgoat_test_SN5659_R2021b_IO133_private.h
 *
 * Code generation for model "speedgoat_test_SN5659_R2021b_IO133".
 *
 * Model version              : 3.5
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Fri Apr  8 16:37:03 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_speedgoat_test_SN5659_R2021b_IO133_private_h_
#define RTW_HEADER_speedgoat_test_SN5659_R2021b_IO133_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

extern "C" void sg_IO132_IO133_setup_s_v2(SimStruct *rts);
extern "C" void sg_IO132_IO133_ad_s_v2(SimStruct *rts);
extern "C" void sg_IO132_IO133_da_s_v2(SimStruct *rts);
extern "C" void sg_IO132_IO133_di_s_v2(SimStruct *rts);
extern "C" void sg_IO132_IO133_do_s_v2(SimStruct *rts);

#endif            /* RTW_HEADER_speedgoat_test_SN5659_R2021b_IO133_private_h_ */
