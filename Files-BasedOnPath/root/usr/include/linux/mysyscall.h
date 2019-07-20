#ifndef __LINUX_MYSYSCALL_H
#define __LINUX_MYSYSCALL_H
#include <linux/unistd.h>
#include <errno.h>
//#include <sys/types.h>
#include <linux/prcdata.h>

/*
struct prcdata{
	long prio;
	long weight;
	pid_t pid;
	pid_t pidparent;
	int processcount;
};
*/
extern int errno;
_syscall3(int, mysyscall, struct prcdata*, data, int, option, long, nicev);
#endif
