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
            Node *front = q.front();
            q.pop();
            
            level.push_back(front->data);
            
            if (front->left != NULL)
                q.push(front->left);
            
            if (front->right != NULL)
                q.push(front->right);
        }
        
       ans.push_back(level);
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
