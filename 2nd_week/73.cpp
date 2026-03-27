#include<iostream>
#include<vector>
using namespace std;
vector<int> answer(vector<int>& v){
    vector<int> result;
    int n=v.size();
    if(n == 1) return v;

    if(n == 2){
        return {v[0]*v[1], v[0]*v[1]};
    }
    for(int i=0;i<n;i++){
        if(i==0){
            int a=v[i]*v[i+1];
            result.push_back(a);
        }
        else if(i==n-1){
            int b=v[i]*v[i-1];
            result.push_back(b);
        }
        else {
            int c=v[i-1]*v[i+1];
            result.push_back(c);
        }
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
    vector<int> result=answer(v);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}