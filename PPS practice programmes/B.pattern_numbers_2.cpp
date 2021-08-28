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
	int c=1;
	while(c<=num)
	{
	printf("%d ",num);
	c++;
    }
	printf("\n");

}
