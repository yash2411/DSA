#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i=1;
    int j=1;
    while(i<=n){
        int k=1;
        while(k<=n){
            cout<<j<<" ";
            j=j+1;
            k=k+1;
        }
        cout<<endl;
        i=i+1;
    }
}