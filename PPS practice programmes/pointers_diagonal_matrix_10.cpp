#include<stdio.h>
int main()
{
	int A[50][50],i,j,r,c,*ptr,sum=0;
	ptr=&A[0][0];
	printf("enter the number of rows:");
	scanf("%d",&r);
	printf("enter the number of columns:");
	scanf("%d",&c);
	printf("enter the elements:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",ptr);
			ptr++;
		}
		printf("\n");
	}
	ptr=&A[0][0];
	printf("diagonal elements are:");
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
			printf("%d",*ptr);
			sum+=*ptr;
		    }
			ptr++;
		}
		printf("\n");
		
	}
	printf("sum of diagonal elements=%d",sum);
}
