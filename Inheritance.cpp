#include<iostream>
using namespace std;
class Scooty{
    public:
    int mileage;
    int speed;
    
    Scooty(){
  this->mileage=50;
    this->speed=130;
    }
    private: int bootspace;
};
class Bike : public Scooty{
public:
int gears;
Bike(){
 this->gears=5;
}
void print(){
   cout<<this->gears<<endl<<this->mileage<<endl<<this->speed;
}
};
int main(){

    Bike b1;
    b1.gears=6;
    b1.speed=160;
    b1.mileage=40;
    b1.print();
    return 0;

    // ***********************************************************************multiple inheritance


    
}



class Cricketer{
    public:
    int runs;
    int avg;
};

class Engineer{
    public:
    int experience;
    int domain;
}
class Person : public Cricketer,Engineer{
    
}

//  protected modifier agar parent me hai  toh child class use kr skta hai  