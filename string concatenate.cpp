#include<stdio.h>
#include<string.h>
int main()
{
	int c;
	char s[100],s1[100];
	scanf("%s ",s);
	scanf("\n%s",s1);
	strcat(s1,s);
	printf("\n%s",s1);
	c=strlen(s1);
	printf("\n%d ",c);
}
