#include<iostream>
using namespace std;
class Demo {
    private:
    static int x;
    public: friend void show();
    };
    int Demo::x = 100;
    void show(){
        cout<< "value of x = " << Demo::x;
    }
    int main(){
        show();
        return 0;
    }
    