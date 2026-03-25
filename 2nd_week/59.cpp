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
    vector<int> v2;
    for(int i=v.size()-1;i>0;i--){
        v2.push_back(v[i]);
    }
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    return 0;

}