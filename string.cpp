#include<iostream>
using namespace std;
#include<string>
int main(){
    string st="Aarushi";
    cout<<st.size()<< " " <<st.length() <<endl;
    cout<<st[0]<<st.at(1)<<endl;
    cout<<st.front()<<st.back()<<endl;
    st.append(":");
    st+="Kapoor";
    cout<<st;
    st.insert(6, "K");
    cout<<st;
    st.erase(6,3);
    st.clear();
    st="Aarushi Kapoor";
    cout<<st.find("Aarushi")<<endl;
    cout<<st.rfind("a")<<endl;
    string sub=st.substr(0,6);
    string a="Apple";
    string b="Mango";
    if (a==b) cout<<"Equal";
    if (a!=b) cout<<"Not Equal";
    if (a<b) cout<< "Apple comes before mango";
}