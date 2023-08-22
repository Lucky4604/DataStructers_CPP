#include<bits/stdc++.h>
using namespace std;


int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);

    //removing elemnets
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    s.pop();

    cout<<"top of the stack is:"<<s.top()<<endl;
    cout<<"size of the stack is:"<<s.size()<<endl;


    if(s.empty()){
        cout<<"stack is empty"<<endl;

    }else{
        cout<<"stack is not empty"<<endl;
    }
}