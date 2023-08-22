#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& nums, vector<vector<int>>& ans, vector<int>& op, int idx) {
    // base case
    if (idx >= nums.size()) {
        ans.push_back(op);
        return;
    }

    // exclude call
    solve(nums, ans, op, idx + 1);

    // include call
    int ele = nums[idx];
    op.push_back(ele);
    solve(nums, ans, op, idx + 1);

    // Backtrack: Remove the element from the current subset before returning to the previous level of recursion.
    op.pop_back();
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> op;
    solve(nums, ans, op, 0);
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = subsets(nums);
    cout << result.size() << endl;
}
