#ifndef RTW_HEADER_FCC1ARINC_cal_h_
#define RTW_HEADER_FCC1ARINC_cal_h_
#include "rtwtypes.h"
#include "FCC1ARINC_types.h"

/* Storage class 'PageSwitching', for system '<Root>' */
struct FCC1ARINC_cal_type {
  FCC1_ACExxxA_C1_A Constant_Value;    /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Setupv2_P1_Size[2];           /* Computed Parameter: Setupv2_P1_Size
                                        * Referenced by: '<Root>/Setup v2 '
                                        */
  real_T Setupv2_P1;                   /* Expression: parModuleId
                                        * Referenced by: '<Root>/Setup v2 '
                                        */
  real_T Setupv2_P2_Size[2];           /* Computed Parameter: Setupv2_P2_Size
                                        * Referenced by: '<Root>/Setup v2 '
                                        */
  real_T Setupv2_P2;                   /* Expression: parPciSlot
                                        * Referenced by: '<Root>/Setup v2 '
                                        */
  real_T Setupv2_P3_Size[2];           /* Computed Parameter: Setupv2_P3_Size
                                        * Referenced by: '<Root>/Setup v2 '
                                        */
  real_T Setupv2_P3;                   /* Expression: parTimeSource
                                        * Referenced by: '<Root>/Setup v2 '
                                        */
  real_T Setupv2_P4_Size[2];           /* Computed Parameter: Setupv2_P4_Size
                                        * Referenced by: '<Root>/Setup v2 '
                                        */
  real_T Setupv2_P4;                   /* Expression: parHwDeviceId
                                        * Referenced by: '<Root>/Setup v2 '
                                        */
  real_T Setupv2_P5_Size[2];           /* Computed Parameter: Setupv2_P5_Size
                                        * Referenced by: '<Root>/Setup v2 '
                                        */
  real_T Setupv2_P5;                   /* Expression: parTimerCount
                                        * Referenced by: '<Root>/Setup v2 '
                                        */
  real_T Setupv2_P6_Size[2];           /* Computed Parameter: Setupv2_P6_Size
                                        * Referenced by: '<Root>/Setup v2 '
                                        */
  real_T Setupv2_P6;                   /* Expression: parScheduledMessages
                                        * Referenced by: '<Root>/Setup v2 '
                                        */
  real_T Setupv2_P7_Size[2];           /* Computed Parameter: Setupv2_P7_Size
                                        * Referenced by: '<Root>/Setup v2 '
                                        */
  real_T Setupv2_P7[80];               /* Expression: parChInConfig
                                        * Referenced by: '<Root>/Setup v2 '
                                        */
  real_T Setupv2_P8_Size[2];           /* Computed Parameter: Setupv2_P8_Size
                                        * Referenced by: '<Root>/Setup v2 '
                                        */
  real_T Setupv2_P8[64];               /* Expression: parChOutConfig
                                        * Referenced by: '<Root>/Setup v2 '
                                        */
  real_T Receivev2_P1_Size[2];         /* Computed Parameter: Receivev2_P1_Size
                                        * Referenced by: '<Root>/Receive v2 '
                                        */
  real_T Receivev2_P1;                 /* Expression: parModuleId
                                        * Referenced by: '<Root>/Receive v2 '
                                        */
  real_T Receivev2_P2_Size[2];         /* Computed Parameter: Receivev2_P2_Size
                                        * Referenced by: '<Root>/Receive v2 '
                                        */
  real_T Receivev2_P2;                 /* Expression: parChannel
                                        * Referenced by: '<Root>/Receive v2 '
                                        */
  real_T Receivev2_P3_Size[2];         /* Computed Parameter: Receivev2_P3_Size
                                        * Referenced by: '<Root>/Receive v2 '
                                        */
  real_T Receivev2_P3;                 /* Expression: parMinWords
                                        * Referenced by: '<Root>/Receive v2 '
                                        */
  real_T Receivev2_P4_Size[2];         /* Computed Parameter: Receivev2_P4_Size
                                        * Referenced by: '<Root>/Receive v2 '
                                        */
  real_T Receivev2_P4;                 /* Expression: parMaxWords
                                        * Referenced by: '<Root>/Receive v2 '
                                        */
  real_T Receivev2_P5_Size[2];         /* Computed Parameter: Receivev2_P5_Size
                                        * Referenced by: '<Root>/Receive v2 '
                                        */
  real_T Receivev2_P5;                 /* Expression: parSampleTime
                                        * Referenced by: '<Root>/Receive v2 '
                                        */
  real_T Decode1_P1_Size[2];           /* Computed Parameter: Decode1_P1_Size
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P1;                   /* Expression: parMode
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P2_Size[2];           /* Computed Parameter: Decode1_P2_Size
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P2;                   /* Expression: sFunParams.decLabel
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P3_Size[2];           /* Computed Parameter: Decode1_P3_Size
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P3;                   /* Expression: sFunParams.dataType
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P4_Size[2];           /* Computed Parameter: Decode1_P4_Size
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P4;                   /* Expression: sFunParams.resolution
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P5_Size[2];           /* Computed Parameter: Decode1_P5_Size
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P5;                   /* Expression: parSyncMask
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P6_Size[2];           /* Computed Parameter: Decode1_P6_Size
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P6;                   /* Expression: parSyncValue
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P7_Size[2];           /* Computed Parameter: Decode1_P7_Size
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P7;                   /* Expression: parCustomDataType
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P8_Size[2];           /* Computed Parameter: Decode1_P8_Size
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P8;                   /* Expression: parDataLSB
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P9_Size[2];           /* Computed Parameter: Decode1_P9_Size
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P9;                   /* Expression: parDataMSB
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P10_Size[2];          /* Computed Parameter: Decode1_P10_Size
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P10[2];               /* Expression: parBitPosition
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P11_Size[2];          /* Computed Parameter: Decode1_P11_Size
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P11;                  /* Expression: parScaleBNR
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P12_Size[2];          /* Computed Parameter: Decode1_P12_Size
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P12;                  /* Expression: parExponent
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P13_Size[2];          /* Computed Parameter: Decode1_P13_Size
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P13;                  /* Expression: parMantissa
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P14_Size[2];          /* Computed Parameter: Decode1_P14_Size
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P14;                  /* Expression: parTimeTags
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P15_Size[2];          /* Computed Parameter: Decode1_P15_Size
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P15;                  /* Expression: parHoldLastVal
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P16_Size[2];          /* Computed Parameter: Decode1_P16_Size
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T Decode1_P16;                  /* Expression: parStatus
                                        * Referenced by: '<S1>/Decode 1'
                                        */
  real_T CCCodeBlock_P1;               /* Expression: 6.29922e-1
                                        * Referenced by: '<S1>/C//C++ Code Block'
                                        */
  real_T CCCodeBlock_P2;               /* Expression: 0
                                        * Referenced by: '<S1>/C//C++ Code Block'
                                        */
  real_T Decode5_P1_Size[2];           /* Computed Parameter: Decode5_P1_Size
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P1;                   /* Expression: parMode
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P2_Size[2];           /* Computed Parameter: Decode5_P2_Size
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P2;                   /* Expression: sFunParams.decLabel
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P3_Size[2];           /* Computed Parameter: Decode5_P3_Size
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P3;                   /* Expression: sFunParams.dataType
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P4_Size[2];           /* Computed Parameter: Decode5_P4_Size
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P4;                   /* Expression: sFunParams.resolution
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P5_Size[2];           /* Computed Parameter: Decode5_P5_Size
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P5;                   /* Expression: parSyncMask
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P6_Size[2];           /* Computed Parameter: Decode5_P6_Size
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P6;                   /* Expression: parSyncValue
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P7_Size[2];           /* Computed Parameter: Decode5_P7_Size
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P7;                   /* Expression: parCustomDataType
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P8_Size[2];           /* Computed Parameter: Decode5_P8_Size
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P8;                   /* Expression: parDataLSB
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P9_Size[2];           /* Computed Parameter: Decode5_P9_Size
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P9;                   /* Expression: parDataMSB
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P10_Size[2];          /* Computed Parameter: Decode5_P10_Size
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P10;                  /* Expression: parBitPosition
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P11_Size[2];          /* Computed Parameter: Decode5_P11_Size
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P11;                  /* Expression: parScaleBNR
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P12_Size[2];          /* Computed Parameter: Decode5_P12_Size
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P12;                  /* Expression: parExponent
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P13_Size[2];          /* Computed Parameter: Decode5_P13_Size
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P13;                  /* Expression: parMantissa
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P14_Size[2];          /* Computed Parameter: Decode5_P14_Size
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P14;                  /* Expression: parTimeTags
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P15_Size[2];          /* Computed Parameter: Decode5_P15_Size
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P15;                  /* Expression: parHoldLastVal
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P16_Size[2];          /* Computed Parameter: Decode5_P16_Size
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T Decode5_P16;                  /* Expression: parStatus
                                        * Referenced by: '<S1>/Decode 5'
                                        */
  real_T CCCodeBlock4_P1;              /* Expression: 2.12599E-1
                                        * Referenced by: '<S1>/C//C++ Code Block4'
                                        */
  real_T CCCodeBlock4_P2;              /* Expression: 0
                                        * Referenced by: '<S1>/C//C++ Code Block4'
                                        */
  real_T Decode2_P1_Size[2];           /* Computed Parameter: Decode2_P1_Size
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P1;                   /* Expression: parMode
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P2_Size[2];           /* Computed Parameter: Decode2_P2_Size
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P2;                   /* Expression: sFunParams.decLabel
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P3_Size[2];           /* Computed Parameter: Decode2_P3_Size
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P3;                   /* Expression: sFunParams.dataType
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P4_Size[2];           /* Computed Parameter: Decode2_P4_Size
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P4;                   /* Expression: sFunParams.resolution
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P5_Size[2];           /* Computed Parameter: Decode2_P5_Size
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P5;                   /* Expression: parSyncMask
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P6_Size[2];           /* Computed Parameter: Decode2_P6_Size
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P6;                   /* Expression: parSyncValue
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P7_Size[2];           /* Computed Parameter: Decode2_P7_Size
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P7;                   /* Expression: parCustomDataType
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P8_Size[2];           /* Computed Parameter: Decode2_P8_Size
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P8;                   /* Expression: parDataLSB
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P9_Size[2];           /* Computed Parameter: Decode2_P9_Size
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P9;                   /* Expression: parDataMSB
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P10_Size[2];          /* Computed Parameter: Decode2_P10_Size
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P10;                  /* Expression: parBitPosition
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P11_Size[2];          /* Computed Parameter: Decode2_P11_Size
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P11;                  /* Expression: parScaleBNR
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P12_Size[2];          /* Computed Parameter: Decode2_P12_Size
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P12;                  /* Expression: parExponent
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P13_Size[2];          /* Computed Parameter: Decode2_P13_Size
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P13;                  /* Expression: parMantissa
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P14_Size[2];          /* Computed Parameter: Decode2_P14_Size
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P14;                  /* Expression: parTimeTags
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P15_Size[2];          /* Computed Parameter: Decode2_P15_Size
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P15;                  /* Expression: parHoldLastVal
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P16_Size[2];          /* Computed Parameter: Decode2_P16_Size
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T Decode2_P16;                  /* Expression: parStatus
                                        * Referenced by: '<S1>/Decode 2'
                                        */
  real_T CCCodeBlock5_P1;              /* Expression: 2.4438E-4
                                        * Referenced by: '<S1>/C//C++ Code Block5'
                                        */
  real_T CCCodeBlock5_P2;              /* Expression: 0.2
                                        * Referenced by: '<S1>/C//C++ Code Block5'
                                        */
  real_T Decode6_P1_Size[2];           /* Computed Parameter: Decode6_P1_Size
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P1;                   /* Expression: parMode
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P2_Size[2];           /* Computed Parameter: Decode6_P2_Size
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P2;                   /* Expression: sFunParams.decLabel
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P3_Size[2];           /* Computed Parameter: Decode6_P3_Size
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P3;                   /* Expression: sFunParams.dataType
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P4_Size[2];           /* Computed Parameter: Decode6_P4_Size
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P4;                   /* Expression: sFunParams.resolution
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P5_Size[2];           /* Computed Parameter: Decode6_P5_Size
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P5;                   /* Expression: parSyncMask
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P6_Size[2];           /* Computed Parameter: Decode6_P6_Size
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P6;                   /* Expression: parSyncValue
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P7_Size[2];           /* Computed Parameter: Decode6_P7_Size
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P7;                   /* Expression: parCustomDataType
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P8_Size[2];           /* Computed Parameter: Decode6_P8_Size
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P8;                   /* Expression: parDataLSB
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P9_Size[2];           /* Computed Parameter: Decode6_P9_Size
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P9;                   /* Expression: parDataMSB
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P10_Size[2];          /* Computed Parameter: Decode6_P10_Size
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P10;                  /* Expression: parBitPosition
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P11_Size[2];          /* Computed Parameter: Decode6_P11_Size
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P11;                  /* Expression: parScaleBNR
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P12_Size[2];          /* Computed Parameter: Decode6_P12_Size
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P12;                  /* Expression: parExponent
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P13_Size[2];          /* Computed Parameter: Decode6_P13_Size
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P13;                  /* Expression: parMantissa
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P14_Size[2];          /* Computed Parameter: Decode6_P14_Size
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P14;                  /* Expression: parTimeTags
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P15_Size[2];          /* Computed Parameter: Decode6_P15_Size
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P15;                  /* Expression: parHoldLastVal
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P16_Size[2];          /* Computed Parameter: Decode6_P16_Size
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode6_P16;                  /* Expression: parStatus
                                        * Referenced by: '<S1>/Decode 6'
                                        */
  real_T Decode3_P1_Size[2];           /* Computed Parameter: Decode3_P1_Size
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P1;                   /* Expression: parMode
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P2_Size[2];           /* Computed Parameter: Decode3_P2_Size
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P2;                   /* Expression: sFunParams.decLabel
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P3_Size[2];           /* Computed Parameter: Decode3_P3_Size
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P3;                   /* Expression: sFunParams.dataType
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P4_Size[2];           /* Computed Parameter: Decode3_P4_Size
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P4;                   /* Expression: sFunParams.resolution
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P5_Size[2];           /* Computed Parameter: Decode3_P5_Size
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P5;                   /* Expression: parSyncMask
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P6_Size[2];           /* Computed Parameter: Decode3_P6_Size
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P6;                   /* Expression: parSyncValue
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P7_Size[2];           /* Computed Parameter: Decode3_P7_Size
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P7;                   /* Expression: parCustomDataType
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P8_Size[2];           /* Computed Parameter: Decode3_P8_Size
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P8;                   /* Expression: parDataLSB
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P9_Size[2];           /* Computed Parameter: Decode3_P9_Size
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P9;                   /* Expression: parDataMSB
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P10_Size[2];          /* Computed Parameter: Decode3_P10_Size
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P10;                  /* Expression: parBitPosition
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P11_Size[2];          /* Computed Parameter: Decode3_P11_Size
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P11;                  /* Expression: parScaleBNR
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P12_Size[2];          /* Computed Parameter: Decode3_P12_Size
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P12;                  /* Expression: parExponent
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P13_Size[2];          /* Computed Parameter: Decode3_P13_Size
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P13;                  /* Expression: parMantissa
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P14_Size[2];          /* Computed Parameter: Decode3_P14_Size
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P14;                  /* Expression: parTimeTags
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P15_Size[2];          /* Computed Parameter: Decode3_P15_Size
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P15;                  /* Expression: parHoldLastVal
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P16_Size[2];          /* Computed Parameter: Decode3_P16_Size
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode3_P16;                  /* Expression: parStatus
                                        * Referenced by: '<S1>/Decode 3'
                                        */
  real_T Decode4_P1_Size[2];           /* Computed Parameter: Decode4_P1_Size
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P1;                   /* Expression: parMode
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P2_Size[2];           /* Computed Parameter: Decode4_P2_Size
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P2;                   /* Expression: sFunParams.decLabel
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P3_Size[2];           /* Computed Parameter: Decode4_P3_Size
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P3;                   /* Expression: sFunParams.dataType
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P4_Size[2];           /* Computed Parameter: Decode4_P4_Size
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P4;                   /* Expression: sFunParams.resolution
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P5_Size[2];           /* Computed Parameter: Decode4_P5_Size
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P5;                   /* Expression: parSyncMask
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P6_Size[2];           /* Computed Parameter: Decode4_P6_Size
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P6;                   /* Expression: parSyncValue
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P7_Size[2];           /* Computed Parameter: Decode4_P7_Size
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P7;                   /* Expression: parCustomDataType
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P8_Size[2];           /* Computed Parameter: Decode4_P8_Size
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P8;                   /* Expression: parDataLSB
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P9_Size[2];           /* Computed Parameter: Decode4_P9_Size
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P9;                   /* Expression: parDataMSB
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P10_Size[2];          /* Computed Parameter: Decode4_P10_Size
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P10;                  /* Expression: parBitPosition
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P11_Size[2];          /* Computed Parameter: Decode4_P11_Size
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P11;                  /* Expression: parScaleBNR
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P12_Size[2];          /* Computed Parameter: Decode4_P12_Size
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P12;                  /* Expression: parExponent
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P13_Size[2];          /* Computed Parameter: Decode4_P13_Size
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P13;                  /* Expression: parMantissa
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P14_Size[2];          /* Computed Parameter: Decode4_P14_Size
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P14;                  /* Expression: parTimeTags
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P15_Size[2];          /* Computed Parameter: Decode4_P15_Size
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P15;                  /* Expression: parHoldLastVal
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P16_Size[2];          /* Computed Parameter: Decode4_P16_Size
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode4_P16;                  /* Expression: parStatus
                                        * Referenced by: '<S1>/Decode 4'
                                        */
  real_T Decode7_P1_Size[2];           /* Computed Parameter: Decode7_P1_Size
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P1;                   /* Expression: parMode
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P2_Size[2];           /* Computed Parameter: Decode7_P2_Size
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P2;                   /* Expression: sFunParams.decLabel
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P3_Size[2];           /* Computed Parameter: Decode7_P3_Size
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P3;                   /* Expression: sFunParams.dataType
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P4_Size[2];           /* Computed Parameter: Decode7_P4_Size
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P4;                   /* Expression: sFunParams.resolution
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P5_Size[2];           /* Computed Parameter: Decode7_P5_Size
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P5;                   /* Expression: parSyncMask
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P6_Size[2];           /* Computed Parameter: Decode7_P6_Size
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P6;                   /* Expression: parSyncValue
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P7_Size[2];           /* Computed Parameter: Decode7_P7_Size
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P7;                   /* Expression: parCustomDataType
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P8_Size[2];           /* Computed Parameter: Decode7_P8_Size
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P8;                   /* Expression: parDataLSB
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P9_Size[2];           /* Computed Parameter: Decode7_P9_Size
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P9;                   /* Expression: parDataMSB
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P10_Size[2];          /* Computed Parameter: Decode7_P10_Size
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P10;                  /* Expression: parBitPosition
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P11_Size[2];          /* Computed Parameter: Decode7_P11_Size
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P11;                  /* Expression: parScaleBNR
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P12_Size[2];          /* Computed Parameter: Decode7_P12_Size
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P12;                  /* Expression: parExponent
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P13_Size[2];          /* Computed Parameter: Decode7_P13_Size
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P13;                  /* Expression: parMantissa
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P14_Size[2];          /* Computed Parameter: Decode7_P14_Size
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P14;                  /* Expression: parTimeTags
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P15_Size[2];          /* Computed Parameter: Decode7_P15_Size
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P15;                  /* Expression: parHoldLastVal
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P16_Size[2];          /* Computed Parameter: Decode7_P16_Size
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode7_P16;                  /* Expression: parStatus
                                        * Referenced by: '<S1>/Decode 7'
                                        */
  real_T Decode8_P1_Size[2];           /* Computed Parameter: Decode8_P1_Size
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P1;                   /* Expression: parMode
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P2_Size[2];           /* Computed Parameter: Decode8_P2_Size
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P2;                   /* Expression: sFunParams.decLabel
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P3_Size[2];           /* Computed Parameter: Decode8_P3_Size
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P3;                   /* Expression: sFunParams.dataType
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P4_Size[2];           /* Computed Parameter: Decode8_P4_Size
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P4;                   /* Expression: sFunParams.resolution
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P5_Size[2];           /* Computed Parameter: Decode8_P5_Size
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P5;                   /* Expression: parSyncMask
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P6_Size[2];           /* Computed Parameter: Decode8_P6_Size
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P6;                   /* Expression: parSyncValue
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P7_Size[2];           /* Computed Parameter: Decode8_P7_Size
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P7;                   /* Expression: parCustomDataType
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P8_Size[2];           /* Computed Parameter: Decode8_P8_Size
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P8;                   /* Expression: parDataLSB
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P9_Size[2];           /* Computed Parameter: Decode8_P9_Size
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P9;                   /* Expression: parDataMSB
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P10_Size[2];          /* Computed Parameter: Decode8_P10_Size
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P10;                  /* Expression: parBitPosition
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P11_Size[2];          /* Computed Parameter: Decode8_P11_Size
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P11;                  /* Expression: parScaleBNR
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P12_Size[2];          /* Computed Parameter: Decode8_P12_Size
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P12;                  /* Expression: parExponent
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P13_Size[2];          /* Computed Parameter: Decode8_P13_Size
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P13;                  /* Expression: parMantissa
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P14_Size[2];          /* Computed Parameter: Decode8_P14_Size
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P14;                  /* Expression: parTimeTags
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P15_Size[2];          /* Computed Parameter: Decode8_P15_Size
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P15;                  /* Expression: parHoldLastVal
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P16_Size[2];          /* Computed Parameter: Decode8_P16_Size
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode8_P16;                  /* Expression: parStatus
                                        * Referenced by: '<S1>/Decode 8'
                                        */
  real_T Decode9_P1_Size[2];           /* Computed Parameter: Decode9_P1_Size
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P1;                   /* Expression: parMode
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P2_Size[2];           /* Computed Parameter: Decode9_P2_Size
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P2;                   /* Expression: sFunParams.decLabel
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P3_Size[2];           /* Computed Parameter: Decode9_P3_Size
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P3;                   /* Expression: sFunParams.dataType
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P4_Size[2];           /* Computed Parameter: Decode9_P4_Size
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P4;                   /* Expression: sFunParams.resolution
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P5_Size[2];           /* Computed Parameter: Decode9_P5_Size
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P5;                   /* Expression: parSyncMask
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P6_Size[2];           /* Computed Parameter: Decode9_P6_Size
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P6;                   /* Expression: parSyncValue
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P7_Size[2];           /* Computed Parameter: Decode9_P7_Size
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P7;                   /* Expression: parCustomDataType
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P8_Size[2];           /* Computed Parameter: Decode9_P8_Size
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P8;                   /* Expression: parDataLSB
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P9_Size[2];           /* Computed Parameter: Decode9_P9_Size
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P9;                   /* Expression: parDataMSB
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P10_Size[2];          /* Computed Parameter: Decode9_P10_Size
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P10;                  /* Expression: parBitPosition
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P11_Size[2];          /* Computed Parameter: Decode9_P11_Size
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P11;                  /* Expression: parScaleBNR
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P12_Size[2];          /* Computed Parameter: Decode9_P12_Size
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P12;                  /* Expression: parExponent
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P13_Size[2];          /* Computed Parameter: Decode9_P13_Size
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P13;                  /* Expression: parMantissa
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P14_Size[2];          /* Computed Parameter: Decode9_P14_Size
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P14;                  /* Expression: parTimeTags
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P15_Size[2];          /* Computed Parameter: Decode9_P15_Size
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P15;                  /* Expression: parHoldLastVal
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P16_Size[2];          /* Computed Parameter: Decode9_P16_Size
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T Decode9_P16;                  /* Expression: parStatus
                                        * Referenced by: '<S1>/Decode 9'
                                        */
  real_T CCCodeBlock2_P1;              /* Expression: 2.4438E-2
                                        * Referenced by: '<S1>/C//C++ Code Block2'
                                        */
  real_T CCCodeBlock2_P2;              /* Expression: 0
                                        * Referenced by: '<S1>/C//C++ Code Block2'
                                        */
  real_T Decode10_P1_Size[2];          /* Computed Parameter: Decode10_P1_Size
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P1;                  /* Expression: parMode
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P2_Size[2];          /* Computed Parameter: Decode10_P2_Size
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P2;                  /* Expression: sFunParams.decLabel
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P3_Size[2];          /* Computed Parameter: Decode10_P3_Size
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P3;                  /* Expression: sFunParams.dataType
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P4_Size[2];          /* Computed Parameter: Decode10_P4_Size
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P4;                  /* Expression: sFunParams.resolution
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P5_Size[2];          /* Computed Parameter: Decode10_P5_Size
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P5;                  /* Expression: parSyncMask
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P6_Size[2];          /* Computed Parameter: Decode10_P6_Size
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P6;                  /* Expression: parSyncValue
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P7_Size[2];          /* Computed Parameter: Decode10_P7_Size
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P7;                  /* Expression: parCustomDataType
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P8_Size[2];          /* Computed Parameter: Decode10_P8_Size
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P8;                  /* Expression: parDataLSB
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P9_Size[2];          /* Computed Parameter: Decode10_P9_Size
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P9;                  /* Expression: parDataMSB
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P10_Size[2];         /* Computed Parameter: Decode10_P10_Size
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P10;                 /* Expression: parBitPosition
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P11_Size[2];         /* Computed Parameter: Decode10_P11_Size
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P11;                 /* Expression: parScaleBNR
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P12_Size[2];         /* Computed Parameter: Decode10_P12_Size
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P12;                 /* Expression: parExponent
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P13_Size[2];         /* Computed Parameter: Decode10_P13_Size
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P13;                 /* Expression: parMantissa
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P14_Size[2];         /* Computed Parameter: Decode10_P14_Size
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P14;                 /* Expression: parTimeTags
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P15_Size[2];         /* Computed Parameter: Decode10_P15_Size
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P15;                 /* Expression: parHoldLastVal
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P16_Size[2];         /* Computed Parameter: Decode10_P16_Size
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T Decode10_P16;                 /* Expression: parStatus
                                        * Referenced by: '<S1>/Decode 10'
                                        */
  real_T CCCodeBlock1_P1;              /* Expression: 7.87402E-2
                                        * Referenced by: '<S1>/C//C++ Code Block1'
                                        */
  real_T CCCodeBlock1_P2;              /* Expression: 0
                                        * Referenced by: '<S1>/C//C++ Code Block1'
                                        */
  real_T Decode11_P1_Size[2];          /* Computed Parameter: Decode11_P1_Size
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P1;                  /* Expression: parMode
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P2_Size[2];          /* Computed Parameter: Decode11_P2_Size
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P2;                  /* Expression: sFunParams.decLabel
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P3_Size[2];          /* Computed Parameter: Decode11_P3_Size
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P3;                  /* Expression: sFunParams.dataType
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P4_Size[2];          /* Computed Parameter: Decode11_P4_Size
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P4;                  /* Expression: sFunParams.resolution
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P5_Size[2];          /* Computed Parameter: Decode11_P5_Size
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P5;                  /* Expression: parSyncMask
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P6_Size[2];          /* Computed Parameter: Decode11_P6_Size
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P6;                  /* Expression: parSyncValue
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P7_Size[2];          /* Computed Parameter: Decode11_P7_Size
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P7;                  /* Expression: parCustomDataType
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P8_Size[2];          /* Computed Parameter: Decode11_P8_Size
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P8;                  /* Expression: parDataLSB
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P9_Size[2];          /* Computed Parameter: Decode11_P9_Size
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P9;                  /* Expression: parDataMSB
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P10_Size[2];         /* Computed Parameter: Decode11_P10_Size
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P10;                 /* Expression: parBitPosition
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P11_Size[2];         /* Computed Parameter: Decode11_P11_Size
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P11;                 /* Expression: parScaleBNR
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P12_Size[2];         /* Computed Parameter: Decode11_P12_Size
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P12;                 /* Expression: parExponent
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P13_Size[2];         /* Computed Parameter: Decode11_P13_Size
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P13;                 /* Expression: parMantissa
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P14_Size[2];         /* Computed Parameter: Decode11_P14_Size
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P14;                 /* Expression: parTimeTags
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P15_Size[2];         /* Computed Parameter: Decode11_P15_Size
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P15;                 /* Expression: parHoldLastVal
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P16_Size[2];         /* Computed Parameter: Decode11_P16_Size
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T Decode11_P16;                 /* Expression: parStatus
                                        * Referenced by: '<S1>/Decode 11'
                                        */
  real_T CCCodeBlock6_P1;              /* Expression: 2.4438E-2
                                        * Referenced by: '<S1>/C//C++ Code Block6'
                                        */
  real_T CCCodeBlock6_P2;              /* Expression: 0
                                        * Referenced by: '<S1>/C//C++ Code Block6'
                                        */
  real_T Decode12_P1_Size[2];          /* Computed Parameter: Decode12_P1_Size
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P1;                  /* Expression: parMode
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P2_Size[2];          /* Computed Parameter: Decode12_P2_Size
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P2;                  /* Expression: sFunParams.decLabel
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P3_Size[2];          /* Computed Parameter: Decode12_P3_Size
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P3;                  /* Expression: sFunParams.dataType
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P4_Size[2];          /* Computed Parameter: Decode12_P4_Size
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P4;                  /* Expression: sFunParams.resolution
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P5_Size[2];          /* Computed Parameter: Decode12_P5_Size
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P5;                  /* Expression: parSyncMask
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P6_Size[2];          /* Computed Parameter: Decode12_P6_Size
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P6;                  /* Expression: parSyncValue
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P7_Size[2];          /* Computed Parameter: Decode12_P7_Size
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P7;                  /* Expression: parCustomDataType
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P8_Size[2];          /* Computed Parameter: Decode12_P8_Size
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P8;                  /* Expression: parDataLSB
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P9_Size[2];          /* Computed Parameter: Decode12_P9_Size
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P9;                  /* Expression: parDataMSB
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P10_Size[2];         /* Computed Parameter: Decode12_P10_Size
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P10;                 /* Expression: parBitPosition
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P11_Size[2];         /* Computed Parameter: Decode12_P11_Size
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P11;                 /* Expression: parScaleBNR
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P12_Size[2];         /* Computed Parameter: Decode12_P12_Size
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P12;                 /* Expression: parExponent
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P13_Size[2];         /* Computed Parameter: Decode12_P13_Size
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P13;                 /* Expression: parMantissa
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P14_Size[2];         /* Computed Parameter: Decode12_P14_Size
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P14;                 /* Expression: parTimeTags
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P15_Size[2];         /* Computed Parameter: Decode12_P15_Size
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P15;                 /* Expression: parHoldLastVal
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P16_Size[2];         /* Computed Parameter: Decode12_P16_Size
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T Decode12_P16;                 /* Expression: parStatus
                                        * Referenced by: '<S1>/Decode 12'
                                        */
  real_T CCCodeBlock7_P1;              /* Expression: 7.87402E-2
                                        * Referenced by: '<S1>/C//C++ Code Block7'
                                        */
  real_T CCCodeBlock7_P2;              /* Expression: 0
                                        * Referenced by: '<S1>/C//C++ Code Block7'
                                        */
  uint32_T CCCodeBlock_P5;             /* Expression: uint32(8)
                                        * Referenced by: '<S1>/C//C++ Code Block'
                                        */
  uint32_T CCCodeBlock4_P5;            /* Expression: uint32(8)
                                        * Referenced by: '<S1>/C//C++ Code Block4'
                                        */
  uint32_T CCCodeBlock5_P5;            /* Expression: uint32(10)
                                        * Referenced by: '<S1>/C//C++ Code Block5'
                                        */
  uint32_T CCCodeBlock2_P5;            /* Expression: uint32(11)
                                        * Referenced by: '<S1>/C//C++ Code Block2'
                                        */
  uint32_T CCCodeBlock1_P5;            /* Expression: uint32(8)
                                        * Referenced by: '<S1>/C//C++ Code Block1'
                                        */
  uint32_T CCCodeBlock6_P5;            /* Expression: uint32(11)
                                        * Referenced by: '<S1>/C//C++ Code Block6'
                                        */
  uint32_T CCCodeBlock7_P5;            /* Expression: uint32(8)
                                        * Referenced by: '<S1>/C//C++ Code Block7'
                                        */
  boolean_T CCCodeBlock_P3;            /* Expression: boolean(1)
                                        * Referenced by: '<S1>/C//C++ Code Block'
                                        */
  boolean_T CCCodeBlock_P4;            /* Expression: boolean(0)
                                        * Referenced by: '<S1>/C//C++ Code Block'
                                        */
  boolean_T CCCodeBlock4_P3;           /* Expression: boolean(1)
                                        * Referenced by: '<S1>/C//C++ Code Block4'
                                        */
  boolean_T CCCodeBlock4_P4;           /* Expression: boolean(0)
                                        * Referenced by: '<S1>/C//C++ Code Block4'
                                        */
  boolean_T CCCodeBlock5_P3;           /* Expression: boolean(0)
                                        * Referenced by: '<S1>/C//C++ Code Block5'
                                        */
  boolean_T CCCodeBlock5_P4;           /* Expression: boolean(0)
                                        * Referenced by: '<S1>/C//C++ Code Block5'
                                        */
  boolean_T CCCodeBlock2_P3;           /* Expression: boolean(1)
                                        * Referenced by: '<S1>/C//C++ Code Block2'
                                        */
  boolean_T CCCodeBlock2_P4;           /* Expression: boolean(0)
                                        * Referenced by: '<S1>/C//C++ Code Block2'
                                        */
  boolean_T CCCodeBlock1_P3;           /* Expression: boolean(1)
                                        * Referenced by: '<S1>/C//C++ Code Block1'
                                        */
  boolean_T CCCodeBlock1_P4;           /* Expression: boolean(0)
                                        * Referenced by: '<S1>/C//C++ Code Block1'
                                        */
  boolean_T CCCodeBlock6_P3;           /* Expression: boolean(1)
                                        * Referenced by: '<S1>/C//C++ Code Block6'
                                        */
  boolean_T CCCodeBlock6_P4;           /* Expression: boolean(0)
                                        * Referenced by: '<S1>/C//C++ Code Block6'
                                        */
  boolean_T CCCodeBlock7_P3;           /* Expression: boolean(1)
                                        * Referenced by: '<S1>/C//C++ Code Block7'
                                        */
  boolean_T CCCodeBlock7_P4;           /* Expression: boolean(0)
                                        * Referenced by: '<S1>/C//C++ Code Block7'
                                        */
};

/* Storage class 'PageSwitching' */
extern FCC1ARINC_cal_type FCC1ARINC_cal_impl;
extern FCC1ARINC_cal_type *FCC1ARINC_cal;

#endif                                 /* RTW_HEADER_FCC1ARINC_cal_h_ */
