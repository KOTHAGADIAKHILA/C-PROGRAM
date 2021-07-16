#include<stdio.h>
#include<string.h>
int main()
{
	int a,b,c;
	float d,e;
	char o;
	printf("enter the operands");
	scanf("%d%d%d",&a,&b,&c);
	printf("enter the float operands");
	scanf("%f%f",&d,&e);
	
	printf("enter the operator");
	scanf("\n%c",&o);
	switch(o)
	{
		case '+':printf("a+b=%d",a+b);
		break;
	    case '-':printf("a+b=%d",a-b);
		break;
	    case '/':printf("d/e=%f",d/e);
		break;
	    case '*':printf("a*b=%d",a*b);
		break;
	    case '%':printf("d%eb=%f",(d/e)*100);
		break;
		case 'i':printf("++a=%d,a++=%d",(++a),(a++));
		break;
		case 'd':printf("--a=%d a--=%d",(--a),(a--));
		break;
		case'~':printf("~a=%d",~a);
		break;
		case '|':printf("a|b=%d",a|b);
		break;
	    case '&':printf("a&b=%d",(a&b));
		break;
		case '^':printf("a^b=%d",a^b);
		break;
		case'>':printf("(a>b)=%d",a>b);
		break;	
	    case '<':printf("(a<b)=%d",(a<b));
		break;
		case'a':printf("address of a=%d",&a);
		break;
	}
}
	
