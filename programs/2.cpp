#include<iostream>
using namespace std;

int main(){
    int option, num1, num2, res;
    cout<<"Enter number 1 : ";
    cin>>num1;
    cout<<"Enter number 2 : ";
    cin>>num2;
    cout<<"Enter operation: "<<endl;
    cout<<"\t1. addition."<<endl;
    cout<<"\t2. Substraction."<<endl;
    cout<<"\t3. multiplication."<<endl;
    cout<<"\t4. Division."<<endl;
    cout<<"$>> ";
    cin>>option;
    switch(option){
        case 1:
            res = num1+num2;
            cout<<num1<<" + "<<num2<<" = "<<res;
            break;
        case 2:
            res = num1-num2;
            cout<<num1<<" - "<<num2<<" = "<<res;
            break;
        case 3:
            res = num1*num2;
            cout<<num1<<" * "<<num2<<" = "<<res;
            break;
        case 4:
            res = num1/num2;
            cout<<num1<<" / "<<num2<<" = "<<res;
            break;
        default:
            cout<<"Please enter valid input.";
    }
    return 0;
}