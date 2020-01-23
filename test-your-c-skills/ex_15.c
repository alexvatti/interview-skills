#include<stdio.h>
#include<stdarg.h>

int fun(int x,int y,...)
{
   va_list opt;
   int a;
   char *ptr;
   int i;

   printf("\n value of x=%d\n",x);
   printf("\n value of y=%d\n",y);
   va_start(opt,y);

   for(i=0;i<y;i++)
   {
       ptr=va_arg(opt,char*);
       printf("\n string =%s\n",ptr);
   }

   va_end(opt);
}

int main()
{
   fun(1,3,"alex","stephen","aravind");
}

