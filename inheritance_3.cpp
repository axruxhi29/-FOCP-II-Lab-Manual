#include<iostream>
using namespace std;
class Base{
    public:
    Base(int x){
        cout<<"Base class paramterized constructor:" <<x<<endl;
        
    }
};
class Derived : public Base{
    public:
    Derived (int a) : Base(a){
        cout << "Derived class constructor: " << a<< endl;
    
    }
};
int main(){
    Derived d(10);
    return 0;
}