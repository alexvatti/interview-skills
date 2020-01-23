#include<stdio.h>
#include<stdlib.h>

int main()
{

	char *name="wipro";
	printf("%d\n",sizeof(name)); //8
	printf("%d\n",sizeof(*name)); //1
	printf("%d\n",sizeof("wipro")); //6
	
}
