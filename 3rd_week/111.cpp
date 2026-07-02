//LEETCODE 242

// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

 

// Example 1:

// Input: s = "anagram", t = "nagaram"

// Output: true
// Example 2:

// Input: s = "rat", t = "car"

// Output: false

// approach 1 to basic dono ko sort kardo aur match karo agar match ho raha hai lenght to anagram nhi to nhi 

// 2nd approach is to use hashmap and count the frequency of each character in both strings and then compare them.

//code 
class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.length()!=t.length()) return false;
       unordered_map<char,int> map1;// for s 
       for(int i=0;i<s.length();i++){
        map1[s[i]]++;
       }
       for(int i=0;i<t.length();i++){
        char ch=t[i];
        if(map1.find(ch)!=map1.end()){
            map1[ch]--;
            if(map1[ch]==0) map1.erase(ch);
        }
        else return false;
       }
       if(map1.size()>0) return false;
       return true;
    }
};
