#include<iostream>
using namespace std;

bool linearsearch(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[4]={8, 10, 56, 9};
    bool val = linearsearch(arr, 4, 6);
    cout<<val;
}