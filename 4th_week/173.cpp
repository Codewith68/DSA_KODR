//LKEETCODE 287
// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and using only constant extra space.

 

// Example 1:
// Input: nums = [1,3,4,2,2]
// Output: 2
// Example 2:

// Input: nums = [3,1,3,4,2]
// Output: 3
// Example 3:

// Input: nums = [3,3,3,3,3]
// Output: 

//code 
class Solution {
    public:
        int findDuplicate(vector<int>& v) {
            int n=v.size();
            int i=0;
            while(i<n){
                int correctIdx=v[i];
                if(v[correctIdx]==v[i]) return v[i];
                swap(v[i],v[correctIdx]);
            }
            return 90;
        }
    };
