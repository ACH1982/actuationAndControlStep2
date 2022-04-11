###########################################################################
## Makefile generated for component 'speedgoat_test_SN5659_R2020b'. 
## 
## Makefile     : speedgoat_test_SN5659_R2020b.mk
## Generated on : Fri Apr 08 08:55:21 2022
## Final product: $(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw/speedgoat_test_SN5659_R2020b
## Product type : executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile

PRODUCT_NAME              = speedgoat_test_SN5659_R2020b
MAKEFILE                  = speedgoat_test_SN5659_R2020b.mk
MATLAB_ROOT               = C:/PROGRA~1/MATLAB/R2021b
MATLAB_BIN                = C:/PROGRA~1/MATLAB/R2021b/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/win64
START_DIR                 = C:/Development/Worksite/STEP2/Implementation/TC/testIO
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = ISO_C++
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
RELATIVE_PATH_TO_ANCHOR   = ../..
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 
LIBLIBECATINTERFACE_SLRT_X64_OBJS = 
LIBLIBECMASTER_SLRT_X64_OBJS = 

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          Simulink Real-Time Toolchain
# Supported Version(s):    
# ToolchainInfo Version:   2021b
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# SLREALTIME_QNX_SP_ROOT
# SLREALTIME_QNX_VERSION

#-----------
# MACROS
#-----------

QCC_TARGET             = gcc_ntox86_64

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = -L$(MATLAB_ROOT)/toolbox/slrealtime/target/lib -ltraceparser -lpps -lslrealtime_kernel -lslrealtime_platform -lslrealtime_rtps -lsocket -lboost_system -lboost_log -lpci -lopenblas

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: QNX C Compiler
CC = qcc

# Linker: QCC Linker
LD = q++

# C++ Compiler: QNX C++ Compiler
CPP = q++

# C++ Linker: QCC C++ Linker
CPP_LD = q++

# Archiver: QNX Archiver
AR = ntox86_64-gcc-ar

# Builder: GMAKE Utility
MAKE = make


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -g -O0 -finstrument-functions
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g -O0 -finstrument-functions
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
RM                  = @del /F
ECHO                = @echo
MV                  = @move
RUN                 =

#--------------------------------------
# "Faster Runs" Build Configuration
#--------------------------------------

ARFLAGS              = ruvs
CFLAGS               = -c -V$(QCC_TARGET) -g \
                       -O2 -fwrapv
CPPFLAGS             = -c -V$(QCC_TARGET) -g -std=gnu++14 -stdlib=libstdc++ \
                       -O2 -fwrapv
