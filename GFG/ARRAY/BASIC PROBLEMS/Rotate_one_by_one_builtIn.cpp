#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
 void Rotate_duplicate(vector<int> &arr,int d){
    int n = arr.size();
    d = d%n ;
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());
}
int main(){
    vector<int> arr = {1,1,2,2,3,3,4};
    Rotate_duplicate(arr,4);
    for(int k=0;k<arr.size();k++){
        cout<<arr[k]<<" ";
    }
}