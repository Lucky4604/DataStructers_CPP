#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int val):val(val),next(nullptr){}
};


bool palindrom(ListNode* head){
   ListNode* slow=head;
        stack<int>s;
        while(slow){
            s.push(slow->val);
            slow=slow->next;
            
        }
        while(head){
            int top=s.top();
            s.pop();
            if(head->val!=top){
                return false;
            }
            head=head->next;
        }
        return true;
        
    }



int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(2);
       head->next->next->next->next = new ListNode(1);
    cout<<palindrom(head);
}