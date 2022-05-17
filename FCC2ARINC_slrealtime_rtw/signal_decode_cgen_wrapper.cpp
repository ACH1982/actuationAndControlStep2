#include <string.h>
#ifdef MATLAB_MEX_FILE
#include "tmwtypes.h"
#else
#include "rtwtypes.h"
#endif

#include "signal_decode_cgen_wrapper.h"

extern void signal_decode_Outputs_wrapper(const uint32_T *data,
  real_T *out,
  const real_T *scale, const int_T p_width0,
  const real_T *offset, const int_T p_width1,
  const boolean_T *signed_c2, const int_T p_width2,
  const boolean_T *swap, const int_T p_width3,
  const uint32_T *size, const int_T p_width4);
void signal_decode_Outputs_wrapper_cgen(const uint32_T *data,
  real_T *out,
  const real_T *scale, const int_T p_width0,
  const real_T *offset, const int_T p_width1,
  const boolean_T *signed_c2, const int_T p_width2,
  const boolean_T *swap, const int_T p_width3,
  const uint32_T *size, const int_T p_width4)
{
  signal_decode_Outputs_wrapper(data,
    out,
    scale, p_width0,
    offset, p_width1,
    signed_c2, p_width2,
    swap, p_width3,
    size, p_width4);
}
