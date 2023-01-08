#include<iostream>

using namespace std;

int main()
{   
    int n;
    
    cout<<"Enter a Number: ";
    
    cin>>n;
    
    if(n<0)
        cout<<"Invalid";
    else
        cout<<(n)*(n+1)/2;
    
    return 0;
}