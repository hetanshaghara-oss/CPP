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

     head->next = second;
     second->next = third;
     third->next = nullptr;

      Node*temp =head;
      head = head->next;
      delete temp;

       temp = head;

    while (temp != nullptr)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    
    

    return 0;
}