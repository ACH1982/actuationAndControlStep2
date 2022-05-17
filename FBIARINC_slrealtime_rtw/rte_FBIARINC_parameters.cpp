#include "rte_FBIARINC_parameters.h"
#include "FBIARINC.h"
#include "FBIARINC_cal.h"

extern FBIARINC_cal_type FBIARINC_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&FBIARINC_cal_impl, (void**)&FBIARINC_cal, sizeof(FBIARINC_cal_type),
      2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime
