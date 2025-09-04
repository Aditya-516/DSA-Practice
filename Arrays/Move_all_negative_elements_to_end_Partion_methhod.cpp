//  Using Quick sort partition method  but this also change the order of positive and negative elements 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void SortPositiveNegative(vector<int> &arr,int n){
    int j=0 ;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main(){
    vector<int> arr={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    SortPositiveNegative(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}