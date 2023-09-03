#include<bits/stdc++.h>
using namespace std;

int octToDec(int n){
    // return stoi(n,0,8);
    if(n==0)return 0;
    else
    return (n%10)+8*octToDec(n/10);
}

int main(){
    int n=123;
    cout<<octToDec(n);
}