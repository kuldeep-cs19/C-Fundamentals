#include<iostream>

using namespace std;
class Player{

    int j_num;
    static int count, id;

    public :
        void setdet(void){
            cout<<"\nEnter jerssey number "<<endl;
            cin>>j_num;
        }
        void getdet(void){
            cout<<"\nJerssey number of player "<<count++<<" is "<<j_num<<endl;
        }

        static void getCount(void){ 
            cout<<"Value of count & id is "<<count<<" , "<<id<<endl;
}
};

int Player :: count = 1;
int Player :: id = 1;

int main(){
    Player cr7, messi, neymar;
    cr7.setdet();
    cr7.getdet();
    Player :: getCount();
    messi.setdet();
    messi.getdet();
    Player :: getCount();
    neymar.setdet();
    neymar.getdet();
    Player :: getCount();
    return 0;
}