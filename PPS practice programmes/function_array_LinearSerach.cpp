#include<stdio.h>
void printArray(int [],int);
int LinearSearch(int [],int,int);
int main()
{
	int A[10],n,key,pos,res,i;
	printf("enter the size of array 'n':");
	scanf("%d",&n);
	printf("Enter %d elements",n);
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	
	printArray(A,n);
	printf("enter the key to search");
	scanf("%d",&key);
	pos=LinearSearch(A,n,key);
	printf("\n");
	if (pos!=-1)
	printf("Element %d is found at %d",key,pos);
	else
	printf("\nNot Found");
	return 1;
}
void printArray(int A[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%4d",A[i]);
	}
}
int LinearSearch(int A[],int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
	
	if(A[i]==key)
	return i+1;
    }  
    return -1;
	
}
