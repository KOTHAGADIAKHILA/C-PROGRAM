#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char name[3][15],tname[3][18],temp[10];
	for(i=0;i<3;i++)
	scanf("%s",&name[i]);
	for(i=0;i<3;i++)
	printf("%s ",name[i]);
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
		if((strcmp(name[i],name[j]))>0)
		{
		strcpy(temp,name[j]);
		strcpy(name[j],name[i]);
		strcpy(name[i],temp);
	}
		
	}
}
	for(i=0;i<3;i++)
	{
		printf("\n%s",name[i]);
	}
	
}


