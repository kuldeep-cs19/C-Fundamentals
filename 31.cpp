// Multiple inheritence


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

class Base2{
    public : 
        int data2;
        Base2(){
            data2 = 20;
        }
        void disp(){
            cout<<"Member fuction of second Base class is called."<<endl;
        }
};
class Derived : public Base1 , public Base2{
        public : 
            int data3;
            Derived(){
                data3 = 30;
            }
            void show(){
            cout<<"Value of data1 , data2 and data3 is "<<data1<<" , "<<data2<<" , "<<data3<<endl;
            }

};

int main(){   
    Derived obj;
    obj.show();
    obj.disp();
    return 0;
}