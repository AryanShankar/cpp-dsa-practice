#include<iostream> 
using namespace std; 
void fun()
{
    static int x = 1;
    x++;
    cout << x << " "; 
}

int main() 
{
    fun(); 
    fun();
    fun();
    return 0; 
}