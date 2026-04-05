#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    cout<<s.length()<<endl;
   for(int i=s.length()-1;i>=0;i--){
    cout<<s[i];
   }
    return 0;
}
