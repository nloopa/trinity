#ifdef __arch64__
#define KERNEL_ADDR	0xfffff80000000000
#define MODULE_ADDR     0xffffffffa0000000L	// FIXME: Placeholder
#define TASK_SIZE ~0UL
#define PAGE_SHIFT		13
#define PTE_FILE_MAX_BITS	(64UL - PAGE_SHIFT - 1UL)
#else
#define KERNEL_ADDR	0xf0000000
#define TASK_SIZE 0xF0000000UL
#define PAGE_SHIFT		12
#define PTE_FILE_MAX_BITS	24
#endif

#define SYSCALLS syscalls_sparc
