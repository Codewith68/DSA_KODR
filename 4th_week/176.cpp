#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter the size of array: ";
    cin>>x;
    int arr[x];
    cout<<"Enter elements  into the arrat";
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target: ";
    cin>>target;

    int lo=0,hi=x-1;
    bool found=false;

    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target){
            cout<<"Element found at index "<<mid<<endl;
            found=true;
            break;
        }
        else if(arr[mid]<target)hi=mid-1;
        else lo=mid+1;
    }
    if(!found)cout<<"Element not found"<<endl;
}