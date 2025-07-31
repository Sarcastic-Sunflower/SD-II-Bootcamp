#include <iostream>
using namespace std;

//INSTRUCTIONS: The code does not run. Fix it.

//food for thought: What would happen if Car did not implement move()?

class Vehicle {
public:
    void move() = 0;
};

class Car : public Vehicle {
public:
    void move() {
        cout << "Car is driving." << endl;
    }
};

int main() {
    Vehicle* v = new Car();
    v->move();
    delete v;
}
