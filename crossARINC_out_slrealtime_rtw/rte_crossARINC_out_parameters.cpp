#include "rte_crossARINC_out_parameters.h"
#include "crossARINC_out.h"
#include "crossARINC_out_cal.h"

extern crossARINC_out_cal_type crossARINC_out_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&crossARINC_out_cal_impl, (void**)&crossARINC_out_cal, sizeof
      (crossARINC_out_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime
