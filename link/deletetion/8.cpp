//delete the node befor the given value 

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
  

    Node* four= new Node;
    four->data = 400;
    four->next = nullptr;
   

    head->next = second;
    second->next = third;
    third->next = four;
    four->next = nullptr;

    Node*temp = head;


    int value = 300;

    while(temp->next->next->data != value){
         temp = temp->next;
    }


    Node*del = temp->next;
     temp->next = del->next;

     delete del;
    temp = head;

     while (temp!=nullptr){
         cout<<temp->data<<endl;
         temp = temp->next;
     }
   return 0;
}