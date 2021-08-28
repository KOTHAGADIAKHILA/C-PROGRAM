#include<stdio.h>
int main()
{
	int A[100],key,i,n,l,u,mid,s=0;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the numbers  ");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	printf("enter the key element ");
	scanf("%d",&key);
	l=0;u=n-1;
	while(l<=u)
	{
		mid=(l+u)/2;
		if(key==A[mid])
		{
			printf("position of key element=%d",mid+1);
			s+=1;
			break;
		}
		else if(key<A[mid])
		{
			u=mid-1;
		}
		else
		l=mid+1;
	}
	if(s==0)
	{
		printf("key element %d is not found in array",key);
	}
}
