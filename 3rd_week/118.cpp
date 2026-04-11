//LEETCODE 2309

// Given a string of English letters s, return the greatest English letter which occurs as both a lowercase and uppercase letter in s. The returned letter should be in uppercase. If no such letter exists, return an empty string.

// An English letter b is greater than another letter a if b appears after a in the English alphabet.

 

// Example 1:

// Input: s = "lEeTcOdE"
// Output: "E"
// Explanation:
// The letter 'E' is the only letter to appear in both lower and upper case.

//code 
class Solution {
    public:
        string greatestLetter(string s) {
            unordered_set<char> st(s.begin(), s.end());
    
            for (char c = 'Z'; c >= 'A'; c--) {
                if (st.count(c) && st.count(c + 32)) {
                    return string(1, c);
                }
            }
    
            return "";
        }
    };