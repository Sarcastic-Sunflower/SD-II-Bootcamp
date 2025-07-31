#include <iostream>
using namespace std;

//INSTRUCTIONS: The code does not run. Fix it.
//Hint: Try to understand the code and spot the code before running it to see the error

class LibraryItem {
protected:
    string title;
    int id;

public:
    void setTitle(string t) { title = t; }
    void setID(int i) { id = i; }
};

class DVD : public LibraryItem {
public:
    void printInfo() {
        cout << "Title: " << title << endl;
        cout << "ID: " << id << endl;
    }
};

int main() {
    DVD movie;
    movie.setTitle("Inception");
    movie.setID(2001);
    movie.printInfo();
}
