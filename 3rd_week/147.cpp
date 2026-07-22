#include<bits/stdc++.h>
using namespace std;
vector<int> move(vector<int> &v){
    int j=0;
    for(int i=0;i<v.size();i++){
        if(v[i]<0){
            swap(v[i],v[j]);
            j++;
        }
    }
    return v;
}
int main(){
    int x;
    cout<<"enter the size of the array: ";
    cin>>x;
    vector<int> v;
    cout<<"enter the elements of the array: ";
    for(int i=0;i<x;i++){
        int s;
        cin>>s;
        v.push_back(s);
    }
    vector<int> ans=move(v);

    for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<" ";
}
}
