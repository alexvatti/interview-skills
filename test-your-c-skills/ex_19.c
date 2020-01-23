/* print a given number in charater string */
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<string.h>

void print_ones_string(int n)
{

	char *ones_name[] = {"One","Two","Three","Four","Five","Six","Seven", "Eight", "Nine" };
	if ( n == 0) return;
	printf("%s ",ones_name[n-1]);
}
void print_tens_string(int n)
{

	char *tens_name[] = {"Ten","Twenty","Thirty","Fourty","Fifty","Sixty","Seventy", "Eighty", "Ninty","Hundered" };
	printf("%s ",tens_name[n-1]);
}
void print_teens_string(int n)
{

	char *teens_name[] = {"Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen", "Eighteen", "Ninteen" };
	printf("%s ",teens_name[n-11]);
}
int main()
{
	int n,h,t;
	printf("Enter a number to print in character string:\n");
	scanf("%d",&n);

	printf("String =");
print:
	if(n>=1 && n<=9) {
		print_ones_string(n);
	}else if ( n>=11 && n <=19) {
		print_teens_string(n);
	} else if ( n >=10 && n <= 99) {
		print_tens_string(n/10);
		print_ones_string(n%10);
	} else if ( n >=100 && n <=999) {
		h=n/100;
		print_ones_string(h);
		printf("Hundered "); 
		n=n- (h*100);
		goto print;
	} else if ( n>=1000 && n <=9999) {
		t=n/1000;
		print_ones_string(t);
		printf("Thousand "); 
		n=n- (t*1000);
		goto print;
	} else {
        }
	printf("\n");	
}
	
