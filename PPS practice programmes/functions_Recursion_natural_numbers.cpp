#include<stdio.h>
int natural(int);
int main()
{
	int n,res;
	printf("enter the limit");
	scanf("%d",&n);
	res=natural(n);
	printf("%d",res);
	
}
int natural(int x)
{
    if (x==1)
    return 1;
    else
    printf("%d ",x);
    return natural(x-1);
}

