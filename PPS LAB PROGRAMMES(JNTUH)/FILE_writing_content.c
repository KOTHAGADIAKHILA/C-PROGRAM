#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;
	char ch='#';
	fptr=fopen("file_read.txt","w");
	while(((ch=getche())!='$'))
	{
		fputc(ch,fptr);
	}
	fclose(fptr);
}
