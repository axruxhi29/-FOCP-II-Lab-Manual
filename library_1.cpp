#include <iostream>
using namespace std;
class Book {
protected:
    int bookID;
    string title;
public:
    void getData() {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cin.ignore();
        cout << "Enter Book Title: ";
        getline(cin, title);
    }
    virtual void display() {
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << title << endl;
    }
};
class Library : public Book {
private:
    string issuedTo;
public:
    void issueBook() {
        cout << "Enter name of person issuing book: ";
        getline(cin, issuedTo);
    }
    void display() override {
        Book::display();
        cout << "Issued To: " << issuedTo << endl;
    }
};
int main() {
    Library obj;
    obj.getData();
    obj.issueBook();
    cout << "Book Details:";
    obj.display();
    return 0;
}