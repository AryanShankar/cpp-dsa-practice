#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v{5,3,7,1,9};
    cout<<v[0]<<endl;

    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }

    cout<<"\n";

    for( auto x : v)
    cout<<v[x];

}

