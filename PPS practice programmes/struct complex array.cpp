#include<stdio.h>
struct complex
{
	int real;
	int imaginary;
};
int main()
{
    struct complex c[10];
    int i,n;
    printf("\nenter the size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the real part ");
        scanf("%d",&c[i].real);
    	printf("enter the imaginary part");
    	scanf("%d",&c[i].imaginary);
    }
    for(i=0;i<n;i++)
    printf("%d+i%d",c[i].real,c[i].imaginary);
}
