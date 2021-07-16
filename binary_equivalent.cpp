#include<stdio.h>
int main()
{
	int n,r,binary=0,i=1;
	printf("enter the number ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%2;
		binary=binary+i*r;
		n=n/2;
		i*=10;
	}
printf("%d",binary);
}
