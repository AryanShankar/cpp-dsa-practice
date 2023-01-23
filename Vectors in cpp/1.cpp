#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v (6);
   v.push_back(20);
    
    cout<<v.size()<<endl<<v.capacity();
    cout<<endl;
    for(auto i : v)
    cout<<i<<" ";
}