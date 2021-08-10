#include<stdio.h>
struct complex add(struct complex,struct complex);
void print(struct  complex);
struct complex
{
	int real;
	int imaginary;
};
int main()
{
	int i,res;
	struct complex c1,c2,c3;
	printf("enter the real part");
	scanf("%d",&c1.real);
	printf("enter the imaginary part");
	scanf("%d",&c1.imaginary);
	printf("enter the real part");
	scanf("%d",&c2.real);
	printf("enter the imaginary part");
	scanf("%d",&c2.imaginary);
    print(c1);
	printf("\n");
	print(c2);
	c3=add(c1,c2);
	printf("\n");
	print(c3);
	
}
void print(struct complex c)
{
	
	printf("%d+i%d",c.real,c.imaginary);
	
}
struct complex add(struct complex c1,struct complex c2)
{
	struct complex c3;
	c3.real =c1.real+c2.real;
	c3.imaginary=c1.imaginary+c2.imaginary;
	return c3;
}
