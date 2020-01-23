//prefix to postfix
//prefix to infix
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"stack.h"

//convert prefix to postfix
void convert_prefix_postfix(char *exp)
{
	char temp1[100],temp2[100],result[120];
	char op[2],ch;
	char brace1[2]="(";
	char brace2[2]=")";
	op[1]='\0';

	int i = strlen(exp),j;

	for(j=i-1;j>=0;j--) {
		ch=exp[j];
		//printf("ch=%c\n",ch);
		if(ch=='*' || ch== '/' || ch== '-' || ch=='+')
		{
			op[0]=ch;
			pop(&temp2); //op2
			pop(&temp1); //op1
			strcpy(result,temp2);
			strcat(result,temp1);
			strcat(result,op);
			push(result);
		}else {
			op[0]=ch;
			push(op);
		}
		
	}
	if(isempty()!=1) {
		pop(&result);
		printf("postfix exp =%s\n",result);
	}
}

//convert prefix to infix
void convert_prefix_infix(char *exp)
{
	char temp1[100],temp2[100],result[120];
	char op[2],ch;
	char brace1[2]="(";
	char brace2[2]=")";
	op[1]='\0';

	int i = strlen(exp),j;

	for(j=i-1;j>=0;j--) {
		ch=exp[j];
		//printf("ch=%c\n",ch);
		if(ch=='*' || ch== '/' || ch== '-' || ch=='+')
		{
			op[0]=ch;
			pop(&temp2); //op2
			pop(&temp1); //op1
			strcpy(result,brace1);
			strcat(result,temp2);
			strcat(result,op);
			strcat(result,temp1);
			strcat(result,brace2);
			push(result);
		}else {
			op[0]=ch;
			push(op);
		}
		
	}
	if(isempty()!=1) {
		pop(&result);
		printf("infix exp =%s\n",result);
	}
}

int main()
{
	char *prefix="*+AB-CD";
	
	printf("prefix exp = %s\n",prefix);
	//prefix to postfix
	convert_prefix_postfix(prefix);
	//prefix to infix
	convert_prefix_infix(prefix);
}
