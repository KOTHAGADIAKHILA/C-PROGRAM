#include<stdio.h>
int main()
{
	int num,i=2,f=1,count=0;
	printf("enter the limit value ");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		count=0;
		for(f=1;f<=i;f++)
		{
			if (i%f==0)
			count+=1;
		}
		if(count==2)
		printf("\n%d",i);
	}
}
