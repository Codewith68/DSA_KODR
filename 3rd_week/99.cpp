//LEETCODE 73

// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

// You must do it in place.

 

// Example 1:


// Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
// Output: [[1,0,1],[0,0,0],[1,0,1]]

//code 

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int m=matrix.size();
       int n=matrix[0].size();
       vector<int>row(m,6);
       vector<int>col(n,6);
       for(int i=0;i<=m-1;i++){
           for(int j=0;j<=n-1;j++){
               if(matrix[i][j]==0){
                   row[i]=0;
                   col[j]=0;
               }
           }
       }
       for(int i=0;i<=m-1;i++){
           for(int j=0;j<=n-1;j++){
               if(row[i]==0||col[j]==0) matrix[i][j]=0;
           }
       }
    }
};

// time complexity : O(m*n)
// space complexity : O(m+n)