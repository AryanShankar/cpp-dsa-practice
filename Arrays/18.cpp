#include<iostream>
#include<numeric>

using namespace std;

int main()
{   
    int arr[] = {10, 20, 5, 40};

    int n = sizeof(arr)/sizeof(arr[0]);
    
    int s = 0;
    
    s = accumulate(arr, arr+n, s);
    
    cout<<s<<" ";
    
    return 0;
}