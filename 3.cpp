#include<iostream>
#include<iomanip>

using namespace std;

int main(){

        int a = 10, b = 200, c = 3000;
        cout<<"Without setw a is "<<a<<endl;
        cout<<"Without setw b is "<<b<<endl;
        cout<<"Without setw c is "<<c<<endl;

        cout<<"With setw a is "<<setw(5)<<a<<endl;
        cout<<"With setw b is "<<setw(5)<<b<<endl;
        cout<<"With setw c is "<<setw(5)<<c<<endl;
        return 0;
}