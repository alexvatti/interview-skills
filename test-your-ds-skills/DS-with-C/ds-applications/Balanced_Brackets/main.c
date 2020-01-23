/*
A bracket is considered to be any one of the following characters: (, ), {, }, [, or ].

Two brackets are considered to be a matched pair if the an opening bracket (i.e., (, [, or {) occurs to the left of a closing bracket (i.e., ), ], or }) of the exact same type. There are three types of matched pairs of brackets: [], {}, and ().

A matching pair of brackets is not balanced if the set of brackets it encloses are not matched. For example, {[(])} is not balanced because the contents in between { and } are not balanced. The pair of square brackets encloses a single, unbalanced opening bracket, (, and the pair of parentheses encloses a single, unbalanced closing square bracket, ].

By this logic, we say a sequence of brackets is balanced if the following conditions are met:

    It contains no unmatched brackets.
    The subset of brackets enclosed within the confines of a matched pair of brackets is also a matched pair of brackets.

Given n strings of brackets, determine whether each sequence of brackets is balanced. If a string is balanced, return YES. Otherwise, return NO. 
*/


#include<assert.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>
#include<stddef.h>
#include<stdint.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define STACK_MAX 10000
int stack_top=-1;
int stack[STACK_MAX];

int stack_empty()
{
    if(stack_top==-1)
        return 1;
    else 
        return 0;
}
int push(int val){
    if(stack_top==STACK_MAX)
        return 0;
    else {
        stack_top++;
        stack[stack_top]=val;
        return 1;
    }
}

int pop()
{
    int val;
    if(stack_top==-1)
        return 1;
    else {
        val=stack[stack_top];
        stack_top--;
        return val;
    }
}

char* isBalanced(char* s) {
    int len=strlen(s),i=0;
    unsigned char c;
    stack_top=-1;
    
    for(i=0;i<len;i++){
        c=s[i];
    
            switch (c) {
            case '{':
            case '(':
            case '[':
                push(c);
                
                break;
            case '}':
                if (stack_empty()){
                    return "NO";
                } else if(pop() != '{') {
                    return "NO";
                } else {

                }
                break;
            case ')':
                if (stack_empty()){
                    return "NO";
                } else if(pop() != '(') {
                    return "NO";
                } else {

                }
                break;
            case ']':
                if (stack_empty()){
                    return "NO";
                } else if(pop() != '[') {
                    return "NO";
                } else {

                }
                break;
            //default:
               // return "NO";
        }
    }
    //printf("stack top=%d\n",stack_top);
    if(stack_empty()!=1)
        return "NO";
    
    return "YES";
}
