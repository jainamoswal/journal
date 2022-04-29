#include<iostream>
using namespace std;

class CI{
    public:
        int volume(int a){
            return a*a*a;
        }

        int volume(int r, int h){
            return r*r*h*3.14;
        }

        int volume(int l, int w, int h){
            return l*w*h;
        }
};

int main(){
    CI c1;
    cout<<endl<<"Volume of cube             : "<<c1.volume(2);
    cout<<endl<<"Volume of rectangular cube : "<<c1.volume(2, 3);
    cout<<endl<<"Volume of cylinder         : "<<c1.volume(2, 3, 4);
    return 0;
    }