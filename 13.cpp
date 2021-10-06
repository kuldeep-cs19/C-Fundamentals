#include<iostream>

using namespace std;
// This is an invalid Function Overloading
// int sum (int a , int b){
//    return a+b; 
// }

// int sum (int a , int b){
//     return a+b;
// }

// This is valid Function Overloading

int sum (int a , int b){
   return a+b; 
}

int sum (int a , int b , int c){
    return a+b+c;
}

int main(){

    int a = 10, b = 20, c = 30;
    cout<<"The value of a + b is "<<sum(a,b)<<endl;
    cout<<"The value of a + b + c is "<<sum(a,b,c)<<endl;    
    return 0;
}