/* Exercise on Inheritencce
    1. Simple calculator
    2. Scientific calculator
*/

// What happens when secod parameter passed is a zero? (IDK...)

#include<iostream>
#include<math.h>

using namespace std;

class SimpleCalculator{
    public :
        float sum , mul , diff , div;
        float getsum(int x , int y){
            sum = x + y;
            return sum;
        }

        float getdifference(float x , float y){

            diff  = x - y;
            return diff;
        }

        float getproduct(float x , float y){
            mul = x * y;
            return mul;
        }

        float getdivision(float x , float y){
            div =  x / y; 
            return div;
        }
};

class ScientificCalculator : public SimpleCalculator{
    public :
        float power , sqrot , fact , mod;
        
        float getpower(int x , int y){
            power = pow(x,y);
            return power;
        }

        float getsquareroot(int x){
            sqrot = sqrt(x);
            return sqrot;
        }

        float getfactorial(int x){
            if (x == 0)
                fact = 1;
            for(int i = x; i > 1 ; i--){
                x = x*(i-1);
                fact = x;
            }
            return fact;
        }

        float getmodulous(int x , int y){
            mod = x % y;
            return mod;
        }

};

class Result : public ScientificCalculator{
    public :
        void call(int x , int y){
            getsum(x , y);
            getproduct(x , y);
            getdifference(x , y);
            getdivision(x , y);
            getmodulous(x , y);
            getfactorial(x);
            getpower(x , y);
            getsquareroot(x);
            
        }
        void show(){
            cout<<"Sum of the two numbers = "<<sum<<endl;
            cout<<"Difference of the two numbers = "<<diff<<endl;
            cout<<"Product of the two numbers = "<<mul<<endl;
            cout<<"Division of the two numbers = "<<div<<endl;
            cout<<"x^y of the two numbers = "<<power<<endl;
            cout<<"Squareroot of the first number = "<<sqrot<<endl;
            cout<<"Factorial of the first number = "<<fact<<endl;
            cout<<"Modulous of the two numbers = "<<mod<<endl;

        }
};

int main(){
    int a , b;
    cout<<"Enter the two numbers : "<<endl;
    cin>>a>>b;
    Result obj;
    obj.call(a , b);
    obj.show();
    return 0;
}