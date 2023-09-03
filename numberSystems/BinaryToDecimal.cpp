#include<bits/stdc++.h>
using namespace std;


int BinToDec(int n){
    // return stoi(s,0,2);
    if(n==0)return 0;

    else 
        return (n%10)+2*BinToDec(n/10);
}


int main(){
    // string n="111";
    int n=111;
    cout<<BinToDec(n);
}