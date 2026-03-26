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
    int maxx=INT_MIN;
    int x=0;
    for(int i=0;i<n;i++){
        if(v[i]>maxx){
            maxx=v[i];
            x=i;
        }
    }
    cout<<"The maximum element in the array is "<<maxx<<" and its index is "<<x<<endl;
    return 0;
}