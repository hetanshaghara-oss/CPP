//search the node in the list

#include<iostream>
using namespace std;

struct Node
{ 
    int data;
    Node*next;
    
};


int main(){

    Node*head = new Node;
    head->data = 1;
    head->next=  nullptr;

    Node*second = new Node;
    second->data = 2;
    second->next=  nullptr;

    Node*third = new Node;
    third->data = 3;
    third->next=  nullptr;
     
    head->next = second;
    second->next = third;
    third->next = nullptr;

    head->next = second;
    second->next = third;
    third->next = nullptr;

    int value = 2;
    bool Isfound;
    Node*temp  = head;
   
    while(temp != nullptr){
         if(temp->data == value){
             Isfound = true;
              break;
         }else{
            temp = temp->next;
         }
    }

    if(Isfound){
         cout<<"This value is inside in the List"<<endl;
    }
    else{
        cout<<"this value is not inside the List"<<endl;
    }
    return 0;
}