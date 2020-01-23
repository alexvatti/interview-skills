
/*
function return address of another function
*/
#include<stdio.h>
int sub(int a,int b)
{
   int c;
    c=a-b;
    return c;
}
int (*add(int a,int b))(int,int)
{
        int c;
        c=a+b;
        return sub;
}
int main()
{
    int (*fun_ptr1)(int,int);
    int (*(*fun_ptr2)(int,int))(int,int)=add;
    int c;

        fun_ptr1=fun_ptr2(10,20);
        c=(*fun_ptr1)(10,20);
        printf("\nvalue of c= %d\n",c);
}
