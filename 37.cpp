// Initialization list in constructors

#include<iostream>

using namespace std;
class Base{
    int b , a;
    public :
        Base(int i , int j) : b(j) , a(i + b){
            cout<<a<<endl<<b<<endl;
        }
};
int main(){
    Base obj(4,5);
    return 0;
}