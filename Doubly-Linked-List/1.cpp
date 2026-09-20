//create the one node

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;
};
int main(){

    Node*first = new Node;

    first->data = 100;
    first->prev = nullptr;
    first->next = nullptr;

    cout<<first->data<<endl;
    return 0;
}