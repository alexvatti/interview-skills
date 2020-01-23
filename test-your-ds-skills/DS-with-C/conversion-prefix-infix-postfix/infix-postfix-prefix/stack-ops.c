#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "stack.h"

struct node {
	char val;
	struct node *link;
};

struct node *head=NULL;

int push(char val)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL) {
		printf("node : memory allocation failed\n");
		return -1;
	} else {
		if(head==NULL){
			temp->val=val;
			temp->link=NULL;
			head=temp;
		}else {
			temp->val=val;
			temp->link=head;
			head=temp;
	}	}
	return 0;
}
char pop(void)
{
	char val;
	struct node *temp;
	if(head==NULL) {
		printf("stack linked list is  empty\n");
		return -1;
	} else {
		temp=head;
		val=temp->val;
		head=temp->link;
		free(temp);
		return val;
	}
}
char top_stack(void)
{
	char val;
	if(head==NULL) {
		printf("stack is  empty\n");
		return -1;
	} else {
		val=head->val;
		return val;
	}
}
int display_stack(void)
{
	
	struct node *temp;
	if(head==NULL) {
		printf("Stack is empty\n");
	}else {
		printf("stack elements are...\n");
		temp=head;
		while(temp){
			printf("%d\t", temp->val);
			temp=temp->link;
		}
	}
return 0;
}
int isempty()
{
	if(head==NULL)
		return 1;
	else
		return 0;
}
int delete_stack(void)
{
	struct node *temp,*temp1;
	if(head==NULL) {
		printf("Stack is empty\n");
	}else {
		printf("stack elements are\n");
		temp=head;
		while(temp){
			temp1=temp;
			temp=temp->link;
			free(temp1);
		}
		head=NULL;
	}
}
