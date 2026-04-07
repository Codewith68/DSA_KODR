//LEETCODE 2124

// Given a string s consisting of only the characters 'a' and 'b', return true if every 'a' appears before every 'b' in the string. Otherwise, return false.

 

// Example 1:

// Input: s = "aaabbb"
// Output: true
// Explanation:
// The 'a's are at indices 0, 1, and 2, while the 'b's are at indices 3, 4, and 5.
// Hence, every 'a' appears before every 'b' and we return true.

//code 
class Solution {
public:
    bool checkString(string s) {
        bool foundB = false;

        for (char c : s) {
            if (c == 'b') {
                foundB = true;
            } else if (c == 'a' && foundB) {
                return false;
            }
        }

        return true;
    }
};