#include<stdio.h>
#include<string.h>
int main()
{
	int c;
	char s[100],s1[100];
	gets(s);
	gets(s1);
	strcat(s1,s);
	puts(s1);
	c=strlen(s1);
	printf("\n%d ",c);
}
