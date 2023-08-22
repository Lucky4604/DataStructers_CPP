#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    struct ListNode* next;
    ListNode(int val) : val(val), next(nullptr) {}
};

class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        while (curr) {
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }

    void solve(ListNode* &head, int N) {
        head = reverse(head);
        if (!head || !head->next) {
            cout << "List is too short" << endl;
            return;
        }
        for (int i = 1; i < N; i++) {
            head = head->next;
        }
        cout << head->val << endl;
    }
};

int main() {
    ListNode* head = new ListNode(35);
    head->next = new ListNode(15);
    head->next->next = new ListNode(4);
    head->next->next->next = new ListNode(20);
    int N = 4;

    Solution solution;
    solution.solve(head, N);
    return 0;
}
