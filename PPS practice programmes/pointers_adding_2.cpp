#include<stdio.h>
int main()
{
	int a,b,*aptr,*bptr;
	aptr=&a;
	bptr=&b;
	printf("enter two numbers: ");
	scanf("%d%d",aptr,bptr);
	printf("SUM=%d",(*aptr+*bptr));
}
