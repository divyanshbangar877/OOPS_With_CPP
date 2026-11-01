#include<iostream>
using namespace std;

//desctuor dynamic memory allocation ko free krta hai jo new keyword se banti hai like cgpa rollno using delete keyword static wale automatic hojaate hai delte
class Student{
public:
string name;
float *cgpa;
int *rollno;
Student(string name,float cgpa,int rollnos){
    this->name=name;

    this->cgpa=new float;
    *(this->cgpa)=cgpa;

    rollno=new int;
    *rollno=rollnos;

}
~ Student(){
    delete cgpa;
    delete rollno;
}

};

int main(){
Student *s1=new Student("raman",32.3,3);

delete s1;
    return 0;
}