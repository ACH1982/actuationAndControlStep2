#include "rte_ARINCFCCD2CU_parameters.h"
#include "ARINCFCCD2CU.h"
#include "ARINCFCCD2CU_cal.h"

extern ARINCFCCD2CU_cal_type ARINCFCCD2CU_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&ARINCFCCD2CU_cal_impl, (void**)&ARINCFCCD2CU_cal, sizeof
      (ARINCFCCD2CU_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime
