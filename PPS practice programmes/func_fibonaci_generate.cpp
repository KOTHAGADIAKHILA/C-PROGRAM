#include<stdio.h>
int fibonacci(int x);
int main()
{
	int res,n,i;
	printf("enter the limit");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	res=fibonacci(i);
	printf("%d ",res);
}
	
	}
	
	int fibonacci(int n)
	{
		
		if (n==1)
		return 0;
		else if(n==2)
		return 1;
		else
		return fibonacci(n-1)+fibonacci(n-2);
	
}

