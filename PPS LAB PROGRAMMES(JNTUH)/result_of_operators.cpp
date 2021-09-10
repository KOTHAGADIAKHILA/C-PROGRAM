#include<stdio.h>
int main()
{
	int a,b;
	float e,d;
	char o;
	printf("enter two integer values:");
	scanf("%d%d",&a,&b);
	printf("enter two float values:");
	scanf("%f%f",&e,&d);
	printf("enter the operand");
	scanf("%c",&o);
	printf("\n");
	printf("a+b=%d\n",a+b);
	printf("a-b=%d\n",a-b);
	printf("d/e=%f\n",d/e);
	printf("a*b=%d\n",a*b);
	printf("d%e=%f\n",(d/e)*100);
	printf("++a=%d,a++=%d\n",(++a),(a++));
	printf("--a=%d a--=%d",(--a),(a--));
	printf("~a=%d\n",~a);
	printf("a|b=%d\n",a|b);
	printf("a&b=%d\n",(a&b));
    printf("a^b=%d\n",a^b);
	printf("(a>b)=%d\n",a>b);
    printf("(a<b)=%d\n",(a<b));
	printf("address of a=%d\n",&a);
	
}
