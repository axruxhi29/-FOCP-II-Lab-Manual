#include<iostream>
using namespace std;
class Person {
    private:
    string name;
    int age;
    public:
    void setData(string n, int a){
        name = n;
        age = a;
    }
    void display(){
        cout << "Name: " << name << ", Age:" <<age << endl;
    }
};
Person p;
int main(){
    p.setData("Alice", 19);
    p.display();
    return 0;
}

    
        