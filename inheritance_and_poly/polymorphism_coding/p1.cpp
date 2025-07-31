#include <iostream>
using namespace std;

//INSTRUCTIONS: Follow the command on line 22 then return here.
//after following the command on line 4, fix the code (using polymorphism)
// such that Printer's function is called (DO NOT MODIFY MAIN)

class OfficeDevice {
public:
    void performTask() {
        cout << "Office device is performing a generic task." << endl;
    }
};

class Printer : public OfficeDevice {
public:
    void performTask() {
        cout << "Printer is printing a document." << endl;
    }
};

int main() {
    OfficeDevice* dev = new Printer();
    dev->performTask();  //  What will this print?
}
