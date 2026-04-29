#include<iostream>
using namespace std;
class Student{
    private:
    int age;
    public:
    void setAge(int age){
        this->age = age; 
    }
    void display(){
        cout << "Age: " << this->age<<endl;
    }


}