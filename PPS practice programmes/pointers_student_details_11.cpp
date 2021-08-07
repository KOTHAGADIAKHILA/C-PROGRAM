#include<stdio.h>
struct student
{
	char name[50];
	int rno;
	int marks[3];
}s,*sptr;
int main()
{
	int i;
	sptr=&s;
	printf("Enter the student's name:");
	scanf("%s",sptr->name);
	printf("enter the rno:");
	scanf("%d",&sptr->rno);
	printf("enter the marks of 3 subjects:");
	for(i=0;i<3;i++)
	{
		scanf("%d",&sptr->marks[i]);
	}
	printf("Student's Name:%s \nRoll no:%d",sptr->name,sptr->rno);
	for(i=0;i<3;i++)
	{
		printf("\nM%d:%d",i,sptr->marks[i]);
	}
}
