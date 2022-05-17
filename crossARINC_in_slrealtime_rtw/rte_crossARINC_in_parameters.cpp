#include "rte_crossARINC_in_parameters.h"
#include "crossARINC_in.h"
#include "crossARINC_in_cal.h"

extern crossARINC_in_cal_type crossARINC_in_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&crossARINC_in_cal_impl, (void**)&crossARINC_in_cal, sizeof
      (crossARINC_in_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime
