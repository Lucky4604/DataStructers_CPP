#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> duplicate(vector<int>nums){
    vector<int> ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            ans.push_back(nums[i]) ;
        }
    }
    if(ans.size()==0){
        return {-1};
    }
    return ans;
}

int main(){
    vector<int> arr={2,3,1,2,3};
    vector<int> ans=duplicate(arr);
    cout<<"\nDuplicate elements are: ";
    copy(ans.begin(),ans.end(),ostream_iterator<int>(cout," "));
    return 0;
}