#include<iostream>

using namespace std;

class Complex{
    int a,b;
    public : 
        Complex(void);
        void printnum(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
// Default constructor
Complex :: Complex(void){
    a = 0;
    b = 0;
}

int main(){
    Complex c;
    c.printnum();
    return 0;
}