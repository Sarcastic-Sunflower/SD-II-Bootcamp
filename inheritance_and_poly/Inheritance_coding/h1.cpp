#include <iostream>

using namespace std;

//INSTRUCTIONS: Spot the error and fix it
//Hint: First understand the code, then run it to see the error

//However, do understand that this course requires you to spot the error without running the code (since your compiler is paper in a test/exam)

class Vehicle {
    protected:
    int wheels;
public:
    Vehicle(int w) { wheels = w; }
    void display() {
        cout << "Wheels: " << wheels << endl;
    }
};

class Car : public Vehicle {
    int passengers;
public:
    Car(int w, int p) : Vehicle(w) { passengers = p; }
};

int main() {
    Car c(4, 5);
    c.display();
    cout << "Hello world" << endl;
}
