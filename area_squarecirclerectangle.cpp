#include<iostream>
using namespace std;
int area(int a)
{
    return a*a;
}
int area(int l, int b)
{
    return l*b;
}
double area(double r)
{
    return (3.14*r*r);
}
int main()
{
    int s; int l1; int l2; double r1;
    cout<<"enter side of square" <<endl;
    cin>>s;
    cout<<"enter length and breafth of rectangle" <<endl;
    cin>>l1;
    cin>>l2;
    cout<<"enter radius of circle" <<endl;
    cin>>r1;
    cout<<"the area of square is "<<area(s)<<endl;
    cout<<"the area of rectangle is "<<area(l1,l2)<<endl;
    cout<<"the area of circle is "<<area(r1)<<endl;
}