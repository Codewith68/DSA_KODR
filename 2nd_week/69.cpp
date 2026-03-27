#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> concatenation(vector<int>& v){
    vector<int> result;
    for(int i=0;i<v.size();i++){
        result.push_back(v[i]);
    }
    for(int i=0;i<v.size();i++){
        result.push_back(v[i]);
    }
    return result;
}
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
    vector<int> result (concatenation(v));
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}