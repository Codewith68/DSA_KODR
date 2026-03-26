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
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=v[i];
    }
    int avg=sum/n;
    cout<<"The sum of the array is "<<sum<<endl;
    cout<<"The average of the array is "<<avg<<endl;
    return 0;
}