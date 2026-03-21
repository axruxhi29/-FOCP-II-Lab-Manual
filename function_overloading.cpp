#include<iostream>
using namespace std;
class Math{
    public:
    int add(int a, int b){
        return a + b;
    }
    int add(int a, int b, int c){
        return a+b+c;
    }
    double add(double a, double b){
        return a+b;
    }
};
int main(){
    Math obj;
    cout << "Sum of 2 and 3: " << obj.add(2,3) << endl;
    cout << "Sum of 2, 3 and 4: " <<obj.add(2,3,4) << endl;
    cout << "Sum of 2.5 and 3.5: " <<obj.add(2.5,3.5) << endl;
  return 0;
}