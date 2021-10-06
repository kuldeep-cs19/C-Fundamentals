// Templates with multiple parameters
#include<iostream>

using namespace std;

template <class d1 , class d2>

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
    Base<int , char> obj1(2 , 2.4);
    obj1.show();
    return 0;
}