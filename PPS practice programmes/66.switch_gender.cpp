#include<stdio.h>
int main()
{
	char a,F,M;
	printf("enter F or M as per ur gender ");
	scanf("%c",&a);
	switch(a)
	{
		case 'F':printf("GENDER is FEMALE");
		break;
		case 'M':printf("GENDER is MALE");
		break;
	}
}
