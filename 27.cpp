#include<iostream>

using namespace std;

class Identity{
    int age, adhar;
    float height;

    public:
        Identity(){}
        Identity(int a , int b ,float c);
        Identity(int a , float c);
        Identity(Identity &arg);

        void displ();

};

Identity :: Identity(Identity &arg){
    cout<<"Copy cont. called"<<endl;
     age = arg.age;
    height = arg.height;
    adhar = arg.adhar;
}

Identity :: Identity(int a, int b, float c){
 
   age = a;
   adhar = b;
   height  = c;
   cout<<"3 argument constr. called";
}

Identity :: Identity(int a, float c){
    age = a;
    height = c;
    cout<<"2 argument constr. called";
}

void Identity :: displ(){
    cout<<endl<<"Age = "<<age<<"\nHeight = "<<height<<"\nAdhar = "<<adhar<<endl;
}

int main(){
    Identity x;
    int a,b;
    float c;
    cout <<"Enter age adhar and height "<<endl;
    cin>>a>>b>>c;

    x = Identity(a,b,c);
    Identity y(x);
    x.displ();
    y.displ();
    return 0;
}