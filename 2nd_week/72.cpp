#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements of the Number array";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<char> v2(n);
    cout<<"Enter the elements of the character array";
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }
    int sumA=0,sumB=0,sumC=0;
    for(int i=0;i<n;i++){
        if(v2[i]=='a'){
            sumA+=v[i];
        }
        else if(v2[i]=='b'){
            sumB+=v[i];
        }
        else if(v2[i]=='c'){
            sumC+=v[i];
        }
    }
    int result =min(sumA+sumB,sumC);
    cout<<"The result is "<<result<<endl;
    return 0;
}