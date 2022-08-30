#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i=2;
    while(i<n){
        if(n%2==0){
            cout<<"Number is not prime"<<endl;
        }
        i=i+1;
    }
    cout<<"Number is prime";
}