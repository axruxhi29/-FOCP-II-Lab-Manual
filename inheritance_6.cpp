#include<iostream>
using namespace std;
class Base{
    public:
    int x;
    Base(int a){
        x=a;
    }
    void show(){
        cout<< "Value of x = "<<x<<endl;
    }
};
class Derived : public Base{
    public:
    Derived(int a) : Base(a){

    }
};
int main(){
    Derived d(60);
    d.show();
    return 0;
}