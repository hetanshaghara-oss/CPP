// count node in the list 

//ad at the begenning
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

    Node* fourth = new Node;
    fourth->data = 30;


    // Connect first, second and third

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = first;



    // Head and Tail

    head = first;
    tail = fourth;


    Node* temp = head;

    
    


   int count = 0 ;


    // Display

     temp = head;

    do {
        count++;
       
        temp = temp->next;
        
    } while (temp != head);


     cout<<count;

    return 0;
}