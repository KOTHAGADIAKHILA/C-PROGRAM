#include<stdio.h>
int main()
{
	int n,A[n],B[n],i;
	printf("enter the size");
	scanf("%d",&n);
	printf("enter the numbers of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("original ARRAY");
	for(i=0;i<n;i++)
	{
		printf("%4d",A[i]);
	}
	for(i=0;i<n;i++)
	{
		B[i]=A[i];
	}
	for(i=0;i<n;i++)
	{
		A[i]=B[n-1-i];
	}
	printf("\nARRAY after reversal");
	for(i=0;i<n;i++)
	{
		printf("%4d",A[i]);
	}
}
