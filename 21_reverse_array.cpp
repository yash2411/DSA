#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
    for(int i=0; i<(n/2); i++){
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
}

int main(){
    int arr[4]={1,2,3,4};
    reverseArray(arr, 4);
    for(int i=0; i<4; i++){
        cout<<arr[i]<<" ";
    }
}