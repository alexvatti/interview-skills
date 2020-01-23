#include<stdio.h>
#include<stdlib.h>
#include<string.h>

long int fact_iterative(int n)
{
	long int fact=1;
	int i;
	for(i=1;i<=n;i++) {
		fact =fact * i;
	}

	printf("fact of given number=%d is %ld\n",n,fact);
	return fact;
}
long int fact_recursive(int n)
{
	if(n==1) 
		return 1;
	else
		return(n*fact_recursive(n-1));
	
}
	
int main()
{
	int n=10;
	long int f=fact_recursive(n);
	printf("fact of given number=%d is %ld\n",n,f);
	f=fact_iterative(n);
	printf("fact of given number=%d is %ld\n",n,f);
}
