#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y = 10;
    int &x = y; //ambersent/reference operator needs to be initialised during declaration
    x = x + 20;
    cout<<y;
}