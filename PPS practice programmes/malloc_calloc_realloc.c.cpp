#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,*b,i,n=5;

	//malloc 
	a=(int*)malloc(4);
	scanf("%d",a);
	printf("MALLOC---%d",*a);
	a=(int*)realloc(a,40);
	*a=40;
	printf("\nrealloc---%d",*a);
		//calloc
	printf("\nenter the elements");
	b=(int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	scanf("%d",(b+i));
printf("CALLOC");
	for(i=0;i<n;i++)
	printf("%4d",*(b+i));
}
