#include<stdio.h>
int main()
{
	int loan,rate,time;
	float SI;
	printf("Enter the amount taken as loan= ");
	scanf("%d",&loan);
	printf("Rate=");
	scanf("%d",&rate);
	printf("Time= ");
	scanf("%d",&time);
	SI = loan*rate*time/100;
	printf("\n Simple Interest= %f",SI);
}
