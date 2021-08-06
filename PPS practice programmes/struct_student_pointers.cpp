#include<stdio.h>
struct student
{
	char name[50];
	int rno;
	int percentage;
    }s,*sptr;
int main()
{
	sptr=&s;
	printf("enter the name of student");
	scanf("%s",&sptr->name);
	printf("enter the rno");
	scanf("%d",&sptr->rno);
	printf("enter the percentage");
	scanf("%d",&sptr->percentage);
	printf("name:%s eno:%d Percentage:%d",sptr->name,sptr->rno,sptr->percentage);
	}    
