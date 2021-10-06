#include<iostream>

using namespace std;
class num{
    public :
        num(){
            cout<<"obj craeted"<<endl;
        }

        ~num(){
            cout<<"obj burned"<<endl;
        }
};
int main(){
    num n1,n2,n3;
    return 0;
}