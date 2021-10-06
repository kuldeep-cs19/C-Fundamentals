// POinters to objects and array of objects

#include<iostream>

using namespace std;

class Detail{
    int age , sal;
    public :
        void setdata(int a , int b){
            age  = a;
            sal = b;
        }
        void getdata(){
            cout<<"Your age is "<<age
            <<" and salary is "<<sal<<endl;
        }
};

int main(){
    int size = 3 , a , s;
    Detail *pt = new Detail[size];
    Detail *pttemp = pt;
    for (int i = 0; i < size; i++)
    {
        cout<<"Age and salary of employee "<<i + 1<<endl;
        cin>>a>>s;
        pt->setdata(a , s);
        pt++;
    }

    for (int i = 0; i < size; i++)
    {
        cout<<"Employee "<<i + 1<<endl;
        pttemp->getdata();
        pttemp++;

    }
    
    
    return 0;
}