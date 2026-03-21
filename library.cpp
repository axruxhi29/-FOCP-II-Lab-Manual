#include <iostream>
using namespace std;
class Library {
protected:
    int bookID;
    string title;
    string author;
public:
    Library(int id, string t, string a) {
        bookID = id;
        title = t;
        author = a;
    }
    virtual void display() {
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};
class IssueBook : public Library {
private:
    string issuedTo;
public:
    IssueBook(int id, string t, string a, string name)
        : Library(id, t, a) {
        issuedTo = name;
    }
    void display() override {
        Library::display();
        cout << "Issued To: " << issuedTo << endl;
    }
};
int main() {
    int id;
    string title, author, name;
    cout << "Enter Book ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter Book Title: ";
    getline(cin, title);
    cout << "Enter Author Name: ";
    getline(cin, author);
    cout << "Enter Issued To: ";
    getline(cin, name);
    IssueBook b1(id, title, author, name);
    cout << "\n--- Book Details ---" << endl;
    b1.display();
    return 0;
}