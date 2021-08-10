#include<stdio.h>
void print_array (int*,int);
int main()
{
	int A[10],n,i;
	printf("enter the size of array 'n':");
	scanf("%d",&n);
	printf("Enter %d elements",n);
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	print_array(A,n);//sending Address in function call --A[0]
	return 1;
}
void print_array(int*ptr,int n)  //Pointer variable,a container to store the address
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%4d",*(ptr+i));
	}
}
