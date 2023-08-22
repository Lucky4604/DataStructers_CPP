#include<bits/stdc++.h>
using namespace std;


bool isAnagram(string s,string t){
    // sort(s.begin(),s.end());
    // sort(t.begin(),t.end());

    // (s==t)?true:false;

   if (s.length() != t.length()) {
        return false;
    }

    std::map<char, int> m;
    std::map<char, int> m1;

    for (char c : s) {
        m[c]++;
    }

    for (char c : t) {
        m1[c]++;
    }

    return m == m1;

}


int main(){
    string s="anagram";
    string t="nagaram";

    cout<<isAnagram(s,t)<<endl;
}