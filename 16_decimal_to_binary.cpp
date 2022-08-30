#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    while(n!=0){
        if(n%2==0){
            cout<<0;
        }
        else{
            cout<<1;
        }
        n=n/2;
    }
}
// Bits in output will display from right to left