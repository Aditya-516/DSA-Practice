#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
void Rotate(vector<int> &arr){
    int n = arr.size();
    int FirstElement = arr[0];
    for(int i=0;i<arr.size();i++){
        arr[i]=arr[i+1];
    }
    arr[n-1] = FirstElement ; 
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9};
    Rotate(arr);
    for(auto x : arr){
        cout<<x<<" ";
    }
    return 0 ;
}