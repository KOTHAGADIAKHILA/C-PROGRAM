#include<stdio.h>
struct employee
{
	char name[50];
	int eno;
	int salary;
    }e,*sptr;
int main()
{
	sptr=&e;
	printf("enter the name of employee");
	scanf("%s",&sptr->name);
	printf("enter the eno");
	scanf("%d",&sptr->eno);
	printf("enter the salary");
	scanf("%d",&sptr->salary);
	printf("EMPLOYEE DETAILS:");
	printf("\n-----------------");	
	printf("\nName:%s \nEno:%d \nSalary:%d",sptr->name,sptr->eno,sptr->salary);
	}    
