//LEETCODE 560

// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

// A subarray is a contiguous non-empty sequence of elements within an array.

 

// Example 1:

// Input: nums = [1,1,1], k = 2
// Output: 2
// Example 2:

// Input: nums = [1,2,3], k = 3
// Output: 2
 

// Constraints:

// 1 <= nums.length <= 2 * 104
// -1000 <= nums[i] <= 1000
// -107 <= k <= 107

//code
class Solution {
    public:
        int subarraySum(vector<int>& nums, int k) {
            unordered_map<int,int> mp;
            int result=0;
            int cumSum=0;
            mp.insert({0,1});
            for(int i=0;i<nums.size();i++){
                cumSum+=nums[i];
                if(mp.find(cumSum-k)!=mp.end()){
                    result+=mp[cumSum-k];
                }
                mp[cumSum]++;
            }
            return result;
        }
    };