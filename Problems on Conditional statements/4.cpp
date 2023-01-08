#include<iostream>

using namespace std;

int main()
{   
    int age;
    char gender;
    
    cout<<"Enter age"<<endl;
    cin>>age;
    
    cout<<"Enter gender as 'F' or 'M'"<<endl;
    cin>>gender;
    
    if(gender == 'M')
    {
        cout<<"Male ";
        
        if(age < 18)
            cout<<"Kid";
        else
            cout<<"Adult";
    }
    else if(gender == 'F')
    {
        cout<<"Female ";
        
        if(age < 18)
            cout<<"Kid";
        else
            cout<<"Adult";
    }
    else
    {
        cout<<"Invalid Gender";
    }
    
    return 0;
}