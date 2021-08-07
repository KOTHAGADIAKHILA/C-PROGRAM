#include<stdio.h>
int main()
{
	int a,*ptr;
	ptr=&a;
	printf("enter a number");
	scanf("%d",ptr);
	printf("%d",*ptr);
}
