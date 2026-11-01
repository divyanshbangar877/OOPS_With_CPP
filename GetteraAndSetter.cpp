
#include<iostream>
using namespace std;
class Student{
 private:
 string name;
 int rollno;
 float avg;
 
public:
 void getter(){
    cout<<this->name<<endl;
    cout<<this->rollno<<endl;
    cout<<this->avg<<endl;
 }

 Student(string name,int rollno,int avg){
    this->name=name;
    this->rollno=rollno;
    this->avg=avg;
}
 void setter(string name,int rollno, float avg){
    this->name=name;
    this->rollno=rollno;
    this->avg=avg;
 }
};

int main(){

    Student *s1=new Student("Naman sharam",11,93); // or Student s1("naman sharma",11,93) both way workds
// s1.setter("Naman sharma",11,9.4);
s1->getter();


// so we can set the value using setter function and parameterized constructor declared in public 
    return 0;
}