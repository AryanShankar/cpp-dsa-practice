#include<iostream> 
using namespace std; 

void add(int a, int b)
{
    int x = a+b; 
    cout << x; 
}

int main() 
{
    int a = 10, b = 20; 
    
    add(a,b); 

    return 0; 
}