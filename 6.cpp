#include<iostream>

using namespace std;

int main(){
    
    int c = 'A';
    int* p;
    
    p = &c;

    // Adress of operator.

    //     cout<<"The adrees of c is "<<p<<endl;
    //     cout<<"The adress of c is "<<&c<<endl;

    // Value at OR Dereferencing operator.

    //     cout<<"The value stored in c is "<<*p<<endl;

    // Pointer to Pointer

        int** q = &p;
        cout<<"The adress of q is "<<&q<<endl;
        cout<<"The adress value at q is "<<&p<<endl;
        cout<<"The adress value at q is "<<q<<endl;
        cout<<"The adress value_at(value_at(q)) is "<<**q<<endl;

    return 0;
}