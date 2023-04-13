#include<bits/stdc++.h>

using namespace std;

int main(){
    list<int> myList;

    myList.push_back(1);
    myList.push_back(2);
    myList.push_back(3);

    //traversing all the list using iterator
    for(auto it=myList.begin();it!=myList.end();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}