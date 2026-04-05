#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    cout<<s.length()<<endl;
    int countVowels=0;
    int countConsonants=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') countVowels++;
        else countConsonants++;
    }
    cout<<"Number of vowels: "<<countVowels<<endl;
    cout<<"Number of consonants: "<<countConsonants<<endl;
}