#include<bits/stdc++.h>
using namespace std;

int maxSubarray(vector<int>& nums, int n, int k) {
    int i = 0, j = 0, sum = 0;
    int maxa = INT_MIN;

    while (j < n) {
        sum += nums[j];
        
        if (j - i + 1 < k) {
            j++;
        } else if (j - i + 1 == k) {
            maxa = max(maxa, sum);
            sum -= nums[i];
            i++;
            j++;
        }
    }
    return maxa;
}

int main() {
    vector<int> v = {100, 200, 300, 400};
    int n = v.size(); // The size of the vector
    int k = 2;
    cout << maxSubarray(v, n, k);
}
