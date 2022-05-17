/* Main generated for Simulink Real-Time model FCC2ARINC */
#include <ModelInfo.hpp>
#include <utilities.hpp>
#include "FCC2ARINC.h"
#include "rte_FCC2ARINC_parameters.h"

/* Task descriptors */
slrealtime::TaskInfo task_1( 0u, std::bind(FCC2ARINC_step), slrealtime::TaskInfo::PERIODIC, 0.008, 0, 40);

/* Executable base address for XCP */
#ifdef __linux__
extern char __executable_start;
static uintptr_t const base_address = reinterpret_cast<uintptr_t>(&__executable_start);
#else
/* Set 0 as placeholder, to be parsed later from /proc filesystem */
static uintptr_t const base_address = 0;
#endif

/* Model descriptor */
slrealtime::ModelInfo FCC2ARINC_Info =
{
    "FCC2ARINC",
    FCC2ARINC_initialize,
    FCC2ARINC_terminate,
    []()->char const*& { return FCC2ARINC_M->errorStatus; },
    []()->unsigned char& { return FCC2ARINC_M->Timing.stopRequestedFlag; },
    { task_1 },
    slrealtime::getSegmentVector()
};

int main(int argc, char *argv[]) {
    slrealtime::BaseAddress::set(base_address);
    return slrealtime::runModel(argc, argv, FCC2ARINC_Info);
}
