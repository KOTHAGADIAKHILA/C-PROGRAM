#include<stdio.h>
int main(int argc, char *argv[])
{
	int a,b;
	printf("\n%d",argc);
	printf("\n%s",argv[0]);
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	printf("\n%d",a+b);
}
