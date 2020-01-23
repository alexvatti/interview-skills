#include<stdio.h>
#include<stdarg.h>

int add(int a,int b)
{
        return (a+b);
}
int sub(int a,int b)
{
        return (a-b);
}
int fun(int x,int y,...)
{
   va_list opt;
   int (*fun_ptr1)(int,int);
   int (*fun_ptr2)(int,int);
   typedef int (*fun_ptr)(int,int);
   int c;

   printf("\n value of x=%d\n",x);
   printf("\n value of y=%d\n",y);
   va_start(opt,y);
   fun_ptr1=va_arg(opt,fun_ptr);
   fun_ptr2=va_arg(opt,fun_ptr);

   c=(*fun_ptr1)(10,20);
   printf("\n value of c[add]=%d\n",c);
   c=(*fun_ptr2)(10,20);
   printf("\n value of c[sub]=%d\n",c);

  va_end(opt);
}

int main()
{
   fun(1,2,&add,&sub);
}

