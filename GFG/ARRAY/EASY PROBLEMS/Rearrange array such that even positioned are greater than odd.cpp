#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
void Raerrange(vector<int> &arr) {
    int n =arr.size();
    for(int i=1;i<n;i++){
        if((i+1)%2==0){
            if(arr[i]<arr[i-1]){
                swap(arr[i],arr[i-1]);
            }
        }
        else{
            if(arr[i]>arr[i-1]){
                swap(arr[i],arr[i-1]);
            }
        }
    }
}
int main(){
    vector<int> arr={1, 2, 2, 1};
    cout<<"Array Before : ";
    for(int x:arr){
        cout<<x<<" ";
    }
    Raerrange(arr);
    cout<<"Array After : ";
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0 ;
}