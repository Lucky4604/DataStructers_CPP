#include<bits/stdc++.h>
using namespace std;

//class of Node
struct Node{
    int data;
    struct Node* right;
    struct Node* left;

    //constructor
    Node(int val){
        data=val;
        left=right=NULL;

    }
};

void preorder(Node *root,vector<int>&ans){
    //base case
    if(root==NULL)return ;

    ans.push_back(root->data);
    preorder(root->left,ans);
    preorder(root->right,ans);

}

int main() {
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(8);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->left = new Node(9);
    root->right->right->right = new Node(10);

    vector<int>ans;
    preorder(root,ans);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    

    return 0;
}
