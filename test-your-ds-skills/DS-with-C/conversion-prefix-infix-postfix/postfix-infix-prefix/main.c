//postfix to prefix
//postfix to infix
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include"stack.h"

//postfix to infix
void convert_postfix_infix(char *exp)
{
	char temp1[100],temp2[100],result[120];
	char op[2],ch;
	char brace1[2]="(";
	char brace2[2]=")";
	op[1]='\0';

	while(*exp) {
		ch=*exp;
		if(ch=='*' || ch== '/' || ch== '-' || ch=='+')
		{
			op[0]=ch;
			pop(&temp2); //op2
			pop(&temp1); //op1

			strcpy(result,brace1);
			strcat(result,temp1);
			strcat(result,op);
			strcat(result,temp2);
			strcat(result,brace2);
			push(result);
		}else {
			op[0]=ch;
			push(op);
		}
		exp++;
	}
	if(isempty()!=1) {
		pop(&result);
		printf("infix exp = %s\n",result);
	}
}
//postfix to prefix
void convert_postfix_prefix(char *exp)
{
	char temp1[100],temp2[100],result[120];
	char op[2],ch;
	char brace1[2]="(";
	char brace2[2]=")";
	op[1]='\0';

	while(*exp) {
		ch=*exp;
		if(ch=='*' || ch== '/' || ch== '-' || ch=='+')
		{
			op[0]=ch;
			pop(&temp2); //op2
			pop(&temp1); //op1
			strcpy(result,op);
			strcat(result,temp1);
			strcat(result,temp2);
			push(result);
		}else {
			op[0]=ch;
			push(op);
		}
		exp++;
	}
	if(isempty()!=1) {
		pop(&result);
		printf("prefix exp = %s\n",result);
	}
}

int main()
{
	char *postfix="AB+CD-*";

	printf("postfix exp = %s\n",postfix);

	//postfix to infix
	convert_postfix_infix(postfix);
	//postfix to prefix
	convert_postfix_prefix(postfix);
}
