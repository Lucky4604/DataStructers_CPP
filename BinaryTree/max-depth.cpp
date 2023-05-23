#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

int height(Node *root) {
    if (root == NULL)
        return 0;
    
    int left = height(root->left);
    int right = height(root->right);
    
    return 1 + max(left, right);
}

int main() {
    struct Node *root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);

    int treeHeight = height(root);
    cout << "Height of the tree: " << treeHeight << endl;

    return 0;
}
