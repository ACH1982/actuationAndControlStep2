/*
 * speedgoat_test_SN5659_R2021b_IO682_private.h
 *
 * Code generation for model "speedgoat_test_SN5659_R2021b_IO682".
 *
 * Model version              : 3.0
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Fri Apr  8 14:58:42 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_speedgoat_test_SN5659_R2021b_IO682_private_h_
#define RTW_HEADER_speedgoat_test_SN5659_R2021b_IO682_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

extern real_T rt_urand_Upu32_Yd_f_pw_snf(uint32_T *u);
extern real_T rt_nrand_Upu32_Yd_f_pw_snf(uint32_T *u);
extern void* slrtRegisterSignalToLoggingService(uintptr_t sigAddr);
extern "C" void sg_io682_setup_s_v3(SimStruct *rts);
extern "C" void sg_io682_receive_s_v3(SimStruct *rts);
extern "C" void sg_arinc429_decode_s_v2(SimStruct *rts);
extern "C" void sg_arinc429_encode_s_v2(SimStruct *rts);
extern "C" void sg_io682_send_s_v3(SimStruct *rts);

#endif            /* RTW_HEADER_speedgoat_test_SN5659_R2021b_IO682_private_h_ */
