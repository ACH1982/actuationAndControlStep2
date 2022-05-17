/* Main generated for Simulink Real-Time model FCC1ARINC */
#include <ModelInfo.hpp>
#include <utilities.hpp>
#include "FCC1ARINC.h"
#include "rte_FCC1ARINC_parameters.h"

/* Task descriptors */
slrealtime::TaskInfo task_1( 0u, std::bind(FCC1ARINC_step), slrealtime::TaskInfo::PERIODIC, 0.008, 0, 40);

/* Executable base address for XCP */
#ifdef __linux__
extern char __executable_start;
static uintptr_t const base_address = reinterpret_cast<uintptr_t>(&__executable_start);
#else
/* Set 0 as placeholder, to be parsed later from /proc filesystem */
static uintptr_t const base_address = 0;
#endif

/* Model descriptor */
slrealtime::ModelInfo FCC1ARINC_Info =
{
    "FCC1ARINC",
    FCC1ARINC_initialize,
    FCC1ARINC_terminate,
    []()->char const*& { return FCC1ARINC_M->errorStatus; },
    []()->unsigned char& { return FCC1ARINC_M->Timing.stopRequestedFlag; },
    { task_1 },
    slrealtime::getSegmentVector()
};

int main(int argc, char *argv[]) {
    slrealtime::BaseAddress::set(base_address);
    return slrealtime::runModel(argc, argv, FCC1ARINC_Info);
}
