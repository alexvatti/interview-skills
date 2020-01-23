#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "stack.h"

struct node {
	char ptr[100];
	struct node *link;
};

struct node *head=NULL;

int push(char *s)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL) {
		printf("node : memory allocation failed\n");
		return -1;
	} else {
		if(head==NULL){
			strcpy(temp->ptr,s);
			temp->link=NULL;
			head=temp;
		}else {
			strcpy(temp->ptr,s);
			temp->link=head;
			head=temp;
	}	}
	return 0;
}
char* pop(char *d)
{
	char val;
	struct node *temp;
	if(head==NULL) {
		printf("stack linked list is  empty\n");
		return NULL;
	} else {
		temp=head;
		strcpy(d,temp->ptr);
		head=temp->link;
		free(temp);
		return d;
	}
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
