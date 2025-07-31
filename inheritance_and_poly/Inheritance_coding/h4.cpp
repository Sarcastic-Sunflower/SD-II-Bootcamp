#include <iostream>
using namespace std;

//INSTRUCTIONS:
// Complete the design for a simple system for managing people in a university.
// Ensure you use inheritance
// There are two main types of people: Students and Lecturers
// All people have a name and email

// Students have a studentNumber and a method attendClass()
// Lecturers have an employeeID and a method called giveLecture()

class Person{
private: // something is fishy here
    string email;
    // HINT: something is missing here

public:
    // HINT: Add appropriate code


};

class Student{
private:
    // HINT: add some code here


public:
    //HINT: add some code here



};

class Lecturer{
//HINT add some code here



};


//ensure the main function runs (use it to guide you)


int main() {
    Student s;
    s.setDetails("Njabulo", "Jojo@uni.ac.za");
    s.setStudentNumber(202345);
    s.attendClass();

    Lecturer l;
    l.setDetails("Dr. Percy", "Percy@uni.ac.za");
    l.setEmployeeID(1207);
    l.giveLecture();
}



return 0;
}
