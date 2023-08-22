#include<bits/stdc++.h>

using namespace std;

string largestOddNumber(string num){
    string ans=" ";
    for(int i=num.length()-1;i>=0;i--){
        int c=num[i];
        if(c%2!=0){
            ans=num.substr(0,i+1);
            break;
        }
    }
    return ans;
}


int main(){
    // string s="52";
    string s="35427";
    string ans=largestOddNumber(s);
    cout<<ans<<endl;
}