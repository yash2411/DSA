#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=0;
        while(j<i){
            cout<<i-j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}