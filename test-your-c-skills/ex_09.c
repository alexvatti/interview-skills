/* calling the function using function pointer
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
    int (*fun_ptr)(int,int);
    int c;

        fun_ptr=add;
        c=(*fun_ptr)(10,20);
        printf("\nvalue (function return value)= %d\n",c);
}
