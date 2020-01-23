//in a given string ...every char need to rotate with offset, if it cross, in wrap it
#include<stdio.h>
#include<string.h>

char* caesarCipher(char* s, int k) {

    char *ptr=s;
    unsigned char ch;
    int offset;

    while(*ptr){
        ch=*ptr;
        if((ch=='-') || (ch=='.')) {

        }else {
            
	    printf("input ch=%c\n",ch);
            if(ch >='a' && ch<='z') {
                ch=ch + k;
                offset=ch-'z';
		printf("offset=%d\n",offset);
                if(offset > 0) {
                    ch='a'+(offset-1);
                }
		printf("ch=%c\n",ch);
            } else if(ch >='A' && ch<='Z') {
                ch=ch + k;
                offset=ch-'Z';
                if(offset >0) {
                    ch='A'+(offset-1);
                }
		printf("CH=%c\n",ch);
            }
        }
        *ptr=ch;
        ptr++;
    }
    return s;


}

int main()
{
	char str[]="Ciphering.";
	char*ptr=caesarCipher(str,26);
	printf("string=%s\n",ptr);
	return 0;
}
