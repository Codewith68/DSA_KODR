#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reverseArray(vector<int>&v){
    int i=0;
    int j=v.size()-1;
    while(i<j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
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
    reverseArray(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}