// LEETCODE 1886 

// Given two n x n binary matrices mat and target, return true if it is possible to make mat equal to target by rotating mat in 90-degree increments, or false otherwise.

 

// Example 1:


// Input: mat = [[0,1],[1,0]], target = [[1,0],[0,1]]
// Output: true
// Explanation: We can rotate mat 90 degrees clockwise to make mat equal target.

//code 
class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int m=mat.size() , n=mat[0].size();
        for(int k=0;k<4;k++){
            if(mat==target) return true;
            for(int i=0;i<m;i++){
                for(int j=i;j<n;j++)
                    swap(mat[i][j],mat[j][i]);
            }
            for(int i=0;i<m;i++){
                reverse(mat[i].begin(),mat[i].end());
            }
        }
        return false;
    }
};

// time complexity : O(n^2)
// space complexity : O(1)