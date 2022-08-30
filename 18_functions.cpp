#include<iostream>
using namespace std;

int sum(int &a, int b){
    cout<<&a<<endl;
    return a+b;
}

 int main(){
    int a,b;
    cin>>a>>b;
    cout<<&a<<endl;
    cout<<sum(*a,b);
    return 0;
 }   

