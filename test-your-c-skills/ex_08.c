#include<stdio.h>
#include<string.h>

struct abc {
	int a;
	int b;
	int c;
}xyz;

#define offset(type,member) (unsigned int) &(((type*)0)->member)
#define container_of(ptr,type,member) (unsigned int) ((char*)ptr - offset(type,member))
int main()
{
	printf("address of struct %x \n", &xyz);
	printf("address of base = %x\n", container_of(&xyz.c , struct abc , c));
}
