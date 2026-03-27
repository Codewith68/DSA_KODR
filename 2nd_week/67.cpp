#include<iostream>
using namespace std;


int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
bool strongNumber(int n){
    int original_Number=n;
    int sum=0;
    while(n>0){
        int last_Digits=n%10;
        sum+=fact(last_Digits);
        n/=10;
    }
    return sum==original_Number;
}
int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    if(strongNumber(n)){
        cout<<"The number is a strong number"<<endl;
    }
    else{
        cout<<"The number is not a strong number"<<endl;
    }
}