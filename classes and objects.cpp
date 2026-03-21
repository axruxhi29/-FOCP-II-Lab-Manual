#include<iostream>
using namespace std;
class Student {
    private:
    int marks;
    protected:
    int rollNumber;
    public:
    string name;
    void setData(int m, int r){
        marks = m;
        rollNumber = r;
    }
    int getMarks(){
        return marks;
    }
    void showRollNumber(){
        cout << "Roll Number: " <<rollNumber << endl;
    }
};
int main(){
    Student s1;
    s1.name = "Alice";
    s1.setData(90,101);
    cout<<"Name:" <<s1.name<<endl;
    cout<<"Marks:"<<s1.getMarks()<<endl;
    s1.showRollNumber();
    return 0;
}