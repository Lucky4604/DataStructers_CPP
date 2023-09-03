#include<bits/stdc++.h>
using namespace std;


int validParanthesis(string &s){
    stack<int>st;
    int maxLen=0;
    st.push(-1);
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            st.push(i);
        }else{
            st.pop();
            //check whether stack is empty or not
            if(st.empty()){
                st.push(i);
            }else{
                int length=i-st.top();
                maxLen=max(maxLen,length);
            }
        }
    }
    return maxLen;

}
int main(){
    string s=")()())";
    cout<<validParanthesis(s)<<endl;
}