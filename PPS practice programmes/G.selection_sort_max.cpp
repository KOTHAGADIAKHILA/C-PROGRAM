#include<stdio.h>
void selectionsort(int A[],int n);
void printarray(int A[],int n);
void swap(int *a,int *b);
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
	
	selectionsort(A,n);
	printarray(A,n);
}
void printarray(int A[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d ",A[i]);
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void selectionsort(int A[],int n)
{
	int pass,j,maxpos;
	for(pass=0;pass<n-1;pass++)
	{
		maxpos=pass;
		for(j=pass+1;j<=n-1;j++) 
        {
		if (A[maxpos]<A[j])       
		maxpos=j;
	    }
	   swap(&A[maxpos],&A[pass]);
	}
}

