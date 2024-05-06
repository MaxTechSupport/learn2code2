#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    Animal() {}
};

class Cat;

class Bird : public Animal {
public:
    void operator+(const Bird &bird_a) {
        cout << "SKRR SKRR" << endl;
    }
    void operator+(const Cat &cat_a) {
        cout << "SKRR MEOW" << endl;
    }
};

class Cat : public Animal {
public:
    void operator+(const Cat &cat_a) {
        cout << "MEOW MEOW" << endl;
    }
    void operator+(const Bird &bird_a) {
        cout << "MEOW SKRR" << endl;
    }
};

int main() {
    Cat cat, cat2;  
    Bird bird, bird2; 

    cat + cat2;  
    bird + bird2; 
    bird + cat;
    cat + bird;
}
