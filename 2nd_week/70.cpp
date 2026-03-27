// leetcode 1920 array from permutation


#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        // Step 1:Store both old value and new value in the same index
        // nums[i]=old_value + n * new_value
        for(int i=0;i<n;i++){
            nums[i]=nums[i]+n*(nums[nums[i]]%n);
        }
        // Step 2: Extract the new values from modified array
        for(int i=0;i<n;i++){
            nums[i]=nums[i]/n;
        }
        return nums;
    }
};

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    vector<int> nums;
    cout<<"Enter elements (0 to n-1 permutation): ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    Solution obj;
    vector<int> result=obj.buildArray(nums);

    cout<<"Result array: ";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}