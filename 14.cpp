#include<iostream>

using namespace std;

class Student
{
private:
    int password, sId;
public:
    int roll_no, age;
    char sec;
    void setData (int pw, int id); //Just declaration 
    void getData(){
        cout<<"Student's Roll Number is "<<roll_no<<endl;
        cout<<"Student's section is "<<sec<<endl;
        cout<<"Student's age is "<<age<<endl;
        cout<<"Student's password is "<<password<<endl;
        cout<<"Student's ID is "<<sId<<endl;
    }

};

void Student :: setData(int pw, int id)
{
    password = pw;
    sId = id;
}


int main(){
    Student kuldeep;
    kuldeep.age = 21;
    kuldeep.roll_no = 47;
    kuldeep.sec = 'B';

    kuldeep.setData(1234 , 007);
    kuldeep.getData();
    
    return 0;
}