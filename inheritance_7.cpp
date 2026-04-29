#include <iostream>
using namespace std;
class A {
    public:
    void show() {cout << "A\n"; }
};
class B {
    public:
    void show() {cout << "B\n";}
};
class C : public A, public B {};
int main(){
    C obj;
    obj.show();
    return 0;
}