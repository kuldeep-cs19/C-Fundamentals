#include <iostream>

using namespace std;

class Complex
{

    int a, b;

public:
    Complex(int i , int j);
    void printnum()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex :: Complex(int i , int j){
    a = i;
    b = j;
}

int main()
{
    // Implicit call
    Complex a(4,5);
    a.printnum();

    // Explicit call
    Complex c = Complex(2,6);
    c.printnum();
    return 0;
}