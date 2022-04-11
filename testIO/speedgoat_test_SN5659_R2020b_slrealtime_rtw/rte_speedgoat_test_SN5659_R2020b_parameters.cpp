#include "rte_speedgoat_test_SN5659_R2020b_parameters.h"
#include "speedgoat_test_SN5659_R2020b.h"
#include "speedgoat_test_SN5659_R2020b_cal.h"

extern speedgoat_test_SN5659__cal_type speedgoat_test_SN5659__cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&speedgoat_test_SN5659__cal_impl, (void**)
      &speedgoat_test_SN5659_R2020_cal, sizeof(speedgoat_test_SN5659__cal_type),
      2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime
