//LEETCODE 977
// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

 

// Example 1:

// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100].
// Example 2:

// Input: nums = [-7,-3,2,3,11]
// Output: [4,9,9,49,121]
//code 
class Solution {
    public:
        vector<int> sortedSquares(vector<int>& nums) {
            int n=nums.size();
            int i=0;
            int j=n-1;
            int index=n-1;
            vector<int> v(n);
            while(i<=j){
                int leftSquare=nums[i]*nums[i];
                int rightSquare=nums[j]*nums[j];
                if(leftSquare >= rightSquare){
                    v[index] =leftSquare;
                    i++;
                }
                else {
                    v[index]= rightSquare;
                    j--;
                }
                index--;
            }
            return v;
        }
    };
