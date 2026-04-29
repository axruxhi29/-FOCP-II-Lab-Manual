#includee<iostream>
using namespace std;
c;ass Student{
    public:
    string name;
    int age;
    Student(){
        name = "Unknown";
        age=0;
    }
    Student (String n, int a){
        name = n;
        age = a;
    }
    void display(){
        cout<< "Name: " << name << ",Age: " << age << endl;
    }
};
int main(){
    Student s1[2];
    cout<<"Default Constructor Values:\n";
    for(int i=0l i<2;i++){
        s1[i].display();
    }
    cout << endl;
    Student s2[2] = {
        Student ("Aman",20),
    Student ("Riya", 21)
 };
 cout<< "Parameterized Constructor Values:\n";
 for (int i=0; i<2; i++){
    s2[i].display();
}