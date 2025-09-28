#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
 void Rotate_duplicate(vector<int> &arr){
    int n = arr.size()-1;
    int last_digit ;
    last_digit=arr[n];
    for(int i=0;i<n;i++){
        arr[n-i] = arr[n-1-i];
    }
    arr[0]=last_digit ;
}
int main(){
    vector<int> arr = {1,1,2,2,3,3,4};
    Rotate_duplicate(arr);
    for(int k=0;k<arr.size();k++){
        cout<<arr[k]<<" ";
    }
}