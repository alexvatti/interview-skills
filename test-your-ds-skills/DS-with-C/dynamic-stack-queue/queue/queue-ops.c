#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "queue.h"

struct node {
	int val;
	struct node *link;
};

struct node *front=NULL,*rear=NULL;

int en_queue(void)
{
	int val;
	struct node *temp;
	printf("Enter the value:\n");
	scanf("%d",&val);

	temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL){
		printf("node : memory allocation failed\n");
		return -1;
	} else {
		if((front==NULL)&& (rear==NULL)){
			temp->val=val;
			temp->link=NULL;
			front=rear=temp;
		}else {
			temp->val=val;
			temp->link=NULL;
			rear->link=temp;
			rear=temp;
	}	}
	return 0;
}
int de_queue(void)
{
	int val;
	struct node *temp;
	if((front==NULL)) {
		printf("queue is empty\n");
		return -1;
	} else {
		temp=front;
		val=temp->val;
		front=temp->link;
		free(temp);
		if(front==NULL) 
			rear=NULL;
		return val;
	}
}
int front_queue(void)
{
	int val;
	if((front==NULL)) {
		printf("queue is  empty\n");
		return -1;
	} else {
		val=front->val;
		return val;
	}
}
int display_queue(void)
{
	struct node *temp;
	if(front==NULL) {
		printf("queue is empty\n");
	}else {
		printf("queue elements are...\n");
		temp=front;
		while(temp){
			printf("%d\t", temp->val);
			temp=temp->link;
		}
	}
return 0;
}
int delete_queue(void)
{
	struct node *temp,*temp1;
	if(front==NULL) {
		printf("queue is empty\n");
	}else {
		
		temp=front;
		while(temp){
			temp1=temp;
			temp=temp->link;
			free(temp1);
		}
		front=NULL;
		rear=NULL;
	}
}
