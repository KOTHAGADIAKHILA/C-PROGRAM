#include<stdio.h>
void print(int num);
int main()
{
	int i,res,num;
	scanf("%d",&num);
	print(num);
}
void print(int num)
{
	int c,i,v=1,n=1;
	for(c=1;c<=num;c++)
	{
	{
		for(i=1;i<=c;i++)
		{
		printf("%d ",n);
		n+=1;
	}
	
	}
	printf("\n");
}
}
	
