#include<stdio.h>

int main()
{
        char name[]="Alexander";
        char *ptr=name;

        printf("name=%s\n",ptr);
        *ptr++;
        printf("name=%s\n",ptr);
        (*ptr)++;
        printf("name=%s\n",ptr);
        ++*ptr;
        printf("name=%s\n",ptr);
}
