//LEETCODE 2287
// You are given two 0-indexed strings s and target. You can take some letters from s and rearrange them to form new strings.

// Return the maximum number of copies of target that can be formed by taking letters from s and rearranging them.

 

// Example 1:

// Input: s = "ilovecodingonleetcode", target = "code"
// Output: 2
// Explanation:
// For the first copy of "code", take the letters at indices 4, 5, 6, and 7.
// For the second copy of "code", take the letters at indices 17, 18, 19, and 20.
// The strings that are formed are "ecod" and "code" which can both be rearranged into "code".
// We can make at most two copies of "code", so we return 2

//code 
class Solution {
    public:
        int rearrangeCharacters(string s, string target) {
            vector<int> sCount(26, 0), tCount(26, 0);
    
            for (char c : s) {
                sCount[c - 'a']++;
            }
            for (char c : target) {
                tCount[c - 'a']++;
            }
            int ans = INT_MAX;
    
            for (int i = 0; i < 26; i++) {
                if (tCount[i] > 0) {
                    ans = min(ans, sCount[i] / tCount[i]);
                }
            }
            return ans;
        }
    };