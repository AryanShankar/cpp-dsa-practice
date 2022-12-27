#include<iostream> 
using namespace std; 

void printHello()
{
    cout << "Hello "; 
}

int main() 
{
    cout << "Before printHello"; 
    
    printHello(); 
    
    cout << "After printHello"; 
    return 0; 
}