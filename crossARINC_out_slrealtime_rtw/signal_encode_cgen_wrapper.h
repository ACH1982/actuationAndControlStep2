#ifndef _SIGNAL_ENCODE_CGEN_WRAPPER_H_
#define _SIGNAL_ENCODE_CGEN_WRAPPER_H_
#ifdef MATLAB_MEX_FILE
#include "tmwtypes.h"
#else
#include "rtwtypes.h"
#endif

#ifdef __cplusplus
#define SFB_EXTERN_C                   extern "C"
#else
#define SFB_EXTERN_C                   extern
#endif

SFB_EXTERN_C void signal_encode_Outputs_wrapper_cgen(const real_T *data,
  uint32_T *out,
  const real_T *scale, const int_T p_width0,
  const real_T *offset, const int_T p_width1,
  const boolean_T *signed_c2, const int_T p_width2,
  const boolean_T *swap, const int_T p_width3,
  const uint32_T *size, const int_T p_width4);

#undef SFB_EXTERN_C
#endif
