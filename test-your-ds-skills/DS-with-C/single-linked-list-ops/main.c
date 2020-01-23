#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "list.h"

//menu -single - linked list operations
int menu()
{
	printf("1. add node at first: operation\n");
	printf("2. add node at end : operation\n");
	printf("3. add node at given pos : operation\n");
	printf("4. del-node: at first: operation\n");
	printf("5. del-node: at last: operation\n");
	printf("6. del-node: at given pos: operation\n");
	printf("7. display list(first-last position)operation\n");
	printf("8. delete linked list operation\n");
	printf("9. exit app\n");
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
				add_node_first();
				break;
			case '2':
				add_node_last();
				break;
			case '3':
				add_node_pos();
				break;
			case '4':
				del_node_first();
				break;
			case '5':
				del_node_last();
				break;
			case '6':
				del_node_pos();
				break;

			case '7':
				display_list();
				break;
			case '8':
				delete_list(); 
				break;
			case '9':
			default:
				break;
		}
	} while(ch<='8');
}
