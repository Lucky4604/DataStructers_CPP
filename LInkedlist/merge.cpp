#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int val): val(val),next(nullptr){}
};
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
    //base case
    if(!list1)return list2;
    if(!list2)return list1;

    if(list1->val<=list2->val){
        list1->next=mergeTwoLists(list1->next,list2);
        return list1;

    }else{
        list2->next=mergeTwoLists(list1,list2->next);
        return list2;
    }
}

//print list
printList(ListNode* head){
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}


int main(){
     ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(3);
    list1->next->next = new ListNode(5);

    ListNode* list2 = new ListNode(2);
    list2->next = new ListNode(4);
    list2->next->next = new ListNode(6);

    ListNode* ans=mergeTwoLists(list1,list2);

    printList(ans);
    
}