#include<iostream>
using namespace std;
int orderAgnosticBinarySearch(int arr[],int n,int target){
    int lo=0,hi=n-1;
    bool isAsc=arr[lo]<arr[hi];
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target) return mid;
        else if(isAsc){
            if(arr[mid]<target) lo=mid+1;
            else hi=mid-1;
        }
        else{
            if(arr[mid]>target) lo=mid+1;
            else hi=mid-1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements  into the arrat";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target: ";
    cin>>target;
    int index = orderAgnosticBinarySearch(arr, n, target);
    if(index == -1) cout<<"Element not found"<<endl;
    else cout<<"Element found at index "<<index<<endl;
    return 0;
}