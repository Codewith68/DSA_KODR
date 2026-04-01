#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    vector<int> v;
    cout<<"Enter the elements of the array";
    for(int i=0;i<n;i++){
        int s;
        cin>>s;
        v.push_back(s);
    }
    int max=INT_MIN;
    int second_max=INT_MIN;
    int index=0;
    for(int i=0;i<n;i++){
        if(v[i]>max){
            second_max=max;
            max=v[i];
            index=i;
        }
        else if(v[i]>second_max && v[i]!=max){
            second_max=v[i];
        }
    }
    cout<<"The second largest element of the array is "<<second_max<<endl;
    cout<<"The index of the second largest element is "<<index<<endl;
    return 0;
}