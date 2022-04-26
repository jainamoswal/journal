#include<iostream>
using namespace std;

class utils{
    public:
        inline int add(int a, int b){
            return a+b;
        }
        inline int substract(int a, int b){
            return a-b;
        }
        inline int multiply(int a, int b){
            return a*b;
        }
        inline int divide(int a, int b){
            return a/b;
        }
};

int main(){
    utils u1;
    cout<<"Addition       : "<<u1.add(6, 2)<<endl;
    cout<<"Substraction   : "<<u1.substract(6, 2)<<endl;
    cout<<"Multiplication : "<<u1.multiply(6, 2)<<endl;
    cout<<"Division       : "<<u1.divide(6, 2)<<endl;
    return 0;
}