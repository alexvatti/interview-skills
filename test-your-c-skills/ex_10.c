/*
function arguemtns as function pointer
*/
#include<stdio.h>
int sub(int a,int b)
{
   int c;
    c=a-b;
    return c;
}
int add(int a,int b, int(*fp)(int,int))
{
        int c;
        c=a+b;
        c=(*fp)(a,b);
        return c;
}
int main()
{
    int (*fun_ptr)(int,int, int(*fp)(int,int));
    int c;

        fun_ptr=add;
        c=(*fun_ptr)(10,20,&sub);
        printf("\nvalue of c= %d\n",c);
}
