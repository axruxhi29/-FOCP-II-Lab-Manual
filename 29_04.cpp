#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    try{
        if (b==0){
            throw "Division by zero is not allowed!";
        }
 cout<<"Result="<<(a/b) <<endl;
 }
 catch (const char*msg){
    cout<<"exception caught: " << msg <<endl;
 }
 cout<<"{program continues normally..." <<endl;
 return 0;
}