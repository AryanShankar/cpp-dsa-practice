#include<iostream> 
using namespace std; 

int add(int a, int b, int c = 0, int d = 0)
{
    return (a+b+c+d); 
}
int main() 
{
    cout << add(10,20,30,5); 
    return 0; 
}