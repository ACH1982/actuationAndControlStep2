/* Main generated for Simulink Real-Time model speedgoat_test_SN5659_R2021b */
#include <ModelInfo.hpp>
#include <utilities.hpp>
#include "rte_speedgoat_test_SN5659_R2021b_parameters.h"
#include "speedgoat_test_SN5659_R2021b.h"

/* Task descriptors */
slrealtime::TaskInfo task_1( 0u, std::bind(speedgoat_test_SN5659_R2021b_step0), slrealtime::TaskInfo::PERIODIC, 0.001, 0, 40);
slrealtime::TaskInfo task_2( 1u, std::bind(speedgoat_test_SN5659_R2021b_step2), slrealtime::TaskInfo::PERIODIC, 0.005, 0, 39);
slrealtime::TaskInfo task_3( 2u, std::bind(speedgoat_test_SN5659_R2021b_step3), slrealtime::TaskInfo::PERIODIC, 0.01, 0, 38);

/* Executable base address for XCP */
#ifdef __linux__
extern char __executable_start;
static uintptr_t const base_address = reinterpret_cast<uintptr_t>(&__executable_start);
#else
/* Set 0 as placeholder, to be parsed later from /proc filesystem */
static uintptr_t const base_address = 0;
#endif

/* Model descriptor */
slrealtime::ModelInfo speedgoat_test_SN5659_R2021b_Info =
{
    "speedgoat_test_SN5659_R2021b",
    speedgoat_test_SN5659_R2021b_initialize,
    speedgoat_test_SN5659_R2021b_terminate,
    []()->char const*& { return speedgoat_test_SN5659_R2021b_M->errorStatus; },
    []()->unsigned char& { return speedgoat_test_SN5659_R2021b_M->Timing.stopRequestedFlag; },
    { task_1, task_2, task_3 },
    slrealtime::getSegmentVector()
};

int main(int argc, char *argv[]) {
    slrealtime::BaseAddress::set(base_address);
    return slrealtime::runModel(argc, argv, speedgoat_test_SN5659_R2021b_Info);
}
