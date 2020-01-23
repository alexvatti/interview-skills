#include<stdio.h>

void fun();

int main()
{
	fun();
}

void fun()
{
	union abc {
		short int a;
		char b;
	}var;

	var.a=0xffffffff;
	var.b=0x55;

	printf("value of a=%x\n", var.a);
	printf("value of b=%x\n", var.b);
return;
}
