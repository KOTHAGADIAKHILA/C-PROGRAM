#include<stdio.h>
void print_array (int*,int);
int sum(int *,int n,int s);
int main()
{
	int A[10],n,i,s,res;
	printf("enter the size of array :");
	scanf("%d",&n);
	printf("Enter %d elements",n);
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	print_array(A,n);
	printf("\nenter the no of elements whose sum is needed to be calculated");
	scanf("%d",&s);
	res=sum(A,n,s);
	printf("sum of %d elements from array is %d",s,res);	
	return 1;
}
void print_array(int*ptr,int n) 
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%4d",*(ptr+i));
	}
}
int sum(int *ptr,int n,int s)
{
	int i,sum=0;
	for(i=0;i<s;i++)
	{
	sum+=*ptr;
	ptr++;
    }
    return sum;
}
