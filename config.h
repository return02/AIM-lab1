/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* target architecture */
#define ARCH i386

/* caching allocator */
#define CACHING_ALLOCATOR SLAB

/* Primary console needs CR */
/* #undef CONSOLE_NEED_CR */

/* cpu ticks per second */
#define CPU_FREQ DETECT

/* Debugging (kpdebug) */
#define DEBUG /**/

/* device index */
#define DEVICE_INDEX DEVLIST

/* order of firmware stack per CPU (size=1<<order) */
#define FWSTACKORDER 12

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define to 1 if the system has the `noinline' function attribute */
#define HAVE_FUNC_ATTRIBUTE_NOINLINE 1

/* Define to 1 if the system has the `noreturn' function attribute */
#define HAVE_FUNC_ATTRIBUTE_NORETURN 1

/* Define to 1 if the system has the `visibility' function attribute */
#define HAVE_FUNC_ATTRIBUTE_VISIBILITY 1

/* Define to 1 if the system has the `weak' function attribute */
#define HAVE_FUNC_ATTRIBUTE_WEAK 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <memory.h> header file. */
/* #undef HAVE_MEMORY_H */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if typeof works with your compiler. */
#define HAVE_TYPEOF 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if the system has the `used' variable attribute */
#define HAVE_VAR_ATTRIBUTE_USED 1

/* Define to 1 if the system has the `__builtin_bswap32' built-in function */
#define HAVE___BUILTIN_BSWAP32 1

/* Define to 1 if the system has the `__builtin_bswap64' built-in function */
#define HAVE___BUILTIN_BSWAP64 1

/* Define to 1 if the system has the `__builtin_popcount' built-in function */
#define HAVE___BUILTIN_POPCOUNT 1

/* Define to 1 if the system has the `__builtin_popcountl' built-in function
   */
#define HAVE___BUILTIN_POPCOUNTL 1

/* Define to 1 if the system has the `__builtin_popcountll' built-in function
   */
#define HAVE___BUILTIN_POPCOUNTLL 1

/* MIPS high RAM base address */
#define HIGHRAM_BASE 

/* MIPS high RAM size */
#define HIGHRAM_SIZE 

/* PCI IDE Bus-mastering DMA */
/* #undef IDE_BMDMA */

/* memory-mapped IO bus as device tree root */
/* #undef IO_MEM_ROOT */

/* port IO bus as device tree root */
/* #undef IO_PORT_ROOT */

/* start of kernel address */
#define KERN_BASE 0x80000000

/* kernel loading physical address */
#define KERN_START 0x00000000

/* start of kernel dynamic mapping */
#define KMMAP_BASE 0xf0000000

/* kmmap keeper */
#define KMMAP_KEEPER KMLIST

/* size of kernel stack */
#define KSTACKSIZE 

/* RAM space detection on Loongson 3A port (RECOMMENDED) */
/* #undef LOONGSON3A_RAM_DETECTION */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* target machine */
#define MACH pc

/* maximum number of cores */
#define MAX_CPUS NR_CPUS

/* maximum number of processes */
#define MAX_PROCESSES 65536

/* amount of memory installed */
#define MEM_SIZE DETECT

/* MSIM disk image file name */
#define MSIM_DISK_IMG 

/* MSIM disk physical address */
#define MSIM_DISK_PHYSADDR 

/* MSIM firmware binary file name */
#define MSIM_FIRMWARE_BIN 

/* MSIM keyboard physical address */
#define MSIM_KBD_PHYSADDR 

/* MSIM printer physical address */
#define MSIM_LP_PHYSADDR 

/* MSIM IPC device mailbox base address */
#define MSIM_ORDER_MAILBOX_BASE 

/* order of MSIM IPC device mailbox (size=1<<order) */
#define MSIM_ORDER_MAILBOX_ORDER 

/* MSIM IPC device physical address */
#define MSIM_ORDER_PHYSADDR 

/* MSIM real time clock physical address */
#define MSIM_RTC_PHYSADDR 

/* number of cores */
#define NR_CPUS DETECT

/* Name of package */
#define PACKAGE "aim"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "davidgao1001@gmail.com"

/* Define to the full name of this package. */
#define PACKAGE_NAME "AIM"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "AIM 0.2"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "aim"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.2"

/* 16K pages (for Loongson 3A) */
/* #undef PAGESIZE_16K */

/* page allocator */
#define PAGE_ALLOCATOR FF

/* pipe size */
#define PIPE_SIZE 16384

/* primary console */
#define PRIMARY_CONSOLE uart-ns16550

/* primary storage */
#define PRIMARY_STORAGE 

/* primary timing */
#define PRIMARY_TIMING 

/* physical memory start point */
#define RAM_PHYSBASE 0x00000000

/* start of reserved high address */
#define RESERVED_BASE 0xfffff000

/* root partition number */
#define ROOT_PARTITION_ID 4

/* non-caching memory object allocator */
#define SIMPLE_ALLOCATOR FLFF

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* in-kernel test framework */
#define TESTS /**/

/* timer interrupt frequency */
#define TIMER_FREQ 100

/* top of user program address space */
#define USERTOP 0x7ff00000

/* MIPS32 ABI and instruction set */
/* #undef USE_MIPS32 */

/* MIPS64r2 ABI and instruction set */
/* #undef USE_MIPS64 */

/* size of user stack */
#define USTACKSIZE 32768

/* Version number of package */
#define VERSION "0.2"

/* pseudo-keyword for attribute noinline */
#define __noinline __attribute__((noinline))

/* pseudo-keyword for attribute noreturn */
#define __noreturn __attribute__((noreturn))

/* pseudo-keyword for attribute used */
#define __used __attribute__((used))

/* pseudo-keyword for attribute visibility */
#define __visibility __attribute__((visibility))

/* pseudo-keyword for attribute weak */
#define __weak __attribute__((weak))

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#define restrict __restrict
/* Work around a bug in Sun C++: it does not support _Restrict or
   __restrict__, even though the corresponding Sun C compiler ends up with
   "#define restrict _Restrict" or "#define restrict __restrict__" in the
   previous line.  Perhaps some future version of Sun C++ will work with
   restrict; if so, hopefully it defines __RESTRICT like Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
# define __restrict__
#endif

/* Define to __typeof__ if your compiler spells it that way. */
/* #undef typeof */

/* Define to empty if the keyword `volatile' does not work. Warning: valid
   code using `volatile' can become incorrect without. Disable with care. */
/* #undef volatile */






