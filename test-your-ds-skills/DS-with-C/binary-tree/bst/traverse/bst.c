#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "stack.h"

struct bst *create()
{
	struct bst *temp=(struct bst*)malloc(sizeof(struct bst));
	if(temp==NULL){
		printf("node :memory allocation failed\n");
		return NULL;
	}else {
		return temp;
	}
}

int count_nodes(struct bst *root)
{
    if(root == NULL)
	return 0;
    else 
	return(count_nodes(root->left)+1+count_nodes(root->right));
    
}

//inorder
void inorder(struct bst *root)
{
	if(root!=NULL) {
		inorder(root->left);
		printf("%d\t",root->val);
		inorder(root->right);
	}
}
//preorder
void preorder(struct bst *root)
{
	if(root!=NULL) {
		printf("%d\t",root->val);
		preorder(root->left);
		preorder(root->right);
	}
}
//postorder
void postorder(struct bst *root)
{
	if(root!=NULL) {
		postorder(root->left);
		postorder(root->right);
		printf("%d\t",root->val);
	}
}

//inorder using stack - iterative
void inorder_stack(struct bst *root)
{
	int eol=1;
	while(eol) {
		if(root!=NULL){
			push(root);
			root=root->left;
		}else {
			if(isempty()==1)  
				eol=0;
			else {
				root=pop();
				printf("val=%d\t",root->val);
				root=root->right;
			}
		}
	}
}
		
//preorder using stack - iterative
void preorder_stack(struct bst *root)
{
	int eol=1;
	while(eol) {
		if(root!=NULL){
			printf("val=%d\t",root->val);
			push(root);
			root=root->left;
		}else {
			if(isempty()==1)  
				eol=0;
			else {
				root=pop();
				root=root->right;
			}

		}
	}
}

//level order
void printLevelOrder(struct bst* root) 
{ 
	while (root) 
	{ 
		printf("val=%d\t", root->val); 

		/*Enqueue left child */
		if (root->left) 
			en_queue(root->left); 

		/*Enqueue right child */
		if (root->right) 
			en_queue(root->right); 

		/*Dequeue node and make it temp_node*/
		root = de_queue(); 
	} 
}

//postorder using stack - iterative
//FIXME: not fully implemented
void postorder_stack(struct bst *root)
{
	int eol=1;
	while(eol) {
		if(root!=NULL){
			push(root);
			root=root->left;
		}else {
			if(isempty()==1)  
				eol=0;
			else {
				if(top_stack()->right==NULL){
					root=pop();
					printf("val=%d\t",root->val);
					root=NULL;

				} else {
					root=top_stack()->right;
				}

			}
		}
	}
}


void insert(struct bst **root,int val)
{
	if(*root==NULL){
		*root=create();
		(*root)->val=val;
		(*root)->left=NULL;
		(*root)->right=NULL;
	}else {

		if(val < (*root)->val){
			insert(&(*root)->left,val);
		}
		if(val > (*root)->val){
			insert(&(*root)->right,val);
		}
	}
}

int main()
{
	struct bst *root=NULL;
	insert(&root,10);
	insert(&root,5);
	insert(&root,12);
	insert(&root,6);
	insert(&root,4);
	
	printf("\nin-order traversal: "); 
	inorder_stack(root);
	printf("\npre-order traversal: "); 
	preorder_stack(root);
	printf("\npost-order traversal: "); 
	postorder(root);
	printf("\n");
	printf("\nlevel-order traversal: "); 
	printLevelOrder(root); 
	printf("\n");
	printf("number of nodes=%d\n",count_nodes(root));
	printf("\n"); 
}	
