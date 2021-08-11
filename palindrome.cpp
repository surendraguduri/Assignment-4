#include<stdio.h>
#include<string.h>
int main()
{
	int i,c=0;
	char s[100];
	char p[100];
	gets(s);
	for(i=0;i<strlen(s);i++)
	{
		p[i]=s[strlen(s)-1-i];
	}
	for(i=0;i<strlen(s);i++)
	{
		if(p[i]==s[i])
		{
			c++;
		}
	}
	if(c==strlen(s))
	{
		printf("Palindrome");
	}
	else
	{
		printf(" Not Palindrome");
	}
}

