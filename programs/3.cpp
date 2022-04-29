#include<iostream>
using namespace std;

class print{
    int i, sum;
    public:
        void add(int n){
            sum = 0;
            for (i=0;i<=n;i++){
                if (i%2 == 1){
                    sum+=i;
                }
        }
        cout<<"Sum => "<<sum;
    }
}; 

int main(){
    print p1;
    p1.add(8);
    return 0;
}