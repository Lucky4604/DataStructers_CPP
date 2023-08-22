#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++){
           int low=i+1;
           int high=nums.size()-1;
       
           while(low<high){
               int current=nums[i]+nums[low]+nums[high];
               if(current==0){
                   s.insert({nums[i],nums[low],nums[high]});
               }
               if(current<0){
                   low++;
               }else{
                   high--;
               }
           }
       }
           vector<vector<int>> ans(s.begin(),s.end());
           return ans;
       }


int main(){
    vector<int>v={-1,0,1,2,-1,-4};
    vector<vector<int>>res=threeSum(v);

    for(vector<int>triplet:res){
        for(int num:triplet){
            cout<<num<<" ";
        }
        cout<<endl;
    }
}

