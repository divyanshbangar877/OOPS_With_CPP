#include<iostream>
using namespace std;
class Cricketer{
   public:
   string name;
   int runs;
   float avg;
   
   Cricketer(string name,int runs,float avg){
    this->name=name;
    this->runs=runs;
    this->avg=avg;
   }
   void print (int runs){
    cout<<name;
    cout<<runs; // idhar  runs 18000 nhi 10 runs aayega kyoki humne this nhi lagaya toh function ko pata nhi kisko point kre 
                     // agar this lagaya toh 25000 aayega
                     //cout<<this->runs output 25000;
    cout<<avg;
   }
};
int main(){


    Cricketer c1("Rohit sharma",18000,4.5);
   



    int runs=10;
    c1.print(runs);

}

//agar constuctor me esa (name,age){
                    //  name=name;
                    //  age=age; agar this nhi lagaya toh error nhi lagaya lekin outptu me garbage value aayegi
// }


**************************
// pass by reference_
     
// Online C++ compiler (editor)
// // Write and run C++ online using this editor.

// #include <iostream>
// using namespace std;
// class Captain{
//     public:
//     string CaptainName;
//     Captain(string name){
//  this->CaptainName=name;
//     }

//    void newCaptain(string &newcaptainName){
//  this->CaptainName=newcaptainName;
//     }
    
//     void print(){
//         cout<<CaptainName;
//     }

// };

// int main() {
//     // Write C++ 
// Captain c("Rohit Sharama");
// string capName="Shubman gill";
// c.newCaptain(capName);
//     c.print();
//     return 0;
// }