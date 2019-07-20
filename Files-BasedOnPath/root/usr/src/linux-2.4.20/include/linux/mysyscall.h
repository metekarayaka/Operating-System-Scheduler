#ifndef __LINUX_MYSYSCALL_H 
#define __LINUX_MYSYSCALL_H
#include <linux/linkage.h>
#include <linux/types.h>
#include <linux/sched.h>
#include <linux/unistd.h>
extern int SCHED_RAFFLE ;
struct prcdata{
	long prio;
	long weight;
	pid_t pid;
	pid_t pidparent;
	int processcount;
	
};
#endif
