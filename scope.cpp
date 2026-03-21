#include <iostream>
using namespace std;
class Person {
    private:
    string name;
    public:
    void setName(string n);
    void display();
};
void Person::setName(string n){
    name= n;
}
void Person::display(){
    cout << "Name: " << name << endl;
}
int main(){
    Person p;
    p.setName("alice");
    p.display();
    return 0;
}
