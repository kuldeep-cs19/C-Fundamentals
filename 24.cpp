#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void)
    {
        a = 0;
        b = 0;
    }

    Complex(int i, int j)
    {
        a = i;
        b = j;
    }

    Complex(int x)
    {
        a = x;
        b = 2;
    }

    void printnum()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1, c2(4,5), c3(5);
    c1.printnum();
    c3.printnum();
    c2.printnum();

    return 0;
}