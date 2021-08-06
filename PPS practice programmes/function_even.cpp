#include<stdio.h>
int even(int);
main()
{
	int res,a=10;
	res=even(a);
	printf("%d",res);
}
int even(int a)
{
	if(a%2==0)
	{
		printf("a=%d is an even number",a);
		printf("\nnext even number is");
	}
	else
	{
		printf("a=%d is an odd number",a);
		printf("next odd number is");
	}
	return a+2;
}
