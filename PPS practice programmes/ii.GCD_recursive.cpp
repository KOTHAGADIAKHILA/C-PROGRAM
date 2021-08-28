#include<stdio.h>
int GCD (int a,int b);
int main()
{
	int a,b,res;
	printf("enter highest of two integers");
	scanf("%d",&a);
	printf("enter the other number");
	scanf("%d",&b);
    res=GCD(a,b);
    printf("%d",res);
}
int GCD(int a,int b)
{
	int rem;
	if(b==1)
	return 1;
	rem=a%b;
	if(rem==0)
	{
	
	return b;
	}
	return GCD(b,rem);
}
