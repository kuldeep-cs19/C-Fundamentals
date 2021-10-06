#include<iostream>

using namespace std;

typedef struct identity
{
    int age;
    char fav_char;
    float height;
}id ;

typedef union Address
{
    int house_no;
    char street_name;
    float coordinates;
}local_address;


int main(){

    // id kuldeep;
        
        // kuldeep.age = 21;
        // kuldeep.fav_char = 'K';
        // kuldeep.height = 5.8;

        // cout<<"Your age is "<<kuldeep.age<<endl;
        // cout<<"Your fav_char is "<<kuldeep.fav_char<<endl;
        // cout<<"Your height is "<<kuldeep.height<<endl;    

    // local_address local;
     
        // local.house_no = 18;
        // local.street_name = 'B';
        // local.coordinates = 128.465;

        // cout<<"Your house no. is "<<local.house_no<<endl;
        // cout<<"Your street name is "<<local.street_name<<endl;
        // cout<<"Your house coordinates are "<<local.coordinates<<endl;

    enum Sports {Football, Basketball, Tennis};
         
            // cout<<Tennis<<endl;

            // Sports name = Football;
            //  switch (name)
            //  {
            //  case Football :
            //         cout<<"You like Football";
            //      break;
            //  case Basketball : 
            //         cout<<"You like Basketball";
            //         break;
            //  case Tennis :
            //         cout<<"You like Tennis";
            //         break;
            //  default:
            //         cout<<"You may like any game";
            //     break;
            //  }

    return 0;
}