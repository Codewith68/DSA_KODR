//LEETCODE 15
// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

 

// Example 1:

// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation: 
// nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
// nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
// nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
// The distinct triplets are [-1,0,1] and [-1,-1,2].
// Notice that the order of the output and the order of the triplets does not matter.
// Example 2:

// Input: nums = [0,1,1]
// Output: []
// Explanation: The only possible triplet does not sum up to 0.
// Example 3:

// Input: nums = [0,0,0]
// Output: [[0,0,0]]
// Explanation: The only possible triplet sums up to 0.
class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& nums) {
            sort(nums.begin(), nums.end()); // Step 1: Sort the array
        vector<vector<int>> result;
    
        // Iterate through the array
        for (int i = 0; i < nums.size(); i++) {
            // Skip duplicate elements to avoid duplicate triplets
            if (i > 0 && nums[i] == nums[i - 1]) continue;
    
            int left = i + 1, right = nums.size() - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
    
                if (sum == 0) { // Found a valid triplet
                    result.push_back({nums[i], nums[left], nums[right]});
    
                    // Move `left` pointer and skip duplicate elements
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    // Move `right` pointer and skip duplicate elements
                    while (left < right && nums[right] == nums[right - 1]) right--;
    
                    left++, right--; // Move both pointers to find the next triplet
                } 
                else if (sum < 0) {
                    left++; // Need a larger sum, move `left` right
                } 
                else {
                    right--; // Need a smaller sum, move `right` left
                }
            }
        }
        return result;
    
        }
    };