#include "rte_FCC2ARINC_parameters.h"
#include "FCC2ARINC.h"
#include "FCC2ARINC_cal.h"

extern FCC2ARINC_cal_type FCC2ARINC_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&FCC2ARINC_cal_impl, (void**)&FCC2ARINC_cal, sizeof
      (FCC2ARINC_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime
