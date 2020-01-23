#include<stdio.h>

int main(int argc,char **argv)
{
    int a=1;
    char *char_ptr=NULL;

    char_ptr=(char*)&a;
    if(*char_ptr == 0x01)
        printf("\nGiven system  is little endian\n");
    else
        printf("\nGiven system is big endian\n");

    printf("It's %ld bit system \n", sizeof(void *) * 8);
return 0;
}

