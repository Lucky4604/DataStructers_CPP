#include<bits/stdc++.h>
using namespace std;


int main(){
    string str="lucky";
    stack<char>s;

    for(char c:str){
        s.push(c);
    }
    //printing elements
    while(!s.empty()){
        cout<<s.top()<<"";
        s.pop();

    }
    
}