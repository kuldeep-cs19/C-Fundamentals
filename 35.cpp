// Virtual Base classes

#include<iostream>
#include<string>


using namespace std;

class Base1{
    public :
        int data1;
        Base1(){
            data1 = 10;
        }
};

class Base2 : virtual public Base1 {
    public : 
        int data2;
        Base2(){
            data2 = 20;
        }
};

class Base3 : virtual public Base1 {
    public : 
        int data3;
        Base3(){
            data3 = 30;
        }
};


class Derived : public Base2 , public Base3{
        public : 
            int data4;
            Derived(){
                data4 = 40;
            }
            void show(){
            cout<<"Value of data1 , data2 , data3 and data4 is "<<data1<<" , "<<data2<<" , "<<data3<<" , "<<data4<<endl;
            }

};

int main(){   
    Derived obj;
    obj.show();
    
    return 0;
}