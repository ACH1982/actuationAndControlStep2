/*
 * speedgoat_test_SN5659_R2020b_private.h
 *
 * Code generation for model "speedgoat_test_SN5659_R2020b".
 *
 * Model version              : 1.2
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Fri Apr  8 08:54:49 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_speedgoat_test_SN5659_R2020b_private_h_
#define RTW_HEADER_speedgoat_test_SN5659_R2020b_private_h_
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

extern CAN_DATATYPE CAN_DATATYPE_GROUND;
extern real_T rt_urand_Upu32_Yd_f_pw_snf(uint32_T *u);
extern real_T rt_nrand_Upu32_Yd_f_pw_snf(uint32_T *u);
extern void* slrtRegisterSignalToLoggingService(uintptr_t sigAddr);
extern "C" {
  const char *fifowrite(int32_T *fifo, void *iPtr, void **oPtrs,
                        int *settings);
}
  extern "C"
{
  void fiforead(const void *iPorts[], void *oPorts[], int *settings);
}

extern "C" void sg_IO61X_read_s(SimStruct *rts);
extern "C" void sg_IO132_IO133_setup_s_v2(SimStruct *rts);
extern "C" void sg_IO132_IO133_ad_s_v2(SimStruct *rts);
extern "C" void sg_IO132_IO133_da_s_v2(SimStruct *rts);
extern "C" void sg_IO132_IO133_di_s_v2(SimStruct *rts);
extern "C" void sg_IO132_IO133_do_s_v2(SimStruct *rts);
extern "C" void sg_IO204_setup_s(SimStruct *rts);
extern "C" void sg_IO204_read_s(SimStruct *rts);
extern "C" void sg_IO204_write_s(SimStruct *rts);
extern "C" void sg_serial_setup_s(SimStruct *rts);
extern "C" void sg_IO612_setup_s(SimStruct *rts);
extern "C" void sg_IO61X_write_s(SimStruct *rts);
extern "C" void sg_io682_setup_s_v3(SimStruct *rts);
extern "C" void sg_IO107_da_s(SimStruct *rts);
extern "C" void sg_IO107_setup_s(SimStruct *rts);
extern "C" void sg_IO421_lvdt_read_s(SimStruct *rts);
extern "C" void sg_IO421_ref_s(SimStruct *rts);
extern "C" void sg_io682_receive_s_v3(SimStruct *rts);
extern "C" void sg_arinc429_decode_s_v2(SimStruct *rts);
extern "C" void sg_arinc429_encode_s_v2(SimStruct *rts);
extern "C" void sg_io682_send_s_v3(SimStruct *rts);
extern "C" void sg_serial_read_s(SimStruct *rts);
extern "C" void slasciidecode(SimStruct *rts);
extern "C" void slasciiencode(SimStruct *rts);
extern "C" void sg_serial_write_s(SimStruct *rts);
extern "C" void sg_IOPIL_relay_s(SimStruct *rts);

#endif                  /* RTW_HEADER_speedgoat_test_SN5659_R2020b_private_h_ */
