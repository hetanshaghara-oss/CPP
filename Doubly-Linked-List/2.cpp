// //insert node at the beginning postion

// #include<iostream>
// using namespace std;

// struct Node{
//     int data;
//     Node* prev;
//     Node* next;
// };

// int main(){
//     Node* head = new Node;
//     head->data = 100;
//     head->prev = nullptr;
//     head->next = nullptr;

//     Node* second = new Node;
//     second->data = 200;
//     second->prev = nullptr;
//     second->next = nullptr;


//     //connection

//     head->prev = second;
//     head->next = nullptr;
//     second->next = head;
//     second->prev = nullptr;


//     //move head

//     head = second;

//     cout<<head->data<<endl;
//     cout<<second->data<<endl;

//     return 0;
// }

//--------------------method 2------------------

//create node that can insert element a biginning position

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;
};

int main(){

    Node* head = new Node;
    head->data = 100;
    head->prev = nullptr;
    head->next = nullptr;

    Node* second = new Node;
    second->data = 200;
    second->prev = head;
    second->next = nullptr;

    head->next = second;

    //insert new node

    Node* newnode = new Node;

    newnode->data = 50;
    newnode->prev = nullptr;
    newnode->next = nullptr;

    Node* temp = new Node;

    temp = second;

    while (temp->prev!=nullptr)
    {
        
        temp=temp->prev;

    }

    temp->prev = newnode;
    newnode->next = temp;

     head = newnode;
    
     temp = head;
    
    while (temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    return 0;

}