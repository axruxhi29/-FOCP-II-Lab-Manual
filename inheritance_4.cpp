#include<iostream>
using namespace std;
class Base{
    public:
    Base(int x){
        cout<<"Base constructor called with value: "<<x<<endl;
    }
};
class Derived : public Base{
    public:
    Derived(int a, int b) : Base (a){
        cout<< " derived contrusctor called with value: " << b << endl;
    }
};
int main(){
    Derived d(10,20);
    return 0;
}