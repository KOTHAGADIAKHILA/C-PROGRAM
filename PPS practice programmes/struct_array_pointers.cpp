#include<stdio.h>
struct complex
{
	int real;
	int imaginary;
}*ptr;
int main()
{
    struct complex A[10];
    int i,n;
    printf("enter the size of array:");
    ptr=A;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the real part ");
        scanf("%d",&ptr->real);
    	printf("enter the imaginary part");
    	scanf("%d",&ptr->imaginary);
    	ptr++;
    }
    printf("\nComplex numbers are ");
    ptr=A;
    for(i=0;i<n;i++)
    {
    printf("\n %d+i%d",ptr->real,ptr->imaginary);
    ptr++;
    }
}
