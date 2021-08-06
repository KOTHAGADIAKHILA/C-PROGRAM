#include<stdio.h>
struct node 
{
	int data1;
	int data2;
	struct node*ptr;
}obj1,obj2,*sptr;
int main()
{
obj1.data1=10;
obj1.data2=20;
printf("obj1 values:%d\n%d",obj1.data1,obj1.data2);
obj1.ptr=&obj2;
obj1.ptr->data1=100;
obj1.ptr->data2=200;
printf("\nobj2 values:%d",obj1.ptr->data1);
printf("\n%d",obj1.ptr->data2);
}
