#include<iostream>
using namespace std;

class math{
    public:
        int add(int a, int b, int c=0, int d=0, int e=0, int f=0){
            return a+b+c+d+e+f;
        }
};

int main(){
    math m1;
    cout<<"Addition : "<<m1.add(2, 3, 4);
    return 0;
}