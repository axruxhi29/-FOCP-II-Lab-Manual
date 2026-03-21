#include <iostream>
using namespace std;
int x = 100;
int main(){
    int x=50;
    cout << "local x = " << x << endl;
    cout << "Global x = " << ::x <<endl; //used to access global x
    return 0;
}