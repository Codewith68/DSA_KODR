#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    cout<<s.length()<<endl;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            cout<<endl;
        }
        else{
            cout<<s[i];
        }
    }
    return 0;
}
