#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
void Rotate(vector<int> &arr){
    int n =arr.size();
    int i=0;
    int j=n-1;
    while(i!=j){
        swap(arr[i],arr[n-1]);
        i++;
    }
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9};
    Rotate(arr);
    for(auto x : arr){
        cout<<x<<" ";
    }
    return 0 ;
}