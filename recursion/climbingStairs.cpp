#include<bits/stdc++.h>
using namespace std;

int climbeStairs(int n){
    //bas ecase
    if(n==1 || n==0){
        return 1;
    }
    return climbeStairs(n-1)+climbeStairs(n-2);
}
int main(){
    int n=10;

    cout<<climbeStairs(n);
}