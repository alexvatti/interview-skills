#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//find, given two int variable, have different sign or not
// Return 1 ==> having different sign
// Return 0 ==> having the same sign
int find_sign(int a , int b)
{
	int flag1,flag2;

	flag1=a&(1<<((sizeof(int)*8)-1));
	flag2=b&(1<<((sizeof(int)*8)-1));

	if(flag1==flag2){
		printf("Both are having the same sign\n");
		return 0;

	}else {
		printf("Both are having the different sign\n");
		return 1;
	}
}
int main()
{
	int a=10,b=-20;
	int ret=0;

	ret=find_sign(a,b);
	if(ret==1){
		printf("Given int variables have the different sign\n");
	} else {
		printf("Given int variables have the same sign\n");
	}
	return 0;
}
