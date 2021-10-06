#include <iostream>

using namespace std;

class Student
{
    int age, roll;
    static int counter;

public:
    void setroll()
    {
        age = 20;
        cout<<"Enter studen's roll number "<<endl;
        cin>>roll;
    }

    void getroll()
    {
        cout<<++counter<<". Student's roll number is "<<roll<<endl;
    }
};
int Student :: counter;

int main()
{
    Student ravi, sasi, rohit;
    // ravi.setroll();
    // ravi.getroll();
    // OR we can create an array

    ravi.setroll();
    ravi.getroll();
    

    return 0;
}