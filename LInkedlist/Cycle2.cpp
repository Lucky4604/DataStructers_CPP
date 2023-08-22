#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int val) : val(val), next(nullptr) {}
};

ListNode *detectCycle(ListNode *head) {
    if (head == nullptr) return nullptr;
    ListNode *slow = head, *fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow) {
            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return nullptr;
}

int main() {
    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);

    // Creating a cycle for testing (connect -4 to 2)
    head->next->next->next->next = head->next;

    ListNode* cycleStart = detectCycle(head);
    if (cycleStart != nullptr) {
        cout << "Cycle starts at node with value: " << cycleStart->val << endl;
    } else {
        cout << "No cycle detected." << endl;
    }

     // Remember to free the memory allocated for the linked list nodes
    // ListNode* curr = head;
    // while (curr != nullptr) {
    //     ListNode* temp = curr;
    //     curr = curr->next;
    //     delete temp;
    // }

    return 0;
}
