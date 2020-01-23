#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "stack.h"

struct bst *queue[MAX_SIZE];
int front=-1;
int rear=-1;

int en_queue(struct bst *s)
{

	if((front==-1) && (rear==-1)){
		rear++;
		queue[rear]=s;
		front=rear;
	}else {
		if(rear >= MAX_SIZE) {
			printf("queue exceds max size: overflow\n");
			return -1;
		}else {
			rear++;
			queue[rear]=s;
		}
	}
	return 0;
}

struct bst* de_queue(void)
{
	struct bst* val=NULL;
	if((front==-1) || (front > rear)) {
		//printf("queue is empty\n");
		return NULL;
	} else {
		val=queue[front];
		front++;
		return val;
	}
}

int delete_queue(void)
{
	front=-1;
	rear=-1;
}
