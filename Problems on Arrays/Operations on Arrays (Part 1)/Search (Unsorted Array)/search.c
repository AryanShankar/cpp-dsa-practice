#include <stdio.h>

int search(int arr[], int n, int x)
{
	for(int i = 0; i < n; i++)
	{
		if(arr[i] == x)
			return i;
	}

	return -1;
} 


    
int main() {
	
	int arr[] = {20, 5, 7, 25}, x = 5;

    printf("%d ",search(arr, 4, x));
}