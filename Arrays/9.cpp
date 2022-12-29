#include<iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 5, 8, 3};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
        
    return 0;
}