#include<iostream>

using namespace std;

struct Node{
    int data;
    struct Node *right;
    struct Node *left;
    Node(int val){
        val=data;
        left=right=NULL;
    }

};
 bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        if(r1==NULL && r2==NULL)return true;
        if(r1==NULL || r2==NULL)return false;
        if(r1->data!=r2->data)return false;
        return isIdentical(r1->left,r2->left)&& isIdentical(r1->right,r2->right);
        
    }


int main(){
    struct Node *r1=new Node(1);
    r1->left=new Node(2);
    r1->right=new Node(3);

    struct Node *r2=new Node(1);
    r2->left=new Node(2);
    r2->right=new Node(3);

    if (isIdentical(r1, r2))
        cout << "Both trees are identical.";
    else
        cout << "Trees are not identical.";
    return 0;
}