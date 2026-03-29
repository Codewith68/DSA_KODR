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
    int mid=n/2;
    sort(v.begin(),v.end());
    reverse(v.begin()+mid,v.end());
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}