//create the first node
#include<iostream>
using namespace std;
    
struct Node{
     int data;
      Node* next;
};

int main(){

   Node* ptr = new Node;

   ptr->data = 5000;
   ptr->next = nullptr;

   cout<<ptr->data;

   delete ptr;


     return 0;
}