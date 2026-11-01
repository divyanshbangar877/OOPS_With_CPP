// function overriding using virtaul function 


#include<iostream>
#include<vector>
using namespace std;
class Scooty{
    public:
    int speed;
    int mileage;

   virtual void sound(){
        cout<<"broom broom scooty";
    }
};
class Bike : public Scooty{
    public:
    int gears;

    void sound(){
        cout<<"droom droom bike";
    }
};

class SuperBike: public Bike{
    public:
    int aura;
    void sound(){
        cout<<"zroom zrrom superbike";
    }
};
int main(){
 Scooty *a=new Bike();
 a->speed=10;
 Scooty *b=new SuperBike();
 b->speed=20;
 Scooty *c=new Scooty();
 c->speed=30;

 vector<Scooty*>v;
 v.push_back(a);
 v.push_back(b);
 v.push_back(c);
 for(int i=0;i<3;i++){
    cout<<"speed is "<<v[i]->speed<<" "; 
   v[i]->sound();
   cout<<endl;
 }

    return 0;
}



// ********************Normal function overriding
// class Parent{
//     public:

// void getInfo(){
//     cout<<"parent class";
// }
// };

// class child : Parent{
//  void getInfo(){
//     cout<<"child class";
// }
// };

// Parent p1;
// p1.getInfo() ; output parent class;
// child c1;
// c1.getInfo() ; output child class;
