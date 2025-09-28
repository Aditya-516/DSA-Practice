#include<iostream>
using namespace std ;
int main(){
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pos = 2 ;
    for(int val:arr){
        cout<<val<<" ";
    }
    for(int i=pos;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
} 