#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *transpose,r,c,i,j;
printf("enter the no of rows &columns:");
scanf("%d%d",&r,&c);
transpose=(int*)calloc(r*c,sizeof(int));
for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
	scanf("%d",transpose+(i*c+j)*sizeof(int));
    }
	printf("\n Matrix");
	printf("\n");
	
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
		{
			printf("%4d",*(transpose+(i*c+j)*sizeof(int)));
		}
		printf("\n");
    }
	
	printf("Transpose of Matrix:");
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%4d",*(transpose+(j*c+i)*sizeof(int)));
		}
		printf("\n");
	}
}



