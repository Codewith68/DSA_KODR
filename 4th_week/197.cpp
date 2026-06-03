//LEETCODE 875
// Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

// Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

// Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

// Return the minimum integer k such that she can eat all the bananas within h hours.

 

// Example 1:

// Input: piles = [3,6,7,11], h = 8
// Output: 4
// Example 2:

// Input: piles = [30,11,23,4,20], h = 5
// Output: 30
// Example 3:

// Input: piles = [30,11,23,4,20], h = 6
// Output: 23
 
// Constraints:

// 1 <= piles.length <= 104
// piles.length <= h <= 109
// 1 <= piles[i] <= 109

//code 
class Solution {
    public:
        bool check(int speed,vector<int>& piles, int h){
            int n=piles.size();
            int count=0;
            for(int i=0;i<=n-1;i++){
                if(count>h) return false;
                if(speed>=piles[i]) count++;
                else if(piles[i]%speed==0) count+=piles[i]/speed;
                else count+=piles[i]/speed+1;
            }
            if(count>h) return false;
            else return true;
        }
        int minEatingSpeed(vector<int>& piles, int h) {
            int n=piles.size();
            int mx=-1;
            for(int i=0;i<=n-1;i++){
                mx=max(mx,piles[i]);
            }
            int lo=1;
            int hi=mx;
            int ans=-1;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
               if(check(mid,piles,h)==true){
                ans=mid;
                hi=mid-1;
               }
               else lo=mid+1;
            }
            return ans;
        }
    };
