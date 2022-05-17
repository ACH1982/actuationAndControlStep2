/*
 * FCC1ARINC_private.h
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

#ifndef RTW_HEADER_FCC1ARINC_private_h_
#define RTW_HEADER_FCC1ARINC_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

#ifdef __cplusplus
#define SFB_EXTERN_C                   extern "C"
#else
#define SFB_EXTERN_C                   extern
#endif

SFB_EXTERN_C void signal_decode_Start_wrapper(const real_T *scale, const int_T
  p_width0,
  const real_T *offset, const int_T p_width1,
  const boolean_T *signed_c2, const int_T p_width2,
  const boolean_T *swap, const int_T p_width3,
  const uint32_T *size, const int_T p_width4);
SFB_EXTERN_C void signal_decode_Outputs_wrapper(const uint32_T *data,
  real_T *out,
  const real_T *scale, const int_T p_width0,
  const real_T *offset, const int_T p_width1,
  const boolean_T *signed_c2, const int_T p_width2,
  const boolean_T *swap, const int_T p_width3,
  const uint32_T *size, const int_T p_width4);
SFB_EXTERN_C void signal_decode_Terminate_wrapper(const real_T *scale, const
  int_T p_width0,
  const real_T *offset, const int_T p_width1,
  const boolean_T *signed_c2, const int_T p_width2,
  const boolean_T *swap, const int_T p_width3,
  const uint32_T *size, const int_T p_width4);

#undef SFB_EXTERN_C

extern void* slrtRegisterSignalToLoggingService(uintptr_t sigAddr);
extern "C" void sg_io682_setup_s_v3(SimStruct *rts);
extern "C" void sg_io682_receive_s_v3(SimStruct *rts);
extern "C" void sg_arinc429_decode_s_v2(SimStruct *rts);

#endif                                 /* RTW_HEADER_FCC1ARINC_private_h_ */
