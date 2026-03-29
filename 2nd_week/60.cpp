#include<iostream>
#include<climits>
using namespace std;
#include<vector>
void display(vector<int>&v1){
    for(int i=0;i<=v1.size()-1;i++)
    cout<<v1[i]<<" ";
}
void reversepart(int d,int h,vector<int>&v){
    int i=d;
    int j=h;
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int x;
    cout<<"enter the size of array ";
    cin>>x;
    vector<int>v;
    cout<<"insert the elements ";
    for(int i=0;i<=x-1;i++){
        int s;
        cin>>s;
       v.push_back(s);
}
display(v);
cout<<endl;
int k;
cout<<"enter the steps for solution";
cin>>k;
if(k>x) k%=x;
reversepart(0,x-k-1,v);
reversepart(x-k,x-1,v);
reversepart(0,x-1,v);
cout<<endl;
display(v);
}