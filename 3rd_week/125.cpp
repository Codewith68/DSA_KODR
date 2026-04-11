//LEETCODE 2068

// Two strings word1 and word2 are considered almost equivalent if the differences between the frequencies of each letter from 'a' to 'z' between word1 and word2 is at most 3.

// Given two strings word1 and word2, each of length n, return true if word1 and word2 are almost equivalent, or false otherwise.

// The frequency of a letter x is the number of times it occurs in the string.

 

// Example 1:

// Input: word1 = "aaaa", word2 = "bccb"
// Output: false
// Explanation: There are 4 'a's in "aaaa" but 0 'a's in "bccb".
// The difference is 4, which is more than the allowed 3.

//code 
class Solution {
    public:
        bool checkAlmostEquivalent(string words1, string words2) {
            vector<int>s (26,0);
            for(auto ch:words1) s[ch-'a']++;
            for(auto ch: words2) s[ch-'a']--;
            for(int i=0;i<s.size();i++){
                if(abs(s[i])>3) return false;
            }
            return true;
        }
    };