#include<iostream>

using namespace std;

class Complex{
    int a,b;
    
    friend Complex sumComplex(Complex n1 , Complex n2);

    public :
        void setnum(int n1 , int n2){
            a = n1;
            b = n2;
        }
        void printnum(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex sumComplex(Complex n1 , Complex n2){
        Complex n3;
        n3.setnum((n1.a + n2.a) , (n1.b + n2.b));
        return n3;
}

int main(){
    Complex c1, c2, sum;
    c1.setnum(1,2);
    c1.printnum();
    c2.setnum(1,3);
    c2.printnum();
    sum = sumComplex(c1 , c2);
    sum.printnum();
    return 0;
}