#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	gets(s);
	char a;
	int i;
	scanf("%c\n",&a);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]==a)
		{
			printf("%d ",i);
			break;
		}
	}
}
