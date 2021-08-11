#include <stdio.h>
#define N 5 //size of the array 
void frequency(int a[]);
int main()    
{    
    //Initialize array     
    int arr[N]; 
	//int freq[N];//used to store frequencies
	int i;
	for(i=0;i<N;i++)
	{
		scanf("%d ",&arr[i]);
	}
	frequency(arr);
	return 0;
}
void frequency(int arr[])
{
	int freq[N];

    int visited = -1;    
    for(int i = 0; i < N; i++)
	{    
        int count = 1;    
        for(int j = i+1; j < N; j++)
		{    
            if(arr[i] == arr[j])
			{    
                count++;    
                //To avoid counting same element again    
                freq[j] = visited;    
            }    
        }    
        if(freq[i] != visited)    
            freq[i] = count;    
    }    
        
    //Displaying the frequencies        
    printf(" Element--->Frequency\n");        
    for(int i = 0; i < N; i++)
	{    
        if(freq[i] != visited)
		{    
            printf("    %d", arr[i]);    
            printf("   --->     ");    
            printf("%d\n", freq[i]);    
        }    
    }            
}    
