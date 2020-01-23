#include<stdio.h>

int main()
{
	int num1,num2,tol=0;
	printf("enter two numbers\n");
	scanf("%d%d",&num1,&num2);
	while(num1 > 0) {
		if(num1 & 1) {
			tol+=num2;
		}
		num1=num1>>1;
		num2=num2<<1;
	}
	printf("total=%d\n",tol);
	return 0;
}
