


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


    void print(){
        cout<<this->name;;
        cout<<endl<<this->runs;
        cout<<endl<<this->avg;
    }
    void change (Cricketer *p1){
        (*p1).runs=45000;
        p1->avg=45;
    }
};
int main(){
Cricketer c1 ("Rohit sharma ",20000,45);

Cricketer *p1=&c1;
(*p1).runs=10000;

cout<<(*p1).runs<<endl;


// 2.  *************part by pass by reference using pointer
c1.print();
(*p1).change(&c1);
p1->print();





///////////////////////////3.using new keyworkd

int *ptr=new int(250);
cout<<(*ptr); //iska mtlb dynamic memeory allocation kiya iska memory heap me store hoga aur ye runtime memory allocaton hai

//printing 
Cricketer *c2=new Cricketer("Virat kohli",9300,50);

cout<<c1.name<<endl;//Rohit sharma
cout<<(*c2).name<<endl; // Virat kohli;
cout<<c2->name<<endl; //Virat kohli 


}