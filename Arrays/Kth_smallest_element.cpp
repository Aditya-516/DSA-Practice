#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int KthSortedArray(int k,vector<int> &arr){
    sort(arr.begin(),arr.end());
    return arr[k-1];
}
int main(){
    int k ;
    vector<int> arr = {45,96,32,15,68,754,15,258,654,852};
    cout<<"Enter the index : ";
    cin>>k ;
    cout<<"The "<<k<<"th smallect element is : "<<KthSortedArray(k,arr);
    return 0 ;
}