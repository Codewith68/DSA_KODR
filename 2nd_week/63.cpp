#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    vector<int> v;
    cout<<"Enter the elements of the array";
    for(int i=0;i<n;i++){
        int s;
        cin>>s;
        v.push_back(s);
    }
    int target;
    cout<<"Enter the target element";
    cin>>target;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[mid]==target) {
            cout<<"The index of the target element is "<<mid<<endl;
            return 0;
        }
        else if(v[mid]<target)  low=mid+1;
        else high=mid-1;
    }
    cout<<"The target element is not present in the array"<<endl;
    return 0;
    }