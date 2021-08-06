#include<stdio.h>
int main()
{
	int A[10],i;
	printf("enter the numbers of array");
	for(i=0;i<10;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("original ARRAY");
	for(i=0;i<10;i++)
	{
		printf("%4d",A[i]);
	}
	for(i=0;i<(10/2);i++)
	{
		A[i]=A[i]+A[10-1-i];
		A[10-1-i]=A[i]-A[10-1-i];
		A[i]=A[i]-A[10-1-i];		
	}
	printf("\nafter reversal");
	for(i=0;i<10;i++)
	{
		printf("%4d",A[i]);
	}
}
