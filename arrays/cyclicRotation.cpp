#include<iostream>
#include<vector>
using namespace std;

void rotation(vector<int>& arr, int n) {
    int temp = arr[n - 1];
    for (int i = n - 1; i > 0; --i) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    int n = a.size();
    
    rotation(a, n);
    
    // Print the rotated array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    cout << endl;
}
