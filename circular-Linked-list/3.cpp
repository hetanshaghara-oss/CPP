//add at the end

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {

    Node* head;
    Node* tail;

    // First node
    Node* first = new Node;
    first->data = 10;

    // Second node
    Node* second = new Node;
    second->data = 20;

    // Third node
    Node* third = new Node;
    third->data = 30;


    // Connect first, second and third

    first->next = second;
    second->next = third;
    third->next = first;


    // Head and Tail

    head = first;
    tail = third;


    // Insert Fourth node at beginning

    Node* fourth = new Node;
    fourth->data = 5;

     fourth->next = head;
     tail->next = fourth;

     tail = fourth;


    // Display

    Node* temp = head;

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    return 0;
}