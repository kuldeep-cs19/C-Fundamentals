#include<iostream>

using namespace std;

// THhis will not swap
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
// This will swap.
void swapPointer(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
// This is swap using reference variables
void swapReference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int p, q;
    cout<<"Enter the value of p"<<endl;
    cin>>p;
    cout<<"Enter the value of q"<<endl;
    cin>>q;
    // swap(p , q);
    // swapPointer(&p , &q);
    swapReference(p , q);
    cout<<"\nAfter swapping p is "<<p<<endl;
    cout<<"After swapping q is "<<q<<endl;
    return 0;
}