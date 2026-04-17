#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int x;
    cout<<"Enter the sizemof the array :";
    cin>>x;
    vector<int> v;
    cout<<"Enter the elements of the array :";
    for(int i=0;i<x;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    unordered_map<int,int> mp;
    for(auto i:v){
        mp[i]++;
    }
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;    
    }
}