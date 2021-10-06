// Polymorphism and virtual function
#include<iostream>
using namespace std;

class Base{
    public : 
        int data1 = 1;
        virtual void display(){
            cout<<"Value of data1 "<<data1<<endl;
        }
};

class Derived : public Base{
    public :
        int data2 = 2;
        void display(){
            cout<<"Value of data1 "<<data1<<endl;
            cout<<"Value of data2 "<<data2<<endl;
        }
};

int main(){
    Base * base_ptr;
    Base obj1;
    Derived obj2;

    base_ptr = &obj2;
    base_ptr->display();
    return 0;
}