#ifndef __LINUX_PRC_H
#define	__LINUX_PRC_H
#include <linux/unistd.h>
//#include <error.h>
#include <sys/types.h>
struct prcdata{
	long prio;
	long weight;
	pid_t pid;
	pid_t pidparent;
	int processcount;
};
#endif
