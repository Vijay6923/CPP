#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node(value);
    // condition
    if (!head) {
        
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Delete node by value
void deleteNode(Node*& head, int key) {
    if (!head) return;

    // If head is to be deleted
    if (head->data == key) {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }

    Node* prev = nullptr;
    Node* curr = head;

    while (curr && curr->data != key) {
        prev = curr;
        curr = curr->next;
    }

    if (!curr) {
        cout << "Node with value " << key << " not found.\n";
        return;
    }

    prev->next = curr->next;
    delete curr;
}

// Display linked list
void printList(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

// Main
int main() {
    Node* head = nullptr;

    // Creating linked list: 10 -> 20 -> 30 -> 40
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);

    cout << "Original List:\n";
    printList(head);

    // Delete node with value 30
    deleteNode(head, 30);

    cout << "After Deleting 30:\n";
    printList(head);

    return 0;
}