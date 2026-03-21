#include<iostream>
using namespace std;
void swap(int * a, int * b){
    cout<<"a and b before swap in function" <<*a<<*b<<endl;
    int temp = *a;
    *a=*b;
    *b=temp;
    cout<<"a and n after swap function"<< *a<<*b<<endl;

}
main(){
    int x,y;
    cout<<"provide 2 integers"<<endl;
    cin>>x>>y;
    cout<<"x and y in main before function call" <<x<<y<<endl;
    swap (&x, &y);
    cout<<"x and y in main after function call" <<x<<y<<endl;
    return 0;
}