#include<iostream>
using namespace std ;
int main(){
    int arr[]={112,824,536,748,960,272,484,696,7108,120};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = INT_MIN ;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>max){
            max = arr[i];
            cout<<arr[i]<<" ";
        }
    }
    return 0 ;
}