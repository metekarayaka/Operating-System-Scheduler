#include <linux/mysyscall.h>
#include <linux/types.h>
//#include <linux/sched.h>
#include <asm/uaccess.h>
#include <linux/kernel.h>


asmlinkage int sys_mysyscall(struct prcdata *data, int option, long nicev){
	cli();
	int schedulerSelection = 0;
	struct prcdata myData ;
	unsigned int bytes_left;
	bytes_left = copy_from_user(&myData,data,sizeof(struct prcdata)); 

	if (option == 200)
	{
		myData.prio = 20 - (current->nice);
		myData.weight = current->counter + (20 - (current->nice));
		myData.pid = current->pid;
		myData.pidparent = current->p_pptr->pid;
		myData.processcount = current->user->processes.counter;	
		bytes_left = copy_to_user(data, &myData, sizeof(struct prcdata));
		sti();
		return 0;	
	}
	else if (option == 100)
	{
		current->nice = nicev;
		sti();
		return 0;
	}
//////////////////////////////////////////////////////////////// SCHEDULE SWITCH
	else if (option == 500){
		if (SCHED_RAFFLE == 0){
			SCHED_RAFFLE	 = 1;
		}
		else{
			
			SCHED_RAFFLE	 = 0;
		}
//////////////////////////////////////////////////////////////////
	}
	else
	{
		sti();
		return -1;
	}
}

