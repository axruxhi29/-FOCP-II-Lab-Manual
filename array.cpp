#include<iostream>
using namespace std;
int main(){
    int arr[5]= {37,48,90,24,100};
    for (int i=0; i<=4; i++){
        for(int j=i+1; j<=4;j++){
            if (arr[i]<arr[j]){
                arr[i]=arr[j];
                
            }
        }
    }
}