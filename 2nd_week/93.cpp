//LEETCODE 867



//code 

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();   // Rows of original matrix
        int n = matrix[0].size(); // Columns of original matrix

        // Create transposed matrix of size n x m
        vector<vector<int>> v(n, vector<int>(m));

        // Fill transposed matrix by swapping rows and columns
        for (int i = 0; i < n; i++) { 
            for (int j = 0; j < m; j++) { 
                v[i][j] = matrix[j][i]; 
            }
        }
        return v;
    }
};
