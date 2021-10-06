#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int a;
    cout<<"Enter your marks ";
    cin>>a;
    
    switch (a)
    {
        case 100 : 
                cout<<"You are a topper."<<endl;
                break;
        case 50 :
                cout<<"You are average."<<endl;
                break;
        case 10 :
                cout<<"You are failure."<<endl;
                break;
        default :
                if(a>50)
                    cout<<"You are a topper";
            
                else if (a>10 && a<=50)
                    cout<<"You are average";
                
                else
                    cout<<"You are failure";
                break ;
    }

}