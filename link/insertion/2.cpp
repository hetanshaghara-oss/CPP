#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {

    // Existing list
    Node* head = new Node;
    head->data = 10;

    Node* second = new Node;
    second->data = 20;

    Node* third = new Node;
    third->data = 30;

    head->next = second;
    second->next = third;
    third->next = nullptr;


    // Insert 5 at beginning
    Node* newNode = new Node;

    newNode->data = 5;

    newNode->next = head;

    head = newNode;


    return 0;
}