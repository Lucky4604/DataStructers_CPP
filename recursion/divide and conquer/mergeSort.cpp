#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int s, int e) {
    int mid = (s + e) / 2;
    int i = s;         // Starting index of the first half
    int j = mid + 1;   // Starting index of the second half
    vector<int> temp;  // Temporary array to store merged elements

    while (i <= mid && j <= e) {
        if (arr[i] < arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Copy remaining elements from the first half
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    // Copy remaining elements from the second half
    while (j <= e) {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy the sorted elements back to the original array
    for (int k = s; k <= e; k++) {
        arr[k] = temp[k - s];
    }
}

void mergeSort(vector<int>& arr, int s, int e) {
    // Base case
    if (s >= e) {
        return;
    }
    int mid = (s + e) / 2;

    // Recursively solve 1st half
    mergeSort(arr, s, mid);

    // Recursively solve 2nd half
    mergeSort(arr, mid + 1, e);

    // Merge the two halves
    merge(arr, s, e);
}

int main() {
    vector<int> v = {7, 3, 2, 16, 24, 4, 11, 9};
    int n = 8;

    mergeSort(v, 0, n - 1);

    for (auto num : v) {
        cout << num << " ";
    }
    return 0;
}
