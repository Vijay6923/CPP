#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList {
public:
    Node* head;
    Node* tail;
    int size;

    LinkedList() {
        head = tail = NULL;
        size = 0;
    }

    void insertAtTail(int val) {
        Node* temp = new Node(val);
        if (size == 0) {
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int val) {
        Node* temp = new Node(val);
        if (size == 0) {
            head = tail = temp;
        } else {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtIdx(int idx, int val) {
        if (idx < 0 || idx > size) {
            cout << "Invalid index\n";
            return;
        }
        if (idx == 0) {
            insertAtHead(val);
        } else if (idx == size) {
            insertAtTail(val);
        } else {
            Node* t = new Node(val);
            Node* temp = head;
            for (int i = 0; i < idx - 1; i++) {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }

    void deleteAtHead() {
        if (size == 0) {
            cout << "Empty\n";
            return;
        }
        head = head->next;
        size--;
        if (size == 0) tail = NULL;
    }

    void deleteAtTail() {
        if (size == 0) {
            cout << "Empty\n";
            return;
        }
        if (size == 1) {
            head = tail = NULL;
        } else {
            Node* temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
        }
        size--;
    }

    void deleteAtIdx(int idx) {
        if (size == 0) {
            cout << "Empty\n";
            return;
        } else if (idx < 0 || idx >= size) {
            cout << "Invalid index\n";
            return;
        } else if (idx == 0) {
            deleteAtHead();
        } else if (idx == size - 1) {
            deleteAtTail();
        } else {
            Node* temp = head;
            for (int i = 0; i < idx - 1; i++) {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }

    int getAtIdx(int idx) {
        if (idx < 0 || idx >= size) {
            cout << "Invalid index\n";
            return -1;
        }
        Node* temp = head;
        for (int i = 0; i < idx; i++) {
            temp = temp->next;
        }
        return temp->val;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList ll;
    ll.insertAtTail(10);
    ll.display();
    ll.insertAtTail(30);
    ll.display();
    cout << ll.size << endl;

    ll.insertAtHead(20);
    ll.display();
    cout << ll.size << endl;

    ll.insertAtIdx(2, 50);
    ll.display();
    cout << ll.size << endl;

    cout << "Value at index 3: " << ll.getAtIdx(3) << endl;

    ll.deleteAtIdx(2);
    ll.display();

    ll.deleteAtHead();
    ll.display();

    ll.deleteAtTail();
    ll.display();

    return 0;
}