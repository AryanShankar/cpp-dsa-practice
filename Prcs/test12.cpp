#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "okay hekki";
    for(int i=0;i<s.length();i++)
    {
        cout<<s[i];
        if(s[i] == 'h')
        cout<<"lololl";
    }
    cout<<endl;
    for(auto x : s)
    cout<<x;
    cout<<endl<<s[5];
}