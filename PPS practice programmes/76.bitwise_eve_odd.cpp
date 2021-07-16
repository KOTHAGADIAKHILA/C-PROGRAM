#include<stdio.h>
int main()
{
	int a;
	printf("\n enter the number ");
	scanf("%d",&a);
	if(a&1)
	printf("\n num=%d is odd",a);
	else
	printf("\n num=%d is even",a);
}
