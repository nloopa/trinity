/*
 * SYSCALL_DEFINE1(exit_group, int, error_code)
 */
#include "trinity.h"
#include "sanitise.h"

struct syscall syscall_exit_group = {
	.name = "exit_group",
	.num_args = 1,
	.flags = AVOID_SYSCALL,
	.arg1name = "error_code",
};