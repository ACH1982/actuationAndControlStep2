/* Main generated for Simulink Real-Time model crossARINC_in */
#include <ModelInfo.hpp>
#include <utilities.hpp>
#include "crossARINC_in.h"
#include "rte_crossARINC_in_parameters.h"

/* Task descriptors */
slrealtime::TaskInfo task_1( 0u, std::bind(crossARINC_in_step), slrealtime::TaskInfo::PERIODIC, 0.008, 0, 40);

/* Executable base address for XCP */
#ifdef __linux__
extern char __executable_start;
static uintptr_t const base_address = reinterpret_cast<uintptr_t>(&__executable_start);
#else
/* Set 0 as placeholder, to be parsed later from /proc filesystem */
static uintptr_t const base_address = 0;
#endif

/* Model descriptor */
slrealtime::ModelInfo crossARINC_in_Info =
{
    "crossARINC_in",
    crossARINC_in_initialize,
    crossARINC_in_terminate,
    []()->char const*& { return crossARINC_in_M->errorStatus; },
    []()->unsigned char& { return crossARINC_in_M->Timing.stopRequestedFlag; },
    { task_1 },
    slrealtime::getSegmentVector()
};

int main(int argc, char *argv[]) {
    slrealtime::BaseAddress::set(base_address);
    return slrealtime::runModel(argc, argv, crossARINC_in_Info);
}
