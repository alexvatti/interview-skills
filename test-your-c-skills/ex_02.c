#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_ROWS 5
#define MAX_COLUMNS 5
//allocate two dimentional array dynamically
int**  alloc_two_dim_array(int rows,int columns)
{
	int i , j;
	int **ptr=NULL;

	if((rows >= MAX_ROWS) || (columns >= MAX_COLUMNS)){
		return NULL;
	}else {
		ptr=(int**)malloc(sizeof(int*)*rows);
		if(ptr==NULL){
			printf("memory allocation failed\n");
			return NULL;
		}else {
			for(i=0;i<rows;i++){
				ptr[i]=(int*)malloc(sizeof(int)*columns);
				if(ptr[i]==NULL) {
					printf("memory allocation failed\n");
					for(j=0;j<i;j++)
						free(ptr[i]);
					free(ptr);
					ptr=NULL;
					return NULL;
				}

			}
			return ptr;

		}
		return ptr;
	}
}

int main()
{
	int **ptr;
	int i=4,j=4;
	int k,l;

	ptr=alloc_two_dim_array(i,j);
        if(ptr==NULL) 
		return 0;	
	for(k=0;k<i;k++){
		for(l=0;l<j;l++){
			printf("%d\t",ptr[k][l]);
		}
		printf("\n");
	}
	for(k=0;k<j;k++){
		free(ptr[k]);
	}
	free(ptr);
return 0;
}
		
		
		
