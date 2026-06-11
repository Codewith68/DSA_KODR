#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int coutnFreq(vector<int>& nums, int target){
    int lower=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    int upper=upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
    if(lower>upper)return 0;
    return upper-lower+1;
}
int main(){
    vector<int> nums={1,2,2,2,2,3,4,7,8,8};
    int target=2;
    cout<<coutnFreq(nums,target);
    return 0;
}
