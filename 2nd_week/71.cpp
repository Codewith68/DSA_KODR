#include<iostream>
#include<vector>
using namespace std;
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
    int pref_sum=0;
    int total=0;
    for(int i=0;i<n;i++){
        total+=v[i]*i-pref_sum;
        pref_sum+=v[i];
    }
    cout<<"The total sum of the array is "<<total<<endl;
    return 0;

}