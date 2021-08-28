#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;
	char ch;
	fptr=fopen("file_read.txt","r");
	if(fptr==NULL)
	{
		printf("FILE DOESNOT EXIST");
		exit(0);
	}
	while(((ch=fgetc(fptr))!='$'))
	{
		printf("%c",ch);
	}
	fclose(fptr);
	
}
