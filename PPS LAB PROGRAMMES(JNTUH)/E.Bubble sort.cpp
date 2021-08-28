//BUBBLE SORTING
#include<stdio.h>
void bubblesort(int [],int);
void printarray(int [],int);
int main()
{
	int n,i,A[100];
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter %d elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Array Befor sorting");
	printarray(A,n);
	bubblesort(A,n);
	
}
void printarray(int A[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%4d",A[i]);
	}
}
void bubblesort(int A[],int n)
{
	int pass=0,temp,j,flag;
	
	for(pass=0;pass<n-1;pass++)
	{flag=0;
		for(j=0;j<n-pass-1;j++)
		{
			if(A[j]>A[j+1])
			{
			temp=A[j];
			A[j]=A[j+1];
			A[j+1]=temp;
			flag=1;
		    }
		}
	if(flag==0)
	{
		break;
	}
   }
   printf("\nArray after sorting");
   printarray(A,n);
}

