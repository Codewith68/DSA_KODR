//LEETCODE 442
// Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears at most twice, return an array of all the integers that appears twice.

// You must write an algorithm that runs in O(n) time and uses only constant auxiliary space, excluding the space needed to store the output

 

// Example 1:

// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [2,3]
// Example 2:

// Input: nums = [1,1,2]
// Output: [1]
// Example 3:

// Input: nums = [1]
// Output: []

// Constraints:

// n == nums.length
// 1 <= n <= 105
// 1 <= nums[i] <= n
// Each element in nums appears once or twice.

//code 
class Solution {
    public:
        vector<int> findDuplicates(vector<int>& v) {
             int n=v.size();
            int i=0;
            while(i<n){
                int correctIdx=v[i]-1;
                if(v[correctIdx]==v[i] ) i++;
               else  swap(v[i],v[correctIdx]);
            }
            vector<int>answer;
            for(int i=0;i<n;i++){
                if(v[i]!=i+1) answer.push_back(v[i]); // isme index me jo value hai wo duplicate hai
            }
            return answer;
        }
    };
