#include<bits/stdc++.h>
using namespace std;


struct ListNode{
    int val;
    ListNode* next;
    ListNode(int val):val(val),next(nullptr){}
};


bool hasCycle(ListNode* head){
    ListNode* slow=head;
    ListNode* fast=head;
    
    while(fast->next && fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) return true;
    }
    return false;
}

int main(){
    ListNode* head=new ListNode(3);
    head->next=new ListNode(2);
    head->next->next=new ListNode(0);
    head->next->next->next=new ListNode(4);

    //creating cycle
    head->next->next->next->next=head->next;

    cout<<hasCycle(head);
}