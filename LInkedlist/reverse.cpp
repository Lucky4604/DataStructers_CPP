#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int val):val(val),next(nullptr){}
};

ListNode* reverseList(ListNode* head){
    ListNode* prev=NULL;
    ListNode* curr=head;
    while(curr){
        ListNode *temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;

}
printList(ListNode* head){
     while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;

}


int main(){
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    ListNode* ans=reverseList(head);
    printList(ans);
}