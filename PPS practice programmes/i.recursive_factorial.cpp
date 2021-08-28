#include<stdio.h>
int factorial(int);
int main()
{
	int res;
	res=factorial(5);
	printf("%d",res);
}
int factorial(int num)
{
	if (num==0)
	return 1;
	return num*factorial(num-1);
	
}
