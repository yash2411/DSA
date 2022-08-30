#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number: ";
    cin>>a>>b;
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(~b)<<endl;
    cout<<(a^b)<<endl;
    cout<<(17>>1)<<endl;
    cout<<(17<<1)<<endl;
    int j=++a;
    cout<<j;
}