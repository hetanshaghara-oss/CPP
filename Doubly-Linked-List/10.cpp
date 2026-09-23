#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};

int main()
{
    // Creation
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

    Node* fourth = new Node;
    fourth->data = 400;
    fourth->prev = nullptr;
    fourth->next = nullptr;

    // Connection
    head->next = second;

    second->prev = head;
    second->next = third;

    third->prev = second;
    third->next = fourth;

    fourth->prev = third;
    fourth->next = nullptr;

    // Given value
    int value = 200;

    // Find the given value
    Node* temp = head;

    while (temp != nullptr && temp->data != value)
    {
        temp = temp->next;
    }

    // Value not found
    if (temp == nullptr)
    {
        cout << "This value is not available in the list." << endl;
    }

    // No node exists after the given value
    else if (temp->next == nullptr)
    {
        cout << "No node exists after this value." << endl;
    }

    // Delete node after given value
    else
    {
        Node* next_node = temp->next;

        temp->next = next_node->next;

        if (temp->next != nullptr)
        {
            temp->next->prev = temp;
        }

        delete next_node;

        cout << "Node after " << value << " deleted successfully." << endl;
    }

    // Display list
    cout << "List: ";

    temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}