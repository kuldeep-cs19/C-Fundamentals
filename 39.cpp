// Use of this (pointer type) keyword

#include<iostream>

using namespace std;

class Base{
    int a;
    public :
        void setdata(int a){
            (*this).a = a;  //this is pointing the object which called the member function i.e obj in main function
        
        }
        void getdata(){
            cout<<"Value = "<<a;
        }
};

int main(){
    Base obj;
    obj.setdata(10);
    obj.getdata();
    return 0;
}