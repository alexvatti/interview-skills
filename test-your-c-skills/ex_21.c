//type cast: float to char: compilation error
#include<stdio.h>
#include<math.h> 

int main()
{
	float a=5.375;
	char *p;
	int i; 
        
	p=(char*)a;

	for(i=0;i<1;i++)
		printf("%d\n",p[i]);
	return 0;
}
