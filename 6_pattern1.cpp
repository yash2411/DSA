#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=4){
        int j=1;
        while(j<=4){
            cout<<"* ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}