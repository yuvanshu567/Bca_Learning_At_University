//Write a C code to find the number of distinct elements in a sorted array.

#include <stdio.h>
int main() 
{
    int n, i, j, temp, count=0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
	printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    
    for(i=0; i<n-1;i++) 
	{
        for(j=0; j<n-i-1;j++) 
		{
            if(arr[j] > arr[j+1]) 
			{
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("The distinct values: ");
    for(i=0;i<n;i++)
    {
    	if (i==0 || arr[i] != arr[i-1])
    	{
    		printf("%d\t",arr[i]);
    		count++;
		}
	}
	printf("\nNumber of distinct values in the array: %d",count);
    return 0;
}
