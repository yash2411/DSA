#include<iostream>
using namespace std;
int main() {
    int i=0, j=1, sum=0;
    cout<<i<<" "<<j<<" ";
    for(int k=0;k<9;k++){
        sum = i+j;
        cout<<sum<<" ";
        i=j;
        j=sum;
    }
}