/*
void pointer, and type casting, derefrence
*/
#include<stdio.h>

int main()
{
    char char_a='A';
    int int_a=123;
    void *ptr;
    int *int_ptr=&int_a;
    char *char_ptr=&char_a;

    ptr=(void*)&int_a;
    printf("\n value of int a=%d",int_a);
    printf("\n value of int a=%d",*int_ptr);
    printf("\n value of int a=%d",*(int*)ptr);

    ptr=(void*)&char_a;
    printf("\n value of char a=%c",char_a);
    printf("\n value of char a=%c",*char_ptr);
    printf("\n value of char a=%c",*(char*)ptr);
    printf("\n");

}
