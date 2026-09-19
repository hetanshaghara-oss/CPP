#include<iostream>
using namespace std;

int main(){
    struct node{
        int data;
        node *next;
    };

    node *head = new node;
    head->data = 100;
    head->next = nullptr;

    node *second = new node;
    second->data = 200;
    second->next = nullptr;

    node *third = new node;
    third->data = 300;
    third->next = nullptr;

    head->next = second;
    second->next = third;
    third->next = nullptr;

    node *temp = head;
    while(temp != second){
        temp=temp->next;

    }
    // cout<<temp->data<<endl;


//////    new node   //////////
    node *newnode = new node;
    newnode->data=150;
    newnode->next=nullptr;


    newnode->next= second;

    
     head->next = newnode;

    temp = head;
    while(temp != nullptr){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    // while((temp->next) != nullptr){
    //     cout<<temp->data<<endl;
    //     temp=temp->next;
    


    

    //  cout<<head->data<<endl;
    //  cout<<newnode->data<<endl;
    //  cout<<second->data<<endl;
    //  cout<<third->data<<endl;




    return 0;
}