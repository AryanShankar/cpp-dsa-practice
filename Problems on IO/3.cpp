#include<iostream>
#include<cstring>
using namespace std;

int x;
int main()
{
    int x = 10;
    {
        int x = 20;
        cout << x;
    }
}