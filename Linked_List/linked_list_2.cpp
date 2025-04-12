#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool flag = false;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                flag = true;
                break;
            }
        }

        if (!flag) return NULL;

        ListNode* temp = head;
        while (temp != slow) {
            temp = temp->next;
            slow = slow->next;
        }

        return slow;
    }
};

int main() {
    // Create linked list: 3 -> 2 -> 0 -> -4
    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);

    // Introduce a cycle: -4 -> 2 (cycle starts at node with value 2)
    head->next->next->next->next = head->next;

    Solution sol;
    ListNode* startOfCycle = sol.detectCycle(head);

    if (startOfCycle != NULL) {
        cout << "Cycle starts at node with value: " << startOfCycle->val << endl;
    } else {
        cout << "No cycle detected in the linked list." << endl;
    }

    return 0;
}
