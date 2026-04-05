#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    cout<<s.length()<<endl;

    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z') s[i]+=32;
        else if(s[i]>='a' && s[i]<='z') s[i]-=32;
    }
    cout<<"The string after converting to lowercase or you can say Toggle string : "<<s<<endl;
    return 0;
}