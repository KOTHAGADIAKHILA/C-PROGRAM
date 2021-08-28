#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	FILE *fp1,*fp2;
	char ch;
	fp1=fopen("file_read.txt","r");
	if(fp1==NULL)
	{
		printf("File doesnot exist");
		exit(0);
	}
	fp2=fopen("file_copy_upper.txt","w");
	while((ch=fgetc(fp1))!=EOF)
	{
		ch = toupper(ch);
		fputc(ch,fp2);
	}
	printf("\n File succesfully copied");
}
