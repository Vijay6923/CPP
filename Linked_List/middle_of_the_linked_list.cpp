#include<bits/stdc++.h>
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
Node* middle(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL&& fast->next!=NULL ){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;

}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    Node* head=a;
    cout<<middle(head)->val;;

}