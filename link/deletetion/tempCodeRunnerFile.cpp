//delete node at the beginning of the list 

#include<iostream>
using namespace std;

struct Node{
     int data;
     Node*next;
};
 
int main(){
    //create some nodes

    Node* head = new Node;
    head->data = 100;
    head->next = nullptr;


    Node* second = new Node;
    second->data = 200;
    second->next = nullptr;


    Node* third = new Node;
    third->data = 300;
    third->next = nullptr;
