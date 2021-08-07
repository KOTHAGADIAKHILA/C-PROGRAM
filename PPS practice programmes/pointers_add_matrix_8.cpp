#include<stdio.h>
int main()
{
	int A[50][50],*ptr,i,j,r,c,r1,c1,B[50][50],*ptr1;
	ptr=&A[0][0];
	printf("enter the number of rows:");
	scanf("%d",&r);
	printf("enter the number of columns:");
	scanf("%d",&c);
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
		    printf("%4d",*ptr);
		    ptr++;
	    }
	    printf("\n");
	}
	
	printf("other matrix");
	printf("\n");
	
	
	ptr1=&B[0][0];
	printf("enter the number of rows:");
	scanf("%d",&r1);
	printf("enter the number of columns:");
	scanf("%d",&c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
		scanf("%d",ptr1);
		ptr1++;
	    }
	}
	ptr1=&B[0][0];	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		    printf("%4d",*ptr1);
		    ptr1++;
	    }
	    printf("\n");
	}
	
	
    if(r1==r1&&c1==c)
	{
	printf("Addition of two given matrices:");
	printf("\n");
	
	
	ptr=&A[0][0];
	ptr1=&B[0][0];	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		    printf("%4d",*ptr+*ptr1);
		    ptr++;
		    ptr1++;
	    }
	    printf("\n");
	}
    }  
    else
    printf("Addition cannot be performed");
	
}	
