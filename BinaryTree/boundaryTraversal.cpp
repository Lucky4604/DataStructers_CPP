#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

void traverseLeft(Node* root, vector<int>& ans) {
    // base case 
    if (root == NULL) return;
    if (root->left || root->right) // Exclude leaf nodes
        ans.push_back(root->data);

    if (root->left) {
        traverseLeft(root->left, ans);
    } else if (root->right) {
        traverseLeft(root->right, ans);
    }
}

void traverseLeaves(Node* root, vector<int>& ans) {
    if (root == NULL) return;

    traverseLeaves(root->left, ans);

    if (!root->left && !root->right)
        ans.push_back(root->data);

    traverseLeaves(root->right, ans);
}

void traverseRight(Node* root, vector<int>& ans) {
    // base case 
    if (root == NULL) return;
    if (root->right) {
        traverseRight(root->right, ans);
        ans.push_back(root->data);
    } else if (root->left) {
        traverseRight(root->left, ans);
        ans.push_back(root->data);
    }
}

vector<int> boundary(Node* root) {
    vector<int> ans;
    if (root == NULL) return ans;

    ans.push_back(root->data);

    traverseLeft(root->left, ans);
    traverseLeaves(root, ans);
    traverseRight(root->right, ans);

    return ans;
}

int main() {
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(8);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->left = new Node(9);
    root->right->right->right = new Node(10);

    vector<int> ans = boundary(root);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
