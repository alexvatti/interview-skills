#include<stdio.h>

int main()
{
        char name[]="Alexander";
        char *ptr=name;

        printf("name=%s\n",ptr);
        *ptr++ ; //inc pointer
        printf("name=%s\n",ptr);
        (*ptr)++; //inc value
        printf("name=%s\n",ptr);
        ++*ptr; //inc value
        printf("name=%s\n",ptr);
}
