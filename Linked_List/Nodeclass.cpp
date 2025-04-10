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
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // // forming linked list
    // cout<<a.val<<endl;
    // cout<<a.next<<endl;
    a.next=&b;
    b.next=&c;
    c.next=&d;
    Node temp=a;
    while(1){
        cout<<temp.val<<endl;
        if((temp.next)== NULL) break;
        temp=*(temp.next);
    }


    

}