#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);

    unordered_map<char,int> mp;
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    for(auto &p:mp){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}