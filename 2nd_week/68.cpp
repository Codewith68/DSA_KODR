// #include<iostream>
// using namespace std;

// bool isSpecial(int n){
//     int original_Number=n;
//     int sum=0;
//     int product=1;
//     while(n>0){
//         int last_Digits=n%10;
//         sum+=last_Digits;
//         product*=last_Digits;
//         n/=10;
//     }
//     return sum+product==original_Number;
// }
// int main(){
//     int n;
//     cout<<"Enter the size of the array";
//     cin>>n;
//     if(isSpecial(n)){
//         cout<<"The number is a special number"<<endl;
//     }
//     else{
//         cout<<"The number is not a special number"<<endl;
//     }

// } 1st meaning of special number: It is a number whose sum and product of its digits are equal to the original number.


#include<iostream>
#include<string>
using namespace std;
bool isSpecial(int n){
    string s=to_string(n);
    int num=s.length();
    int mid=num/2;
    int leftSum=0,rightSum=0;
    for(int i=0;i<mid;i++){
        leftSum+=s[i]-'0';
    }
    for(int i=num-1;i>=num-mid;i--){
        rightSum+=s[i]-'0';
    }
    return leftSum==rightSum;
}
int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    if(isSpecial(n)){
        cout<<"The number is a special number"<<endl;
    }
    else{
        cout<<"The number is not a special number"<<endl;
    }
}