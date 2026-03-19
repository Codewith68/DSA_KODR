#include<iostream>
using namespace std;
int main(){
    float a,b;
    int choice;
    do{
        cout<<"Enter two numbers: ";
        cin>>a>>b;
        cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nEnter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<a+b<<endl;
                break;
            case 2:
                cout<<a-b<<endl;
                break;
            case 3:
                cout<<a*b<<endl;
                break;
            case 4:
                if(b==0){
                    cout<<"Division by zero is not possible"<<endl;
                    break;
                }
                cout<<a/b<<endl;
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    }while(choice!=0);
    return 0;
}