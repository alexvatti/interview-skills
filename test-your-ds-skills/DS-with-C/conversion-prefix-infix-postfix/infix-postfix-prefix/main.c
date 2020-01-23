//conversion: infix to prefix
//conversion: infix to postfix

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"stack.h"

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}


void convert_infix_postfix(char *exp)
{
	char ch,i=0,x,result[100];
	printf("postfix exp =");

	while(*exp) {
		ch=*exp;

		if(isalnum(ch)){
			result[i++]=ch;
		}else if(ch==')'){
			while(isempty()!=1){
				x=pop();
				if(x!='(')
			   		result[i++]=x;
                	}
	       }else {
	   	 push(ch);
	       }
	       exp++;

	}
	while(isempty()!=1)
        {
        	result[i++]=pop();
        }
        result[i]='\0';
	printf("%s\n",result);
}

void convert_infix_prefix(char *exp)
{
	char ch,i=0,x,result[100];

	while(*exp) {
		ch=*exp;

		if(isalnum(ch)){
			result[i++]=ch;
		}else if(ch==')'){
			while(isempty()!=1){
				x=pop();
				if(x!='(')
			   		result[i++]=x;
                	}
	       }else {
	   	 push(ch);
	       }
	       exp++;

	}
	strrev(result);	
        printf("prefix exp =%s\n",result);
}

int main()
{
	char exp[]="((A+B)*(C-D))";
	int i;

	printf("Infix exp = %s\n",exp);
	//convert infix to postfix
	convert_infix_postfix(exp);


	//convert infix to prefix
	//step1: reverse the infix
    	strrev(exp);
	//step 2: convert '(' to ')' and vice-versa
    	for(i=0;i<strlen(exp);i++)
    	{
		if(exp[i]=='(')
	    		exp[i]=')';
		else if(exp[i]==')')
	    		exp[i]='(';
		else {
		}
    	}
	convert_infix_prefix(exp);
}
