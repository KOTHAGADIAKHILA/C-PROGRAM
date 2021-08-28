#include<stdio.h>
int main()
{
	int A[100],i,*ptr,n,l;
	ptr=A;
	printf("enter the size of array:");
	scanf("%d",&n);
	A[n]='\0';
	printf("enter the elements of array:");
	for(i=0;i<n;i++)
	{
	    scanf("%d",ptr);
	    ptr++;
	}
	l=n-1;
	ptr=&A[n-1];
	printf("Array in reverse order:");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",*ptr);
		ptr--;
	}
	
}
