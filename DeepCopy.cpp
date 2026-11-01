#include<iostream>
using namespace std;
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


    void print(){
        cout<<name<<endl<<rollno<<endl<<cgpa;
    }
};
int main(){
Student s1("Divyansh",45,8.9);
Student s2=s1;        // deep copy created because if we change value of s2 it does not change the value of s1
s2.name="Ayaan";
s2.rollno=23;
s1.print();
cout<<endl;
s2.print();


/// m2 copy constructor

Student s3(s1);
s3.name="Mukul joshi";
s3.rollno=26;
s3.print();
}