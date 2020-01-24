/*
ex1 is basic modulde based on the chapter 2 of ldd3 book
*/
#include<linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/stat.h>
#include<linux/moduleparam.h>
long count=0;
module_param(count,long,S_IRUGO);
char *name="naveen";
module_param(name,charp,S_IRUGO);

static int ex2_module_init(void)
{
	pr_debug("welcome to hello world ex module\n");
	pr_debug("module param=%ld\n",count);
	pr_debug("module param=%s\n",name);
	return 0;
}

static void ex2_module_exit(void)
{
	pr_debug("exit the hello world ex module\n");
	return;
}
module_init(ex2_module_init);
module_exit(ex2_module_exit);
MODULE_AUTHOR("Alex");
MODULE_DESCRIPTION("Ex2 module explain the module params");
MODULE_LICENSE("GPL");
