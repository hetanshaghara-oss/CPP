// 5. Insert a Node Before a Given Value



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


    // Insert Fourth node before given value

    Node* fourth = new Node;
    fourth->data = 5;

    Node* temp = head;

    int value = 20;

  
    while (temp->next->data != value )
    {
         temp = temp->next;
      
    }
    
     fourth->next = temp->next;
       temp->next = fourth;


    // Display

     temp = head;

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    return 0;
}