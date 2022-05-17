/* Main generated for Simulink Real-Time model ARINCFCCD2CU */
#include <ModelInfo.hpp>
#include <utilities.hpp>
#include "ARINCFCCD2CU.h"
#include "rte_ARINCFCCD2CU_parameters.h"

/* Task descriptors */
slrealtime::TaskInfo task_1( 0u, std::bind(ARINCFCCD2CU_step0), slrealtime::TaskInfo::PERIODIC, 0.008, 0, 40);
slrealtime::TaskInfo task_2( 1u, std::bind(ARINCFCCD2CU_step1), slrealtime::TaskInfo::PERIODIC, 0.016, 0, 39);
slrealtime::TaskInfo task_3( 2u, std::bind(ARINCFCCD2CU_step2), slrealtime::TaskInfo::PERIODIC, 0.064, 0, 38);

/* Executable base address for XCP */
#ifdef __linux__
extern char __executable_start;
static uintptr_t const base_address = reinterpret_cast<uintptr_t>(&__executable_start);
#else
/* Set 0 as placeholder, to be parsed later from /proc filesystem */
static uintptr_t const base_address = 0;
#endif

/* Model descriptor */
slrealtime::ModelInfo ARINCFCCD2CU_Info =
{
    "ARINCFCCD2CU",
    ARINCFCCD2CU_initialize,
    ARINCFCCD2CU_terminate,
    []()->char const*& { return ARINCFCCD2CU_M->errorStatus; },
    []()->unsigned char& { return ARINCFCCD2CU_M->Timing.stopRequestedFlag; },
    { task_1, task_2, task_3 },
    slrealtime::getSegmentVector()
};

int main(int argc, char *argv[]) {
    slrealtime::BaseAddress::set(base_address);
    return slrealtime::runModel(argc, argv, ARINCFCCD2CU_Info);
}
