#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20};
    int *p1 = arr;
    ++*p1;
    cout << arr[0] << " " <<
        arr[1] << " " << *p1;
    return 0;
}