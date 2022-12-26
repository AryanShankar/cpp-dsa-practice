#include<iostream>
using namespace std;

int main()
{
    begin:
        int n;
        cout << "Enter a number ";
        cin >> n;
        if (n % 2 == 0)
            goto begin;
        else
            goto label2;
        label1:
            cout << "Even";
        label2:
            cout << "Odd";
}