#include <bits/stdc++.h>
using namespace std;
int test()
{
    int static x = 5;
    return ++x;
}
int main()
{
    for(auto i = 1; i < 5; i++)
    cout<<test();
}