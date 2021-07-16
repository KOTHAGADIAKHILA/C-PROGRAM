#include<stdio.h>
int main()
{
	int n,A[20],pos,e,i;
	printf("enter the size of array");
	scanf("%d",&n);
   printf("\nenter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("\nenter the position=");
	scanf("%d",&pos);                     
	printf("\nenter the element u want to insert");
	scanf("%d",&e);      
	printf("\nArray before insertion");
	for(i=0;i<n;i++)
	printf("%4d",A[i]);                   
	for(i=n-1;i>=pos;i--)
	{
		A[i+1] = A[i];
	}
	A[pos] = e;
	printf("\nArray after insertion");
	for(i=0;i<n;i++)                
	printf("%4d",A[i]);
}
