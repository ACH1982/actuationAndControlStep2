/* Main generated for Simulink Real-Time model speedgoat_test_SN5659_R2021b_IO612 */
#include <ModelInfo.hpp>
#include <utilities.hpp>
#include "rte_speedgoat_test_SN5659_R2021b_IO612_parameters.h"
#include "speedgoat_test_SN5659_R2021b_IO612.h"

/* Task descriptors */
slrealtime::TaskInfo task_1( 0u, std::bind(speedgoat_test_SN5659_R2021b_IO612_step), slrealtime::TaskInfo::PERIODIC, 0.001, 0, 40);

/* Executable base address for XCP */
#ifdef __linux__
extern char __executable_start;
static uintptr_t const base_address = reinterpret_cast<uintptr_t>(&__executable_start);
#else
/* Set 0 as placeholder, to be parsed later from /proc filesystem */
static uintptr_t const base_address = 0;
#endif

/* Model descriptor */
slrealtime::ModelInfo speedgoat_test_SN5659_R2021b_IO612_Info =
{
    "speedgoat_test_SN5659_R2021b_IO612",
    speedgoat_test_SN5659_R2021b_IO612_initialize,
    speedgoat_test_SN5659_R2021b_IO612_terminate,
    []()->char const*& { return speedgoat_test_SN5659_R2021b_IO612_M->errorStatus; },
    []()->unsigned char& { return speedgoat_test_SN5659_R2021b_IO612_M->Timing.stopRequestedFlag; },
    { task_1 },
    slrealtime::getSegmentVector()
};

int main(int argc, char *argv[]) {
    slrealtime::BaseAddress::set(base_address);
    return slrealtime::runModel(argc, argv, speedgoat_test_SN5659_R2021b_IO612_Info);
}
