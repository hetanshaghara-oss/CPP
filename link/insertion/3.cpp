#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {

    // Create first node
    Node* head = new Node;
    head->data = 10;
    head->next = nullptr;

    // Create second node
    Node* second = new Node;
    second->data = 20;
    second->next = nullptr;

    // Connect first to second
    head->next = second;

    // Create third node
    Node* third = new Node;
    third->data = 30;
    third->next = nullptr;

    // Connect second to third
    second->next = third;


    // -------- INSERT AT END --------

    // Create new node
    Node*  newNode = new Node;
    newNode->data = 40;
    newNode->next = nullptr;


    Node* temp = head;

    while(temp->next  != nullptr){
        temp = temp->next;

    }
    
    temp->next = newNode;
    newNode->next = nullptr;

    temp = head;

    while ( temp != nullptr)
    {
       cout<<temp->data<<endl;
       temp = temp->next;
    }
    
    return 0;
}