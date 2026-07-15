//LEETCODE 374
// We are playing the Guess Game. The game is as follows:

// I pick a number from 1 to n. You have to guess which number I picked (the number I picked stays the same throughout the game).

// Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.

// You call a pre-defined API int guess(int num), which returns three possible results:

// -1: Your guess is higher than the number I picked (i.e. num > pick).
// 1: Your guess is lower than the number I picked (i.e. num < pick).
// 0: your guess is equal to the number I picked (i.e. num == pick).
// Return the number that I picked.

// Example 1:

// Input: n = 10, pick = 6
// Output: 6
// Example 2:

// Input: n = 1, pick = 1
// Output: 1
// Example 3:

// Input: n = 2, pick = 1
// Output: 1
 

// Constraints:

// 1 <= n <= 231 - 1
// 1 <= pick <= n

//cdoe 
 class Solution {
    public:
        int guessNumber(int n) {
            long low = 1;
            long high = n;
    
            while (low <= high) {
                long mid = low + (high - low) / 2;  // avoids overflow
                int result=guess(mid);
                if (result==0) return mid;   // correct number
                else if(result<0) high=mid-1;  // guess is too high
                else low=mid+1;   // guess is too low
            }
            return -1; // should never reach here
        }
    };
