#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
int main(){

    Node* head;
    Node* tail;

    Node* first = new Node;
    first->data = 100;

    
    Node* second = new Node;
    second->data = 200;


    
    Node* third = new Node;
    third->data = 300;


    first->next = second;
    second->next = third;
    third->next = first;


    head = first;
    
    Node* chaekLast = head;

             
    while (chaekLast->next != head)
    {
       chaekLast  = chaekLast->next;
    }
    
    tail = chaekLast;

    Node* temp = head;

    
    
    Node* newnode = new Node;

    newnode->data = 400;

    
    newnode->next = head;
    tail->next = newnode;
    tail = newnode;

  temp = head;

   do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);



    return 0;
}