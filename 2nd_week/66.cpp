// Leetocde 560 subarray sum equals k
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution { // this is the actual solution class
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int result = 0;
        int cumSum = 0;

        mp[0] = 1; 
        for(int i = 0; i < nums.size(); i++){
            cumSum += nums[i];
            if(mp.find(cumSum - k) != mp.end()){
                result += mp[cumSum - k];
            }
            mp[cumSum]++;
        }
        return result;
    }
};

// this part is for testing the code
int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }

    int k;
    cout << "Enter value of k: ";
    cin >> k;

    Solution obj;
    int ans = obj.subarraySum(nums, k);

    cout << "Number of subarrays with sum " << k << " = " << ans << endl;

    return 0;
}