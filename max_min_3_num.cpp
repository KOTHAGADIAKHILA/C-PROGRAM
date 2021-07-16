#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three numbers ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	printf("\n%d is max",a);
	else if(b>c&&b>a)
	printf("\n%d is max",b);
	else
	printf("\n%d is max",c);
	if(a<c&&a<b)
	printf("\n%d is min",a);
	else if(b<c&&b<a)
	printf("\n%d is min",b);
	else
	printf("\n%d is min",c);
}

