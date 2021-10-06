#include<iostream>

using namespace std;

class Sum{
    int a,b,e;

public : 
    void setData(int c){
        a = c;
    }
    void setSumData(Sum s1 , Sum s2){
        a = s1.a + s2.a;
    }
    void print(){
        cout<<"Sum is "<<a<<endl;
    }
};

int main(){
    Sum p,q,r;
    p.setData(10);
    q.setData(2);
    r.setSumData(p, q);
    r.print();
    return 0;
}