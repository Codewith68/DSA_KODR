//LEETCODE 11
// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.

 

// Example 1:


// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
// Example 2:

// Input: height = [1,1]
// Output: 1
 

// Constraints:

// n == height.length
// 2 <= n <= 105
// 0 <= height[i] <= 104

//code 
class Solution {
    public:
        int maxArea(vector<int>& height) {
            int i = 0; // Left pointer
            int j = height.size() - 1; // Right pointer
            int maxarea = 0; // Stores max water area
    
            while (i < j) { // Until the two pointers meet
                int gap = j - i; // Width of the container
                int hi = min(height[i], height[j]); // Min height determines water level
                int area = gap * hi; // Calculate water area
                maxarea = max(maxarea, area); // Update maxarea if found larger area
    
                // Move the pointer pointing to the shorter height
                if (height[i] <= height[j]) 
                    i++;
                else 
                    j--;
            }
            return maxarea; // Return the maximum water area found
        }
    };
    