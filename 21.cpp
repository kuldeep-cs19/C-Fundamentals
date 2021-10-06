#include <iostream>

using namespace std;

// Forward Declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealPart(Complex, Complex);
    int sumCompPart(Complex, Complex);
};

class Complex
{

    int a, b;
    // Individually declaring functions of another class as friend to acces private data of this class.
    // friend int Calculator ::sumRealPart(Complex n1, Complex n2);
    // friend int Calculator ::sumCompPart(Complex n1, Complex n2);

    /* Declaring another class as friend so that we do not have to declare each and every function as 
    friend to access the private data of this class */ 

    friend class Calculator;

public:
    void setnum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnum()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealPart(Complex n1, Complex n2)
{
    return (n1.a + n2.a);
}
int Calculator ::sumCompPart(Complex n1, Complex n2)
{
    return (n1.b + n2.b);
}

int main()
{
    Complex n1, n2;
    n1.setnum(2, 3);
    n2.setnum(3, 4);

    Calculator cal;
    int resR = cal.sumRealPart(n1, n2);
    cout << "The sum of real parts of n1 and n2 is " << resR << endl;
    int resC = cal.sumCompPart(n1, n2);
    cout << "The sum of complex parts of n1 and n2 is " << resC <<"i"<< endl;
    return 0;
}