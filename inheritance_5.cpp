#include<iostream>
using namespace std;
class Base{
    public:
    void show(int x){
        cout<<"Value received in Base function: " << x << endl;
    }
};
class Derived : public Base{
};
int main(){
    Derived d;
    d.show(25);
    return 0;
};