//LEETCODE 2042

// A sentence is a list of tokens separated by a single space with no leading or trailing spaces. Every token is either a positive number consisting of digits 0-9 with no leading zeros, or a word consisting of lowercase English letters.

// For example, "a puppy has 2 eyes 4 legs" is a sentence with seven tokens: "2" and "4" are numbers and the other tokens such as "puppy" are words.
// Given a string s representing a sentence, you need to check if all the numbers in s are strictly increasing from left to right (i.e., other than the last number, each number is strictly smaller than the number on its right in s).
// Return true if so, or false otherwise.
// Example 1:

// example-1
// Input: s = "1 box has 3 blue 4 red 6 green and 12 yellow marbles"
// Output: true
// Explanation: The numbers in s are: 1, 3, 4, 6, 12.
// They are strictly increasing from left to right: 1 < 3 < 4 < 6 < 12.

//code 
class Solution {
    public:
        bool areNumbersAscending(string s) {
            int n = s.size();
            int i = 0;
            int prev = -1;
            int curr = -1;
            while (i < n) {
                while (i < n && ((s[i] == ' ') || ('a' <= s[i] && s[i] <= 'z')))
                    i++;
                string temp = "";
                while (i < n && ((s[i] != ' ') && !(s[i] >= 'a' && s[i] <= 'z'))) {
                    temp += s[i];
                    i++;
                }
    
                if (temp != "") {
                    curr = stoi(temp);
                    if (prev >= curr)
                        return false;
                    prev = curr;
                }
            }
            return true;
        }
    };
