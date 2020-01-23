#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "queue.h"
//menu function
int menu()
{
	printf("\n1. en-queue operation\n");
	printf("2. de-queue operation\n");
	printf("3. front value of queue operation\n");
	printf("4. display queue operation\n");
	printf("5. delete queue operation\n");
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
				en_queue();
				break;
			case '2':
				val=de_queue();
				printf("de queue val=%d\n",val);
				break;
			case '3':
				val=front_queue();
				printf("queue front val=%d\n",val);
				break;
			case '4':
				display_queue();
				break;
			case '5':
				delete_queue(); 
				break;
			case '6':
			default:
				break;
		}
	} while(ch<='5');
}
