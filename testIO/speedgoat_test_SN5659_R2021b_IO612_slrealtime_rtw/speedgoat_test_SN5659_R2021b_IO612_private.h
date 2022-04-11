/*
 * speedgoat_test_SN5659_R2021b_IO612_private.h
 *
 * Code generation for model "speedgoat_test_SN5659_R2021b_IO612".
 *
 * Model version              : 3.5
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Fri Apr  8 17:08:48 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_speedgoat_test_SN5659_R2021b_IO612_private_h_
#define RTW_HEADER_speedgoat_test_SN5659_R2021b_IO612_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

extern CAN_DATATYPE CAN_DATATYPE_GROUND;
extern "C" void sg_IO61X_read_s(SimStruct *rts);
extern "C" void sg_IO612_setup_s(SimStruct *rts);
extern "C" void sg_IO61X_write_s(SimStruct *rts);

#endif            /* RTW_HEADER_speedgoat_test_SN5659_R2021b_IO612_private_h_ */
