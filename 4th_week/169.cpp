//LEETCODE 268
// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

 

// Example 1:

// Input: nums = [3,0,1]

// Output: 2

// Explanation:

// n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.

// Example 2:

// Input: nums = [0,1]

// Output: 2
// Explanation:

// n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.
// Example 3:

// Input: nums = [9,6,4,2,3,5,7,0,1]

// Output: 8

// Explanation:

// n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.

//code 
class Solution {
    public:
        int missingNumber(vector<int>& v) {
            int n=v.size();
            // vector<bool> check(n+1,0);
            // for(int i=0;i<n;i++){
            //     int ele=v[i];
            //     check[ele]=1;
            // }
            // for(int i=0;i<=n;i++){
            //     if(check[i]==0) return i;
            // }
            // return 100;
    
    
    
    
    
    
    
    
    
    
            //  CYCLIC SORT
            // int i=0;
            // while(i<n){
            //     int correctIdx=v[i];
            //     if(correctIdx==i || v[i]==n) i++;
            //     else swap(v[i],v[correctIdx]);
            // }
            // for(int i=0;i<n;i++){
            //     if(v[i]!=i) return i;
            // }
            // return n;
    
    
    
    
    
            // MATH 
            int actualsum=n*(n+1)/2;
            int sum=0;
            for(int i=0;i<n;i++)   sum+=v[i];
            return actualsum-sum;
        }
    };
