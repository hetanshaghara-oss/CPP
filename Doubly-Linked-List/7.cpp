//delete the node at the beginning of the list

#include<iostream>
using namespace std;
struct Node{
    int data;
     Node*prev;
     Node*next;
};
int main(){
    
    //creation
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
    head->next = second;
    second->prev = head; 
    second->next = third;
    third->prev = second;

    Node* temp = head;
    
    head = head->next;

    head->prev = nullptr; // 200 comes 1st
    delete temp;





    temp = head;

    while (temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}