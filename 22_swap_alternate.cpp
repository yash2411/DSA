#include<iostream>
using namespace std;

int swap_alternate(int arr[], int size){
    for(int i=0; i<size; i++){
        if(i<size-1){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        i++;
        }
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    swap_alternate(arr, 5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}