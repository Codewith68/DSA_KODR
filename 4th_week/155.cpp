//LEETCODE 1832
// A pangram is a sentence where every letter of the English alphabet appears at least once.

// Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

 

// Example 1:

// Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
// Output: true
// Explanation: sentence contains at least one of every letter of the English alphabet.
// Example 2:

// Input: sentence = "leetcode"
// Output: false
 

// Constraints:

// 1 <= sentence.length <= 1000
// sentence consists of lowercase English letters.

//code 
class Solution {
    public:
        bool checkIfPangram(string sentence) {
            vector<int> frequency(26,0);
            for(auto x: sentence){
                frequency[x-'a']=1;
            }
            for(int i=0;i<26;i++){
                if(frequency[i]==0) return false;
            }
            return true;
        }
    };