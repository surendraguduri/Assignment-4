#include<stdio.h>
#define N 5
void copy(int a[])
{
	int i;
	int a2[N];
	for(i=0;i<N;i++)
	{
		a2[i]= a[i];
	}
	for(i=0;i<N;i++)
	{
		printf("%d ",a2[i]);
	}
}
int main()
{
	int a1[N];
	int i;
	for(i=0;i<N;i++)
	{
		scanf("%d ",&a1[i]);
	}
	copy(a1);
	return 0;
}
