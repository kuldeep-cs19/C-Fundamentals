#include<iostream>

using namespace std;

int fib(int);

// int fact(int n){
//     if (n<=1)
//         return 1;
//     return n * fact(n-1);
// }
int main(){
    
    int a;
    cout<<"Enter your number"<<endl;
    cin>>a;
    cout<<"\nFibonacci of "<<a<<" is "<<fib(a);
    return 0;
}

int fib(int n){
    if(n<2)
        return 1;
    return fib(n-1) + fib (n-2);
}