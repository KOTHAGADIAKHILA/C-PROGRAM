#include<stdio.h>
int main()
{
	int n,res;
	float aI,aE;
	printf("enter the number ");
	scanf("%d",&n);
	aE=(float)n*0.7;
	printf("Explicit conversion %f",aE);
	aI=n*0.7;
	printf("\nImplicit conversion %f",aI);
}
