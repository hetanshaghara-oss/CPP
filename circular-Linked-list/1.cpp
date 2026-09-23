//create node

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
int main(){

    Node* head = new Node;
    head->data = 100;
    head->next = head;

    
    return 0;
}