#include<iostream> 
using namespace std; 
void fun(int);

int main() 
{
    fun(2);
    return 0; 
}
void fun(int x)
{
    cout << x << " ";
    cout << "Hello "; 
}