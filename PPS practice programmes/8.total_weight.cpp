#include<stdio.h>
int main()
{
	float itm_wt,cost,units,tot_wt;
	int cst_purchase;
	printf("Enter the itemweight ");
	scanf("%f",&itm_wt);
	printf("Enter the cost of each unit ");
	scanf("%f",&cost);
	printf("Enter the no of units ");
	scanf("%f",&units);
	tot_wt = itm_wt*units;
	cst_purchase = tot_wt*cost;
	printf("\n totalweight=%f total cost of purchase=%d",tot_wt,cst_purchase);
}
