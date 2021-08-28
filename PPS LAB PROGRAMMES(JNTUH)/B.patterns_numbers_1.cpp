#include<stdio.h>
int print(int num);
int main()
{
	int i,res,num;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	res=print(i);
}
int print(int num)
{
	int i;
	for(i=1;i<=num;i++)
	printf("%d ",i);
	printf("\n");

}
