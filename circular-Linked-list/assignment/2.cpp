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
      second->data = 100;

     Node* third = new Node;
     third->data = 300;

     Node* fourth  = new Node;
     fourth->data = 400;

     first->next = second;
     second->next = third;
     third->next = fourth;
     fourth->next = first;

     Node* LastNode = head;
     while (LastNode != head)
     {
        LastNode = LastNode->next;

        }
     


     head = first;
     tail = LastNode;


     int Value = 300 ;
     Node*temp = head;

     while (temp->next->data != Value)
     {
       temp = temp->next;
     }
     


    Node* newnode = new Node;

    newnode->data = 555;

    newnode->next = temp->next;
    temp->next = newnode;

    temp = head;

    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
        /* code */
    } while (temp!=head);
    




    
    return 0;
}