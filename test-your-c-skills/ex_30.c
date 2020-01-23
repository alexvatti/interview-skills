#include<stdio.h>
#include<string.h>
#include<stdarg.h>

char *convert(int val, int base)
{
	static char buffer[100];
	char *buf_ptr=&buffer[100-1];
	
	*buf_ptr='\0';

	do {

		*--buf_ptr="0123456789ABCDEF"[val%base];
		val=val/base;
	}while(val!=0);
	return buf_ptr;
}

void myprintf(char *fptr,...)
{
	char *ptr,ch,*str;
	va_list list;
	int  ch_val;
	unsigned int val;

	va_start(list,fptr);
	ptr=fptr;
	for(ptr=fptr;*ptr!='\0'; ptr++) {
		if(*ptr!='%') {
			putchar(*ptr);
			continue;
		}
		ptr++;
		ch=*ptr;
		switch(ch) {

			case 'c':
				ch_val=va_arg(list,int);
				putchar(ch_val);
				break;
			case 's':
				str=va_arg(list, char*);	
				puts(str);
				break;
			case 'd':
				val=va_arg(list, unsigned int);
				puts(convert(val,10));
				break;
			case 'x':
				val=va_arg(list,unsigned int);
				puts(convert(val,16));

				break;
			case 'o':
				val=va_arg(list,unsigned int);
				puts(convert(val,8));
				break;
		}

	}
	va_end(list);

}
int main()
{
	myprintf("welcome to hello world: %d %x %o %c %s", 100,100,100,'a',"string value");
	return 0;
}
