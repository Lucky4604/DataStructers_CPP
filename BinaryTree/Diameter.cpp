#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val){
        val=data;
        left=right=NULL;
    }

};
int height(Node *root){
     if (root == NULL)
        return 0;
    
    int left = height(root->left);
    int right = height(root->right);
    
    return 1 + max(left, right);
}
int diameter(Node *root){
    if(root==NULL) return 0;
    int opt1=diameter(root->left);
    int opt2=diameter(root->right);
    int opt3=height(root->left)+height(root->right)+1;
    int ans=max(opt1,max(opt2,opt3));
    return ans;
}


int main(){
 struct Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    root->left->right=new Node(60);

    int diameterOfTree=diameter(root);
    cout<<diameterOfTree;
    return 0;
}