#include<stdio.h>
int main()
{
	int a,b;
	char o;
	printf("enter two integers");
	scanf("%d%d",&a,&b);
	printf("Enter the operand");
	scanf("\n%c",&o);
	switch(o)
	{
		case '+':printf("a+b=%d",a+b);
		break;
		case '-':printf("a-b=%d",a-b);
		break;
	    case '/':printf("a/b=%f",(float)a/b);
	    break;
	    case '*':printf("a*b=%d",a*b);
	    break;
	    case '%':printf("a%b=%f",(float)a/b*100);
	    break;
	}
}
