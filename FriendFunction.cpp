// Friend Function C++ mein ek aisa normal function hota hai jo class ka member nahi hota, lekin usko class ke private aur protected members access karne ki permission hoti hai.

#include <iostream>
using namespace std;

class Student {
private:
    int marks = 90;

public:
    friend void display(Student s);
};

// Friend function
void display(Student s) {
    cout << "Marks: " << s.marks;
}

int main() {

    Student s;

    display(s);

    return 0;
}

// exapmple 2

#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v) {
        value = v;
    }

    friend Number operator+(Number n1, Number n2);

    void display() {
        cout << value;
    }
};

Number operator+(Number n1, Number n2) {

    Number temp(0);

    temp.value = n1.value + n2.value;

    return temp;
}

int main() {

    Number n1(10);
    Number n2(20);

    Number n3 = n1 + n2;

    n3.display();

    return 0;
}