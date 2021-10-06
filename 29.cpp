#include<iostream>

using namespace std;

class Teacher{
    public : 
        int id;
    public :
        float height;

        Teacher(int a){
            id = 0;
            height = 5;
        }
        Teacher(){}
};

class Student : public Teacher{
    public : 
        Student (int idn){
            id = idn;
        }
        int name = 1;
};

int main(){
    Teacher a(1), b(2);
    cout<<a.height<<endl<<b.height<<endl;
    Student s(2);
    cout<<s.id<<endl;
    return 0;
}