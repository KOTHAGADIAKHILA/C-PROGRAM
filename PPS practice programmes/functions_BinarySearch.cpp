#include<stdio.h>
void Array(int[],int );
int binarysearch(int[],int n,int key);
int main()
{
	int i ,n,key,pos,A[10];
	printf("enter the size of array: ");
	scanf("%d",&n);

	printf("enter %d elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	Array(A,n);
	printf("\nenter the elment to search");
	scanf("%d",&key);
	pos=binarysearch(A,n,key);
	if(pos!=-1)
	printf("%d",pos+1);
	else
	printf("unsuccesful search");
	}

void Array(int A[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%4d",A[i]);
	
}


int binarysearch(int A[],int n,int key)
{
	int l=0,u=n-1,mid,res;
	while (l<=u)    
	{
	mid=(l+u)/2;
	if(key==A[mid])
	{
		
	return mid;
   }
	if(key<A[mid])
	u=mid-1;
	else
	l=mid+1;
}
return -1;
}
