#include<stdio.h>
#include<string.h>
int main()
{
	char word1[50],word2[20];
	int n,ans;
	printf("enter the word1= ");
	gets(word1);
	printf("enter the word2= ");
	gets(word2);
	printf("enter the n ");
	scanf("%d",&n);
	ans=strncmp(word1,word2,n);
	printf("word1 after concatenation=%d",ans);
}
	
