#include<stdio.h>
int main()
{
	int a,b,sum;
	sum=0;
	printf("enter the number ");
	scanf("%d",&a);
	while(a>=1)
	{
		b=a%10;
		sum=sum+b;
		a=a/10;
		
	}
	printf("sum of digits=%d",sum);
}
