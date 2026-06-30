//LEETCODE 448

// Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.


// Example 1:

// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [5,6]
// Example 2:

// Input: nums = [1,1]
// Output: [2]
 

// Constraints:

// n == nums.length
// 1 <= n <= 105
// 1 <= nums[i] <= n
 

// Follow up: Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space.

//code 
class Solution {
    public:
        vector<int> findDisappearedNumbers(vector<int>& nums) {
            // Step 1: Mark presence by making the number at index (num - 1) negative
            for (int i =0;i<nums.size();i++) {
                int x=abs(nums[i]); // Pick the absolute value of the number
                int idx=x-1; // Find its correct index (0-based)
                if(nums[idx]>0) { // If not already marked
                    nums[idx]*=-1; // Mark as visited by making it negative
                }
            }
    
            // Step 2: Collect missing numbers (where index remains positive)
            vector<int>answer;
            for (int i=0;i<nums.size();i++) {
                if (nums[i]>0){ // If still positive, index+1 is missing
                    answer.push_back(i+1);
                }
            }
            return answer; // Return the missing numbers
        }
    };
    
