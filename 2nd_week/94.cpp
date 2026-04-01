//LEETCODE 832

//code 
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

        for(int row = 0; row < image.size(); row++) {

            // Step 1: Reverse the row
            reverse(image[row].begin(), image[row].end());

            // Step 2: Invert the row
            for(int col = 0; col < image[row].size(); col++) {
                if(image[row][col] == 0)
                    image[row][col] = 1;
                else
                    image[row][col] = 0;
            }
        }
        return image;
    }
};