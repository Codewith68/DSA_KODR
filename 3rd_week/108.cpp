#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);

    stringstream ss(s);
    string word;
    while(ss>>word){
        if(!word.empty()){
            word[0]=toupper(word[0]);
            word[word.size()-1]=toupper(word[word.size()-1]);
            cout<<word<<" ";
        }
    }
}