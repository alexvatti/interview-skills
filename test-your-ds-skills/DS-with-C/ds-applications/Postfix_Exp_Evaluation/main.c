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

int main()
{
	int ch,val,i;
	int exp[]={2,1,'+',3,'*'};
	int op1_flag=0,op2_flag=0;
	int sum=0;
	int op,op1,op2;

	stack_top=-1;
	
	for(i=4;i>=0;i--)
	{
		push(exp[i]);
	}

	while(stack_empty()!=1){

	op=pop();
	if(op=='+' || op=='-' || op=='*' || op=='/'){
		ch=op;
		switch(ch){
		case '+': sum=op1+op2; break;
		case '-': sum=op1-op2; break;
		case '*': sum=op1*op2; break;
		case '/': sum=op1/op2; break;
		}
		op1=sum;
		op1_flag=1;
	}else {
		if(op1_flag==0){
			op1=op; 
			op1_flag=1;
		}else if(op2_flag==0){
			op2=op;
			op2_flag=0;
		}else {

		}
        } 
     }//while
     printf("expression...\n");
     for(i=0;i<5;i++){
	  if(exp[i]=='+' || exp[i]=='-' || exp[i]=='*' || exp[i]=='/')	
              printf("\"%c\"," ,exp[i]);	
	  else
	     printf("\"%d\"," ,exp[i]);	
    }

     printf("\noutput=%d\n",sum);
}
