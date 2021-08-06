#include<stdio.h>
int add(int,int);
main()
{
	add(7,8);
	add(5,6);
}
	int add(int x,int y)
	{
		printf("x=%d y=%d",x,y);
		printf("\n%d",x+y);
		printf("\n");
	}
