#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{   
    vector<int> v {10, 20, 100, 40, 50, 500, 8};

    int res = *max_element(v.begin(), v.end());
    
    cout<<res;
    
    return 0;
}