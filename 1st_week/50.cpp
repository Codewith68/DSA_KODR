// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter a number: ";
//     cin>>x;

//     for(int i=1;i<=x;i++){
//         for(int j=1;j<=i;j++) cout<<" ";
//         for(int k=1;k<=x-i+1;k++) cout<<"*";
//         cout<<endl;
//     }
//     for(int i=1;i<=x;i++){
//         for(int j=1;j<=x-i+1;j++) cout<<" ";
//         for(int k=1;k<=i;k++) cout<<"*";
//         cout<<endl;
//     }
// }
#include<iostream>
using namespace std;
int main(){
     int x;
 cout<<"enter a number ";
 cin>>x;
      for(int i=1;i<=x;i++){
        for(int j=1;j<=x+1-i;j++) cout<<" ";
        for(int k=1;k<=i;k++) cout<<"*";
        cout<<endl;
      }
      for(int i=0;i<=x;i++){
        for(int j=1;j<=i;j++) cout<<" ";
        for(int k=1;k<=x+1-i;k++) cout<<"*";
        cout<<endl;
      }
}

