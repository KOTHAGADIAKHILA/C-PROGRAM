#include<stdio.h>
int main()
{
	float d,f,consumption;
	printf("enter the distance travelled");
	scanf("%f",&d);
	printf("enter the amount of fuel ");
	scanf("%f",&f);
	consumption=d/f;
	printf("\n bike consumption= %f",consumption);
}
