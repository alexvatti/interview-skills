#include<stdio.h>

void printbits(int a)
{
   int i;
   for(i=((sizeof(int)*4)-1);i>=0;i--)
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
    int a=-3;
    printbits(a);
    a=clear_bit(a,1);
    printf("\nvalue of a after clear bit=%d\n",a);
    a=set_bit(a,1);
    printf("value of a after set bit =%d\n",a);
    a=toggle_bit(a,1);
    printf("value of a after set bit =%d\n",a);
}

