#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x = 29;
    
    string bin;
    
    while (x) {
        bin += (char)((x & 1) + '0');
        x >>= 1;
    }
    
    reverse(bin.begin(), bin.end());
    
    cout << bin << endl;
    
    return 0;
}