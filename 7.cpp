#include<iostream>

using namespace std;

int main(){
    
    int rank[] = {1, 2, 3, 4};
    int i = 0;
    int* p = rank;
    
    for (int i = 0; i<4; i++){

        cout<<"Your Rank at "<<i<<"th index is "<<*(p++)<<endl;
    
    }

    // do 
    // {
    //     cout<<"Your Rank at "<<i<<" index is "<<rank[i]<<endl;
    //     i++;
    // }while(i < 0);
    

    return 0;
}