#include<stdio.h>
int main()
{
	int a=0,b=1,c=0,count=0,limit;
	printf("enter the limit= ");
	scanf("%d",&limit);
	printf("%d %d ",a,b);
	while(b<limit)
	{
		c=b;
		b=a+b;
		a=c;
		printf("%d ",b);
	}

}
