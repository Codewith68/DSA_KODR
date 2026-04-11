//LEETCODE 2299

// A password is said to be strong if it satisfies all the following criteria:

// It has at least 8 characters.
// It contains at least one lowercase letter.
// It contains at least one uppercase letter.
// It contains at least one digit.
// It contains at least one special character. The special characters are the characters in the following string: "!@#$%^&*()-+".
// It does not contain 2 of the same character in adjacent positions (i.e., "aab" violates this condition, but "aba" does not).
// Given a string password, return true if it is a strong password. Otherwise, return false.

 

// Example 1:

// Input: password = "IloveLe3tcode!"
// Output: true
// Explanation: The password meets all the requirements. Therefore, we return true.

//code 
class Solution {
    public:
        bool strongPasswordCheckerII(string password) {
            if (password.length() < 8) return false;
    
            bool hasLower = false, hasUpper = false;
            bool hasDigit = false, hasSpecial = false;
    
            string special = "!@#$%^&*()-+";
    
            for (int i = 0; i < password.length(); i++) {
                char c = password[i];
    
                // check adjacent duplicates
                if (i > 0 && password[i] == password[i - 1]) {
                    return false;
                }
    
                if (islower(c)) hasLower = true;
                else if (isupper(c)) hasUpper = true;
                else if (isdigit(c)) hasDigit = true;
                else if (special.find(c) != string::npos) hasSpecial = true;
            }
    
            return hasLower && hasUpper && hasDigit && hasSpecial;
        }
    };