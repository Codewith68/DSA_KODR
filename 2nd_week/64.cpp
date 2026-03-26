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
    for(int i=0;i<n-1;i++){
        bool flag=false;
       for(int j=0;j<n-i-1;j++){
        if(v[j]>v[j+1]){
            // int temp=v[i];
            // v[i]=v[j];
            // v[j]=temp;
            swap(v[j],v[j+1]);
            flag=true;
        }
    }
    if(!flag){
         cout<<"Array is already  sorted"<< " ";
         break;
     }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}