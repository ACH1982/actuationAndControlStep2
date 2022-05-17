#ifndef RTW_HEADER_ARINCFCCD2CU_cal_h_
#define RTW_HEADER_ARINCFCCD2CU_cal_h_
#include "rtwtypes.h"
#include "ARINCFCCD2CU_types.h"

/* Storage class 'PageSwitching', for system '<Root>' */
struct ARINCFCCD2CU_cal_type {
  real_T Setupv21_P1_Size[2];          /* Computed Parameter: Setupv21_P1_Size
                                        * Referenced by: '<Root>/Setup v2 1'
                                        */
  real_T Setupv21_P1;                  /* Expression: parModuleId
                                        * Referenced by: '<Root>/Setup v2 1'
                                        */
  real_T Setupv21_P2_Size[2];          /* Computed Parameter: Setupv21_P2_Size
                                        * Referenced by: '<Root>/Setup v2 1'
                                        */
  real_T Setupv21_P2;                  /* Expression: parPciSlot
                                        * Referenced by: '<Root>/Setup v2 1'
                                        */
  real_T Setupv21_P3_Size[2];          /* Computed Parameter: Setupv21_P3_Size
                                        * Referenced by: '<Root>/Setup v2 1'
                                        */
  real_T Setupv21_P3;                  /* Expression: parTimeSource
                                        * Referenced by: '<Root>/Setup v2 1'
                                        */
  real_T Setupv21_P4_Size[2];          /* Computed Parameter: Setupv21_P4_Size
                                        * Referenced by: '<Root>/Setup v2 1'
                                        */
  real_T Setupv21_P4;                  /* Expression: parHwDeviceId
                                        * Referenced by: '<Root>/Setup v2 1'
                                        */
  real_T Setupv21_P5_Size[2];          /* Computed Parameter: Setupv21_P5_Size
                                        * Referenced by: '<Root>/Setup v2 1'
                                        */
  real_T Setupv21_P5;                  /* Expression: parTimerCount
                                        * Referenced by: '<Root>/Setup v2 1'
                                        */
  real_T Setupv21_P6_Size[2];          /* Computed Parameter: Setupv21_P6_Size
                                        * Referenced by: '<Root>/Setup v2 1'
                                        */
  real_T Setupv21_P6;                  /* Expression: parScheduledMessages
                                        * Referenced by: '<Root>/Setup v2 1'
                                        */
  real_T Setupv21_P7_Size[2];          /* Computed Parameter: Setupv21_P7_Size
                                        * Referenced by: '<Root>/Setup v2 1'
                                        */
  real_T Setupv21_P7[80];              /* Expression: parChInConfig
                                        * Referenced by: '<Root>/Setup v2 1'
                                        */
  real_T Setupv21_P8_Size[2];          /* Computed Parameter: Setupv21_P8_Size
                                        * Referenced by: '<Root>/Setup v2 1'
                                        */
  real_T Setupv21_P8[64];              /* Expression: parChOutConfig
                                        * Referenced by: '<Root>/Setup v2 1'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;        /* Expression: 125
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty;          /* Expression: 25
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T SineWave1_Amp;                /* Expression: 27*0.99
                                        * Referenced by: '<Root>/Sine Wave1'
                                        */
  real_T SineWave1_Bias;               /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave1'
                                        */
  real_T SineWave1_Freq;               /* Expression: 2*pi
                                        * Referenced by: '<Root>/Sine Wave1'
                                        */
  real_T SineWave1_Hsin;               /* Computed Parameter: SineWave1_Hsin
                                        * Referenced by: '<Root>/Sine Wave1'
                                        */
  real_T SineWave1_HCos;               /* Computed Parameter: SineWave1_HCos
                                        * Referenced by: '<Root>/Sine Wave1'
                                        */
  real_T SineWave1_PSin;               /* Computed Parameter: SineWave1_PSin
                                        * Referenced by: '<Root>/Sine Wave1'
                                        */
  real_T SineWave1_PCos;               /* Computed Parameter: SineWave1_PCos
                                        * Referenced by: '<Root>/Sine Wave1'
                                        */
  real_T SineWave3_Amp;                /* Expression: 80*0.99
                                        * Referenced by: '<Root>/Sine Wave3'
                                        */
  real_T SineWave3_Bias;               /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave3'
                                        */
  real_T SineWave3_Freq;               /* Expression: 2*pi
                                        * Referenced by: '<Root>/Sine Wave3'
                                        */
  real_T SineWave3_Hsin;               /* Computed Parameter: SineWave3_Hsin
                                        * Referenced by: '<Root>/Sine Wave3'
                                        */
  real_T SineWave3_HCos;               /* Computed Parameter: SineWave3_HCos
                                        * Referenced by: '<Root>/Sine Wave3'
                                        */
  real_T SineWave3_PSin;               /* Computed Parameter: SineWave3_PSin
                                        * Referenced by: '<Root>/Sine Wave3'
                                        */
  real_T SineWave3_PCos;               /* Computed Parameter: SineWave3_PCos
                                        * Referenced by: '<Root>/Sine Wave3'
                                        */
  real_T SineWave_Amp;                 /* Expression: (0.45-0.2)/2*0.99
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Bias;                /* Expression: 0.2+(0.45-0.2)/2
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Freq;                /* Expression: 2*pi
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Hsin;                /* Computed Parameter: SineWave_Hsin
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_HCos;                /* Computed Parameter: SineWave_HCos
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_PSin;                /* Computed Parameter: SineWave_PSin
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_PCos;                /* Computed Parameter: SineWave_PCos
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave5_Amp;                /* Expression: 1.5
                                        * Referenced by: '<Root>/Sine Wave5'
                                        */
  real_T SineWave5_Bias;               /* Expression: 2
                                        * Referenced by: '<Root>/Sine Wave5'
                                        */
  real_T SineWave5_Freq;               /* Expression: 2*pi
                                        * Referenced by: '<Root>/Sine Wave5'
                                        */
  real_T SineWave5_Hsin;               /* Computed Parameter: SineWave5_Hsin
                                        * Referenced by: '<Root>/Sine Wave5'
                                        */
  real_T SineWave5_HCos;               /* Computed Parameter: SineWave5_HCos
                                        * Referenced by: '<Root>/Sine Wave5'
                                        */
  real_T SineWave5_PSin;               /* Computed Parameter: SineWave5_PSin
                                        * Referenced by: '<Root>/Sine Wave5'
                                        */
  real_T SineWave5_PCos;               /* Computed Parameter: SineWave5_PCos
                                        * Referenced by: '<Root>/Sine Wave5'
                                        */
  real_T SineWave4_Amp;                /* Expression: 7.5
                                        * Referenced by: '<Root>/Sine Wave4'
                                        */
  real_T SineWave4_Bias;               /* Expression: 8
                                        * Referenced by: '<Root>/Sine Wave4'
                                        */
  real_T SineWave4_Freq;               /* Expression: 2*pi
                                        * Referenced by: '<Root>/Sine Wave4'
                                        */
  real_T SineWave4_Hsin;               /* Computed Parameter: SineWave4_Hsin
                                        * Referenced by: '<Root>/Sine Wave4'
                                        */
  real_T SineWave4_HCos;               /* Computed Parameter: SineWave4_HCos
                                        * Referenced by: '<Root>/Sine Wave4'
                                        */
  real_T SineWave4_PSin;               /* Computed Parameter: SineWave4_PSin
                                        * Referenced by: '<Root>/Sine Wave4'
                                        */
  real_T SineWave4_PCos;               /* Computed Parameter: SineWave4_PCos
                                        * Referenced by: '<Root>/Sine Wave4'
                                        */
  real_T SineWave8_Amp;                /* Expression: 3.5
                                        * Referenced by: '<Root>/Sine Wave8'
                                        */
  real_T SineWave8_Bias;               /* Expression: 4
                                        * Referenced by: '<Root>/Sine Wave8'
                                        */
  real_T SineWave8_Freq;               /* Expression: 2*pi
                                        * Referenced by: '<Root>/Sine Wave8'
                                        */
  real_T SineWave8_Hsin;               /* Computed Parameter: SineWave8_Hsin
                                        * Referenced by: '<Root>/Sine Wave8'
                                        */
  real_T SineWave8_HCos;               /* Computed Parameter: SineWave8_HCos
                                        * Referenced by: '<Root>/Sine Wave8'
                                        */
  real_T SineWave8_PSin;               /* Computed Parameter: SineWave8_PSin
                                        * Referenced by: '<Root>/Sine Wave8'
                                        */
  real_T SineWave8_PCos;               /* Computed Parameter: SineWave8_PCos
                                        * Referenced by: '<Root>/Sine Wave8'
                                        */
  real_T SineWave7_Amp;                /* Expression: 3.5
                                        * Referenced by: '<Root>/Sine Wave7'
                                        */
  real_T SineWave7_Bias;               /* Expression: 4
                                        * Referenced by: '<Root>/Sine Wave7'
                                        */
  real_T SineWave7_Freq;               /* Expression: 2*pi
                                        * Referenced by: '<Root>/Sine Wave7'
                                        */
  real_T SineWave7_Hsin;               /* Computed Parameter: SineWave7_Hsin
                                        * Referenced by: '<Root>/Sine Wave7'
                                        */
  real_T SineWave7_HCos;               /* Computed Parameter: SineWave7_HCos
                                        * Referenced by: '<Root>/Sine Wave7'
                                        */
  real_T SineWave7_PSin;               /* Computed Parameter: SineWave7_PSin
                                        * Referenced by: '<Root>/Sine Wave7'
                                        */
  real_T SineWave7_PCos;               /* Computed Parameter: SineWave7_PCos
                                        * Referenced by: '<Root>/Sine Wave7'
                                        */
  real_T CCCodeBlock1_P1;              /* Expression: 6.29921E-1
                                        * Referenced by: '<Root>/C//C++ Code Block1'
                                        */
  real_T CCCodeBlock1_P2;              /* Expression: 0
                                        * Referenced by: '<Root>/C//C++ Code Block1'
                                        */
  real_T CCCodeBlock2_P1;              /* Expression: 2.12598E-1
                                        * Referenced by: '<Root>/C//C++ Code Block2'
                                        */
  real_T CCCodeBlock2_P2;              /* Expression: 0
                                        * Referenced by: '<Root>/C//C++ Code Block2'
                                        */
  real_T CCCodeBlock3_P1;              /* Expression: 1.96851E-3
                                        * Referenced by: '<Root>/C//C++ Code Block3'
                                        */
  real_T CCCodeBlock3_P2;              /* Expression: 0.2
                                        * Referenced by: '<Root>/C//C++ Code Block3'
                                        */
  real_T Encodev22_P1_Size[2];         /* Computed Parameter: Encodev22_P1_Size
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P1;                 /* Expression: parMode
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P2_Size[2];         /* Computed Parameter: Encodev22_P2_Size
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P2;                 /* Expression: sFunParams.decLabel
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P3_Size[2];         /* Computed Parameter: Encodev22_P3_Size
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P3;                 /* Expression: sFunParams.dataType
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P4_Size[2];         /* Computed Parameter: Encodev22_P4_Size
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P4;                 /* Expression: sFunParams.resolution
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P5_Size[2];         /* Computed Parameter: Encodev22_P5_Size
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P5;                 /* Expression: sFunParams.bits
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P6_Size[2];         /* Computed Parameter: Encodev22_P6_Size
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P6;                 /* Expression: sFunParams.sdi
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P7_Size[2];         /* Computed Parameter: Encodev22_P7_Size
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P7;                 /* Expression: sFunParams.ssm
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P8_Size[2];         /* Computed Parameter: Encodev22_P8_Size
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P8;                 /* Expression: parCustomDataType
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P9_Size[2];         /* Computed Parameter: Encodev22_P9_Size
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P9;                 /* Expression: parDataLSB
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P10_Size[2];        /* Computed Parameter: Encodev22_P10_Size
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P10;                /* Expression: parDataMSB
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P11_Size[2];        /* Computed Parameter: Encodev22_P11_Size
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P11[2];             /* Expression: parBitPosition
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P12_Size[2];        /* Computed Parameter: Encodev22_P12_Size
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P12;                /* Expression: parScaleBNR
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P13_Size[2];        /* Computed Parameter: Encodev22_P13_Size
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P13;                /* Expression: parExponent
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P14_Size[2];        /* Computed Parameter: Encodev22_P14_Size
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P14;                /* Expression: parMantissa
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P15_Size[2];        /* Computed Parameter: Encodev22_P15_Size
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev22_P15;                /* Expression: parEnSSM
                                        * Referenced by: '<Root>/Encode v2 2'
                                        */
  real_T Encodev23_P1_Size[2];         /* Computed Parameter: Encodev23_P1_Size
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P1;                 /* Expression: parMode
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P2_Size[2];         /* Computed Parameter: Encodev23_P2_Size
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P2;                 /* Expression: sFunParams.decLabel
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P3_Size[2];         /* Computed Parameter: Encodev23_P3_Size
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P3;                 /* Expression: sFunParams.dataType
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P4_Size[2];         /* Computed Parameter: Encodev23_P4_Size
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P4;                 /* Expression: sFunParams.resolution
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P5_Size[2];         /* Computed Parameter: Encodev23_P5_Size
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P5;                 /* Expression: sFunParams.bits
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P6_Size[2];         /* Computed Parameter: Encodev23_P6_Size
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P6;                 /* Expression: sFunParams.sdi
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P7_Size[2];         /* Computed Parameter: Encodev23_P7_Size
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P7;                 /* Expression: sFunParams.ssm
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P8_Size[2];         /* Computed Parameter: Encodev23_P8_Size
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P8;                 /* Expression: parCustomDataType
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P9_Size[2];         /* Computed Parameter: Encodev23_P9_Size
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P9;                 /* Expression: parDataLSB
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P10_Size[2];        /* Computed Parameter: Encodev23_P10_Size
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P10;                /* Expression: parDataMSB
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P11_Size[2];        /* Computed Parameter: Encodev23_P11_Size
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P11[2];             /* Expression: parBitPosition
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P12_Size[2];        /* Computed Parameter: Encodev23_P12_Size
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P12;                /* Expression: parScaleBNR
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P13_Size[2];        /* Computed Parameter: Encodev23_P13_Size
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P13;                /* Expression: parExponent
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P14_Size[2];        /* Computed Parameter: Encodev23_P14_Size
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P14;                /* Expression: parMantissa
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P15_Size[2];        /* Computed Parameter: Encodev23_P15_Size
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev23_P15;                /* Expression: parEnSSM
                                        * Referenced by: '<Root>/Encode v2 3'
                                        */
  real_T Encodev24_P1_Size[2];         /* Computed Parameter: Encodev24_P1_Size
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P1;                 /* Expression: parMode
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P2_Size[2];         /* Computed Parameter: Encodev24_P2_Size
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P2;                 /* Expression: sFunParams.decLabel
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P3_Size[2];         /* Computed Parameter: Encodev24_P3_Size
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P3;                 /* Expression: sFunParams.dataType
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P4_Size[2];         /* Computed Parameter: Encodev24_P4_Size
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P4;                 /* Expression: sFunParams.resolution
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P5_Size[2];         /* Computed Parameter: Encodev24_P5_Size
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P5;                 /* Expression: sFunParams.bits
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P6_Size[2];         /* Computed Parameter: Encodev24_P6_Size
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P6;                 /* Expression: sFunParams.sdi
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P7_Size[2];         /* Computed Parameter: Encodev24_P7_Size
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P7;                 /* Expression: sFunParams.ssm
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P8_Size[2];         /* Computed Parameter: Encodev24_P8_Size
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P8;                 /* Expression: parCustomDataType
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P9_Size[2];         /* Computed Parameter: Encodev24_P9_Size
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P9;                 /* Expression: parDataLSB
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P10_Size[2];        /* Computed Parameter: Encodev24_P10_Size
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P10;                /* Expression: parDataMSB
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P11_Size[2];        /* Computed Parameter: Encodev24_P11_Size
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P11[2];             /* Expression: parBitPosition
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P12_Size[2];        /* Computed Parameter: Encodev24_P12_Size
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P12;                /* Expression: parScaleBNR
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P13_Size[2];        /* Computed Parameter: Encodev24_P13_Size
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P13;                /* Expression: parExponent
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P14_Size[2];        /* Computed Parameter: Encodev24_P14_Size
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P14;                /* Expression: parMantissa
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P15_Size[2];        /* Computed Parameter: Encodev24_P15_Size
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev24_P15;                /* Expression: parEnSSM
                                        * Referenced by: '<Root>/Encode v2 4'
                                        */
  real_T Encodev25_P1_Size[2];         /* Computed Parameter: Encodev25_P1_Size
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P1;                 /* Expression: parMode
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P2_Size[2];         /* Computed Parameter: Encodev25_P2_Size
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P2;                 /* Expression: sFunParams.decLabel
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P3_Size[2];         /* Computed Parameter: Encodev25_P3_Size
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P3;                 /* Expression: sFunParams.dataType
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P4_Size[2];         /* Computed Parameter: Encodev25_P4_Size
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P4;                 /* Expression: sFunParams.resolution
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P5_Size[2];         /* Computed Parameter: Encodev25_P5_Size
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P5;                 /* Expression: sFunParams.bits
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P6_Size[2];         /* Computed Parameter: Encodev25_P6_Size
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P6;                 /* Expression: sFunParams.sdi
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P7_Size[2];         /* Computed Parameter: Encodev25_P7_Size
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P7;                 /* Expression: sFunParams.ssm
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P8_Size[2];         /* Computed Parameter: Encodev25_P8_Size
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P8;                 /* Expression: parCustomDataType
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P9_Size[2];         /* Computed Parameter: Encodev25_P9_Size
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P9;                 /* Expression: parDataLSB
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P10_Size[2];        /* Computed Parameter: Encodev25_P10_Size
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P10;                /* Expression: parDataMSB
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P11_Size[2];        /* Computed Parameter: Encodev25_P11_Size
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P11[2];             /* Expression: parBitPosition
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P12_Size[2];        /* Computed Parameter: Encodev25_P12_Size
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P12;                /* Expression: parScaleBNR
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P13_Size[2];        /* Computed Parameter: Encodev25_P13_Size
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P13;                /* Expression: parExponent
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P14_Size[2];        /* Computed Parameter: Encodev25_P14_Size
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P14;                /* Expression: parMantissa
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P15_Size[2];        /* Computed Parameter: Encodev25_P15_Size
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T Encodev25_P15;                /* Expression: parEnSSM
                                        * Referenced by: '<Root>/Encode v2 5'
                                        */
  real_T RateTransition_InitialCondition;/* Expression: 0
                                          * Referenced by: '<Root>/Rate Transition'
                                          */
  real_T RateTransition1_InitialConditio;/* Expression: 0
                                          * Referenced by: '<Root>/Rate Transition1'
                                          */
  real_T RateTransition2_InitialConditio;/* Expression: 0
                                          * Referenced by: '<Root>/Rate Transition2'
                                          */
  real_T RateTransition3_InitialConditio;/* Expression: 0
                                          * Referenced by: '<Root>/Rate Transition3'
                                          */
  real_T Encodev2_P1_Size[2];          /* Computed Parameter: Encodev2_P1_Size
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P1;                  /* Expression: parMode
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P2_Size[2];          /* Computed Parameter: Encodev2_P2_Size
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P2;                  /* Expression: sFunParams.decLabel
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P3_Size[2];          /* Computed Parameter: Encodev2_P3_Size
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P3;                  /* Expression: sFunParams.dataType
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P4_Size[2];          /* Computed Parameter: Encodev2_P4_Size
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P4;                  /* Expression: sFunParams.resolution
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P5_Size[2];          /* Computed Parameter: Encodev2_P5_Size
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P5;                  /* Expression: sFunParams.bits
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P6_Size[2];          /* Computed Parameter: Encodev2_P6_Size
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P6;                  /* Expression: sFunParams.sdi
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P7_Size[2];          /* Computed Parameter: Encodev2_P7_Size
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P7;                  /* Expression: sFunParams.ssm
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P8_Size[2];          /* Computed Parameter: Encodev2_P8_Size
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P8;                  /* Expression: parCustomDataType
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P9_Size[2];          /* Computed Parameter: Encodev2_P9_Size
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P9;                  /* Expression: parDataLSB
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P10_Size[2];         /* Computed Parameter: Encodev2_P10_Size
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P10;                 /* Expression: parDataMSB
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P11_Size[2];         /* Computed Parameter: Encodev2_P11_Size
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P11[2];              /* Expression: parBitPosition
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P12_Size[2];         /* Computed Parameter: Encodev2_P12_Size
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P12;                 /* Expression: parScaleBNR
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P13_Size[2];         /* Computed Parameter: Encodev2_P13_Size
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P13;                 /* Expression: parExponent
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P14_Size[2];         /* Computed Parameter: Encodev2_P14_Size
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P14;                 /* Expression: parMantissa
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P15_Size[2];         /* Computed Parameter: Encodev2_P15_Size
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T Encodev2_P15;                 /* Expression: parEnSSM
                                        * Referenced by: '<Root>/Encode v2 '
                                        */
  real_T RateTransition5_InitialConditio;/* Expression: 0
                                          * Referenced by: '<Root>/Rate Transition5'
                                          */
  real_T Encodev21_P1_Size[2];         /* Computed Parameter: Encodev21_P1_Size
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P1;                 /* Expression: parMode
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P2_Size[2];         /* Computed Parameter: Encodev21_P2_Size
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P2;                 /* Expression: sFunParams.decLabel
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P3_Size[2];         /* Computed Parameter: Encodev21_P3_Size
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P3;                 /* Expression: sFunParams.dataType
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P4_Size[2];         /* Computed Parameter: Encodev21_P4_Size
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P4;                 /* Expression: sFunParams.resolution
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P5_Size[2];         /* Computed Parameter: Encodev21_P5_Size
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P5;                 /* Expression: sFunParams.bits
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P6_Size[2];         /* Computed Parameter: Encodev21_P6_Size
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P6;                 /* Expression: sFunParams.sdi
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P7_Size[2];         /* Computed Parameter: Encodev21_P7_Size
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P7;                 /* Expression: sFunParams.ssm
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P8_Size[2];         /* Computed Parameter: Encodev21_P8_Size
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P8;                 /* Expression: parCustomDataType
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P9_Size[2];         /* Computed Parameter: Encodev21_P9_Size
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P9;                 /* Expression: parDataLSB
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P10_Size[2];        /* Computed Parameter: Encodev21_P10_Size
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P10;                /* Expression: parDataMSB
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P11_Size[2];        /* Computed Parameter: Encodev21_P11_Size
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P11[2];             /* Expression: parBitPosition
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P12_Size[2];        /* Computed Parameter: Encodev21_P12_Size
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P12;                /* Expression: parScaleBNR
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P13_Size[2];        /* Computed Parameter: Encodev21_P13_Size
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P13;                /* Expression: parExponent
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P14_Size[2];        /* Computed Parameter: Encodev21_P14_Size
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P14;                /* Expression: parMantissa
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P15_Size[2];        /* Computed Parameter: Encodev21_P15_Size
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T Encodev21_P15;                /* Expression: parEnSSM
                                        * Referenced by: '<Root>/Encode v2 1'
                                        */
  real_T RateTransition4_InitialConditio;/* Expression: 0
                                          * Referenced by: '<Root>/Rate Transition4'
                                          */
  real_T Constant6_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant6'
                                        */
  real_T Sendv32_P1_Size[2];           /* Computed Parameter: Sendv32_P1_Size
                                        * Referenced by: '<Root>/Send v3 2'
                                        */
  real_T Sendv32_P1;                   /* Expression: parModuleId
                                        * Referenced by: '<Root>/Send v3 2'
                                        */
  real_T Sendv32_P2_Size[2];           /* Computed Parameter: Sendv32_P2_Size
                                        * Referenced by: '<Root>/Send v3 2'
                                        */
  real_T Sendv32_P2;                   /* Expression: parChannel
                                        * Referenced by: '<Root>/Send v3 2'
                                        */
  real_T Sendv32_P3_Size[2];           /* Computed Parameter: Sendv32_P3_Size
                                        * Referenced by: '<Root>/Send v3 2'
                                        */
  real_T Sendv32_P3;                   /* Expression: parSampleTime
                                        * Referenced by: '<Root>/Send v3 2'
                                        */
  real_T Sendv33_P1_Size[2];           /* Computed Parameter: Sendv33_P1_Size
                                        * Referenced by: '<Root>/Send v3 3'
                                        */
  real_T Sendv33_P1;                   /* Expression: parModuleId
                                        * Referenced by: '<Root>/Send v3 3'
                                        */
  real_T Sendv33_P2_Size[2];           /* Computed Parameter: Sendv33_P2_Size
                                        * Referenced by: '<Root>/Send v3 3'
                                        */
  real_T Sendv33_P2;                   /* Expression: parChannel
                                        * Referenced by: '<Root>/Send v3 3'
                                        */
  real_T Sendv33_P3_Size[2];           /* Computed Parameter: Sendv33_P3_Size
                                        * Referenced by: '<Root>/Send v3 3'
                                        */
  real_T Sendv33_P3;                   /* Expression: parSampleTime
                                        * Referenced by: '<Root>/Send v3 3'
                                        */
  real_T Sendv34_P1_Size[2];           /* Computed Parameter: Sendv34_P1_Size
                                        * Referenced by: '<Root>/Send v3 4'
                                        */
  real_T Sendv34_P1;                   /* Expression: parModuleId
                                        * Referenced by: '<Root>/Send v3 4'
                                        */
  real_T Sendv34_P2_Size[2];           /* Computed Parameter: Sendv34_P2_Size
                                        * Referenced by: '<Root>/Send v3 4'
                                        */
  real_T Sendv34_P2;                   /* Expression: parChannel
                                        * Referenced by: '<Root>/Send v3 4'
                                        */
  real_T Sendv34_P3_Size[2];           /* Computed Parameter: Sendv34_P3_Size
                                        * Referenced by: '<Root>/Send v3 4'
                                        */
  real_T Sendv34_P3;                   /* Expression: parSampleTime
                                        * Referenced by: '<Root>/Send v3 4'
                                        */
  real_T Sendv35_P1_Size[2];           /* Computed Parameter: Sendv35_P1_Size
                                        * Referenced by: '<Root>/Send v3 5'
                                        */
  real_T Sendv35_P1;                   /* Expression: parModuleId
                                        * Referenced by: '<Root>/Send v3 5'
                                        */
  real_T Sendv35_P2_Size[2];           /* Computed Parameter: Sendv35_P2_Size
                                        * Referenced by: '<Root>/Send v3 5'
                                        */
  real_T Sendv35_P2;                   /* Expression: parChannel
                                        * Referenced by: '<Root>/Send v3 5'
                                        */
  real_T Sendv35_P3_Size[2];           /* Computed Parameter: Sendv35_P3_Size
                                        * Referenced by: '<Root>/Send v3 5'
                                        */
  real_T Sendv35_P3;                   /* Expression: parSampleTime
                                        * Referenced by: '<Root>/Send v3 5'
                                        */
  real_T Sendv3_P1_Size[2];            /* Computed Parameter: Sendv3_P1_Size
                                        * Referenced by: '<Root>/Send v3 '
                                        */
  real_T Sendv3_P1;                    /* Expression: parModuleId
                                        * Referenced by: '<Root>/Send v3 '
                                        */
  real_T Sendv3_P2_Size[2];            /* Computed Parameter: Sendv3_P2_Size
                                        * Referenced by: '<Root>/Send v3 '
                                        */
  real_T Sendv3_P2;                    /* Expression: parChannel
                                        * Referenced by: '<Root>/Send v3 '
                                        */
  real_T Sendv3_P3_Size[2];            /* Computed Parameter: Sendv3_P3_Size
                                        * Referenced by: '<Root>/Send v3 '
                                        */
  real_T Sendv3_P3;                    /* Expression: parSampleTime
                                        * Referenced by: '<Root>/Send v3 '
                                        */
  real_T Sendv31_P1_Size[2];           /* Computed Parameter: Sendv31_P1_Size
                                        * Referenced by: '<Root>/Send v3 1'
                                        */
  real_T Sendv31_P1;                   /* Expression: parModuleId
                                        * Referenced by: '<Root>/Send v3 1'
                                        */
  real_T Sendv31_P2_Size[2];           /* Computed Parameter: Sendv31_P2_Size
                                        * Referenced by: '<Root>/Send v3 1'
                                        */
  real_T Sendv31_P2;                   /* Expression: parChannel
                                        * Referenced by: '<Root>/Send v3 1'
                                        */
  real_T Sendv31_P3_Size[2];           /* Computed Parameter: Sendv31_P3_Size
                                        * Referenced by: '<Root>/Send v3 1'
                                        */
  real_T Sendv31_P3;                   /* Expression: parSampleTime
                                        * Referenced by: '<Root>/Send v3 1'
                                        */
  uint32_T Gain2_Gain;                 /* Computed Parameter: Gain2_Gain
                                        * Referenced by: '<Root>/Gain2'
                                        */
  uint32_T Gain4_Gain;                 /* Computed Parameter: Gain4_Gain
                                        * Referenced by: '<Root>/Gain4'
                                        */
  uint32_T Gain3_Gain;                 /* Computed Parameter: Gain3_Gain
                                        * Referenced by: '<Root>/Gain3'
                                        */
  uint32_T CCCodeBlock1_P5;            /* Expression: uint32(8)
                                        * Referenced by: '<Root>/C//C++ Code Block1'
                                        */
  uint32_T CCCodeBlock2_P5;            /* Expression: uint32(8)
                                        * Referenced by: '<Root>/C//C++ Code Block2'
                                        */
  uint32_T CCCodeBlock3_P5;            /* Expression: uint32(7)
                                        * Referenced by: '<Root>/C//C++ Code Block3'
                                        */
  uint32_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<Root>/Constant1'
                                        */
  uint32_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<Root>/Constant2'
                                        */
  boolean_T Delay7_InitialCondition;
                                  /* Computed Parameter: Delay7_InitialCondition
                                   * Referenced by: '<Root>/Delay7'
                                   */
  boolean_T Delay_InitialCondition;/* Computed Parameter: Delay_InitialCondition
                                    * Referenced by: '<Root>/Delay'
                                    */
  boolean_T Delay1_InitialCondition;
                                  /* Computed Parameter: Delay1_InitialCondition
                                   * Referenced by: '<Root>/Delay1'
                                   */
  boolean_T Delay4_InitialCondition;
                                  /* Computed Parameter: Delay4_InitialCondition
                                   * Referenced by: '<Root>/Delay4'
                                   */
  boolean_T Delay5_InitialCondition;
                                  /* Computed Parameter: Delay5_InitialCondition
                                   * Referenced by: '<Root>/Delay5'
                                   */
  boolean_T Delay6_InitialCondition;
                                  /* Computed Parameter: Delay6_InitialCondition
                                   * Referenced by: '<Root>/Delay6'
                                   */
  boolean_T Delay2_InitialCondition;
                                  /* Computed Parameter: Delay2_InitialCondition
                                   * Referenced by: '<Root>/Delay2'
                                   */
  boolean_T Delay3_InitialCondition;
                                  /* Computed Parameter: Delay3_InitialCondition
                                   * Referenced by: '<Root>/Delay3'
                                   */
  boolean_T CCCodeBlock1_P3;           /* Expression: boolean(1)
                                        * Referenced by: '<Root>/C//C++ Code Block1'
                                        */
  boolean_T CCCodeBlock1_P4;           /* Expression: boolean(0)
                                        * Referenced by: '<Root>/C//C++ Code Block1'
                                        */
  boolean_T CCCodeBlock2_P3;           /* Expression: boolean(1)
                                        * Referenced by: '<Root>/C//C++ Code Block2'
                                        */
  boolean_T CCCodeBlock2_P4;           /* Expression: boolean(0)
                                        * Referenced by: '<Root>/C//C++ Code Block2'
                                        */
  boolean_T CCCodeBlock3_P3;           /* Expression: boolean(0)
                                        * Referenced by: '<Root>/C//C++ Code Block3'
                                        */
  boolean_T CCCodeBlock3_P4;           /* Expression: boolean(0)
                                        * Referenced by: '<Root>/C//C++ Code Block3'
                                        */
  uint8_T Gain5_Gain;                  /* Computed Parameter: Gain5_Gain
                                        * Referenced by: '<Root>/Gain5'
                                        */
  uint8_T Gain9_Gain;                  /* Computed Parameter: Gain9_Gain
                                        * Referenced by: '<Root>/Gain9'
                                        */
  uint8_T Gain_Gain;                   /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<Root>/Gain'
                                        */
  uint8_T Gain6_Gain;                  /* Computed Parameter: Gain6_Gain
                                        * Referenced by: '<Root>/Gain6'
                                        */
  uint8_T Gain12_Gain;                 /* Computed Parameter: Gain12_Gain
                                        * Referenced by: '<Root>/Gain12'
                                        */
  uint8_T Gain13_Gain;                 /* Computed Parameter: Gain13_Gain
                                        * Referenced by: '<Root>/Gain13'
                                        */
  uint8_T Gain11_Gain;                 /* Computed Parameter: Gain11_Gain
                                        * Referenced by: '<Root>/Gain11'
                                        */
  uint8_T Gain10_Gain;                 /* Computed Parameter: Gain10_Gain
                                        * Referenced by: '<Root>/Gain10'
                                        */
  uint8_T Gain15_Gain;                 /* Computed Parameter: Gain15_Gain
                                        * Referenced by: '<Root>/Gain15'
                                        */
  uint8_T Gain8_Gain;                  /* Computed Parameter: Gain8_Gain
                                        * Referenced by: '<Root>/Gain8'
                                        */
  uint8_T Gain1_Gain;                  /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<Root>/Gain1'
                                        */
  uint8_T Gain7_Gain;                  /* Computed Parameter: Gain7_Gain
                                        * Referenced by: '<Root>/Gain7'
                                        */
  uint8_T Gain14_Gain;                 /* Computed Parameter: Gain14_Gain
                                        * Referenced by: '<Root>/Gain14'
                                        */
};

/* Storage class 'PageSwitching' */
extern ARINCFCCD2CU_cal_type ARINCFCCD2CU_cal_impl;
extern ARINCFCCD2CU_cal_type *ARINCFCCD2CU_cal;

#endif                                 /* RTW_HEADER_ARINCFCCD2CU_cal_h_ */
