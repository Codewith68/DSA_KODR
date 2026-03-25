#include<bits/stdc++.h>
using namespace std;

void move(vector<int>& v){ // tc=O(n) and sc=O(1)
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]<0) i++;
        else if(v[j]>=0) j--;
        // else swap(v[i],v[j]);
        else {
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    }
}
void move2(vector<int>& v){
    vector<int> temp;
    for(int i=0;i<v.size();i++){
        if(v[i]<0) temp.push_back(v[i]);
    }
    for(int i=0;i<v.size();i++){
        if(v[i]>=0) temp.push_back(v[i]);
    }
    v=temp;
}
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
    // move(v);
    move2(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}