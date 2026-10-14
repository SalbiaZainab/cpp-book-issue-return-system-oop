#include <iostream>
using namespace std;

class Book {
private:
    string title;
    bool isIssued;

public:
    Book(string t) {
        title = t;
        isIssued = false;
    }

    void issue() {
        if (!isIssued) {
            isIssued = true;
            cout << title << " has been issued." << endl;
        } else {
            cout << title << " is already issued!" << endl;
        }
    }

    void returnBook() {
        if (isIssued) {
            isIssued = false;
            cout << title << " has been returned." << endl;
        } else {
            cout << title << " was not issued." << endl;
        }
    }

    void displayStatus() {
        cout << "Book: " << title << " | Status: " << (isIssued ? "Issued" : "Available") << endl;
    }
};

int main() {
    Book b("Object-Oriented Programming in C++");
    b.issue();
    b.displayStatus();
    b.returnBook();
}

