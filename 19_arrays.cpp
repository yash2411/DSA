#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printArray(char arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int getMax(int arr[], int size){
    int max=INT_MIN;
    for(int i=0;i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        i++;
    }
    return max;
}

int main(){
    // int num[7]={4, 10,16};
    // printArray(num, 3);
    // cout<<sizeof(num)/sizeof(int);
    char ch[5]={'a', 'b', 'c'};
    // for(int i=0; i<5; i++){
    //     cout<<ch[i];
    // }
    // printArray(ch,5);
    // cout<<*num<<" ";
    // cout<<&num[0];

    int n,size;
    cin>>size;
    int arr[5];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
     cout<<getMax(arr, size);
}