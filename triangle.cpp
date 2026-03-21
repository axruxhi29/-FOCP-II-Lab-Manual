#include<iostream>
using namespace std;
class Triangle{
    public:
    double base, height;
    void input(){
        cout <<"Enter base and height:" ;
        cin >> base >> height; 
    }
    double area(){
        return 0.5 * base * height;
    }
};
int main(){
    Triangle t;
    t.input();
    cout<< "Area of triangle: " << t.area() << endl;
    return 0;
}