#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int countSteps(vector<int>& arr){
    int n=arr.size();
    int steps=0;
    int maxSoFar=INT_MIN;
    for(int i =n-1;i>=0;i--){
        if(arr[i]>maxSoFar){
            steps++;
            maxSoFar=arr[i];
        }
    }
    return steps;
}

int main(){
    int n;
    cout<<"Enter size: ";
    cin >>n;

    vector<int> arr(n);
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    cout <<"Steps Taken: "<<countSteps(arr);
    return 0;
}