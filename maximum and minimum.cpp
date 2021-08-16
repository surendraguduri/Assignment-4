//Here using bubble sort algorithm for sorting the array
#include <stdio.h>
void bubble_sort(int a[],int n);
 
int main()
{
	int a[50],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubble_sort(a,n);
	printf("\nArray after sorting:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nMaximum number:%d\n",a[n-1]);
	printf("Minimum number:%d\n",a[0]);
	return 0;
}
 
void bubble_sort(int a[],int n)
{
    //Best case is:elements in ascending order
    //worse case is:elements in descending order
    int i,j,flag,temp;
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])//swapping
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;//flag is to check sorted or not
            }
        }
        if(flag==0)
        {
            break;
        }
}

