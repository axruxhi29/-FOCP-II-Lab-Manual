#include <iostream>
using namespace std;
int main(){
    float mark1, mark2, mark3, average;
    cout <<"Enter marks of first student: ";
    cin >> mark1;
    cout << "Enter marks of second student: ";
    cin >> mark2;
    cout << "Enter marks of third student: ";
    cin >> mark3;
    average = (mark1 + mark2 + mark3) / 3;
    cout << "the average marks of the class is: " << average << endl;
    return 0;
}