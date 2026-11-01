// using access modifier is method 1 to implement abstraction using private protected public
// hiding unnecessary details showing imp info

//m2 using abstract class

// ye sirf ek blueprint hoti hai jo inheritance ke liye use hoti hai ,inka koi object nhi banta , toh other class property inherit kr skti hai 
//C++ mein abstract class banane ke liye hum Pure Virtual Function use karte hain.


#include <iostream>
using namespace std;

class Animal {
public:

    // Pure Virtual Function
    virtual void sound() = 0;
};

class Dog : public Animal {
public:

    void sound() {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:

    void sound() {
        cout << "Cat meows" << endl;
    }
};

int main() {

    // Animal a;  // Error: Abstract class ka object nahi bana sakte

    Dog d;
    Cat c;

    d.sound();
    c.sound();

    return 0;
}