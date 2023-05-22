#include <iostream>
#include <vector>
#include <queue>
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

vector<int> LevelOrder(Node *root) {
    vector<int> ans;
    if (root == NULL)
        return ans;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        vector<int> level;
        
        for (int i = 0; i < size; i++) {
            Node *node = q.front();
            q.pop();
            
            level.push_back(node->data);
            
            if (node->left != NULL)
                q.push(node->left);
            
            if (node->right != NULL)
                q.push(node->right);
        }
        
        ans.insert(ans.end(), level.begin(), level.end());
    }
    
    return ans;
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

    vector<int> ans = LevelOrder(root);

    cout << "Level order traversal is: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
