//create node that can insert element o last position

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
    
    head->next= second;


    //insert the new node

    Node* newnode = new Node;

    newnode->data = 300;
  

    Node*temp = head;
    while (temp->next !=nullptr){
       temp = temp->next;
    }
    

    temp->next = newnode;
    newnode->prev = temp;

    temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
     

    
     return 0;
}