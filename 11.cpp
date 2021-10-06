#include<iostream>

using namespace std;

// Constant Argument
// int multiple(int a ,const int b ){
//     return a*b;
// }

// Default Argument
int multiple(int a , int b = 2 ){
    return a*b;
}

int main(){
    int p;
    cout<<"Enter your number "<<endl;
    cin>>p;
    cout<<"First 2's Multiple of your number is "<<multiple(p);
    return 0;
}