#include<bits/stdc++.h>
using namespace std;

int minRevrse(string &s){
    stack<char>st;
    //if the string is odd
    if(s.size() & 1)return -1;
    int ans=0;

    for(char c :s){
        if(c=='('){
            st.push(c);
        }else{
            if(!st.empty() && st.top()=='('){
                st.pop();
            }else{
                st.push(c);

            }
        }
    }
    while(!st.empty()){
        char a=st.top();
        st.pop();
        char b=st.top();
        st.pop();
       ans+=(a==b)?1:2;

    }
    return ans;
}

int main(){
    string s=")(())(((";
    cout<<minRevrse(s)<<endl;
}