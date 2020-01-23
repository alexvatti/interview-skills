/*
function pointer array and storing/assigning the address of function
*/
#include<stdio.h>

int add(int a,int b)
{
   return (a+b);
}
int sub(int a,int b)
{
   return (a-b);
}

int main()
{
   int (*fun_ptr[2])(int,int)={add,sub};
   int c;

      c=(*fun_ptr[0])(10,20);
      printf("\n addition value=%d\n",c);
      c=(*fun_ptr[1])(10,20);
      printf("\n substraction value=%d\n",c);
}

