#include<stdio.h>
int main()
{
	int c;
	float m,k;
	printf("Enter the length in centimeter ");
	scanf("%d",&c);
	m = c/100;
	k =m/1000;
	printf("\n length in meters = %f length in kilometers = %f",m,k);
}
