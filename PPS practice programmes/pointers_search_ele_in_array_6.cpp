#include<stdio.h>
int main()
{
	int A[100],n,i,*ptr,ele,presence=0;
	ptr=A;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the elements of array");
	for(i=0;i<n;i++)
	{
	    scanf("%d",ptr);
	    ptr++;
    }
    ptr=A;
    printf("enter the element you want to search:");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
    	if (ele==A[i])
    	{
    	printf("element is present in the array");
    	presence+=1;
        }
	}
	if(presence==0)
	printf("element is not present in the array");

}
