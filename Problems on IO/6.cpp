#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    const int x = 10;
    x = x+1; // gives error
    cout << x;
}