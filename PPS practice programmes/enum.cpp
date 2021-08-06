#include<stdio.h>
enum Weekdays
	{
		Monday=-1,
		Tuesday,
		Wednesday=6,
		Thursday,
		Saturday,
		Sunday,
	}days;
int main()
{	
	int i;
	for(i=Monday;i<=Sunday;i++)
	{
		printf("\n%d",i);
	}
}
