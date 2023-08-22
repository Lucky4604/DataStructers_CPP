#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &nums){
    int profit=0;
    for(int i=1;i<nums.size();i++){
        if(nums[i]>nums[i-1]){
            profit=profit+(nums[i]-nums[i-1]);
        }

    }
    return profit;
}


int main(){
    vector<int> v={7,1,5,3,6,4};

    cout<<maxProfit(v);
}