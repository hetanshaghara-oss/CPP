//searching the value in the linked List

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
    second->prev = nullptr;
    second->next = nullptr;


    
    Node* third = new Node;
    third->data = 300;
    third->prev = nullptr;
    third->next = nullptr;


    //connection

    head->prev = second;
    head->next = nullptr;
    second->next = head;
    second->prev = third;
    third->prev = nullptr;
    third->next = second;


    //move head

    head = third;


    //searching

    Node* temp = head;

    while (temp!=nullptr){
         cout<<temp->data<<endl;
         temp = temp->next;
    }
   
    

    // cout<<head->data<<endl;
    // cout<<second->data<<endl;

    return 0;
}