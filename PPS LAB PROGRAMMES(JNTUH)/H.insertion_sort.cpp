#include<stdio.h>
void insertionsort(int A[],int n);
void printarray(int A[],int n);
int main()
{
	int i,n,A[10000];
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	
	insertionsort(A,n);
	printarray(A,n);
}
void printarray(int A[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d ",A[i]);
}


void insertionsort(int A[],int n)
{
	int pass,j,temp;
	for(pass=1;pass<n;pass++)
	{
		temp=A[pass];
		for(j=pass;j>0&&temp<A[j-1];j--) 
        	A[j]=A[j-1];
	    A[j]=temp;
	 
	}
}

