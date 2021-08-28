#include<stdio.h>
int main()
{
	int n,x,i;
	long long int res=1;
	printf("enter a number");
	scanf("%d",&x);
	printf("enter the power");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		res*=x;
	}
	printf("%lld",res);
}
