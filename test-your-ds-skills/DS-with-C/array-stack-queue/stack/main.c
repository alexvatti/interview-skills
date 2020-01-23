#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "stack.h"

//menu
int menu()
{
	printf("\n1. push operation\n");
	printf("2. pop operation\n");
	printf("3. top operation\n");
	printf("4. stack display operation\n");
	printf("5. stack delete operation\n");
	printf("6. exit the app\n");
	printf("Enter your choice:\n");
}

int main()
{
	char ch;
	int val;
	do {
		menu();
		scanf("%c",&ch);
		switch(ch){
			case '1':
				push();
				break;
			case '2':
				val=pop();
				printf("pop val=%d\n",val);
				break;
			case '3':
				val=top_stack();
				printf("top val=%d\n",val);
				break;
			case '4':
				display_stack();
				break;
			case '5':
				delete_stack(); 
				break;
			case '6':
			default:
				break;
		}
	} while(ch<='5');
}
