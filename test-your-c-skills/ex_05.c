#include<stdio.h>

#define VALUE_USED_TESTING 1

int main(int argc,char **argv)
{
    int a=VALUE_USED_TESTING;
    unsigned char *char_ptr=NULL;

    char_ptr=(unsigned char*)&a;
    if(*char_ptr == VALUE_USED_TESTING)
        printf("\nGiven system  is little endian\n");
    else
        printf("\nGiven system is big endian\n");

    printf("It's %ld bit system \n", sizeof(void *) * 8);
return 0;
}

