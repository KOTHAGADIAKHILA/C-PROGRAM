#include<stdio.h>
int main()
{
	int n,A[100],i,*ptr;
	printf("enter the size of array");
	scanf("%d",&n);
	A[n]='\0';
	ptr=&A[0];
	printf("enter the elements of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}
	ptr=&A[0];
	for(i=0;i<n;i++)
	{
		ptr=&A[i];
		printf("%2d",*ptr);
	    ptr++;
    }
}
