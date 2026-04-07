//LEETCODE 2185
// You are given an array of strings words and a string pref.

// Return the number of strings in words that contain pref as a prefix.

// A prefix of a string s is any leading contiguous substring of s.

 

// Example 1:

// Input: words = ["pay","attention","practice","attend"], pref = "at"
// Output: 2
// Explanation: The 2 strings that contain "at" as a prefix are: "attention" and "attend".
// Example 2:

// Input: words = ["leetcode","win","loops","success"], pref = "code"
// Output: 0
// Explanation: There are no strings that contain "code" as a prefix.

//code 
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0;

        for (auto &word : words) {
            // Check length first to avoid unnecessary operations
            if (word.size() >= pref.size() && 
                word.substr(0, pref.size()) == pref) {
                cnt++; // Prefix matches
            }
        }

        return cnt;
    }
};