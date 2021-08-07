#include<stdio.h>
struct book_details
{
	char book_name[50];
	char author[50];
	int year;	
}b,*ptr;
int main()

{
	ptr=&b;
	printf("Enter the Book name:");
	scanf("%[^\n]s",&ptr->book_name);
	printf("enter the year of publication");
	scanf("%d",&ptr->year);
	printf("enter the Author Name:");
	scanf("\n%[^\n]s",&ptr->author);
	printf("\nBOOK DETAILS");
	printf("\n-------------");
	printf("\nBOOK NAME:%s \nYEAR OF PUBLICATION:%d \nAUTHOR=%s",ptr->book_name,ptr->year,ptr->author);
	
}
