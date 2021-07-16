#include<stdio.h>
int main()
{
	
	int l,b;
	float perimeter_of_rectangle,perimeter_of_circle;
	float r;
	float area_of_rectangle,area_of_circle;
	float PI;
	PI = 3.14;
	printf("\n enter length of rectangle ");
	scanf("%d",&l);
	printf("\n enter breadth of rectangle ");
	scanf("%d",&b);
	printf("\n enter the radius ");
	scanf("%f",&r);
	perimeter_of_rectangle = 2*(l+b);
	area_of_rectangle =l*b;
	perimeter_of_circle =2*PI*r;
	area_of_circle = PI*r*r;
	printf("\n perimeter of rectangle=%f ,area of rectangle = %f,perimeter of circle = %f, area of circle =%f",perimeter_of_rectangle,area_of_rectangle,perimeter_of_circle,area_of_circle);	
}
