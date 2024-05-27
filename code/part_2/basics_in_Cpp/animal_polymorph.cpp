#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <random>

using namespace std;

class Animal {
public:
    Animal() {}
    virtual void make_noise() const = 0;
};

class Cat;

class Bird : public Animal {
public:
    void make_noise() const override {
        cout << "TWEET" << endl;
    }

    void operator+(const Bird &bird_a) {
        cout << "SKRR SKRR" << endl;
    }
    void operator+(const Cat &cat_a) {
        cout << "SKRR MEOW" << endl;
    }
};

class Cat : public Animal {
public:
    void make_noise() const override {
        cout << "MEOW" << endl;
    }
    
    void operator+(const Cat &cat_a) {
        cout << "MEOW MEOW" << endl;
    }
    void operator+(const Bird &bird_a) {
        cout << "MEOW SKRR" << endl;
    }
};

auto main() -> int {
    vector<shared_ptr<Animal>> vec;

    // Zufallsgenerator initialisieren
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 1); // 0 für Cat, 1 für Bird

    for (int i = 0; i < 9; i++) {
        if (dis(gen) == 0) {
            vec.push_back(make_shared<Cat>());
        } else {
            vec.push_back(make_shared<Bird>());
        }
    }

    // Cat cat, cat2;
    // Bird bird, bird2;

    // cat + cat2;  
    // bird + bird2; 
    // bird + cat;
    // cat + bird;

    for(const auto& animal : vec){
        animal->make_noise(); 
    }

    return 0;
}
