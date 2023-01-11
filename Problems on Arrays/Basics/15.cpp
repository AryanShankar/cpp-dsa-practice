#include<iostream>
#include<algorithm>

using namespace std;

int main()
{   
    int arr[] = {10, 20, 100, 40, 50, 500, 8};
    
    int n = sizeof(arr)/sizeof(arr[0]);

    int res = *max_element(arr, arr+n);
    
    cout<<res;
    
    return 0;
}