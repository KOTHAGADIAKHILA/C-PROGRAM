#include<stdio.h>
int main()
{
	int a,b,*aptr=NULL,*bptr=NULL;
	aptr=&a;
	bptr=&b;
	printf("enter two numbers:");
	scanf("%d%d",aptr,bptr);
	printf("Before swapping a=%d b=%d",a,b);
	*aptr=*aptr+*bptr;
	*bptr=*aptr-*bptr;
	*aptr=*aptr-*bptr;
	printf("\nAfter swapping a=%d b=%d",*aptr,*bptr);
	
}
