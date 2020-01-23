#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "stack.h"

struct bst *stack[MAX_SIZE];
int top=-1;

int push(struct bst *s)
{
	
	if(top >= MAX_SIZE) {
		printf("stack overflow:reaced max capacity\n");
		return -1;
	} else {
		top++;
		stack[top]=s;
	}
	return 0;
}

struct bst* pop(void)
{
	struct bst* val=NULL;
	if(top==-1) {
		printf("stack empty\n");
		return NULL;
	} else {
		val=stack[top];
		top--;
		return val;
	}
}

struct bst* top_stack(void)
{
	struct bst *val=NULL;
	if(top==-1) {
		printf("stack is  empty\n");
		return NULL;
	} else {
		val=stack[top];
		return val;
	}
}

int isempty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}

int delete_stack(void)
{
	top=-1;
}
