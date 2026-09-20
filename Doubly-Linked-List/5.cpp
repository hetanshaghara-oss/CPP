//add the node at the  beginning of the given value

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;
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
     second->next=third;
     third->prev = second;

     //we want to add the befor the 2

     //create the newnode

     Node* temp = head;

     Node* newnode = new Node;
     newnode->data = 150;
     newnode->prev = nullptr;
     newnode->next=nullptr;

     int value = 200;
     bool Isfound = false;

     while (temp!=nullptr)
     {
        
        if(temp->data == value){
             Isfound = true;
             break;
        }else{
            temp = temp->next;
        } 
     }


     
     
     if(Isfound == true){

        if(temp == head){
            head->prev = newnode;

            newnode->prev = nullptr;
            newnode->next = head;

            head = newnode;
        }else{
            
             //connect newnode

       /// [temp_prev] [newnode] [temp]
  Node* temp_prev = temp->prev;   

      temp->prev = newnode;
      newnode->next = temp;

      temp_prev->next = newnode;
      newnode->prev = temp_prev;
       


        }
         

     }else{
         cout<<"this value is not inside in the list"<<endl;
     }

     temp = head;
    



      while (temp!=nullptr)
      {
        cout<<temp->data<<" ";
        temp = temp->next;
      }
      
     return 0;
}