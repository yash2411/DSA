#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Ënter the value of n: ";
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
        if(i%2==0)
        {
            sum=sum+i;
            i=i+1;
        }
        i=i+1;
    }
    cout<<endl;
    cout<<sum;
}