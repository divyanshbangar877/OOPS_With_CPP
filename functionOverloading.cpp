#include<iostream>
using namespace std;

//construcotr overloading 
class Student {
    public:
    string name;
    int rollno;
    float cgpa;
    Student(){

    }
    Student(string name,int rollno,float cgpa){
        this->name=name;
        this->rollno=rollno;
        this->cgpa=cgpa;
    }

    Student(string name, int rollno){
        this->name=name;
        this->rollno=rollno;
    }
    void print(){
        cout<<name<<endl<<rollno<<endl<<cgpa;
    }
};
int main(){
Student s1("Divyansh",45,8.9);
Student s2;
s2.name="Hari";
s2.rollno=34;
s2.cgpa=5.6;
s1.print();
cout<<endl;
s2.print();
cout<<endl;
Student s3("Keshav",54);
s3.cgpa=5.6;
s3.print();
}

// *****************************fucntion overloading

// function overloading me jese sum(a,b) ,sum(a,b,c) ,sum(a,b,c,d) lekin function ka time sbka same hoga tb hi function overloading
// hogi jese agar void hai toh sbka void hi agar int hai toh function type hoga