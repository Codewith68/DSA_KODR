#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    vector<int> v;
    cout<<"Enter the elements of the array";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int leftSum=0,rightSum=0;
    for(int i=0;i<n/2;i++){
        leftSum+=v[i];
    }
    for(int i=n/2;i<n;i++){
        rightSum+=v[i];
    }
    int result=abs(leftSum-rightSum);
    cout<<"The minimumm value assed is  "<<result<<endl;
}