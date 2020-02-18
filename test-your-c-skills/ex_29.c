#include<stdio.h>

int fun(int n)
{
	static int sum=0;
	if(!n) {
		return 0;
	} else {
		sum+= n%10;
		fun(n/10);
		return(sum);
	}
} 
/*
int fun(int n)
{
	if(n==0)
		return 0;
	else {
		return(n%10 + fun(n/10));
	}
}*/
int main()
{
	printf("sum of digits=%d\n",fun(4567));
	return 0;
}
