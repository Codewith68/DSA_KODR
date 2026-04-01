#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
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
    int result=v[0];
    for(int i=1;i<n;i++){
        result=gcd(result,v[i]);
    }
    cout<<"The gcd of the array is "<<result<<endl;
    return 0;
    
}