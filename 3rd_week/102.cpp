#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    cout<<s.length()<<endl;
    string ss;
   for(int i=s.length()-1;i>=0;i--){
    ss+=s[i];
   }
   cout<<"reversed string: "<< ss<<endl;
   if(s==ss) cout<<"The string is a palindrome"<<endl;
   else cout<<"The string is not a palindrome"<<endl;
    return 0;
}
