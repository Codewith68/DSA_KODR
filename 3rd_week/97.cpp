//LEETCODE 48

// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

 

// Example 1:


// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[7,4,1],[8,5,2],[9,6,3]]


//code 

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m=matrix.size();
        // first transpose the matrix
        for(int i=0;i<=m-1;i++){
           for(int j=i+1;j<=m-1;j++){
               int temp=matrix[i][j];
               matrix[i][j]=matrix[j][i];
               matrix[j][i]=temp;
           }
        }
        // then reverse each row
        for(int k=0;k<=m-1;k++){
            int i=0;
            int j=m-1;
            while(i<=j){
                int temp=matrix[k][i];
                matrix[k][i]=matrix[k][j];
                matrix[k][j]=temp;
                i++;
                j--;
            }
        }
    }
};