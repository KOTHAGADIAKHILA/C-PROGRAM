#include<stdio.h>
int main()
{
	int A[50][50],r,c,n,*ptr,i,j;
	ptr=&A[0][0];
	printf("Enter the number of rows in matrix");
	scanf("%d",&r);
	printf("enter the number of columns in matrix");
	scanf("%d",&c);
	printf("enter the elements of matrix");
	for(i=0;i<r;i++)     
	{                   
		for(j=0;j<c;j++)
		{
		scanf("%d",ptr);
		ptr++;
	    }
		
	}
	ptr=&A[0][0];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%4d ",*ptr);	
		ptr++;
	    }
		printf("\n");
		
	}
}
