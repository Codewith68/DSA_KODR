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
    int target;
    cout<<"Enter the target element";
    cin>>target;

    int index=-1;
    for(int i=0;i<n;i++){
        if(v[i]==target){
            index=i;
            break;
        }
    }
    if(index!=-1){
        cout<<"The index of the target element is "<<index<<endl;
    }
    else{
        cout<<"The target element is not present in the array"<<endl;
    }
    return 0;
}