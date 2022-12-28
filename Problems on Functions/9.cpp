#include<iostream> 
using namespace std; 
void print(int i)
{
    cout << i << " ";
}

void print(string s)
{
    cout << s << " ";
}
int main() 
{
    print(10);
    print("gfg");
    return 0; 
}