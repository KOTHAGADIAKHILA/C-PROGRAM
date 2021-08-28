#include<stdio.h>
int add(int [][3], int [][3],int [][3],int r ,int c);
void printmatrix(int [][3],int r,int c);
int main()
{
	int A[100][3],n,i,B[100][3],C[100][3],r1,r2,c,j;
	
	printf("enter the rows of array A:");
	scanf("%d",&r1);
	c=3;
	printf("enter %d elements",r1*c);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&A[i][j]);
	    }
	}
	printf("enter the rows of array B:");
	scanf("%d",&r2);

	printf("enter %d elements",r2*c);
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&B[i][j]);
	    }
	}
	printf("Matrix A");
	printf("\n");
	printmatrix(A,r1,c);
	printf("\nMatrix B");
	printf("\n");
	printmatrix(B,r2,c);
	if(c==r2)
	{
	printf("\nMatrices can be multiplied");
	add(A,B,C,r1,c);
	printf("\nAfter Multiplying matrices A and B");
	printf("\n");
	printmatrix(C,r1,c);
    }
    else
    printf("These Matrices cannot be multiplied");
	
}
void printmatrix(int A[][3],int r1,int c)
{
	int i,j;
for(i=0;i<r1;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%d ",A[i][j]);
	    }
	    printf("\n");
	}
}

int add(int A[][3],int B[][3],int C[][3],int r1, int c)
{
	int i,j,k;
	for(i=0;i<r1;i++)
	{
	for(j=0;j<c;j++) // j<c2;
	{
		C[i][j]=0;
		for(k=0;k<c;k++) //This can be K <c1 or r2 because c1==r2-> no of added terms 
		{
			C[i][j]+=A[i][k]*B[k][i];
		}
	}
       }
       printf("\n");
}
