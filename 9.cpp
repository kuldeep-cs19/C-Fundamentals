#include<iostream>

using namespace std;

//  Function prototyping.

int sum(int , int);
void k();

int main(){
    
    int no1, no2;
// Here no1 and no2 are Actual Parameters. 
    
    cout<<"Enter the number 1 "<<endl;
    cin>>no1;
    cout<<"Enter the number 2 "<<endl;
    cin>>no2;

    cout<<"\nSum of given numbers is "<<sum(no1 , no2)<<endl;
    k();
    return 0;
}

// Here a and b are Formal Parameters taking values from Actual Parameters.

  int sum (int a, int b){

        int c = a + b ;
        return c;
    }

    void k(){
        cout<<"\nThis is void function"<<endl;
    }
