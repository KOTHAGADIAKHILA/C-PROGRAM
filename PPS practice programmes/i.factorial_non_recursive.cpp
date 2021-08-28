#include<stdio.h>
int main()
{
	int n,i;
	long long int res=1;
	printf("enter the number whose factorial is to be known: ");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		res*=i;
	}
	printf("%lld",res);
}
