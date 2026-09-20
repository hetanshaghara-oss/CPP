//delete the node before given value

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
    third->next = nullptr;

    int value = 200;
    int Isvalue = false;

    Node* temp = head;

    while (temp!=nullptr && temp->data != value)
    { 
        temp = temp->next;
    }

        if(temp == nullptr){
             cout<<"this value is not exist"<<endl;
        }else if( temp->prev == nullptr){
             cout<<"no node exist before"<<endl;
        }

        else{

            Node* pre_node = temp->prev;
         
           if(pre_node == head){
             head = temp;
             head->prev = nullptr;
             delete pre_node;
           }
            else{

                Node* befor = pre_node->prev;
                  
                befor->next = temp;
                temp->prev= befor;

                delete pre_node;


            }

           
                delete pre_node;
        }


        temp = head;

        while (temp!=nullptr)
        {
           cout<<temp->data<<endl;
           temp = temp->next;
        }
        
    
    return 0;
}