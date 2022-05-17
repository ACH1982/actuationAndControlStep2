#include "rte_FCC1ARINC_parameters.h"
#include "FCC1ARINC.h"
#include "FCC1ARINC_cal.h"

extern FCC1ARINC_cal_type FCC1ARINC_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&FCC1ARINC_cal_impl, (void**)&FCC1ARINC_cal, sizeof
      (FCC1ARINC_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime
