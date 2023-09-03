#include<bits/stdc++.h>
using namespace std;


string removeDupliacates(string &s){
    stack<char>st;
        for(char c:s){
            if(!st.empty() &&c==st.top() ){    
                 st.pop();
                }else{
                    st.push(c);
                }
            
        }
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
       return ans;
    
}


int main(){
    string s="abbaca";
    string ans=removeDupliacates(s);
    for(char c:ans){
        cout<<c<<" ";
    }
    cout<<endl;
}