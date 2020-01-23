#ifndef _STACK_H
#define _STACK_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_SIZE 100

struct bst {
        struct bst *left;
        int val;
        struct bst *right;
};

int push(struct bst*);
struct bst* pop(void);
struct bst* top_stack(void);
int isempty(void);
int delete_stack(void);

int en_queue(struct bst *);
struct bst *de_queue(void);
#endif
