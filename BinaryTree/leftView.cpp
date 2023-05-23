#include<iostream>
#include<vector>
#include<set>

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

void solve(Node *root, vector<int>& ans, set<int>& s, int currlevel) {
    if (root == NULL) return;

    if (s.find(currlevel) == s.end()) {
        ans.push_back(root->data);
        s.insert(currlevel);
    }

    solve(root->left, ans, s, currlevel + 1);
    solve(root->right, ans, s, currlevel + 1);
}

vector<int> leftView(Node *root) {
    vector<int> ans;
    set<int> s;
    solve(root, ans, s, 0);
    return ans;
}

int main() {
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
    root->right->right = new Node(4);

    vector<int> view = leftView(root);
    for (int i = 0; i < view.size(); i++) {
        cout << view[i] << " ";
    }
    return 0;
}
