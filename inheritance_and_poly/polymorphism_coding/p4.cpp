#include <iostream>
#include <vector>
using namespace std;

//INSTRUCTIONS:
//You are asked to develop a notification system for a company.
//Here is code below, however the developer did not complete it/ made errors

//The system must support different types of notifications:
// Email, SMS, and PushNotification.
// All notification types must support a method called send()
//to deliver the message.

//Hint: The base class must have a constructor that takes a string for the message

class Notification{
string message;

public:
    Notification(){}; // make this constructor paramatized to store the input in the "message" string
    void send() {cout << "Sending a message";} // something here is fishy

};

class Email{
public:
Email(string m): Notification(m){};

};

class SMS{};

class PushNotification{};







//The main function must be able to run once you're done
//DO NOT CHANGE THE INTERFACE OF THE MAIN FUNCTION
int main() {
    vector<Notification*> queue;

    // Create different notification types
    queue.push_back(new Email("Welcome to our service!"));
    queue.push_back(new SMS("Your OTP is 1234"));
    queue.push_back(new PushNotification("You have a new message"));

    // Send all notifications
    for (int i = 0; i < queue.size(); ++i) {
        queue[i]->send();
    }

    // Clean up memory
    for (int i = 0; i < queue.size(); ++i) {
        delete queue[i];
    }

    return 0;
}
