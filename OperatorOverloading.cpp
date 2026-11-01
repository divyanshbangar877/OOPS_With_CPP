#include<iostream>
using namespace std;
class Fraction{
    public:
    int num;
    int deno;
    Fraction(int num,int deno){
        this->num=num;
        this->deno=deno;
    }


   Fraction operator+(Fraction f2){
         int newNum=this->num*f2.deno   +  f2.num*this->deno;
         int newDeno=this->deno*f2.deno;
         Fraction ans(newNum,newDeno);
         return ans;
    }
    
   Fraction operator-(Fraction f2){
         int newNum=this->num*f2.deno   +  f2.num*this->deno;
         int newDeno=this->deno*f2.deno;
         Fraction ans(newNum,newDeno);
         return ans;
    }
    
   Fraction operator*(Fraction f2){
         int newNum=this->num*f2.num;
         int newDeno=this->deno*f2.deno;
         Fraction ans(newNum,newDeno);
         return ans;
    }
    Fraction add(Fraction f2){
         int newNum=this->num*f2.deno   +  f2.num*this->deno;
         int newDeno=this->deno*f2.deno;
         Fraction ans(newNum,newDeno);
         return ans;
    }
    void display(){
        cout<<num<<" / "<<deno<<endl;
    }
};
int main(){
Fraction f1(1,2);
Fraction f2(1,3);

f1.display();
f2.display();

Fraction f3=f1+f2;
f3.display();
// both f3 gives same output but f3 is op overloading
Fraction f4=f1.add(f2);
f4.display();
}




***********************************// other example 

// #include <iostream>
// using namespace std;

// class Number {
// public:
//     int value;

//     Number(int v) {
//         value = v;
//     }

//     Number operator+(Number obj) {

//         Number temp(0);

//         temp.value = value + obj.value;

//         return temp;
//     }
// };

// int main() {

//     Number n1(10);
//     Number n2(20);

//     Number n3 = n1 + n2;

//     cout << n3.value;

//     return 0;
// }