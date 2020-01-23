/*
void pointer holding the address of function
how to call the function,using void pointer
*/
#include<stdio.h>
int add(int a,int b)
{
   int c;
    c=a+b;
    return c;
}
int main()
{
    void *ptr=add;
    int c;

    c=((int (*)(int,int))ptr)(10,20);
    printf("\n add value=%d\n",c);
}
