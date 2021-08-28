#include<stdio.h>
int main()
{
	FILE *fptr1 ,*fptr2 ,*fptr4;
	char ch;
	fptr4=fopen("sample4.txt","w");
	fptr1=fopen("sample.txt","r");
	fptr2=fopen("sample2.txt","r");
	while((ch=fgetc(fptr1))!=EOF)
	{
		printf("%c",ch);
		fputc(ch,fptr4);
		}
		printf("\n");
	while((ch=fgetc(fptr2))!=EOF)
	{
		printf("%c",ch);
		fputc(ch,fptr4);
		}
	printf("\nFILES MERGED SUCCESSFULLY");		
}

