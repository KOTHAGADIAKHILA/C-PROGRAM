#include<stdio.h>
int power(int x,int n);
int main()
{
	int n,x,res;
    printf("enter the number:");
	scanf("%d",&x);
	printf("enter the power:");
	scanf("%d",&n);
	res=power(x,n);
	printf(" %d raise to the power of %d is %d",x,n,res);
	
}

 int power (int x, int n)
{
	if (n==0)
	return 1;
	return x*power(x,n-1);
}
