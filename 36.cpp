// Constructors in derived class

#include<iostream>
#include<string>


using namespace std;

class Base1{
    public :
        int data1;
        Base1(){}
        Base1(int i){
            data1 = i;
        }
};

class Base2 : virtual public Base1 {
    public : 
        int data2;
        Base2(int i){
            data2 = i;
        }
};

class Base3 : virtual public Base1 {
    public : 
        int data3;
        Base3(int i){
            data3 = i;
        }
};


class Derived : public Base2 , public Base3{
        public : 
            int data4;
            Derived(int a , int b , int c , int d) : Base1(b) , Base2(c) , Base3(d){
                data4 = a;
            }
            void show(){
            cout<<"Value of data1 , data2 , data3 and data4 is "<<data1<<" , "<<data2<<" , "<<data3<<" , "<<data4<<endl;
            }

};

int main(){   
    Derived obj(40,10,20,30);
    obj.show();
    
    return 0;
}