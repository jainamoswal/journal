#include<iostream>
using namespace std;

class  base
{
    int sum, times, inp, i;

   public:
        void get(){
            cout<<"Enter the number of values : ";
            cin>>times;
            sum = 0;
            for(i=0;i<times;i++){
                cout<<endl<<"Enter value for "<<i<<" : ";
                cin>>inp;
                sum+=inp;
            }
        }
        friend float mean(base ob);
};

float mean(base ob){
   return float(ob.sum)/2;
}

int main(){
    base obj;
    obj.get();
    cout<<endl<<"Mean value is :: "<<mean(obj);
    return 0;
}