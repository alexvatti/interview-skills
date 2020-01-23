#include<stdio.h>

void printbits(int a)
{
   int i;
   for(i=((sizeof(int)*8)-1);i>=0;i--)
   {
        if(a & (1 << i))
                printf("1");
        else
                printf("0");
   }
}

#define set_bit(var ,pos) var=(var | (1<<pos))
#define clear_bit(var ,pos) var=(var & ~(1<<pos))
#define toggle_bit(var,pos) var=(var ^ (1<<pos))
int main()
{
    int a=20,b=10;
    	printbits(a);
	printf("\n");
    int c= ~a + 1;
    	printbits(c);
	printf("\n");
    int diff = c + b;
    	printbits(diff);
	printf("\n");
	printf("diff=%d\n",diff);
}

