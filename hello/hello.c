#include <linux/kernel.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE0(hello){
	
	printk("Hello! I'm the nwe sytem call!\n");
	return 0;

}
