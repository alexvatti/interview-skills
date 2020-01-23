#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "queue.h"

int queue[MAX_SIZE];
int front=-1;
int rear=-1;

int en_queue(void)
{
	int val;
	printf("Enter the value\n");
	scanf("%d",&val);

	if((front==-1) && (rear==-1)){
		rear++;
		queue[rear]=val;
		front=rear;
	}else {
		if(rear >= MAX_SIZE) {
			printf("queue exceds max size: overflow\n");
			return -1;
		}else {
			rear++;
			queue[rear]=val;
		}
	}
	return 0;
}
int de_queue(void)
{
	int val;
	if((front==-1) || (front > rear)) {
		printf("queue is empty\n");
		return -1;
	} else {
		val=queue[front];
		front++;
		return val;
	}
}
int front_queue(void)
{
	int val;
	if((front==-1) || (front > rear)) {
		printf("queue is  empty\n");
		return -1;
	} else {
		val=queue[front];
		return val;
	}
}
int display_queue(void)
{
	int i=front;
	if((front==-1) || (front > rear)) {
		printf("queue is empty\n");
	}else {
		printf("queue elements are...\n");
		for( ; i<=rear; i++)
			printf("%d\t", queue[i]);
	}
return 0;
}
int delete_queue(void)
{
	front=-1;
	rear=-1;
}
