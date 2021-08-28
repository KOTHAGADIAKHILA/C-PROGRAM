#include<stdio.h>
int main()
{
	int A[100],n,*ptr,max=0,min=100000,sum=0,i;
	ptr=A;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter %d elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}
	printf("Matrix");
	ptr=A;
	for(i=0;i<n;i++)
	{
		printf("%4d",*ptr);
		ptr++;
	}
	ptr=A;
	for(i=0;i<n;i++)
	{
		max=(max>*ptr)?max:*ptr;
		sum+=*ptr;
		min=(min<*ptr)?min:*ptr;
		ptr++;
	}
	printf("\nmaximum=%d",max);
	printf("\nminimum%d",min);
	printf("\naverage=%d",sum/n);
	
	
}
