#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr,int k){
    int ans=0;
    if(k==0)return 1;

    for (int i = 0; i < arr.size(); i++) {
            ans += solve(arr, k - arr[i]);
        
    }

    return ans;
}


int main(){
    vector<int>v={1,2,3,1,1,1};
    int k=3;

    int ans=solve(v,k);
    cout<<ans;
}