CPP_LDFLAGS          = -V$(QCC_TARGET) -g -std=gnu++14 -stdlib=libstdc++
CPP_SHAREDLIB_LDFLAGS  = -V$(QCC_TARGET) -shared -Wl,--no-undefined -g
LDFLAGS              = -V$(QCC_TARGET) -g -std=gnu++14 -stdlib=libstdc++
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = -V$(QCC_TARGET) -shared -Wl,--no-undefined -g



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw/speedgoat_test_SN5659_R2020b
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR) -I$(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw -I$(MATLAB_ROOT)/toolbox/slrealtime/simulink/blocks/dist/include -I$(MATLAB_ROOT)/toolbox/slrealtime/target/kernel/dist/include -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -IC:/PROGRA~3/SPEEDG~1/SPEEDG~1/R2021b/940~1.1/SG_BLO~1/common/libsg -IC:/PROGRA~3/SPEEDG~1/SPEEDG~1/R2021b/940~1.1/SG_BLO~1/PICKER~1/include -IC:/PROGRA~3/SPEEDG~1/SPEEDG~1/R2021b/940~1.1 -IC:/PROGRA~3/SPEEDG~1/SPEEDG~1/R2021b/940~1.1/SG_BLO~1/arinc429/lib/sg_IO682/include -IC:/PROGRA~3/SPEEDG~1/SPEEDG~1/R2021b/940~1.1/SG_BLO~1/can/include -I$(MATLAB_ROOT)/toolbox/shared/can/src/scanutil -IC:/PROGRA~3/SPEEDG~1/SPEEDG~1/R2021b/940~1.1/SG_BLO~1/analog/include -IC:/PROGRA~3/SPEEDG~1/SPEEDG~1/R2021b/940~1.1/SG_BLO~1/digital/include -IC:/PROGRA~3/SPEEDG~1/SPEEDG~1/R2021b/940~1.1/SG_BLO~1/serial/include -IC:/PROGRA~3/SPEEDG~1/SPEEDG~1/R2021b/940~1.1/SG_BLO~1/arinc429/include

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -DSIMULINK_REAL_TIME
DEFINES_BUILD_ARGS = -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DEXT_MODE=1 -DMAT_FILE=0 -DONESTEPFCN=1 -DTERMFCN=1 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=1
DEFINES_CUSTOM = 
DEFINES_OPTS = -DTID01EQ=1
DEFINES_STANDARD = -DMODEL=speedgoat_test_SN5659_R2020b -DNUMST=4 -DNCSTATES=0 -DHAVESTDIO -DRT -DUSE_RTMODEL

DEFINES = $(DEFINES_) $(DEFINES_BUILD_ARGS) $(DEFINES_CUSTOM) $(DEFINES_OPTS) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(MATLAB_ROOT)/rtw/c/src/rt_matrx.c $(MATLAB_ROOT)/rtw/c/src/rt_printf.c $(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw/slrealtime_datatype_ground.c $(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw/can_datatype_ground.cpp $(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw/rtGetInf.cpp $(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw/rtGetNaN.cpp $(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw/rt_nonfinite.cpp $(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw/rtmodel.cpp $(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw/speedgoat_test_SN5659_R2020b.cpp $(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw/speedgoat_test_SN5659_R2020b_cal.cpp $(MATLAB_ROOT)/toolbox/slrealtime/simulink/blocks/slfiforeadwrite.cpp $(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw/rte_speedgoat_test_SN5659_R2020b_parameters.cpp $(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw/main.cpp C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/analog/sg_IO107_da_s.c C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/analog/sg_IO107_setup_s.c C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/analog/sg_IO132_IO133_ad_s_v2.c C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/analog/sg_IO132_IO133_da_s_v2.c C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/analog/sg_IO132_IO133_di_s_v2.c C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/analog/sg_IO132_IO133_do_s_v2.c C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/analog/sg_IO132_IO133_setup_s_v2.c C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/digital/sg_IO204_read_s.c C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/digital/sg_IO204_setup_s.c C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/digital/sg_IO204_write_s.c C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/encoders/sg_IO421_lvdt_read_s.c C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/encoders/sg_IO421_ref_s.c C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/can/sg_IO612_setup_s.cpp C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/can/sg_IO61X_read_s.cpp C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/can/sg_IO61X_write_s.cpp C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/pickering/sg_IOPIL_relay_s.c C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/arinc429/sg_arinc429_decode_s_v2.c C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/arinc429/sg_arinc429_encode_s_v2.c C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/arinc429/sg_io682_receive_s_v3.cpp C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/arinc429/sg_io682_send_s_v3.cpp C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/arinc429/sg_io682_setup_s_v3.cpp C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/serial/sg_serial_read_s.cpp C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/serial/sg_serial_setup_s.cpp C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/serial/sg_serial_write_s.cpp $(MATLAB_ROOT)/toolbox/slrealtime/simulink/blocks/slasciidecode.cpp $(MATLAB_ROOT)/toolbox/slrealtime/simulink/blocks/slasciiencode.cpp C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/analog/src/sg_io132.c C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/pickering/src/sg_IOPIL_printError_s.c C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/arinc429/src/sg_io682_v3.cpp C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/serial/src/sg_serial.c $(MATLAB_ROOT)/toolbox/coder/profile/src/host_timer_x86.c $(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw/slrealtime_code_profiling_utility_functions.cpp

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = rt_matrx.o rt_printf.o slrealtime_datatype_ground.o can_datatype_ground.o rtGetInf.o rtGetNaN.o rt_nonfinite.o rtmodel.o speedgoat_test_SN5659_R2020b.o speedgoat_test_SN5659_R2020b_cal.o slfiforeadwrite.o rte_speedgoat_test_SN5659_R2020b_parameters.o main.o sg_IO107_da_s.o sg_IO107_setup_s.o sg_IO132_IO133_ad_s_v2.o sg_IO132_IO133_da_s_v2.o sg_IO132_IO133_di_s_v2.o sg_IO132_IO133_do_s_v2.o sg_IO132_IO133_setup_s_v2.o sg_IO204_read_s.o sg_IO204_setup_s.o sg_IO204_write_s.o sg_IO421_lvdt_read_s.o sg_IO421_ref_s.o sg_IO612_setup_s.o sg_IO61X_read_s.o sg_IO61X_write_s.o sg_IOPIL_relay_s.o sg_arinc429_decode_s_v2.o sg_arinc429_encode_s_v2.o sg_io682_receive_s_v3.o sg_io682_send_s_v3.o sg_io682_setup_s_v3.o sg_serial_read_s.o sg_serial_setup_s.o sg_serial_write_s.o slasciidecode.o slasciiencode.o sg_io132.o sg_IOPIL_printError_s.o sg_io682_v3.o sg_serial.o host_timer_x86.o slrealtime_code_profiling_utility_functions.o

ALL_OBJS = $(OBJS)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = $(MATLAB_ROOT)/toolbox/slrealtime/simulink/blocks/dist/lib/libecatinterface_slrt_x64.a $(MATLAB_ROOT)/toolbox/slrealtime/simulink/blocks/dist/lib/libEcMaster_slrt_x64.a C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/arinc429/lib/sg_IO682/sg_IO682_qnx710_x86_64.a C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/can/include/IO61X_Library_qnx710_x86_64.a

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_ = -ffast-math
CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_ = -ffast-math
CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += $(CPPFLAGS_) $(CPPFLAGS_BASIC)

#---------------
# C++ Linker
#---------------

CPP_LDFLAGS_ = -lslog2 -lsg_qnx710_x86_64 -LC:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/common/libsg -lpilpxi_qnx710_x86_64 -LC:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/pickering/include

CPP_LDFLAGS += $(CPP_LDFLAGS_)

#------------------------------
# C++ Shared Library Linker
#------------------------------

CPP_SHAREDLIB_LDFLAGS_ = -lslog2 -lsg_qnx710_x86_64 -LC:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/common/libsg -lpilpxi_qnx710_x86_64 -LC:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/pickering/include

CPP_SHAREDLIB_LDFLAGS += $(CPP_SHAREDLIB_LDFLAGS_)

#-----------
# Linker
#-----------

LDFLAGS_ = -lslog2 -lsg_qnx710_x86_64 -LC:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/common/libsg -lpilpxi_qnx710_x86_64 -LC:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/pickering/include

LDFLAGS += $(LDFLAGS_)

#--------------------------
# Shared Library Linker
#--------------------------

SHAREDLIB_LDFLAGS_ = -lslog2 -lsg_qnx710_x86_64 -LC:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/common/libsg -lpilpxi_qnx710_x86_64 -LC:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/pickering/include

SHAREDLIB_LDFLAGS += $(SHAREDLIB_LDFLAGS_)

###########################################################################
## INLINED COMMANDS
###########################################################################

###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild


all : build
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


buildobj : prebuild $(OBJS) $(PREBUILT_OBJS) $(LIBS)
	@echo "### Successfully generated all binary outputs."


prebuild : 


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(LIBS)
	@echo "### Creating standalone executable "$(PRODUCT)" ..."
	$(CPP_LD) $(CPP_LDFLAGS) -o $(PRODUCT) $(OBJS) -Wl,--start-group $(LIBS) -Wl,--end-group $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/can/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/can/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_interrupts/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_interrupts/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/analog/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/analog/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/digital/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/digital/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/serial/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/serial/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/arinc429/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/arinc429/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/pickering/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/pickering/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/can/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/can/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/analog/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/analog/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/digital/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/digital/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/serial/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/serial/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/arinc429/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/arinc429/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/encoders/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/encoders/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/slrealtime/simulink/blocks/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/slrealtime/simulink/blocks/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/pickering/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/pickering/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : ../%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : ../%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/coder/profile/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/coder/profile/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rt_matrx.o : $(MATLAB_ROOT)/rtw/c/src/rt_matrx.c
	$(CC) $(CFLAGS) -o $@ $<


rt_printf.o : $(MATLAB_ROOT)/rtw/c/src/rt_printf.c
	$(CC) $(CFLAGS) -o $@ $<


slrealtime_datatype_ground.o : $(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw/slrealtime_datatype_ground.c
	$(CC) $(CFLAGS) -o $@ $<


can_datatype_ground.o : $(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw/can_datatype_ground.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rtGetInf.o : $(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw/rtGetInf.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rtGetNaN.o : $(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw/rtGetNaN.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rt_nonfinite.o : $(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw/rt_nonfinite.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rtmodel.o : $(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw/rtmodel.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


speedgoat_test_SN5659_R2020b.o : $(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw/speedgoat_test_SN5659_R2020b.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


speedgoat_test_SN5659_R2020b_cal.o : $(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw/speedgoat_test_SN5659_R2020b_cal.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


slfiforeadwrite.o : $(MATLAB_ROOT)/toolbox/slrealtime/simulink/blocks/slfiforeadwrite.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rte_speedgoat_test_SN5659_R2020b_parameters.o : $(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw/rte_speedgoat_test_SN5659_R2020b_parameters.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


main.o : $(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw/main.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


sg_IO107_da_s.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/analog/sg_IO107_da_s.c
	$(CC) $(CFLAGS) -o $@ $<


sg_IO107_setup_s.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/analog/sg_IO107_setup_s.c
	$(CC) $(CFLAGS) -o $@ $<


sg_IO132_IO133_ad_s_v2.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/analog/sg_IO132_IO133_ad_s_v2.c
	$(CC) $(CFLAGS) -o $@ $<


sg_IO132_IO133_da_s_v2.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/analog/sg_IO132_IO133_da_s_v2.c
	$(CC) $(CFLAGS) -o $@ $<


sg_IO132_IO133_di_s_v2.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/analog/sg_IO132_IO133_di_s_v2.c
	$(CC) $(CFLAGS) -o $@ $<


sg_IO132_IO133_do_s_v2.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/analog/sg_IO132_IO133_do_s_v2.c
	$(CC) $(CFLAGS) -o $@ $<


sg_IO132_IO133_setup_s_v2.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/analog/sg_IO132_IO133_setup_s_v2.c
	$(CC) $(CFLAGS) -o $@ $<


sg_IO204_read_s.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/digital/sg_IO204_read_s.c
	$(CC) $(CFLAGS) -o $@ $<


sg_IO204_setup_s.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/digital/sg_IO204_setup_s.c
	$(CC) $(CFLAGS) -o $@ $<


sg_IO204_write_s.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/digital/sg_IO204_write_s.c
	$(CC) $(CFLAGS) -o $@ $<


sg_IO421_lvdt_read_s.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/encoders/sg_IO421_lvdt_read_s.c
	$(CC) $(CFLAGS) -o $@ $<


sg_IO421_ref_s.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/encoders/sg_IO421_ref_s.c
	$(CC) $(CFLAGS) -o $@ $<


sg_IO612_setup_s.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/can/sg_IO612_setup_s.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


sg_IO61X_read_s.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/can/sg_IO61X_read_s.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


sg_IO61X_write_s.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/can/sg_IO61X_write_s.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


sg_IOPIL_relay_s.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/pickering/sg_IOPIL_relay_s.c
	$(CC) $(CFLAGS) -o $@ $<


sg_arinc429_decode_s_v2.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/arinc429/sg_arinc429_decode_s_v2.c
	$(CC) $(CFLAGS) -o $@ $<


sg_arinc429_encode_s_v2.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/arinc429/sg_arinc429_encode_s_v2.c
	$(CC) $(CFLAGS) -o $@ $<


sg_io682_receive_s_v3.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/arinc429/sg_io682_receive_s_v3.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


sg_io682_send_s_v3.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/arinc429/sg_io682_send_s_v3.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


sg_io682_setup_s_v3.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/arinc429/sg_io682_setup_s_v3.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


sg_serial_read_s.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/serial/sg_serial_read_s.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


sg_serial_setup_s.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/serial/sg_serial_setup_s.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


sg_serial_write_s.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/serial/sg_serial_write_s.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


slasciidecode.o : $(MATLAB_ROOT)/toolbox/slrealtime/simulink/blocks/slasciidecode.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


slasciiencode.o : $(MATLAB_ROOT)/toolbox/slrealtime/simulink/blocks/slasciiencode.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


sg_io132.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/analog/src/sg_io132.c
	$(CC) $(CFLAGS) -o $@ $<


sg_IOPIL_printError_s.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/pickering/src/sg_IOPIL_printError_s.c
	$(CC) $(CFLAGS) -o $@ $<


sg_io682_v3.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/arinc429/src/sg_io682_v3.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


sg_serial.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021b/9.4.0.1/sg_blocks/serial/src/sg_serial.c
	$(CC) $(CFLAGS) -o $@ $<


host_timer_x86.o : $(MATLAB_ROOT)/toolbox/coder/profile/src/host_timer_x86.c
	$(CC) $(CFLAGS) -o $@ $<


slrealtime_code_profiling_utility_functions.o : $(START_DIR)/speedgoat_test_SN5659_R2020b_slrealtime_rtw/slrealtime_code_profiling_utility_functions.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


#------------------------
# BUILDABLE LIBRARIES
#------------------------

$(MATLAB_ROOT)/toolbox/slrealtime/simulink/blocks/dist/lib/libecatinterface_slrt_x64.a : $(LIBLIBECATINTERFACE_SLRT_X64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBLIBECATINTERFACE_SLRT_X64_OBJS)


$(MATLAB_ROOT)/toolbox/slrealtime/simulink/blocks/dist/lib/libEcMaster_slrt_x64.a : $(LIBLIBECMASTER_SLRT_X64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBLIBECMASTER_SLRT_X64_OBJS)


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### CPPFLAGS = $(CPPFLAGS)"
	@echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(subst /,\,$(PRODUCT))
	$(RM) $(subst /,\,$(ALL_OBJS))
	$(ECHO) "### Deleted all derived files."


