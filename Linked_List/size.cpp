#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int size(Node* head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        
        temp=temp->next;
    }
    return count;
}
void displayrec(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayrec(head->next);

}
void displayrev(Node* head){
    if(head==NULL) return;
    displayrev(head->next);
    cout<<head->val<<" ";
    

}
void insertAtEnd(Node* head,int val){
    Node* t=new Node(val);
    while(head->next!=NULL){
        head=head->next;
    }
    head->next=t;


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
    
    display(a);
    cout<<endl;
    insertAtEnd(a,80);
    display(a);
    // displayrec(a);
    // cout<<size(a);
    // displayrev(a);

}