#include<iostream>
using namespace std ;
int main(){
    int arr[]={12,24,36,48,60,72,84,96,108,120};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i+=2){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}