#include<stdio.h>
int main()
{
	int a,b,GCD,rem;
	printf("enter highest of two integers");
	scanf("%d",&a);
	printf("enter the other number");
	scanf("%d",&b);
	while(b>=1)
		{
			rem=a%b;
			if(rem==0)
			{
			GCD=b;
			break;
		    }
			a=b;
			b=rem;
			
	}
	printf("%d",GCD);
}
	
	
	
	
