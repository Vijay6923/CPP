#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};

ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
    if (headA == NULL || headB == NULL) return NULL;

    ListNode* a = headA;
    ListNode* b = headB;
    while (a != b) {
        a = (a == NULL) ? headB : a->next;
        b = (b == NULL) ? headA : b->next;
    }

    return a;
}
ListNode* IntersectionNode(ListNode* headA, ListNode* headB) {
    int lenA=0;
    ListNode* tempA=headA;
    ListNode* tempB=headB;
    while(tempA!=NULL){
        lenA++;
        tempA=tempA->next;
    }
    int lenB=0;
    while(tempB!=NULL){
        lenB++;
        tempB=tempB->next;
    }
    tempA=headA;
    tempB=headB;
    if(lenA>lenB){
        int diff=lenA-lenB;
        for(int i=1;i<=diff;i++){
            tempA=tempA->next;
        }
        while(tempA!=tempB){
            tempA=tempA->next;
            tempB=tempB->next;

        }
        return headA;
    }
    else{
        
        int diff=lenB-lenA;
        for(int i=1;i<=diff;i++){
            tempB=tempB->next;
        }
        while(tempA!=tempB){
            tempA=tempA->next;
            tempB=tempB->next;

        }
        return headA;
    }
    


}


int main() {
    // Common part of both lists
    ListNode* common = new ListNode(8);
    common->next = new ListNode(10);

    // List A: 4 -> 1 -> 8 -> 10
    ListNode* headA = new ListNode(4);
    headA->next = new ListNode(1);
    headA->next->next = common;

    // List B: 5 -> 6 -> 1 -> 8 -> 10
    ListNode* headB = new ListNode(5);
    headB->next = new ListNode(6);
    headB->next->next = new ListNode(1);
    headB->next->next->next = common;

    ListNode* intersection = getIntersectionNode(headA, headB);
    ListNode* intersection1 = IntersectionNode(headA, headB);

    
    if (intersection != NULL) {
        cout << "Intersection at node with value: " << intersection->val << endl;
    } else {
        cout << "No intersection found." << endl;
    }

    return 0;
}
