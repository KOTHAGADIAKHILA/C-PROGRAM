#include<stdio.h>
#include<math.h>
int main()
{
	int p,r,t,n;
	float a,amount;
	printf("enter the initial principle balance= ");
	scanf("%d",&p);
	printf("enter the rate of interest ");
	scanf("%d",&r);
	printf("enter the time ");
	scanf("%d",&t);
	printf("enter the number of times interest applied ");
	scanf("%d",&n);
	a=1+r/n;
	amount=p*pow(a,n*t);
	printf("final amount=%f",amount);
	}
