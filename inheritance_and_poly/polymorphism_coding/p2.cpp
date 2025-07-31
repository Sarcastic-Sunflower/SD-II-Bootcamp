#include <iostream>
using namespace std;

//INSTRUCTIONS: observe the output. Fix line 20 so that the correct output is shown


class Payment {
public:
    virtual void process() {
        cout << "Processing generic payment." << endl;
    }
};

class CardPayment : public Payment {
public:
    void process() override {
        cout << "Processing card payment." << endl;
    }
};

void handlePayment(Payment p) {
    p.process();  //What gets called here?
}

int main() {
    CardPayment cp;
    handlePayment(cp);
}
