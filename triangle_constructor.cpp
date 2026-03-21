#include <iostream>
using namespace std;
class Triangle {
    double base, height, area;  
public:
    Triangle(double b, double h) {
        base = b;
        height = h;
        area = 0.5 * base * height;  
    }
    void displayArea() {
        cout << "Area of triangle: " << area << endl;
    }
};
int main() {
    double b, h;
    cout << "Enter base and height of the triangle: ";
    cin >> b >> h;
    Triangle t(b, h);  
    t.displayArea();   
    return 0;
}