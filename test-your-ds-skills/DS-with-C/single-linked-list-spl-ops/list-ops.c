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
			//printf("%d\t", temp->val);
			temp=temp->link;
			count++;
		}
	}
	
return count;
}

int add_node_last(void)
{
	int val;
	struct node *temp,*temp1,*temp2;
	printf("Enter the value:\n");
	scanf("%d",&val);
	temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL){
		printf("node:memory allocation failed\n");
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

int reverse_list(void)
{
	struct node *prev,*cur,*next;
	cur=head;
	if(head==NULL)
		printf("list is empty\n");
	else {
		prev=NULL;
		while(cur) {
			next=cur->link;
			cur->link=prev;
			prev=cur;
			cur=next;
		}
		head=prev;
	}

}

int middle_node_list(void)
{
	struct node *fast,*slow;
	if(head==NULL){
		printf("list is empty\n");
		return -1;
	}else {
	fast=slow=head;
	while(fast->link!=NULL && slow!=NULL) {
		if(fast->link->link!=NULL) {
			fast=fast->link->link;
			slow=slow->link;
		}else {
			printf("mid node value=%d\n",slow->val);
			return (slow->val);
		}
	}
	printf("mid node value=%d\n",slow->val);
	return (slow->val);
	}
}

int nth_node_end_list(void)
{
	int pos;
	struct node *fast,*slow;
	printf("Enter the nth node pos:\n");
	scanf("%d",&pos);
	printf("list node count=%d\n",count_list());

	if(pos > count_list())	{
		printf("node position is out of boundaries\n");
		return -1;
	}else {
		fast=slow=head;
		while(pos > 0 ){
			fast=fast->link;
			pos--;
		}
		while(fast !=NULL){
			fast=fast->link;
			slow=slow->link;
		}
		printf("node value=%d\n",slow->val);
		return(slow->val);

	}
}

//FIXME
int rotate_list_pos(void)
{
	int pos;
	struct node *prev,*cur,*next,*save;
	cur=head;
	printf("Enter the nth node pos:\n");
	scanf("%d",&pos);

	if(pos >= count_list())	{
		printf("node position:out of boundaries\n");
	}else {
		while(pos >=0 ){
			save=cur;
			cur=cur->link;
			pos--;
		}
		
		prev=NULL;
		while(cur) {
			next=cur->link;
			cur->link=prev;
			prev=cur;
			cur=next;
		}
		save->link=prev;

	}

}

int display_list(void)
{
	
	struct node *temp;
	if(head==NULL) {
		printf("list is empty\n");
	}else {
		printf("list elements are(first to last)\n");
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
