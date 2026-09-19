//delete the entire list

#include<iostream>
using namespace std;

struct Node{
     int data;
     Node*next;
    
};
int main(){


    Node*head = new Node;
    head->data = 100;
    head->next = nullptr;

    Node*second = new Node;
    second->data = 200;
    second->next = nullptr;

    Node*third = new Node;
    third->data = 300;
    third->next = nullptr;

    Node*four = new Node;
    four->data = 400;
    four->next = nullptr;

    head->next = second;
    second->next = third;
    third->next = four;
    four->next = nullptr;

    Node*temp = head;
    Node*nextNode;

    while (temp!=nullptr){
        nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }
    
    

     return 0 ;
}