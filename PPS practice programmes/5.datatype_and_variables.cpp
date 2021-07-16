#include<stdio.h>
int main()
{
	int ansi;
	short int anssi;
	char ansc;
	float ansf;
	double ansd;
	long int ansli;
	long long int anslli;
	printf("enter integer ");
	scanf("%d" ,&ansi);
	printf("enter short integer ");
	scanf("%hi" ,&anssi);
	printf("enter character ");
	scanf("\n%c" ,&ansc);
	printf("enter float ");
	scanf("%f" ,&ansf);
	printf("enter double ");
	scanf("%lf" ,&ansd);
	printf("enter long integer");
	scanf("%ld",&ansli);
	printf("enter long long integer");
	scanf("%lld",&anslli);
	printf("\n integer = %d \n short integer=%d \n character = %c \n float= %f \n double = %lf \n long integer=%ld \n long long integer =%lld" ,ansi ,anssi,ansc, ansf, ansd,ansli,anslli );
    
}
