#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Function to insert a new node after a given node
void insertAfter(Node* prev_node, int new_data) {
    if (prev_node == nullptr) {
        cout << "The given previous node cannot be NULL";
        return;
    }

    // Create a new node
    Node* new_node = new Node(new_data);

    // Link the new node to the next of prev_node
    new_node->next = prev_node->next;

    // Link prev_node to the new node
    prev_node->next = new_node;
}

// Function to print the linked list
void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " -> ";
        node = node->next;
    }
    cout << "NULL\n";
}

int main() {
    // Create: 10 -> 20 -> 30
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    head->next = second;
    second->next = third;

    cout << "Original List:\n";
    printList(head);

    // Insert 15 after 10
    insertAfter(head, 15);

    cout << "\nList after inserting 15 after 10:\n";
    printList(head);

    return 0;
}
