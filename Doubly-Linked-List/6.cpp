// insert the node after the given value

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

    // int value = 300;
    int value = 2200;
    bool Isvalue = false;

    Node* temp = head;



  while (temp!=nullptr){
    if(temp->data == value){
         Isvalue = true;
         break;
    }else{
         temp = temp->next;
    }
  }

  //create new node

  Node* newnode = new Node;
  newnode->data = 1000;
  newnode->prev = nullptr;
  newnode->next = nullptr;

  
  
  if(Isvalue){
     if(temp->next == nullptr){
             temp->next = newnode;
             newnode->prev = temp;
             newnode->next = nullptr;
     }else{
         Node* next_node = temp->next;
         temp->next = newnode;
         newnode->prev = temp;

         newnode->next = next_node;
         next_node->prev = newnode;
     }
  }else{
    cout<<"This value is not present in the List try with the diffrent value"<<endl;
  }
  
   temp=head;

   while (temp!=nullptr){
       cout<<temp->data<<" ";
       temp = temp->next;
   }

    return 0;
}