#include<stdio.h>
#include<math.h>

void function(char **ptr) 
{
	char *ptr1;
	ptr1= (ptr+sizeof(int))[-2];
	printf("%s\n", ptr1);
}

int main()
{
        char *arr[]= { "ant", "bat", "cat", "dog", "egg", "fly"};
	function(arr); 
	return 0;
}
