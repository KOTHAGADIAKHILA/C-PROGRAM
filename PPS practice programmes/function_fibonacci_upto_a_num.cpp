#include<stdio.h>
int fibonacci(int x);
int main()
{
	int res,n,i=1;
	printf("enter the limit");
	scanf("%d",&n);
	while(fibonacci(i)<=n)
	{
	res=fibonacci(i);
	printf("%d ",res);
	i++;
    }  
}
	
	
	int fibonacci(int i)
	{
		
		if (i==1)
		return 0;
		else if(i==2)
		return 1;
		else
		return fibonacci(i-1)+fibonacci(i-2);
	
}

