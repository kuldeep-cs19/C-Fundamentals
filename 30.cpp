// Single level inheritence


#include<iostream>
#include<string>


using namespace std;

class Store{
    public :
        int itm_no , price;
    public :
        Store(){
            itm_no = 10;
            price = 1;
        }
};
class Details : public Store{
    int month , day , year ;
        public : 
            Details(){
                month = 12;
                day = 12;
                year = 21;
            }
            void show(){
            cout<<"Expiry date of your item is "<<day<<"/"<<month<<"/"<<year<<endl;
            cout<<"Price and item number of your item is "<<price<<" and "<<itm_no<<endl;
            }

};

int main(){   
    Details cream;
    cream.show();
    return 0;
}