//program to find missing element from the array 
//Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.
// Example 1:
// Input:
// N = 5
// A[] = {1,2,3,5}
// Output: 4
#include<iostream>
#include<vector>

using namespace std;

int missingElement(vector<int> arr,int n){
    int sum=0;
    int sumOfN=n*(n+1)/2;

    for(int i=0;i<n-1;i++){
        sum+=arr[i];
    }
    return (sumOfN-sum);
}
int main(){
    vector<int> arr={1,2,3,5};
    int n=arr.size()+1;
    cout<<missingElement(arr,n)<<endl; 
}
//     int n;
//     cout << "Enter the size of the array (N-1): ";
//     cin >> n;

//     vector<int> arr(n - 1);
//     cout << "Enter the elements of the array (distinct integers in the range 1 to N): ";
//     for (int i = 0; i < n - 1; i++) {
//         cin >> arr[i];
//     }
//     int ans=missingElement(arr,n);
//     cout<<ans<<endl;
// }
