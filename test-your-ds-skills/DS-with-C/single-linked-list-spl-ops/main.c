#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "list.h"

//menu - linked list - spl - operations
int menu()
{
	printf("\n1. add node at last: operation\n");
	printf("2. Reverse of a given list\n");
	printf("3. middle node of given list\n");
	printf("4. nth node from the end of the list\n");
	printf("5. Rotate the list at given position\n");
	printf("6. display list(first-last..position) operation\n");
	printf("7. delete linked list operation\n");
	printf("8. exit\n");
	printf("Enter your choice\n");
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
				add_node_last();
				break;
			case '2':
				reverse_list();
				break;
			case '3':
				middle_node_list();
				break;
			case '4':
				nth_node_end_list();
				break;
			case '5':
				rotate_list_pos();
				break;
			
			case '6':
				display_list();
				break;
			case '7':
				delete_list(); 
				break;
			case '8':
			default:
				break;
		}
	} while(ch<='7');
}
