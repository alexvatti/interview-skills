#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "stack.h"

int stack[MAX_SIZE];
int top=-1;

int push(void)
{
	int val;

	printf("Enter the value:\n");
	scanf("%d",&val);
	if(top >= MAX_SIZE) {
		printf("stack overflow:reaced max capacity\n");
		return -1;
	} else {
		top++;
		stack[top]=val;
	}
	return 0;
}
int pop(void)
{
	int val;
	if(top==-1) {
		printf("stack empty\n");
		return -1;
	} else {
		val=stack[top];
		top--;
		return val;
	}
}
int top_stack(void)
{
	int val;
	if(top==-1) {
		printf("stack is  empty\n");
		return -1;
	} else {
		val=stack[top];
		return val;
	}
}
int display_stack(void)
{
	int i=top;
	if(top==-1) {
		printf("Stack is empty\n");
	}else {
		printf("stack elements are..\n");
		for( ; i>=0; i--)
			printf("%d\t", stack[i]);
	}
return 0;
}
int delete_stack(void)
{
	top=-1;
}
