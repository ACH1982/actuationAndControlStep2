
/*
 * Include Files
 *
 */
#if defined(MATLAB_MEX_FILE)
#include "tmwtypes.h"
#include "simstruc_types.h"
#else
#include "rtwtypes.h"
#endif



/* %%%-SFUNWIZ_wrapper_includes_Changes_BEGIN --- EDIT HERE TO _END */
#include <math.h>
/* %%%-SFUNWIZ_wrapper_includes_Changes_END --- EDIT HERE TO _BEGIN */
#define u_width 1
#define y_width 1

/*
 * Create external references here.  
 *
 */
/* %%%-SFUNWIZ_wrapper_externs_Changes_BEGIN --- EDIT HERE TO _END */
/* extern double func(double a); */
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Output function
 *
 */
void signal_decode_Outputs_wrapper(const uint32_T *data,
			real_T *out,
			const real_T *scale, const int_T p_width0,
			const real_T *offset, const int_T p_width1,
			const boolean_T *signed_c2, const int_T p_width2,
			const boolean_T *swap, const int_T p_width3,
			const uint32_T *size, const int_T p_width4)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
uint32_T _data = data[0];
    int32_T _out = 0;
    if (*swap){
        for (uint32_T k = 0; k < size[0]; k++){
            _out = _out << 1;
            _out |= _data & 1;
            _data = _data >> 1;
        }
    }
    else{
        _out = _data;
    }

    if ((*signed_c2)&&(_out & (1 << (size[0] -1)))){
        _data = ~0;
        for (uint32_T k = 0; k < size[0]; k++){
            _data = (_data << 1) | ((_out & (1 << (size[0]-k-1)))!=0);
        }
        _out = _data;
    }
    out[0] = scale[0] * _out + offset[0];
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}


