#include<bits/stdc++.h>
using namespace std;


void insertAtEnd(stack<int>&s,int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    int topElement=s.top();
    s.pop();

    //recursion
    insertAtEnd(s,target);
    //backtrack
    s.push(topElement);
}


void reverse(stack<int>&s){
    //base case
    if(s.empty()){
        return ;

    }

    int target=s.top();
    s.pop();

    //recusrion sambhalega
    reverse(s);

    //insert at bottom
    insertAtEnd(s,target);
}


int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    reverse(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}