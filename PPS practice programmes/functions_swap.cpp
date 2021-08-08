#include<stdio.h>
int swap(int* ,int*);
int main()
{
	int res,num1,num2;
	printf("enter the numbers");
	scanf("%d%d",&num1,&num2);
	printf("numbers befor swapping:");
	printf("%d %d",num1,num2);
    swap(&num1,&num2);

}
int swap(int *num1,int *num2)
{
	int temp;
	temp=*num1;
	*num1=*num2;
	*num2=temp;
	printf("\nnumbers after swapping:%d %d",*num1,*num2);

}
	
