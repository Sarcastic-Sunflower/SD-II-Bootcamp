#include <iostream>
using namespace std;

//INSTRUCTIONS: The code is missing inheritance relationship.
                // Rewrite Triangle to inherit from shape

class Shape {
public:
    void draw() {
        cout << "Drawing a generic shape." << endl;
    }
};

class Triangle {
public:
    void draw() {
        cout << "Drawing a triangle." << endl;
    }
};

int main() {
    Triangle t;
    t.draw();
}
