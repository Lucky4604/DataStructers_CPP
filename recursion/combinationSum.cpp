#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> candidates, vector<vector<int>> &ans, int target, vector<int> &op, int idx) {
    // Base case
    if (idx == candidates.size()) {
        if (target == 0) {
            ans.push_back(op);
        }
        return;
    }
    
    // Exclude call
    solve(candidates, ans, target, op, idx + 1);

    // Include call
    if (candidates[idx] <= target) {
        op.push_back(candidates[idx]);
        solve(candidates, ans, target - candidates[idx], op, idx);
        op.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    int idx = 0;
    vector<vector<int>> ans;
    vector<int> op;
    solve(candidates, ans, target, op, idx);
    return ans;
}

int main() {
    vector<int> v = {2, 3, 6, 7};
    int target = 7;

    vector<vector<int>> ans = combinationSum(v, target);
    for (const auto &combination : ans) {
        for (int i = 0; i < combination.size(); ++i) {
            cout << combination[i];
            if (i != combination.size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
