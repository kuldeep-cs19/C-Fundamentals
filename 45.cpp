// Function templates and overloading Template funvcions

#include<iostream>

using namespace std;

template<class T1 , class T2>
class Base{
    public :
    T1 p;
    T2 q;
        Base(T1 a , T2 b){
            p = a;
            q = b;
        }
        void show();
};
template<class T1 , class T2>
void Base<T1, T2> :: show(){
    cout<<p<<endl<<q;
}

void display(int a){
    a = 20;
    cout<<"Simple update is called."<<endl<<a;
}
template<class U>
void display(U a){
    cout<<"Templatised update is called."<<endl<<a;
}

int main(){
    // Base<int , float> obj(2,3.5);
    // obj.show();
    display(10.4);
    return 0;
}