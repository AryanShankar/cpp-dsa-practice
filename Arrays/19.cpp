#include<iostream>

using namespace std;

int main()
{   
    int arr1[3][2] = {10, 20, 30, 40, 5, 6};
    
    int arr2[3][2] = {{10, 20},
                      {30, 40},
                      {5, 6}};
                      
    for(int i=0; i<3; i++)
    {
        for(int j = 0; j<2; j++)
            cout<<arr2[i][j]<<" ";
    }
    
    return 0;
}