#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    cout<<s.length()<<endl;

    int i=0;
    int j=s.length()-1;
    bool flag=true;
        while(i<j){
            if(s[i]!=s[j]){
                flag=false;
                break;
            }
            i++;
            j--;
        }
        if(flag) cout<<"The string is a palindrome"<<endl;
        else cout<<"The string is not a palindrome"<<endl;
    return 0;
}