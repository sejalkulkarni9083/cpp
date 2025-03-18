#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating food." << endl;
    }
};

class Mammal {
public:
    void walk() {
        cout << "Walking on land." << endl;
    }
};

class Dog : public Animal, public Mammal {
public:
    void bark() {
        cout << "Barking!" << endl;
    }
};

int main() {
    Dog dog;
    dog.eat();   // Inherited from Animal
    dog.walk();  // Inherited from Mammal
    dog.bark();  // Defined in Dog
    return 0;
}