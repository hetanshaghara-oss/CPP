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

     Node* fourth  = new Node;
     fourth->data = 400;

     first->next = second;
     second->next = third;
     third->next = fourth;
     fourth->next = first;

     head = first;

     Node* LastNode = head;
     while (LastNode->next!=head)
     {
        LastNode = LastNode->next;
     }
     
    tail = LastNode;

    Node*temp = head;

    head = head->next;
    
    
    
    tail->next = head;

    delete temp;

    temp  = head;

    do
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    } while (temp!=head);
    
    
     
    return 0;
}