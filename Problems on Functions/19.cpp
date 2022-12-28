#include<iostream> 
using namespace std; 
void fun()
{
    int a = 1; 
    static int x = 1;
    x++;
    a++;
    cout << x << " " << a << " "; 
}

int main() 
{
    fun(); 
    fun();
    fun();
    return 0; 
}