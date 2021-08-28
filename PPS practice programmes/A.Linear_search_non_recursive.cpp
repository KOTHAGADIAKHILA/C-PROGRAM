#include<stdio.h>
int main()
{
	int A[100],num,i,n;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the numbers  ");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	printf("enter the key element ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
	    if (num==A[i])
	    {
	    	num=A[i];
	    	printf("key element=%d is present in the array at pos %d", num,i+1);
		    break;
		}   
	}
	
}
