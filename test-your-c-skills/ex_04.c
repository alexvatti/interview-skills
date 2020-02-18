#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int pivot(int arr[],int lower,int upper)
{
	int p,q,mid,temp,val;
	p=lower+1;
	q=upper;
	mid=lower;
	val=arr[mid];

	while(q >= p) {

		while(arr[p] < val)
			p++;
		while(arr[q] > val)
			q--;
		if(q > p) {
			temp=arr[p];
			arr[p]=arr[q];
			arr[q]=temp;
		}
	}
	temp=arr[mid];
	arr[mid]=arr[q];
	arr[q]=temp;
	return q;
}

void quicksort(int arr[],int lower,int upper)
{
	int p;
	if(upper > lower) {
		p=pivot(arr,lower,upper);
		quicksort(arr,lower,p-1);
		quicksort(arr,p+1,upper);
	}
}
int main()
{
	int a[]={4,3,5,6,2,7,8,10};
	int l=0,h=(sizeof(a)/sizeof(int)-1),i;
        quicksort(a,l,h);
	for(i=0;i<=h;i++)
		printf("%d\t",a[i]);
}



