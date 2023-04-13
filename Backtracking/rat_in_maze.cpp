#include<bits/stdc++.h>
using namespace std;

bool isSafe(int x, int y, int row, int col, int arr[3][3], vector<vector<bool>> &vis){
    if ((x >= 0 && x < row) && (y >= 0 && y < col) && (arr[x][y] == 1) && (vis[x][y] == false)){
        return true;
    } else {
        return false;
    }   
}

void solve(int arr[3][3], int row, int col, int i, int j, vector<vector<bool>> &vis, vector<string> &path, string output){
    //base case
    if (i == row-1 && j == col-1){
        //answer found
        path.push_back(output);
        return;
    }
    //down case=>(i+1,j)
    if (isSafe(i+1, j, row, col, arr, vis)){
        vis[i+1][j] = true;
        solve(arr, row, col, i+1, j, vis, path, output+"D");
        //backtrack=>
        vis[i+1][j] = false;
    }
    //right case =>(i,j+1)
    if (isSafe(i, j+1, row, col, arr, vis)){
        vis[i][j+1] = true;
        solve(arr, row, col, i, j+1, vis, path, output+"R");
        //backtrack=>
        vis[i][j+1] = false;
    }
    //up case =>(i-1,j)
    if (isSafe(i-1, j, row, col, arr, vis)){
        vis[i-1][j] = true;
        solve(arr, row, col, i-1, j, vis, path, output+"U");
        //backtrack=>
        vis[i-1][j] = false;
    }
    //left case=>(i,j-1)
     if (isSafe(i, j-1, row, col, arr, vis)){
        vis[i][j-1] = true;
        solve(arr, row, col, i, j-1, vis, path, output+"L");
        //backtrack=>
        vis[i][j-1] = false;
    }
}

int main(){
    int maze[3][3] = {{1, 0, 0}, {1, 1, 0}, {1, 1, 1}};
    int row = 3;
    int col = 3;

    vector<vector<bool>> vis(row, vector<bool>(col, false));
    //src ki val ko true mark karde
    vis[0][0] = true;
    vector<string> path;
    string output = "";
    solve(maze, row, col, 0, 0, vis, path, output);

    cout << "printing the result" << endl;

    for (auto x : path){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
