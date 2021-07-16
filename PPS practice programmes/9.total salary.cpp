#include<stdio.h>
int main()
{
	int emp_id,hrs;
	float tot_salary,amount_per_hr;
	printf("Enter the employee id ");
	scanf("%d",&emp_id);
	printf("no of working hours ");
	scanf("%d",&hrs);
	printf("Enter the amount you receive per hour");
	scanf("%f",&amount_per_hr);
	tot_salary = hrs*amount_per_hr;
	printf("\n Employee ID:%d,Total salary=%f ",emp_id,tot_salary);
}
