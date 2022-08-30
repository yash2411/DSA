#include<iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    if(a>b){
        cout<<"a is greater than b";
    }
    else if(a==b){
        cout<<"a is equal to b";
    }
    else{
        cout<<"b is greater than a";
    }
    
}