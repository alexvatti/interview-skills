#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "list.h"
struct node {
	int val;
	struct node *link;
};
struct node *head=NULL;

int count_list(void)
{
	
	struct node *temp;
	int count=0;

	if(head==NULL) {
		printf("list is empty\n");
		return 0;
	}else {
		
		temp=head;
		while(temp){
			printf("%d\t", temp->val);
			temp=temp->link;
			count++;
		}
	}
	
return count;
}

int add_node_first(void)
{
	int val;
	struct node *temp,*temp1,*temp2;
	printf("Enter the value:\n");
	scanf("%d",&val);
	temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL) {
		printf("node: memory allocation failed\n");
		return -1;
	} else {
		if(head==NULL) {
			temp->val=val;
			temp->link=NULL;
			head=temp;
		} else {
		
			temp1=head;
			while(temp1){
				temp2=temp1;
				temp1=temp1->link;
			}
			temp->val=val;
			temp->link=NULL;
			temp2->link=temp;
		}
	}
	return 0;
}

int add_node_last(void)
{
	int val;
	struct node *temp;
	printf("Enter the value:\n");
	scanf("%d",&val);
	temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL){
		printf("node: memory allocation failed\n");
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

int add_node_pos(void)
{
//FIXME
}

int del_node_pos(void)
{
//FIXME
}

int del_node_first(void)
{
	int val;
	struct node *temp1,*temp2;
	
	if(head==NULL)
		printf("list is empty\n");
	else {
		temp1=head;
		if(temp1->link==NULL) {
			printf("first:del node val=%d\n",temp1->val);
			free(temp1);
			head=NULL;
		} else {
			while(temp1->link){
				temp2=temp1;
				temp1=temp1->link;
			}
			printf("first:del node val=%d\n",temp1->val);
			free(temp1);
			temp2->link=NULL;
		}

	}
	return 0;
}

int del_node_last(void)
{
	int val;
	struct node *temp;
	if(head==NULL) {
		printf("list is  empty\n");
		return -1;
	} else {
		temp=head;
		val=temp->val;
		head=temp->link;
		printf("last: del node val=%d\n",val);
		free(temp);
		return val;
	}
}

int display_list(void)
{
	
	struct node *temp;
	if(head==NULL) {
		printf("list is empty\n");
	}else {
		printf("list elements are(last to first..Position)\n");
		temp=head;
		while(temp){
			printf("%d\t", temp->val);
			temp=temp->link;
		}
	}
return 0;
}
int delete_list(void)
{
	struct node *temp,*temp1;
	if(head==NULL) {
		printf("list is empty\n");
	}else {
		temp=head;
		while(temp){
			temp1=temp;
			temp=temp->link;
			free(temp1);
		}
		head=NULL;
	}
}
