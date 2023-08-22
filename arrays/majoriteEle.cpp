#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;
        
        for(int i = 0; i < n; i++){
            m[nums[i]]++;
        }
        n = n/2;
        for(auto x: m){
            if(x.second > n){
                return x.first;
            }
        }
        return 0;
//     }
// int majorityElement(vector<int> &nums){
//     sort(nums.begin(),nums.end());
//     int n=nums.size();
//     return nums[n/2];
// }


int main(){
    vector<int> nums={3,2,3};

    cout<<"majority element is"<< " "<<majorityElement(nums)<<endl;

}