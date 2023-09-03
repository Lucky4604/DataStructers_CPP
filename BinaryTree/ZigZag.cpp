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

vector<vector<int>> LevelOrder(Node *root) {
    vector<vector<int>> ans;
    if (root == NULL)
        return ans;

    bool leftToRight = true;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        vector<int> level(size);

        for (int i = 0; i < size; i++) {
            Node *front = q.front();
            q.pop();

            int idx = leftToRight ? i : size - i - 1;
            level[idx] = front->data;

            if (front->left != NULL)
                q.push(front->left);

            if (front->right != NULL)
                q.push(front->right);
        }

        ans.push_back(level);
        leftToRight = !leftToRight; // Toggle the direction for the next level
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

    vector<vector<int>> ans = LevelOrder(root);

    cout << "Zigzag level order traversal is: " << endl;
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
