#include<stdio.h>
int main()
{
	int a,b,c,sum,prod;
	float avg;
	printf("Enter three integers ");
	scanf("%d%d%d",&a,&b,&c);
	sum = a+b+c;
	prod = a*b*c;
	avg=(a+b+c)/3;
	printf("\n sum=%d prod=%d avg=%f",sum,prod,avg);
}
