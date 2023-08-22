#include <bits/stdc++.h>
using namespace std;

vector<int> spirallyTraverse(vector<vector<int>>& matrix, int r, int c) {
    vector<int> ans;
    int left = 0;
    int right = c - 1;
    int top = 0;
    int bottom = r - 1;
    //case:1 left to right top++;
    //case:2 top to bottom right--;
    //case:3 right to left bottom--;
    //case:4 bottom to top left++;

    while (top <= bottom && left <= right) {
        // Traverse the top row from left to right
        for (int i = left; i <= right; i++) {
            ans.push_back(matrix[top][i]);
        }
        top++; // Move to the next row

        // Traverse the rightmost column from top to bottom
        for (int i = top; i <= bottom; i++) {
            ans.push_back(matrix[i][right]);
        }
        right--; // Move to the next column from the right

        // Check if there are more rows to traverse
        if (top <= bottom) {
            // Traverse the bottom row from right to left
            for (int i = right; i >= left; i--) {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--; // Move to the next row from the bottom
        }

        // Check if there are more columns to traverse
        if (left <= right) {
            // Traverse the leftmost column from bottom to top
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++; // Move to the next column from the left
        }
    }

    return ans;
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3, 4},
                                  {5, 6, 7, 8},
                                  {9, 10, 11, 12}};

    int r = matrix.size();
    int c = matrix[0].size();

    vector<int> ans = spirallyTraverse(matrix, r, c);

    for (auto it : ans) {
        cout << it << " ";
    }
    cout << endl;
}
