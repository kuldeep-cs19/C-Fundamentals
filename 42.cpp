// Templates in c++

#include<iostream>
#include<math.h>

using namespace std;

template <class B>
class Base{
    B root;
    public :
        Base(int a){
            root  = a;
        }

        void squareroot(){
            root = sqrt(root);
            cout<<"Square Root of given number is "<<root<<endl;
        }
};

int main(){
    Base<float> obj1(17);
    obj1.squareroot();
    return 0;
}