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
    int temp=v[0];
    for(int i = 0; i < n - 1; i++){
        v[i] = v[i + 1];
    }
    v[n - 1] = temp;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}