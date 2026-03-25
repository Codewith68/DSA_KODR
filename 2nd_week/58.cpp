#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
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
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"The array is sorted in ascending order"<<endl;
    }
    else{
        cout<<"The array is not sorted in ascending order"<<endl;
    }
    return 0;
}