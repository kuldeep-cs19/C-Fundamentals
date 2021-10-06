// Abstract class and Purely virtual function

#include<iostream>

using namespace std;

class Base{
    public :
        int data1 = 10;
        virtual void disp() = 0;
};

class Derived1 : public Base{
    int data2 = 20;
    public : 
        void disp(){
            cout<<"Value data2 = "<<data2
            <<endl<<"Value  data1 = "<<data1;
        }
};

class Derived2 : public Base{
    int data3 = 30;
    public :
        void disp(){
            cout<<"Value data3 = "<<data3
            <<endl<<"Value  data1 = "<<data1;;
        }
};

int main(){
    Derived1 obj1;
    Derived2 obj2;
    obj2.disp();
    return 0;
}