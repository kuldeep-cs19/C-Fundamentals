// Templates with default parameters

#include<iostream>

using namespace std;

template <class d1 = int , class d2 = float>

class Base{
    d1 data1;
    d2 data2;

    public :
        Base(d1 a , d2 b){
            data1 = a;
            data2 = b;
        } 
        void show(){
            cout<<this->data1<<" "<<this->data2;
        }
};

int main(){
    Base<int , float> obj1(1 , 25.3);
    obj1.show();
    return 0;
}