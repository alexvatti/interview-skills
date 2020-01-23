//number conversion: from decimal to hexa, decimal to oct,decimal to binary
/*
number conversion:
from deciaml to hexa,
decimal to oct,
deciaml to binary
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

void decimal_to_binary(int decimal)
{
    int quo,i=0;
    char str[32]; 
    while(decimal!=0)
    {
       quo=decimal%2;
       printf("quo=%d\n",quo);
       str[i]=quo;
       decimal=decimal/2;
       i++;
    }
    while(i--) {
      printf("%d",str[i]);
    } 
    printf("\n");
}
void decimal_to_octa(int decimal)
{
     int quo,i=0;
     char str[8];
     
     while(decimal!=0)
     {
        quo=decimal%8;
        printf("oct quo=%d\n",quo);
        str[i]=quo;
        decimal=decimal/8;
        i++;
    }
    while(i--) {
        printf("%d",str[i]);
    }
    printf("\n");
}
void decimal_to_hexa(int decimal)
{
    int quo,i=0;
     char str[8];
    
    while(decimal!=0)
    {
        quo=decimal%16;
        printf("hexa quo=%d\n",quo);
        str[i]=quo;
        decimal=decimal/16;
        i++;
    }
    while(i--) {
          printf("%d",str[i]);
    }
    printf("\n");
}


int main()
{
    int n=512;
    decimal_to_binary(n);
    decimal_to_octa(n);
    decimal_to_hexa(n); 
return 0;
}
