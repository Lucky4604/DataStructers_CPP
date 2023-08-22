#include<bits/stdc++.h>
using namespace std;

int maxSubarray(vector<int> nums){
    int max_ending=nums[0];
    int res=nums[0];
    for(int i=1;i<nums.size();i++){
        max_ending=max(max_ending+nums[i],nums[i]);
        res=max(res,max_ending);
    }
    return res;
}


int main(){
    // vector<int> v={-2,1,-3,4,-1,2,1,-5,4};
    vector<int> v={5,4,-1,7,8};

    cout<<maxSubarray(v)<<endl;
}