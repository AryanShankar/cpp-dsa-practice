#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

int main()
{
    node* head = new node();
    node* first = new node();
    node* third = new node();

    head -> data = 5;
    head -> next  = first;

    first -> data = 10;
    first -> next = third;

    third -> data = 50;
    third -> next = NULL;

    node* temp;
    temp = head;

    while(temp -> next != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << temp-> data << " ";

    int n,v;
    cin>>n>>v;
    n--;
 
    temp = head;

    while(n--){
        if(temp -> next != NULL){
            temp = temp -> next;
        }
        else
        cout<<"length nhi hai"<<endl;

    }
    node* second = new node();

    second -> data = v;
    cout<< temp -> next -> next->data<<" bsh";
    second -> next = temp -> next -> next;
    temp -> next = second;
    cout<<"blalkdjkl";
    temp = head;
    //cout<<head->data;
    while(temp -> next != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << temp  -> data << " ";
    
    
    

    return 0;
}