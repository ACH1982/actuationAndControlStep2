#include <string.h>
#ifdef MATLAB_MEX_FILE
#include "tmwtypes.h"
#else
#include "rtwtypes.h"
#endif

#include "signal_encode_cgen_wrapper.h"

extern void signal_encode_Outputs_wrapper(const real_T *data,
  uint32_T *out,
  const real_T *scale, const int_T p_width0,
  const real_T *offset, const int_T p_width1,
  const boolean_T *signed_c2, const int_T p_width2,
  const boolean_T *swap, const int_T p_width3,
  const uint32_T *size, const int_T p_width4);
void signal_encode_Outputs_wrapper_cgen(const real_T *data,
  uint32_T *out,
  const real_T *scale, const int_T p_width0,
  const real_T *offset, const int_T p_width1,
  const boolean_T *signed_c2, const int_T p_width2,
  const boolean_T *swap, const int_T p_width3,
  const uint32_T *size, const int_T p_width4)
{
  signal_encode_Outputs_wrapper(data,
    out,
    scale, p_width0,
    offset, p_width1,
    signed_c2, p_width2,
    swap, p_width3,
    size, p_width4);
}
