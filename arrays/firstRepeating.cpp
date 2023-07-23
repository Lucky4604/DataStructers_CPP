#include<bits/stdc++.h>
using namespace std;

 int firstRepeated(int arr[], int n){
    int ans=-1;

    unordered_map<int,int> m;
    //mapping all the frequency of each element=>
    for(int i=0;i<n;i++) m[arr[i]]++;

    //checking if frequency is more than 1=>
    for(int i=0;i<n;i++){
        if(m[arr[i]]>1){
            ans=i+1;
            break;
        }
    }
    return ans;
 }

int main(){
    // int arr[] = {1, 5, 3, 4, 3, 5, 6};
    int arr[] = {1, 2, 3, 4};
     int n = sizeof(arr) / sizeof(arr[0]);
     cout<<firstRepeated(arr,n);

    return 0;
}