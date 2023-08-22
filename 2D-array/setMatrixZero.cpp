#include<bits/stdc++.h>
using namespace std;

   void setZeroes(vector<vector<int>>& matrix) {
       vector<bool> row_zero(matrix.size(),false);
        vector<bool> line_zero(matrix[0].size(),false);
        int i, j;
        for (i=0;i<row_zero.size();i++) {
            for (j=0;j<line_zero.size();j++) {
                if (matrix[i][j]==0) {
                    row_zero[i]=true;
                    line_zero[j]=true;
                }
            }
        }
        for (i=0;i<row_zero.size();i++) {
            for (j=0;j<line_zero.size();j++) {
                if (row_zero[i]) matrix[i][j]=0;
                else if (line_zero[j]) matrix[i][j]=0;
            }
        }
    }



int main(){
    vector<vector<int>> matrix={{1,1,1},{1,0,1},{1,1,1}};
    setZeroes(matrix);

    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        
    }
    cout<<endl;
    
}