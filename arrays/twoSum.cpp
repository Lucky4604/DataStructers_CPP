#include<bits/stdc++.h>
using namespace std;

 vector<int> twoSum(vector<int>& nums, int target) {
    //brute force approach=>
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }


//effecient approach=>
vector<int> twoSum(vector<int> nums,int target){
    unordered_map<int,int> m;
    vector<int> ans;

    for(int i=0;i<nums.size();i++){
        int require=target-nums[i];

        if(m.find(require)!=m.end()){
            //if element is present in map then we have found the pair
            ans.push_back(i);
            // Add the index of the required number (which is already in the map) to the 'ans' vector.
            ans.push_back(m[require]);
            return ans;
        }
        // If the 'required' number is not in the map, add the current number and its index 'i' to the 'mp' map.
        m[nums[i]] = i;
    }
    return {-1,-1};
}

int main(){
    vector<int>ans={2,7,11,15};
    int target=9;
    vector<int>res=twoSum(ans,target);
    cout<<res[0]<<" "<<res[1];

}