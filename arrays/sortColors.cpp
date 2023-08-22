#include<bits/stdc++.h>
using namespace std;


void sortColors(vector<int>& nums) {
        int curr=0;
        int right=nums.size()-1;
        int left=0;
        while(curr<=right){
            if(nums[curr]==0){
                swap(nums[curr],nums[left]);
                curr++;
                left++;
            }else if(nums[curr]==1){
                curr++;
            }else if(nums[curr]==2){
                swap(nums[curr],nums[right]);
                right--;
            }
        }
        
    }


int main(){
    vector<int> ans={2,0,2,1,1,0};
    sortColors(ans);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}