// Ambiguity resolution

#include<iostream>
#include<string>


using namespace std;

class Base1{
    public :
        int data1;
        Base1(){
            data1 = 10;
        }
        void disp(){
            cout<<"Display function of Base1 is called."<<endl;
        }
};

class Base2{
    public : 
        int data2;
        Base2(){
            data2 = 20;
        }
        void disp(){
            cout<<"Display function of Base2 is called."<<endl;
        }
};

class Base3{
    public : 
        int data3;
        Base3(){
            data3 = 30;
        }
        void disp(){
            cout<<"Display function of Base3 is called."<<endl;
        }
};

class Derived : public Base1 , public Base2 , public Base3{
        public : 
            int data4;
            Derived(){
                data4 = 40;
            }
            void disp(){
                Base3 :: disp();
                
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