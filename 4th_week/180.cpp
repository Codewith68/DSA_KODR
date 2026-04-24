#include <bits/stdc++.h>
using namespace std;
int ceilSearch(vector<int>&arr,int x) {
    int low=0,high=arr.size()-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=x){
            ans=mid;        // possible ceiling
            high=mid-1;   // try to find smaller one
        } else low=mid+1;
    }
    return ans;
}
int main() {
    vector<int>arr={1,3,5,7,9,11,13};
    int x=10;

    int index=ceilSearch(arr,x);

    if(index==-1) cout<<"Ceiling doesn't exist";
    else cout<<"Ceiling of "<<x<<"is "<<arr[index]<<" at index "<<index<<endl;
}